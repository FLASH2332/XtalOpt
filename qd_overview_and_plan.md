# Quality Diversity (MAP-Elites) Integration Plan for XtalOpt

---

## PART 1: Current System Overview — Selection, Mutation & Fitness

This section traces the complete lifecycle of a crystal structure through the existing GA loop, identifying every location that touches selection, mutation, fitness, and parent pool management.

---

### 1.1 High-Level Workflow Diagram

```
QueueManager::checkLoop()  (every 1 second, QM thread)
        |
        v
QueueManager::checkPopulation()
        |  -- counts optimized/running structures
        |  -- emits needNewStructure() if more structures needed
        v
XtalOpt::generateNewStructure()  (slot, in QM thread)
        |  -- dispatches to background thread
        v
XtalOpt::generateNewStructure_()  (background thread, QtConcurrent)
        |  -- picks a random composition via pickRandomCompositionFromPossibleOnes()
        v
XtalOpt::generateNewXtal(CellComp incomp)
        |  -- calls m_queue->getAllParentPoolStructures()
        |  -- if < 3 optimized parents => generateRandomXtal()   [bootstrap phase]
        |  -- if >= 3 parents          => generateEvolvedXtal_H() [evolution phase]
        v
XtalOpt::generateEvolvedXtal_H(QList<Structure*>& structures)
        |  -- selectXtalFromProbabilityList(structures)           [PARENT 1 SELECTION]
        |  -- selectOperation(selectedXtal->hasValidComposition()) [OP SELECTION]
        |  -- per-op inner loop (up to 1000 attempts):
        |     OP_Crossover   => selectXtalFromProbabilityList() again [PARENT 2 SELECTION]
        |     OP_Stripple    => XtalOptGenetic::stripple()
        |     OP_Permustrain => XtalOptGenetic::permustrain()
        |     OP_Permutomic  => XtalOptGenetic::permutomic()
        |     OP_Permucomp   => XtalOptGenetic::permucomp()
        |  -- checkXtal() validates the offspring
        v
XtalOpt::initializeAndAddXtal()
        |  -- assigns generation/id numbers (inside lockForNaming/unlockForNaming)
        |  -- findSpaceGroup()
        v
QueueManager (submits to optimizer, runs DFT/ML potential)
        v
QueueManager::structureFinished signal
        v
SearchBase::updateHullAndFrontInfo()   [FITNESS / RANKING UPDATE]
        |  -- collects all Optimized+Similar structures
        |  -- builds convex hull (distAboveHull for every structure)
        |  -- performs nonDominatedSorting => assigns setParetoFront()
        |  -- updates setDistAboveHull() on every structure
```

---

### 1.2 Detailed Function Locations

#### Selection

| Function | File | Lines | Purpose |
|---|---|---|---|
| `XtalOpt::selectXtalFromProbabilityList()` | `src/xtalopt/xtalopt.cpp` | ~2058-2096 | Entry point: wraps `selectParentFromPool()`. Called **twice** per crossover, once for all other ops. |
| `SearchBase::selectParentFromPool()` | `src/globalsearch/searchbase.cpp` | ~426-809 | Core selection logic. Builds objective data matrix, computes scalar or Pareto fitness, applies tournament or roulette selection. Returns index into structures list. |
| `QueueManager::getAllParentPoolStructures()` | `src/globalsearch/queuemanager.cpp` | 1195-1218 | Returns all `Structure::Optimized` structs that have a non-NaN `distAboveHull`. This is the **entire pool** used for both fitness calculation and selection. |

#### Fitness Calculation

