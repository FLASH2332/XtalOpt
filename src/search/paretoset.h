/**********************************************************************
  ParetoSet - Fixed-capacity Pareto-optimal set of (objectives, payload)
              entries, used as the per-cell archive for MOME.

  Copyright (C) 2026 Samad Hajinazar

  This source code is released under the New BSD License, (the "License").

  Unless required by applicable law or agreed to in writing, software
  distributed under the License is distributed on an "AS IS" BASIS,
  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  See the License for the specific language governing permissions and
  limitations under the License.
 ***********************************************************************/

#ifndef SEARCH_PARETOSET_H
#define SEARCH_PARETOSET_H

#include <common/compatibility/platform_compat.h>

#include <search/selection.h>

#include <utility>
#include <vector>

namespace Search {

/**
 * @class ParetoSet paretoset.h <search/paretoset.h>
 * @brief Fixed-capacity set of mutually non-dominated (objectives, payload)
 * entries (lower is better in every objective, matching Search::doesDominate).
 *
 * Membership is decided purely from each entry's objective vector; the
 * payload (@p T) is an opaque handle the caller attaches to each entry
 * (e.g. a Structure*) and is never inspected or dereferenced here.
 *
 * insert() keeps the set free of dominated entries: a dominated candidate
 * is rejected, and a successful insertion removes any existing members the
 * new entry dominates. When that would leave more than capacity() entries,
 * the least-crowded entry (see Search::frontCrowdingDistance) is evicted to
 * make room, so mutually non-dominated ties are also handled without ever
 * exceeding capacity.
 */
template <typename T>
class ParetoSet
{
public:
  struct Entry
  {
    std::vector<double> objectives;
    T payload;
  };

  /**
   * Construct an empty set holding at most @p capacity entries.
   *
   * @p capacity is clamped to at least 1, so a usable (though minimal) set
   * always exists.
   */
  explicit ParetoSet(int capacity)
    : m_capacity(capacity > 0 ? capacity : 1)
  {
  }

  /** @return The fixed maximum number of entries this set will hold. */
  int capacity() const { return m_capacity; }

  /** @return The current number of entries. */
  int size() const { return static_cast<int>(m_entries.size()); }

  /** @return true if the set holds no entries. */
  bool isEmpty() const { return m_entries.empty(); }

  /** @return All current entries (objectives + payload), in no particular order. */
  const std::vector<Entry>& entries() const { return m_entries; }

  /** Remove all entries. */
  void clear() { m_entries.clear(); }

  /**
   * Attempt to insert @p payload with objective vector @p objectives.
   *
   * @return true if the candidate was added — possibly displacing members
   * it dominates, or (if the set was already at capacity) the entry with
   * the smallest crowding distance. Returns false, leaving the set
   * unchanged, when: @p objectives is empty; any objective value is
   * non-finite (NaN/Inf); @p objectives' size disagrees with the existing
   * entries' dimensionality; or the candidate is dominated by an existing
   * entry.
   */
  bool insert(const std::vector<double>& objectives, const T& payload)
  {
    const int m = static_cast<int>(objectives.size());
    if (m == 0)
      return false;

    for (double v : objectives) {
      if (!GS_ISFINITE(v))
        return false;
    }

    for (const Entry& e : m_entries) {
      if (static_cast<int>(e.objectives.size()) != m)
        return false; // dimensionality mismatch: guard against nonsensical fronts
      if (doesDominate(e.objectives.data(), objectives.data(), m))
        return false; // dominated by an existing member: reject
    }

    // Candidate is not dominated: drop any existing members that it dominates.
    std::vector<Entry> survivors;
    survivors.reserve(m_entries.size());
    for (Entry& e : m_entries) {
      if (!doesDominate(objectives.data(), e.objectives.data(), m))
        survivors.push_back(std::move(e));
    }
    m_entries = std::move(survivors);

    m_entries.push_back(Entry{ objectives, payload });

    if (static_cast<int>(m_entries.size()) > m_capacity)
      evictLeastCrowded();

    return true;
  }

private:
  void evictLeastCrowded()
  {
    std::vector<std::vector<double>> points;
    points.reserve(m_entries.size());
    for (const Entry& e : m_entries)
      points.push_back(e.objectives);

    const std::vector<double> dist = frontCrowdingDistance(points);

    size_t worst = 0;
    for (size_t i = 1; i < dist.size(); ++i) {
      if (dist[i] < dist[worst])
        worst = i;
    }
    m_entries.erase(m_entries.begin() + static_cast<long>(worst));
  }

  int m_capacity;
  std::vector<Entry> m_entries;
};

} // namespace Search

#endif // SEARCH_PARETOSET_H
