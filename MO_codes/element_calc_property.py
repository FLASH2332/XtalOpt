# eval_voltage.py — fast, no torch import, just filesystem handshake
import sys, time, os, uuid

struct_path = sys.argv[1]

# Replace .request with .result (or append .result if not .request)
if struct_path.endswith(".POSCAR"):
    out_path = struct_path[:-7] + ".result"
else:
    out_path = os.path.splitext(struct_path)[0] + ".result"

req_id = uuid.uuid4().hex
req_path = f"/mnt/d/CollegeStuff/Final_Year_project/XtalOpt-14.3.0_SourceCode/cn_queue/{req_id}.request"

with open(req_path, "w") as f:
    f.write(struct_path)  # full structure path

# Optional: read result once daemon completes
# voltage = open(out_path).read().strip()
# os.remove(out_path)
# with open("voltage_output.txt", "w") as f:
#     f.write(voltage + "\n")