| Function | File | Lines | Purpose |
|---|---|---|---|
| `SearchBase::updateHullAndFrontInfo()` | `src/globalsearch/searchbase.cpp` | 196-360 | Triggered by `structureFinished` signal after every DFT job. Recalculates convex hull + Pareto ranks for **all** structures. Writes `setDistAboveHull()` and `setParetoFront()` on each. |
| `paretoProbs()` | `src/globalsearch/fitness.h` | 200-260 | Called from `selectParentFromPool`. Runs `nonDominatedSorting()` + optional `scaledCrowdingDistances()`. Returns scalar fitness from front ranks. |
| `scalarProbs()` | `src/globalsearch/fitness.h` | 264-293 | Basic weighted-sum scalar fitness. Called for non-Pareto mode. |
| `nonDominatedSorting()` | `src/globalsearch/fitness.h` | 150-196 | Fast non-dominated sort. Returns `fronts[rank][struct_idx]`. |
| `frontCrowdingDistance()` | `src/globalsearch/fitness.h` | 45-75 | Per-front crowding distance for a set of objective points. |

#### Mutation / Genetic Operators

| Function | File | Lines | Purpose |
|---|---|---|---|
| `XtalOpt::selectOperation()` | `src/xtalopt/xtalopt.cpp` | 1504-1602 | Selects one of the 5 operators by weighted random draw, filtered by search type (vc/fixed) and parent composition validity. |
| `XtalOptGenetic::crossover()` | `src/xtalopt/genetic.cpp` | -- | Two-parent crystal crossover: cuts one parent's cell into slabs and fills with atoms from the other. |
| `XtalOptGenetic::stripple()` | `src/xtalopt/genetic.cpp` | -- | Ripple + strain mutation (lattice deformation + periodic atomic displacement). |
| `XtalOptGenetic::permustrain()` | `src/xtalopt/genetic.cpp` | -- | Atom swap + strain mutation. |
| `XtalOptGenetic::permutomic()` | `src/xtalopt/genetic.cpp` | -- | Atomic species swap for variable-composition search. |
| `XtalOptGenetic::permucomp()` | `src/xtalopt/genetic.cpp` | -- | Composition permutation for variable-composition search. |

#### Parent Pool Management

| Variable/Function | File | Purpose |
|---|---|---|
| `parentsPoolSize` | `xtalopt.h:367` | User-set pool size. Pool is trimmed to top-N by fitness before selection. |
| `contStructs` | `searchbase.h:571` | Number of concurrent structures maintained in queue. |
| `getAllParentPoolStructures()` | `queuemanager.cpp:1195` | Returns only `Optimized` structs with hull computed. This is the **global** parent pool -- currently no spatial/behavioural partitioning. |

---

### 1.3 Key Data Fields on Each Structure

Every `GlobalSearch::Structure` (and its subclass `XtalOpt::Xtal`) carries these fields relevant to selection:

| Field | Getter | Setter | Meaning |
|---|---|---|---|
| `m_aboveHull` | `getDistAboveHull()` | `setDistAboveHull()` | Distance above convex hull (eV/atom). Primary fitness proxy. |
| `m_paretoFront` | `getParetoFront()` | `setParetoFront()` | Pareto rank (0 = best front). Updated by `updateHullAndFrontInfo()`. |
| `m_strucObjValues` | `getStrucObjValues(i)` | `setStrucObjValues(v)` | User-defined objective values (i = objective index). |
| `m_strucObjState` | `getStrucObjState()` | `setStrucObjState()` | Whether objectives are calculated (Retain/Dismiss/Fail/NotCalc). |
| `m_status` | `getStatus()` | `setStatus()` | Structure lifecycle state (Optimized, Similar, Killed, ...). |
| `m_generation`, `m_id` | `getGeneration()`, `getIDNumber()` | -- | Lineage tag (gen x id). |
| `m_parentStructure` | `getParentStructure()` | `setParentStructure()` | Pointer to evolutionary parent. |
| Xtal-specific: `getA/B/C()` | -- | -- | Cell edge lengths (Angstrom). |
| Xtal-specific: `getAlpha/Beta/Gamma()` | -- | -- | Cell angles (degrees). |
| Xtal-specific: `getVolume()`, `getVolumePerAtom()` | -- | -- | Cell volume and per-atom volume. |
| Xtal-specific: `getSpaceGroupNumber()` | -- | -- | Spacegroup number (1-230). |
| Xtal-specific: `getEnthalpy()`, `getEnthalpyPerAtom()` | -- | -- | Total and per-atom enthalpy (eV). |
| `numAtoms()` | -- | -- | Total atom count. |
| `getFormulaUnits()` | -- | -- | Formula unit count (supercell multiplier). |
| `getNumberOfAtomsOfSymbol(sym)` | -- | -- | Per-element atom count. |

