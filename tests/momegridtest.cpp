/**********************************************************************
  MOMEGridTest - Unit tests for the MOMEGrid 2D MAP-Elites grid

  Copyright (C) 2026 Samad Hajinazar

  This source code is released under the New BSD License, (the "License").

  Unless required by applicable law or agreed to in writing, software
  distributed under the License is distributed on an "AS IS" BASIS,
  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  See the License for the specific language governing permissions and
  limitations under the License.
 ***********************************************************************/

#include <search/momegrid.h>
#include <search/structure.h>

#include <QtTest>

#include <limits>

using namespace Search;

/**
 * Focused unit tests for the MOMEGrid data structure (Step 4A).
 *
 * Scope:
 *   - Grid construction and dimension queries
 *   - Cell existence and initial emptiness
 *   - Valid and invalid coordinate access
 *   - Cell identity / independence
 *
 * Also covers (Step 4B):
 *   - Descriptor → (x,y) mapping via descriptorToCell()
 *
 * Also covers (Step 4C):
 *   - MOMECell's Pareto-set wiring, using real Structure* payloads.
 *   The underlying dominance/capacity/eviction logic is exercised in
 *   isolation (with plain int payloads) in paretosettest.cpp; the tests
 *   here only check that MOMECell forwards to it correctly.
 *
 * Also covers (Step 4D):
 *   - insertCandidate(): descriptor mapping composed with per-cell Pareto
 *   insertion, including that candidates in different cells never compete.
 *
 * Out of scope (covered in later steps):
 *   - SearchBase / QueueManager integration (structure completes ->
 *   descriptors available -> insertCandidate() gets called)
 *   - Parent selection reading from the archive
 */
class MOMEGridTest : public QObject
{
  Q_OBJECT

private slots:
  void initTestCase()  {}
  void cleanupTestCase() {}
  void init()    {}
  void cleanup() {}

  // Tests
  void constructionAndDimensions();
  void allCellsExistAndAreEmpty();
  void validCellAccess();
  void invalidCoordinatesReturnNullptr();
  void differentCellsAreIndependent();

  // Step 4B: descriptor -> cell mapping
  void descriptorToCellNormalMapping();
  void descriptorToCellBoundaries();
  void descriptorToCellOutOfRange();
  void descriptorToCellInvalidNumbers();
  void descriptorToCellTwoDimensional();
  void descriptorToCellInvalidBounds();

  // Step 4C: MOMECell Pareto-set wiring
  void cellInsertAcceptsAndRejects();
  void cellCapacityMatchesFixedConstant();
  void cellStructuresReflectsCurrentMembers();

  // Step 4D: candidate insertion into the MOME archive
  void insertCandidateMapsAndInserts();
  void insertCandidateFailsOnInvalidDescriptors();
  void insertCandidateFailsOnInvalidObjectives();
  void insertCandidateRejectsDominatedWithinSameCell();
  void insertCandidateOnlyCompetesWithinSameCell();
  void insertCandidateRespectsCellCapacity();
};

// ---------------------------------------------------------------------------

void MOMEGridTest::constructionAndDimensions()
{
  MOMEGrid grid(10, 10);

  QCOMPARE(grid.xBins(), 10);
  QCOMPARE(grid.yBins(), 10);
}

void MOMEGridTest::allCellsExistAndAreEmpty()
{
  const int X = 10, Y = 10;
  MOMEGrid grid(X, Y);

  for (int x = 0; x < X; ++x) {
    for (int y = 0; y < Y; ++y) {
      const MOMECell* c = grid.cell(x, y);
      QVERIFY2(c != nullptr,
               qPrintable(QString("cell(%1,%2) must not be null").arg(x).arg(y)));
      QVERIFY2(c->isEmpty(),
               qPrintable(QString("cell(%1,%2) must be empty initially").arg(x).arg(y)));
    }
  }
}

