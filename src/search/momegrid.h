/**********************************************************************
  MOMEGrid - Fixed 2-D MAP-Elites grid for MOME (Multi-Objective MAP-Elites)

  Copyright (C) 2026 Samad Hajinazar

  This source code is released under the New BSD License, (the "License").

  Unless required by applicable law or agreed to in writing, software
  distributed under the License is distributed on an "AS IS" BASIS,
  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  See the License for the specific language governing permissions and
  limitations under the License.
 ***********************************************************************/

#ifndef SEARCH_MOMEGRID_H
#define SEARCH_MOMEGRID_H

#include <common/compatibility/platform_compat.h>

#include <QVector>

#include <cmath>

namespace Search {

/**
 * @class MOMECell momegrid.h <search/momegrid.h>
 * @brief One cell in the MAP-Elites grid.
 *
 * A cell is an empty container for one (x, y) location in the 2D
 * descriptor space.  Pareto-archive contents will be added in a later
 * commit; this class only defines the per-cell container.
 */
class MOMECell
{
public:
  MOMECell() = default;

  /**
   * @return true if the cell contains no structures yet.
   *
   * In this step the cell is always empty; the method exists so that
   * later code that populates the cell can test it without an API change.
   */
  bool isEmpty() const { return true; }
};

/**
 * @class MOMEGrid momegrid.h <search/momegrid.h>
 * @brief Fixed 2-D MAP-Elites grid used by MOME.
 *
 * The grid partitions the 2-dimensional descriptor space into a
 * rectangular array of cells.  Dimension 0 (x) corresponds to the first
 * descriptor; dimension 1 (y) to the second.
 *
 * descriptorToCell() maps descriptor values to (x, y) coordinates, using
 * bounds supplied by the caller (see SearchBase::DescriptorInfo). Maintaining
 * per-cell Pareto archives is implemented in later commits.
 *
 * @note Invalid coordinate access (out-of-range or negative indices)
 * returns @c nullptr rather than throwing an exception, following the
 * project's existing conventions (see Tracker::at).
 */
class MOMEGrid
{
public:
  /**
   * Construct a grid with @p xBins bins along descriptor dimension 0 and
   * @p yBins bins along descriptor dimension 1.
   *
   * Both counts must be at least 1.  If either is less than 1, the
   * grid clamps to 1 so that a usable (though minimal) grid always exists.
   */
  MOMEGrid(int xBins, int yBins)
    : m_xBins(qMax(1, xBins))
    , m_yBins(qMax(1, yBins))
    , m_cells(m_xBins, QVector<MOMECell>(m_yBins))
  {
  }

  /** @return Number of bins along descriptor dimension 0 (x-axis). */
  int xBins() const { return m_xBins; }

  /** @return Number of bins along descriptor dimension 1 (y-axis). */
  int yBins() const { return m_yBins; }

  /**
   * @return true if @p x and @p y are valid cell coordinates.
   *
   * Valid means 0 <= x < xBins() and 0 <= y < yBins().
   */
  bool isValidCoord(int x, int y) const
  {
    return x >= 0 && x < m_xBins && y >= 0 && y < m_yBins;
  }

  /**
   * Access the cell at coordinates (@p x, @p y).
   *
   * @return Pointer to the cell, or @c nullptr when the coordinates are
   * out of range.
   *
   * @note The pointer is valid for the lifetime of this MOMEGrid object.
   */
  MOMECell* cell(int x, int y)
  {
    if (!isValidCoord(x, y))
      return nullptr;
    return &m_cells[x][y];
  }

  /**
   * Const overload of cell().
   *
   * @return Pointer to the cell, or @c nullptr when the coordinates are
   * out of range.
   */
  const MOMECell* cell(int x, int y) const
  {
    if (!isValidCoord(x, y))
      return nullptr;
    return &m_cells[x][y];
  }

  /**
   * Map two descriptor values to a grid cell (@p x, @p y).
   *
   * The bounds for each descriptor are passed in by the caller (normally
   * read from the corresponding @c SearchBase::DescriptorInfo), so that
   * MOMEGrid does not keep its own copy of descriptor bounds; the
   * DescriptorInfo entries remain the single source of truth for them.
   *
   * @param d0 Value of descriptor dimension 0 (x-axis).
   * @param min0 Configured minimum bound of descriptor 0.
   * @param max0 Configured maximum bound of descriptor 0.
   * @param d1 Value of descriptor dimension 1 (y-axis).
   * @param min1 Configured minimum bound of descriptor 1.
   * @param max1 Configured maximum bound of descriptor 1.
   * @param[out] x Bin index along dimension 0 when the mapping succeeds.
   * @param[out] y Bin index along dimension 1 when the mapping succeeds.
   *
   * @return true and set @p x, @p y when both values map to a valid cell.
   * Returns false (leaving @p x, @p y unmodified) when either descriptor's
   * bounds are invalid (non-finite, or @c min >= max), either value is
   * non-finite, or either value falls outside its [min, max] bounds.
   * Out-of-range values are rejected, never clamped into the grid.
   */
  bool descriptorToCell(double d0, double min0, double max0,
                        double d1, double min1, double max1,
                        int& x, int& y) const
  {
    int bx, by;
    if (!valueToBin(d0, min0, max0, m_xBins, bx))
      return false;
    if (!valueToBin(d1, min1, max1, m_yBins, by))
      return false;

    x = bx;
    y = by;
    return true;
  }

private:
  /**
   * Map one descriptor @p value to a bin index in [0, numBins - 1].
   *
   *   normalized = (value - min) / (max - min)
   *   bin = floor(normalized * numBins)
   *
   * with the special case that @p value == max maps to numBins - 1
   * (floor(1.0 * numBins) would otherwise be one past the last bin).
   *
   * @return true and set @p bin on success. Returns false, leaving
   * @p bin unmodified, when @p min, @p max, or @p value is non-finite,
   * when @p min >= max (including min == max), or when @p value falls
   * outside [min, max].
   */
  static bool valueToBin(double value, double min, double max, int numBins, int& bin)
  {
    if (!GS_ISFINITE(value) || !GS_ISFINITE(min) || !GS_ISFINITE(max))
      return false;
    if (min >= max)
      return false;
    if (value < min || value > max)
      return false;

    if (value == max) {
      bin = numBins - 1;
      return true;
    }

    int b = static_cast<int>(std::floor((value - min) / (max - min) * numBins));
    if (b < 0)
      b = 0;
    else if (b >= numBins)
      b = numBins - 1;

    bin = b;
    return true;
  }

  int m_xBins;
  int m_yBins;
  // m_cells[x][y] — outer index is x (dim 0), inner is y (dim 1).
  QVector<QVector<MOMECell>> m_cells;
};

} // namespace Search

#endif // SEARCH_MOMEGRID_H