---

### 1.4 Current Save/Load Mechanism

- State is persisted to `xtalopt.state` (a Qt Settings / INI-style file) by `XtalOpt::save()`.
- Per-structure state is saved to individual `structure.state` files in each structure's subfolder.
- `distAboveHull` and `paretoFront` are **not** saved (they are recalculated on resume via `updateHullAndFrontInfo()`).
- New QD grid metadata will need to be added to `xtalopt.state` and recomputed on resume.

---

## PART 2: Quality Diversity (MAP-Elites) Implementation Plan

### 2.1 Conceptual Overview

MAP-Elites (Multi-dimensional Archive of Phenotypic Elites) divides behaviour space into a fixed grid of cells. Each cell holds at most one elite -- the best-performing individual that falls inside that cell's descriptor range. When a new individual is evaluated:

1. Compute its **behaviour descriptor** values (e.g. volume/atom, spacegroup number).
2. Find which grid **cell** it maps to.
3. If the cell is empty, or the new individual is **better** than the current occupant by Pareto dominance (using the existing `nonDominatedSorting` / `paretoProbs` machinery), replace the occupant.
4. Parent selection draws from the current archive (non-empty cells) rather than the global tracker pool.

This plan grafts MAP-Elites as a **new selection mode** alongside the existing Basic/Pareto modes rather than replacing them, triggered by the setting `optimizationType = mapelites`.

---

### 2.2 Descriptor System

#### 2.2.1 Built-in Descriptor Types (computable from any Xtal without extra files)

| Descriptor Key | Accessor | Notes |
|---|---|---|
| `volumePerAtom` | `Xtal::getVolumePerAtom()` | Angstrom^3/atom |
| `volume` | `Xtal::getVolume()` | Total cell volume |
| `cellA`, `cellB`, `cellC` | `Xtal::getA/B/C()` | Edge lengths |
| `cellAlpha`, `cellBeta`, `cellGamma` | `Xtal::getAlpha/Beta/Gamma()` | Angles in degrees |
| `numAtoms` | `Structure::numAtoms()` | Integer |
| `formulaUnits` | `Structure::getFormulaUnits()` | Integer supercell factor |
| `spaceGroupNumber` | `Xtal::getSpaceGroupNumber()` | 1-230 |
| `enthalpyPerAtom` | `Structure::getEnthalpyPerAtom()` | eV/atom |
| `distAboveHull` | `Structure::getDistAboveHull()` | eV/atom |
| `objective<N>` | `Structure::getStrucObjValues(N)` | Any user-defined external objective |

#### 2.2.2 User-Configurable Descriptor Input Format

Descriptors are specified in the CLI options file (or a new section of `xtalopt.state`) as:

```
# Format: descriptorName  min  max  numBins
qdDescriptor = volumePerAtom  8.0  30.0  10
qdDescriptor = spaceGroupNumber  1  230  10
```

Multiple `qdDescriptor` lines create a multi-dimensional grid (2D, 3D, etc.).

---

### 2.3 New Data Structures

#### 2.3.1 `QDDescriptor` struct (new file: `src/xtalopt/qd/qddescriptor.h`)

```cpp
struct QDDescriptor {
    QString   key;      // e.g. "volumePerAtom"
    double    minVal;   // user-provided minimum
    double    maxVal;   // user-provided maximum
    int       numBins;  // number of grid cells along this axis
};
```

#### 2.3.2 `QDCell` struct (new file: `src/xtalopt/qd/qdcell.h`)