void MOMEGridTest::validCellAccess()
{
  MOMEGrid grid(10, 10);

  // Corner and interior cells must be accessible (non-null).
  QVERIFY(grid.cell(0, 0) != nullptr);
  QVERIFY(grid.cell(5, 3) != nullptr);
  QVERIFY(grid.cell(9, 9) != nullptr);

  // isValidCoord must agree with cell() for the same coordinates.
  QVERIFY(grid.isValidCoord(0, 0));
  QVERIFY(grid.isValidCoord(5, 3));
  QVERIFY(grid.isValidCoord(9, 9));
}

void MOMEGridTest::invalidCoordinatesReturnNullptr()
{
  MOMEGrid grid(10, 10);

  // Each invalid coordinate must return nullptr and isValidCoord must
  // return false.
  struct Case { int x; int y; const char* label; };
  const Case cases[] = {
    { -1,  0, "(-1, 0)"  },
    {  0, -1, "(0, -1)"  },
    { 10,  0, "(10, 0)"  },
    {  0, 10, "(0, 10)"  },
  };

  for (const auto& tc : cases) {
    QVERIFY2(grid.cell(tc.x, tc.y) == nullptr,
             qPrintable(QString("cell%1 must return nullptr").arg(tc.label)));
    QVERIFY2(!grid.isValidCoord(tc.x, tc.y),
             qPrintable(QString("isValidCoord%1 must return false").arg(tc.label)));
  }
}

void MOMEGridTest::differentCellsAreIndependent()
{
  MOMEGrid grid(10, 10);

  // Different (x,y) pairs must return distinct cell pointers.
  const MOMECell* c00 = grid.cell(0, 0);
  const MOMECell* c53 = grid.cell(5, 3);
  const MOMECell* c99 = grid.cell(9, 9);

  QVERIFY(c00 != nullptr);
  QVERIFY(c53 != nullptr);
  QVERIFY(c99 != nullptr);

  QVERIFY(c00 != c53);
  QVERIFY(c00 != c99);
  QVERIFY(c53 != c99);

  // Non-const accessor on the same grid must return the same addresses.
  QCOMPARE(grid.cell(0, 0), const_cast<MOMECell*>(c00));
  QCOMPARE(grid.cell(5, 3), const_cast<MOMECell*>(c53));
  QCOMPARE(grid.cell(9, 9), const_cast<MOMECell*>(c99));
}

// ---------------------------------------------------------------------------
// Step 4B: descriptor -> cell mapping
// ---------------------------------------------------------------------------

void MOMEGridTest::descriptorToCellNormalMapping()
{
  MOMEGrid grid(10, 10);

  // Descriptor 1 is held at a fixed, valid value (bin 5) so these cases
  // isolate descriptor 0's mapping onto the x-axis.
  const double min0 = 0.0, max0 = 100.0;
  const double d1 = 0.0, min1 = -10.0, max1 = 10.0;

  struct Case { double d0; int expectedX; };
  const Case cases[] = {
    { 0.0,  0 },
    { 10.0, 1 },
    { 37.0, 3 },
    { 50.0, 5 },
    { 99.0, 9 },
    { 100.0, 9 },
  };

  for (const auto& tc : cases) {
    int x = -1, y = -1;
    QVERIFY2(grid.descriptorToCell(tc.d0, min0, max0, d1, min1, max1, x, y),
             qPrintable(QString("d0=%1 should map successfully").arg(tc.d0)));
    QCOMPARE(x, tc.expectedX);
    QCOMPARE(y, 5);
  }
}

void MOMEGridTest::descriptorToCellBoundaries()
{
  MOMEGrid grid(10, 10);
  int x = -1, y = -1;

  // value == min -> bin 0
  QVERIFY(grid.descriptorToCell(0.0, 0.0, 100.0, -10.0, -10.0, 10.0, x, y));
  QCOMPARE(x, 0);
  QCOMPARE(y, 0);

  // value == max -> bin (numBins - 1)
  QVERIFY(grid.descriptorToCell(100.0, 0.0, 100.0, 10.0, -10.0, 10.0, x, y));
  QCOMPARE(x, 9);
  QCOMPARE(y, 9);
}

