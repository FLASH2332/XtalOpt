# chgnet_daemon.py — run once: python chgnet_daemon.py &
import time, os, glob
from ase.io import read
from ase.build import bulk
from chgnet.model import StructOptimizer

QUEUE_DIR = "/mnt/d/CollegeStuff/Final_Year_project/XtalOpt-14.3.0_SourceCode/cn_queue"
os.makedirs(QUEUE_DIR, exist_ok=True)

relaxer = StructOptimizer()


def relax_and_get_energy(atoms, fmax=0.1, steps=150):
    result = relaxer.relax(atoms, fmax=fmax, steps=steps, verbose=False)
    return result["trajectory"].energies[-1]


def compute_li_reference():
    """Compute relaxed Li-metal per-atom energy each time."""
    li_bulk = bulk("Li", "bcc", a=3.51, cubic=True)  # standard bcc Li starting point
    E_total = relax_and_get_energy(li_bulk, fmax=0.01, steps=300)
    return E_total / len(li_bulk)


def compute_voltage(structure_path):
    # XtalOpt hands you a VASP-format POSCAR by convention (see spg.py example);
    # adjust format= if your scheme actually produces something else.
    atoms_li = read(structure_path, format="vasp")
    n_li = sum(1 for a in atoms_li if a.symbol == "Li")
    if n_li == 0:
        raise ValueError("no_Li_in_structure")

    E_lithiated = relax_and_get_energy(atoms_li.copy())

    atoms_delith = atoms_li.copy()
    del atoms_delith[[a.index for a in atoms_delith if a.symbol == "Li"]]
    if len(atoms_delith) == 0:
        raise ValueError("pure_Li_structure")
    E_delithiated = relax_and_get_energy(atoms_delith)

    E_li_metal_per_atom = compute_li_reference()

    # V = (E_delithiated + n*E_Li_metal - E_lithiated) / n  (corrected sign)
    voltage = (E_delithiated + n_li * E_li_metal_per_atom - E_lithiated) / n_li
    return voltage


def main():
    while True:
        for req_path in glob.glob(f"{QUEUE_DIR}/*.request"):
            structure_path = ""
            try:
                with open(req_path, "r") as f:
                    structure_path = f.read().strip()

                if structure_path.endswith(".POSCAR"):
                    out_path = structure_path[:-7] + ".result"
                else:
                    out_path = os.path.splitext(structure_path)[0] + ".result"

                voltage = compute_voltage(structure_path)
                with open(out_path, "w") as f:
                    f.write(f"{voltage}\n")
            except Exception as e:
                if structure_path:
                    if structure_path.endswith(".POSCAR"):
                        out_path = structure_path[:-7] + ".result"
                    else:
                        out_path = os.path.splitext(structure_path)[0] + ".result"
                    with open(out_path, "w") as f:
                        f.write(f"FAILED:{e}\n")
            os.remove(req_path)
        # print("Sleeping 1")
        time.sleep(1)


if __name__ == "__main__":
    main()