```cpp
struct QDCell {
    // Currently-occupying structure index list
    // (one or more per cell if local Pareto front mode is used)
    QList<int> occupantIndices;  // indices into the allOptimized snapshot

    // Convenience flag
    bool isEmpty() const { return occupantIndices.isEmpty(); }
};
```

#### 2.3.3 `QDGrid` class (new files: `src/xtalopt/qd/qdgrid.h` + `qdgrid.cpp`)

```cpp
class QDGrid {
public:
    // Initialize grid from descriptor list
    void initialize(const QList<QDDescriptor>& descs, int cellCapacity = 1);

    // Compute descriptor vector for a given Xtal
    std::vector<double> computeDescriptors(XtalOpt::Xtal* xtal,
                                           SearchBase* search) const;

    // Map a descriptor value to a bin index along axis d
    int getBinIndex(int d, double value) const;

    // Map a full descriptor vector to a flat cell index (-1 if out of range)
    int getCellIndex(const std::vector<double>& desc) const;

    // Get the multi-index (one int per dimension) from a flat cell index
    std::vector<int> getMultiIndex(int flatIndex) const;

    // Access a cell
    QDCell& cell(int flatIndex);
    const QDCell& cell(int flatIndex) const;

    // Attempt to insert a structure into cell at cellIdx.
    // Uses Pareto-based replacement within cell.
    // Returns true if structure was placed or already present.
    bool tryInsert(int candidateIdx,
                   int cellIdx,
                   const QList<GlobalSearch::Structure*>& allOptimized,
                   int objectivesNum,
                   std::function<double(int,int)> getObjValue,
                   bool useCrowding);

    // Clear all occupants from every cell (called before rebuilding)
    void clearOccupants();

    // Return flat indices of all non-empty cells
    QList<int> getNonEmptyCells() const;

    // Return all current elite structures across all cells
    QList<GlobalSearch::Structure*> getAllElites(
        const QList<GlobalSearch::Structure*>& allOptimized) const;

    // Total number of cells in the grid
    int totalCells() const { return m_totalCells; }

    // Save/load grid layout (NOT occupants -- those are recomputed on resume)
    bool save(QSettings& settings) const;
    bool load(QSettings& settings);

private:
    QList<QDDescriptor> m_descriptors;
    int m_ndim;
    int m_cellCapacity;      // max occupants per cell
    QVector<QDCell> m_cells; // flat array of all cells
    int m_totalCells;        // product of all numBins
};
```

---

### 2.4 Descriptor Value Computation

#### `QDGrid::computeDescriptors(Xtal* xtal, SearchBase* search)` -- mapping table

```
For each QDDescriptor d in m_descriptors:
    switch d.key:
        "volumePerAtom"    => xtal->getVolumePerAtom()
        "volume"           => xtal->getVolume()
        "cellA"            => xtal->getA()
        "cellB"            => xtal->getB()
        "cellC"            => xtal->getC()
        "cellAlpha"        => xtal->getAlpha()
        "cellBeta"         => xtal->getBeta()
        "cellGamma"        => xtal->getGamma()
        "numAtoms"         => (double)xtal->numAtoms()
        "formulaUnits"     => (double)xtal->getFormulaUnits()
        "spaceGroupNumber" => (double)xtal->getSpaceGroupNumber()
        "enthalpyPerAtom"  => xtal->getEnthalpyPerAtom()
        "distAboveHull"    => xtal->getDistAboveHull()
        "objective0", "objective1", ...
                           => xtal->getStrucObjValues(N)
                              where N is the integer suffix
        default            => NaN  (descriptor unknown; structure excluded from grid)
```

Bin index for dimension `d` and value `v`:

```
bin = clamp(floor((v - minVal) / (maxVal - minVal) * numBins), 0, numBins - 1)
```

If `v < minVal` or `v > maxVal`, the structure is excluded from the grid (not from hull calculations).

---

### 2.5 Cell-Level Fitness: Reusing the Existing Pareto Front

When multiple structures compete for the same cell, the **existing** `nonDominatedSorting()` from `src/globalsearch/fitness.h` is reused verbatim.