void MOMEGridTest::descriptorToCellOutOfRange()
{
  MOMEGrid grid(10, 10);
  int x = -1, y = -1;

  // Out-of-range descriptor 0, valid descriptor 1: rejected, not clamped.
  QVERIFY(!grid.descriptorToCell(101.0, 0.0, 100.0, 0.0, -10.0, 10.0, x, y));
  QVERIFY(!grid.descriptorToCell(-1.0, 0.0, 100.0, 0.0, -10.0, 10.0, x, y));

  // Valid descriptor 0, out-of-range descriptor 1: also rejected.
  QVERIFY(!grid.descriptorToCell(50.0, 0.0, 100.0, 11.0, -10.0, 10.0, x, y));
  QVERIFY(!grid.descriptorToCell(50.0, 0.0, 100.0, -11.0, -10.0, 10.0, x, y));
}

void MOMEGridTest::descriptorToCellInvalidNumbers()
{
  MOMEGrid grid(10, 10);
  int x = -1, y = -1;

  const double nan = std::numeric_limits<double>::quiet_NaN();
  const double inf = std::numeric_limits<double>::infinity();

  QVERIFY(!grid.descriptorToCell(nan, 0.0, 100.0, 0.0, -10.0, 10.0, x, y));
  QVERIFY(!grid.descriptorToCell(inf, 0.0, 100.0, 0.0, -10.0, 10.0, x, y));
  QVERIFY(!grid.descriptorToCell(-inf, 0.0, 100.0, 0.0, -10.0, 10.0, x, y));

  // NaN/Inf in the second dimension must also be rejected.
  QVERIFY(!grid.descriptorToCell(50.0, 0.0, 100.0, nan, -10.0, 10.0, x, y));
  QVERIFY(!grid.descriptorToCell(50.0, 0.0, 100.0, inf, -10.0, 10.0, x, y));
  QVERIFY(!grid.descriptorToCell(50.0, 0.0, 100.0, -inf, -10.0, 10.0, x, y));
}

void MOMEGridTest::descriptorToCellTwoDimensional()
{
  MOMEGrid grid(10, 10);
  int x = -1, y = -1;

  // descriptor 0: [0,100], descriptor 1: [-10,10], each mapped independently.
  QVERIFY(grid.descriptorToCell(50.0, 0.0, 100.0, 0.0, -10.0, 10.0, x, y));
  QCOMPARE(x, 5);
  QCOMPARE(y, 5);

  QVERIFY(grid.descriptorToCell(0.0, 0.0, 100.0, -10.0, -10.0, 10.0, x, y));
  QCOMPARE(x, 0);
  QCOMPARE(y, 0);

  QVERIFY(grid.descriptorToCell(100.0, 0.0, 100.0, 10.0, -10.0, 10.0, x, y));
  QCOMPARE(x, 9);
  QCOMPARE(y, 9);

  // Near-boundary values checked independently per axis.
  QVERIFY(grid.descriptorToCell(99.0, 0.0, 100.0, 9.0, -10.0, 10.0, x, y));
  QCOMPARE(x, 9);
  QCOMPARE(y, 9);

  // One axis out of range fails the whole mapping, even if the other is valid.
  QVERIFY(!grid.descriptorToCell(50.0, 0.0, 100.0, 11.0, -10.0, 10.0, x, y));
}

void MOMEGridTest::descriptorToCellInvalidBounds()
{
  MOMEGrid grid(10, 10);
  int x = -1, y = -1;

  // min == max on descriptor 0.
  QVERIFY(!grid.descriptorToCell(5.0, 5.0, 5.0, 0.0, -10.0, 10.0, x, y));

  // min > max on descriptor 0.
  QVERIFY(!grid.descriptorToCell(5.0, 10.0, 0.0, 0.0, -10.0, 10.0, x, y));

  // Invalid bounds on descriptor 1 (min == max, then min > max).
  QVERIFY(!grid.descriptorToCell(50.0, 0.0, 100.0, 0.0, 10.0, 10.0, x, y));
  QVERIFY(!grid.descriptorToCell(50.0, 0.0, 100.0, 0.0, 10.0, -10.0, x, y));
}

