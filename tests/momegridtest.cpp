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

#include <QtTest>

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
 * Out of scope (covered in later steps):
 *   - Descriptor → (x,y) mapping
 *   - Pareto dominance or archive logic
 *   - SearchBase / QueueManager integration
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

QTEST_MAIN(MOMEGridTest)

#include "momegridtest.moc"