#### Replacement rule for `QDGrid::tryInsert()`:

```
1. If cell is empty:
     => Insert candidate unconditionally.

2. If cell is non-empty AND cellCapacity == 1 (strict MAP-Elites):
     => Build objData for [current single occupant, candidate]:
           obj[0] = distAboveHull
           obj[1..N] = user objective values (min) or negated (max)
     => If candidate dominates occupant: replace.
     => Else if occupant dominates candidate: keep occupant.
     => Else (non-dominating): keep occupant (or apply crowding tiebreak).

3. If cell is non-empty AND cellCapacity > 1 (local Pareto front per cell):
     => Build objData for all current occupants + candidate.
     => Run nonDominatedSorting().
     => Keep top-N structures (front 0 first, then front 1, etc.) up to cellCapacity.
     => If candidate is in the kept set: return true (inserted).
```

---

### 2.6 Integration Points -- Where Code Changes Are Needed

#### 2.6.1 `SearchBase` -- New member variables and mode flag

**File:** `src/globalsearch/searchbase.h`

New members in the `protected:` section:

```cpp
// QD grid (only active when m_optimizationType == "mapelites")
std::unique_ptr<QDGrid> m_qdGrid;

// QD settings
bool m_qdActive = false;       // true iff mapelites mode is on
int  m_qdCellCapacity = 1;     // max occupants per cell

// Descriptor definitions (parsed from input)
QList<QDDescriptor> m_qdDescriptors;
```

New public methods:

```cpp
// Called after updateHullAndFrontInfo() -- rebuilds the QD grid archive
void updateQDGrid();

// Returns the list of all current elite structures (one or more per cell)
QList<Structure*> getQDElites();

// Parse and add a qdDescriptor definition from user input
bool addQDDescriptor(const QString& key, double minVal, double maxVal, int numBins);

// Write a QD grid snapshot to qd_grid.txt
bool saveQDSnapshot();
```

#### 2.6.2 `SearchBase::updateHullAndFrontInfo()` -- Add QD grid update

**File:** `src/globalsearch/searchbase.cpp` | **Line:** ~357

After the existing `emit m_queue->hullCalculationFinished();`, add:

```cpp
// Rebuild QD grid after each hull update (if QD mode is active)
if (m_qdActive)
    updateQDGrid();
```

#### 2.6.3 `SearchBase::updateQDGrid()` -- Full pseudocode

```cpp
void SearchBase::updateQDGrid()
{
    if (!m_qdActive || !m_qdGrid) return;

    // Step 1: Get all valid (Optimized + hull-computed) structures
    QList<Structure*> allOpt = m_queue->getAllParentPoolStructures();
    if (allOpt.isEmpty()) return;

    // Step 2: Clear previous cell occupants
    m_qdGrid->clearOccupants();

    // Step 3: Insert all structures into the grid
    for (int i = 0; i < allOpt.size(); i++) {
        Xtal* xtal = qobject_cast<Xtal*>(allOpt[i]);
        if (!xtal) continue;

        // Compute descriptor vector
        std::vector<double> desc = m_qdGrid->computeDescriptors(xtal, this);

        // Check for NaN descriptors
        bool valid = true;
        for (double d : desc) {
            if (std::isnan(d)) { valid = false; break; }
        }
        if (!valid) continue;

        // Map to flat cell index
        int cellIdx = m_qdGrid->getCellIndex(desc);
        if (cellIdx < 0) continue;  // out-of-range descriptor value(s)

        // Build objective accessor lambda (captures 'allOpt' and 'this')
        auto getObjValue = [&](int structIdx, int objIdx) -> double {
            if (objIdx == 0) return allOpt[structIdx]->getDistAboveHull();
            int j = objIdx - 1;
            if (getObjectivesTyp(j) == Ot_Min)
                return allOpt[structIdx]->getStrucObjValues(j);
            else  // Ot_Max: convert to minimization
                return -allOpt[structIdx]->getStrucObjValues(j);
        };

        // Attempt insertion
        m_qdGrid->tryInsert(i, cellIdx, allOpt,
                            1 + getObjectivesNum(),  // total objectives
                            getObjValue,
                            m_crowdingDistance);
    }

    // Step 4: Log grid coverage statistics
    if (m_verbose || m_saveHullSnapshots) {
        int filled = m_qdGrid->getNonEmptyCells().size();
        int total  = m_qdGrid->totalCells();
        qDebug() << QString("QD Grid: %1 / %2 cells occupied  (coverage: %3%)")
                            .arg(filled).arg(total)
                            .arg(100.0 * filled / total, 0, 'f', 1);
        if (m_saveHullSnapshots)
            saveQDSnapshot();
    }
}
```

