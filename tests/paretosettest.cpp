/**********************************************************************
  ParetoSetTest - Unit tests for the generic ParetoSet<T> container

  Copyright (C) 2026 Samad Hajinazar

  This source code is released under the New BSD License, (the "License").

  Unless required by applicable law or agreed to in writing, software
  distributed under the License is distributed on an "AS IS" BASIS,
  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  See the License for the specific language governing permissions and
  limitations under the License.
 ***********************************************************************/

#include <search/paretoset.h>

#include <QtTest>

#include <limits>

using namespace Search;

/**
 * Focused unit tests for ParetoSet<T> (Step 4C).
 *
 * The payload type used here is a plain int tag (not Structure*) so these
 * tests exercise the dominance/capacity logic in isolation, independent of
 * the Structure class. MOMECell's wiring of ParetoSet<Structure*> into the
 * MOME grid is covered separately in momegridtest.cpp.
 *
 * Out of scope (covered in later steps):
 *   - Descriptor-driven cell lookup feeding into insertion (Step 4D)
 *   - SearchBase / QueueManager integration
 */
class ParetoSetTest : public QObject
{
  Q_OBJECT

private slots:
  void initTestCase()  {}
  void cleanupTestCase() {}
  void init()    {}
  void cleanup() {}

  void constructionAndCapacityClamping();
  void nonDominatedCandidatesAreAllKept();
  void dominatedCandidateIsRejected();
  void dominatingCandidateReplacesDominatedMembers();
  void invalidObjectivesAreRejected();
  void dimensionalityMismatchIsRejected();
  void capacityEvictsLeastCrowdedMember();
  void clearEmptiesTheSet();
};

// ---------------------------------------------------------------------------

void ParetoSetTest::constructionAndCapacityClamping()
{
  ParetoSet<int> normal(10);
  QCOMPARE(normal.capacity(), 10);
  QVERIFY(normal.isEmpty());
  QCOMPARE(normal.size(), 0);

  // Non-positive capacities clamp to 1 (a usable, minimal set always exists).
  ParetoSet<int> zeroCap(0);
  QCOMPARE(zeroCap.capacity(), 1);

  ParetoSet<int> negativeCap(-5);
  QCOMPARE(negativeCap.capacity(), 1);
}

void ParetoSetTest::nonDominatedCandidatesAreAllKept()
{
  ParetoSet<int> set(10);

  // Neither point dominates the other (trade-off along the two objectives).
  QVERIFY(set.insert({ 1.0, 2.0 }, 0));
  QVERIFY(set.insert({ 2.0, 1.0 }, 1));

  QCOMPARE(set.size(), 2);
}

void ParetoSetTest::dominatedCandidateIsRejected()
{
  ParetoSet<int> set(10);

  QVERIFY(set.insert({ 1.0, 1.0 }, 0));
  // (2,2) is dominated by the existing (1,1): rejected, set unchanged.
  QVERIFY(!set.insert({ 2.0, 2.0 }, 1));

  QCOMPARE(set.size(), 1);
  QCOMPARE(set.entries().at(0).payload, 0);
}

void ParetoSetTest::dominatingCandidateReplacesDominatedMembers()
{
  ParetoSet<int> set(10);

  QVERIFY(set.insert({ 2.0, 2.0 }, 0));
  // (1,1) dominates the existing (2,2): accepted, and the dominated member
  // is removed.
  QVERIFY(set.insert({ 1.0, 1.0 }, 1));

  QCOMPARE(set.size(), 1);
  QCOMPARE(set.entries().at(0).payload, 1);
}

void ParetoSetTest::invalidObjectivesAreRejected()
{
  ParetoSet<int> set(10);

  const double nan = std::numeric_limits<double>::quiet_NaN();
  const double inf = std::numeric_limits<double>::infinity();

  QVERIFY(!set.insert({}, 0));                 // empty objective vector
  QVERIFY(!set.insert({ nan, 1.0 }, 0));
  QVERIFY(!set.insert({ 1.0, inf }, 0));
  QVERIFY(!set.insert({ -inf, 1.0 }, 0));

  QVERIFY(set.isEmpty());
}

void ParetoSetTest::dimensionalityMismatchIsRejected()
{
  ParetoSet<int> set(10);

  QVERIFY(set.insert({ 1.0, 2.0 }, 0));
  // A 3-objective candidate cannot be compared against the existing
  // 2-objective entry: rejected, set unchanged.
  QVERIFY(!set.insert({ 1.0, 2.0, 3.0 }, 1));

  QCOMPARE(set.size(), 1);
}

void ParetoSetTest::capacityEvictsLeastCrowdedMember()
{
  ParetoSet<int> set(3);

  // Four mutually non-dominated points along a trade-off curve.
  QVERIFY(set.insert({ 0.0, 3.0 }, 0));
  QVERIFY(set.insert({ 1.0, 2.0 }, 1));
  QVERIFY(set.insert({ 2.0, 1.0 }, 2));
  // Inserting the 4th point pushes the set over capacity; the
  // least-crowded (most interior) point must be evicted, and the two
  // extremes (payloads 0 and 3) must survive.
  QVERIFY(set.insert({ 3.0, 0.0 }, 3));

  QCOMPARE(set.size(), 3);

  QSet<int> payloads;
  for (const auto& entry : set.entries())
    payloads.insert(entry.payload);

  QVERIFY(payloads.contains(0));
  QVERIFY(payloads.contains(3));
  QVERIFY(!payloads.contains(1));
}

void ParetoSetTest::clearEmptiesTheSet()
{
  ParetoSet<int> set(10);

  QVERIFY(set.insert({ 1.0, 2.0 }, 0));
  QVERIFY(set.insert({ 2.0, 1.0 }, 1));
  QCOMPARE(set.size(), 2);

  set.clear();
  QVERIFY(set.isEmpty());
  QCOMPARE(set.size(), 0);
}

// ---------------------------------------------------------------------------

QTEST_MAIN(ParetoSetTest)

#include "paretosettest.moc"