// ---------------------------------------------------------------------------
// Step 4C: MOMECell Pareto-set wiring
// ---------------------------------------------------------------------------

void MOMEGridTest::cellInsertAcceptsAndRejects()
{
  MOMECell cell;
  QVERIFY(cell.isEmpty());

  Structure* a = new Structure;
  Structure* b = new Structure;

  QVERIFY(cell.insert({ 1.0, 1.0 }, a));
  QCOMPARE(cell.size(), 1);

  // (2,2) is dominated by the already-present (1,1): rejected.
  QVERIFY(!cell.insert({ 2.0, 2.0 }, b));
  QCOMPARE(cell.size(), 1);
  QVERIFY(!cell.isEmpty());
}

void MOMEGridTest::cellCapacityMatchesFixedConstant()
{
  MOMECell cell;

  // Step 4C fixes the per-cell Pareto-set capacity at 10.
  QCOMPARE(cell.capacity(), 10);
  QCOMPARE(cell.capacity(), MOMECell::kParetoSetCapacity);
}

void MOMEGridTest::cellStructuresReflectsCurrentMembers()
{
  MOMECell cell;

  Structure* a = new Structure;
  Structure* b = new Structure;

  // Neither dominates the other: both are kept.
  QVERIFY(cell.insert({ 1.0, 2.0 }, a));
  QVERIFY(cell.insert({ 2.0, 1.0 }, b));
  QCOMPARE(cell.size(), 2);

  const QVector<Structure*> members = cell.structures();
  QCOMPARE(members.size(), 2);
  QVERIFY(members.contains(a));
  QVERIFY(members.contains(b));
}

// ---------------------------------------------------------------------------
// Step 4D: candidate insertion into the MOME archive
// ---------------------------------------------------------------------------

void MOMEGridTest::insertCandidateMapsAndInserts()
{
  MOMEGrid grid(10, 10);
  Structure* a = new Structure;

  int x = -1, y = -1;
  QVERIFY(grid.insertCandidate(50.0, 0.0, 100.0, 0.0, -10.0, 10.0,
                               { 1.0, 1.0 }, a, x, y));
  QCOMPARE(x, 5);
  QCOMPARE(y, 5);

  const MOMECell* c = grid.cell(5, 5);
  QVERIFY(c != nullptr);
  QCOMPARE(c->size(), 1);
  QVERIFY(c->structures().contains(a));
}

void MOMEGridTest::insertCandidateFailsOnInvalidDescriptors()
{
  MOMEGrid grid(10, 10);
  Structure* a = new Structure;

  int x = -1, y = -1;
  // d0 out of range: the descriptor mapping fails, so x/y are left untouched.
  QVERIFY(!grid.insertCandidate(101.0, 0.0, 100.0, 0.0, -10.0, 10.0,
                                { 1.0, 1.0 }, a, x, y));
  QCOMPARE(x, -1);
  QCOMPARE(y, -1);

  // Invalid bounds (min == max) on descriptor 1.
  QVERIFY(!grid.insertCandidate(50.0, 0.0, 100.0, 0.0, 5.0, 5.0,
                                { 1.0, 1.0 }, a, x, y));
  QCOMPARE(x, -1);
  QCOMPARE(y, -1);

  // Nothing should have been inserted anywhere in the grid.
  for (int cx = 0; cx < grid.xBins(); ++cx) {
    for (int cy = 0; cy < grid.yBins(); ++cy)
      QVERIFY(grid.cell(cx, cy)->isEmpty());
  }
}