#### 2.6.4 `XtalOpt` class -- New QD member functions

**File:** `src/xtalopt/xtalopt.h` -- add to `protected:` section:

```cpp
// QD-aware parent selection: picks a random non-empty cell, then
// selects within it using the existing selectParentFromPool() logic
Xtal* selectXtalFromQDGrid();

// Returns the correct parent pool depending on whether QD mode is active
QList<GlobalSearch::Structure*> getParentPool();
```

#### 2.6.5 `XtalOpt::generateNewXtal()` -- Use QD pool

**File:** `src/xtalopt/xtalopt.cpp` | **Lines:** 1464-1502

Change the pool-gathering line:

```cpp
// BEFORE:
structures = m_queue->getAllParentPoolStructures();

// AFTER:
structures = getParentPool();  // returns QD elites if m_qdActive, else full pool
```

`getParentPool()` implementation:

```cpp
QList<Structure*> XtalOpt::getParentPool()
{
    if (m_qdActive && m_qdGrid)
        return m_qdGrid->getAllElites(m_queue->getAllParentPoolStructures());
    return m_queue->getAllParentPoolStructures();
}
```

#### 2.6.6 `XtalOpt::generateEvolvedXtal_H()` -- Branch on QD mode

**File:** `src/xtalopt/xtalopt.cpp` | **Lines:** 1644-1645, 1714

```cpp
// BEFORE (line ~1645):
selectedXtal = selectXtalFromProbabilityList(structures);

// AFTER:
if (m_qdActive)
    selectedXtal = selectXtalFromQDGrid();
else
    selectedXtal = selectXtalFromProbabilityList(structures);
```

Same change applies to the crossover second-parent selection at line ~1714.

#### 2.6.7 `XtalOpt::selectXtalFromQDGrid()` -- Implementation

```cpp
Xtal* XtalOpt::selectXtalFromQDGrid()
{
    if (!m_qdActive || !m_qdGrid) return nullptr;

    QList<int> nonEmpty = m_qdGrid->getNonEmptyCells();
    if (nonEmpty.isEmpty()) return nullptr;

    // Step 1: Pick a random non-empty cell uniformly
    int cellIdx = nonEmpty[getRandUInt(0, nonEmpty.size() - 1)];

    // Step 2: Gather cell occupants as Structure pointers
    QList<Structure*> allOpt = m_queue->getAllParentPoolStructures();
    QList<Structure*> cellStructures;
    for (int idx : m_qdGrid->cell(cellIdx).occupantIndices) {
        if (idx >= 0 && idx < allOpt.size())
            cellStructures.append(allOpt[idx]);
    }

    if (cellStructures.isEmpty()) return nullptr;
    if (cellStructures.size() == 1)
        return qobject_cast<Xtal*>(cellStructures[0]);

    // Step 3: Use existing selectParentFromPool() on the cell's occupants
    int selected = selectParentFromPool(cellStructures, cellStructures.size());
    if (selected == -1) return nullptr;
    return qobject_cast<Xtal*>(cellStructures[selected]);
}
```

#### 2.6.8 CLI Options -- Parse QD settings

**File:** `src/xtalopt/cliOptions.cpp`

New keywords to add to `isKeyword()` and `processOptions()`:

| Keyword | Type | Example Value |
|---|---|---|
| `optimizationType` | string | `mapelites` (existing keyword, new value) |
| `qdDescriptor` | string (multi-value) | `volumePerAtom  8.0  30.0  10` |
| `qdCellCapacity` | int | `1` |

Parsing of `qdDescriptor` lines:

```cpp
// In processOptions():
if (options.contains("qdDescriptor")) {
    for (const QString& line : options.values("qdDescriptor")) {
        QStringList parts = line.split(QRegExp("\\s+"), Qt::SkipEmptyParts);
        if (parts.size() == 4) {
            QString key = parts[0];
            double minVal = parts[1].toDouble();
            double maxVal = parts[2].toDouble();
            int numBins   = parts[3].toInt();
            xtalopt.addQDDescriptor(key, minVal, maxVal, numBins);
        } else {
            qDebug() << "Warning: invalid qdDescriptor line: " << line;
        }
    }
}
if (options.contains("qdCellCapacity"))
    xtalopt.m_qdCellCapacity = options["qdCellCapacity"].toInt();
```

After parsing, if `m_optimizationType == "mapelites"` and at least one descriptor was added, call `m_qdGrid->initialize(m_qdDescriptors, m_qdCellCapacity)` and set `m_qdActive = true`.

#### 2.6.9 Save/Load QD settings -- `xtalopt.state`

**File:** `src/xtalopt/xtalopt.cpp` -- in `save()` and `load()` functions

Settings keys to add:

```ini
[QualityDiversity]
qdActive = true
qdCellCapacity = 1
qdDescriptorsCount = 2
qdDescriptor0/key = volumePerAtom
qdDescriptor0/min = 8.0
qdDescriptor0/max = 30.0
qdDescriptor0/bins = 10
qdDescriptor1/key = spaceGroupNumber
qdDescriptor1/min = 1
qdDescriptor1/max = 230
qdDescriptor1/bins = 10
```

Grid **occupants** are NOT saved -- they are recomputed on resume by calling `updateQDGrid()` (exactly as `distAboveHull` is recomputed after loading via `updateHullAndFrontInfo()`).

On resume, `updateQDGrid()` is called at the end of `XtalOpt::load()`, after the existing call to `updateHullAndFrontInfo()` at line ~3269.

---

### 2.7 Output File: `qd_grid.txt`

Written alongside `hull.txt` at each hull update cycle (if `m_saveHullSnapshots` or verbose mode):

```
# QD Grid Summary -- generated at [timestamp]
# Descriptors: volumePerAtom[8.0:30.0:10bins] spaceGroupNumber[1:230:10bins]
# Total cells: 100  |  Occupied: 47  |  Coverage: 47.0%
#
# CellIdx  VolBin  SPGBin  NumOccupants  BestTag  BestHull  BestFront
  0        0       0       1             3x12     0.000     0
  5        0       5       2             5x3      0.012     0
  ...
```

---

### 2.8 New Files and Directories

| File | Type | Content |
|---|---|---|
| `src/xtalopt/qd/qddescriptor.h` | NEW | `QDDescriptor` struct definition |
| `src/xtalopt/qd/qdcell.h` | NEW | `QDCell` struct definition |
| `src/xtalopt/qd/qdgrid.h` | NEW | `QDGrid` class declaration |
| `src/xtalopt/qd/qdgrid.cpp` | NEW | `QDGrid` class implementation |
| `src/xtalopt/CMakeLists.txt` | MODIFY | Add `qd/qdgrid.cpp` to `xtalopt_SRCS` |

---

### 2.9 Summary of All Files Modified