void MOMEGridTest::insertCandidateFailsOnInvalidObjectives()
{
  MOMEGrid grid(10, 10);
  Structure* a = new Structure;

  const double nan = std::numeric_limits<double>::quiet_NaN();

  int x = -1, y = -1;
  // Descriptor mapping succeeds (x/y ARE set), but the objectives are
  // invalid, so the cell's Pareto set rejects the candidate.
  QVERIFY(!grid.insertCandidate(50.0, 0.0, 100.0, 0.0, -10.0, 10.0,
                                { nan, 1.0 }, a, x, y));
  QCOMPARE(x, 5);
  QCOMPARE(y, 5);
  QVERIFY(grid.cell(5, 5)->isEmpty());
}

void MOMEGridTest::insertCandidateRejectsDominatedWithinSameCell()
{
  MOMEGrid grid(10, 10);
  Structure* a = new Structure;
  Structure* b = new Structure;

  int xa = -1, ya = -1;
  QVERIFY(grid.insertCandidate(50.0, 0.0, 100.0, 0.0, -10.0, 10.0,
                               { 1.0, 1.0 }, a, xa, ya));

  // Slightly different descriptor values, but the same cell; objectives
  // (2,2) are dominated by the already-present (1,1): rejected.
  int xb = -1, yb = -1;
  QVERIFY(!grid.insertCandidate(51.0, 0.0, 100.0, 1.0, -10.0, 10.0,
                                { 2.0, 2.0 }, b, xb, yb));

  QCOMPARE(xb, xa);
  QCOMPARE(yb, ya);

  const MOMECell* c = grid.cell(xa, ya);
  QCOMPARE(c->size(), 1);
  QVERIFY(c->structures().contains(a));
  QVERIFY(!c->structures().contains(b));
}

void MOMEGridTest::insertCandidateOnlyCompetesWithinSameCell()
{
  MOMEGrid grid(10, 10);
  Structure* a = new Structure;
  Structure* b = new Structure;

  int xa = -1, ya = -1;
  QVERIFY(grid.insertCandidate(10.0, 0.0, 100.0, 0.0, -10.0, 10.0,
                               { 5.0, 5.0 }, a, xa, ya));

  // (1,1) would dominate (5,5) if they landed in the same cell, but this
  // candidate maps to a different cell (d0=90 vs d0=10), so it competes
  // with nothing there and must succeed independently.
  int xb = -1, yb = -1;
  QVERIFY(grid.insertCandidate(90.0, 0.0, 100.0, 0.0, -10.0, 10.0,
                               { 1.0, 1.0 }, b, xb, yb));

  QVERIFY(xa != xb);

  const MOMECell* ca = grid.cell(xa, ya);
  QCOMPARE(ca->size(), 1);
  QVERIFY(ca->structures().contains(a));

  const MOMECell* cb = grid.cell(xb, yb);
  QCOMPARE(cb->size(), 1);
  QVERIFY(cb->structures().contains(b));
}

void MOMEGridTest::insertCandidateRespectsCellCapacity()
{
  MOMEGrid grid(10, 10);

  // 11 mutually non-dominated points along a trade-off curve
  // i -> (i, 10-i), all mapped into the same descriptor cell.
  for (int i = 0; i <= 10; ++i) {
    Structure* s = new Structure;
    int x = -1, y = -1;
    QVERIFY(grid.insertCandidate(50.0, 0.0, 100.0, 0.0, -10.0, 10.0,
                                 { static_cast<double>(i), static_cast<double>(10 - i) },
                                 s, x, y));
    QCOMPARE(x, 5);
    QCOMPARE(y, 5);
  }

  // The 11th insertion pushed the cell one past capacity; one member was
  // evicted, so the cell must hold exactly its fixed capacity.
  QCOMPARE(grid.cell(5, 5)->size(), MOMECell::kParetoSetCapacity);
}

// ---------------------------------------------------------------------------

QTEST_MAIN(MOMEGridTest)

#include "momegridtest.moc"