| File | Change Type | What Changes |
|---|---|---|
| `src/globalsearch/searchbase.h` | MODIFY | Add `m_qdGrid`, `m_qdActive`, `m_qdCellCapacity`, `m_qdDescriptors`, `updateQDGrid()`, `getQDElites()`, `addQDDescriptor()`, `saveQDSnapshot()` |
| `src/globalsearch/searchbase.cpp` | MODIFY | Implement `updateQDGrid()`, call it at end of `updateHullAndFrontInfo()`, implement `saveQDSnapshot()`, add QD save/load support |
| `src/xtalopt/xtalopt.h` | MODIFY | Add `selectXtalFromQDGrid()`, `getParentPool()`, forward-declare `QDGrid` |
| `src/xtalopt/xtalopt.cpp` | MODIFY | Implement `selectXtalFromQDGrid()`, `getParentPool()`, modify `generateNewXtal()` and `generateEvolvedXtal_H()` for QD branching, add QD save/load to `save()`/`load()` |
| `src/xtalopt/cliOptions.cpp` | MODIFY | Parse `qdDescriptor`, `qdCellCapacity` keywords; call `addQDDescriptor()` and initialize grid |
| `src/xtalopt/qd/qddescriptor.h` | NEW | QDDescriptor struct |
| `src/xtalopt/qd/qdcell.h` | NEW | QDCell struct |
| `src/xtalopt/qd/qdgrid.h` | NEW | QDGrid class declaration |
| `src/xtalopt/qd/qdgrid.cpp` | NEW | QDGrid class implementation |
| `src/xtalopt/CMakeLists.txt` | MODIFY | Add qd/ source files |
| `src/globalsearch/fitness.h` | NO CHANGE | Reused as-is |
| `src/globalsearch/queuemanager.cpp` | NO CHANGE | getAllParentPoolStructures() unchanged |

---

### 2.10 Open Design Questions

> [!IMPORTANT]
> **Strict MAP-Elites vs Local Pareto front per cell**: With `qdCellCapacity = 1`, strict MAP-Elites is obtained (fastest, simplest). With `qdCellCapacity > 1`, each cell holds a local Pareto front (the existing `nonDominatedSorting` machinery handles this). Which default is preferred?

> [!IMPORTANT]
> **Descriptor out-of-range structures**: Structures whose descriptor values fall outside the user-specified [min, max] range -- should they be (a) clamped to the edge bins, (b) excluded from the grid entirely (but still used for hull calculations), or (c) cause a warning? The current plan assumes **(b)** -- excluded from grid, retained in the global hull.

> [!IMPORTANT]
> **Crossover with sparse grid**: If there are only 1-2 non-empty cells total, crossover calls `selectXtalFromQDGrid()` twice and may get the same cell (or even the same structure) both times. The plan currently allows this (same as the existing code allows the same xtal to be selected twice in rare cases). Should an explicit "pick a different cell for parent 2" rule be enforced?

> [!NOTE]
> **Coverage metric**: MAP-Elites naturally produces a coverage statistic (fraction of cells that are non-empty). This should be printed to the log and optionally saved to `qd_grid.txt` at every hull update.

> [!NOTE]
> **GUI support**: The current plan is CLI-only. The existing `tab_search.ui` and `tab_mo.ui` tabs would need new widgets for QD settings in a second phase.

> [!TIP]
> **Warm start from existing run**: Because occupants are recomputed from the structure archive on resume (just like `distAboveHull`), a run started in classic mode can be resumed as a QD run by adding `qdDescriptor` lines to the runtime options file without any structural changes to saved data.

---

### 2.11 Verification Plan

1. **Unit test** (new test in `tests/`): Construct a `QDGrid` with known descriptors and manually insert mock structures. Verify: correct cell mapping, Pareto replacement logic, occupant counts, empty-cell detection.
2. **Regression test**: Run a small fixed-composition search (e.g. Si4) in classic Pareto mode and then in `mapelites` mode with `qdDescriptor = volumePerAtom 8 30 5`. Verify: run completes, `qd_grid.txt` is produced, results are physically reasonable.
3. **Manual check**: Inspect `qd_grid.txt` to confirm grid fills up over time and the best structures per cell match expectations from `hull.txt`.
4. **Build check**: `cmake .. && make` with no new warnings or errors.
