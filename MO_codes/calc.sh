#!/bin/bash
# voltage.sh — XtalOpt objective wrapper for the CHGNet voltage daemon's thin client

PYTHON=python3
SCRIPT=/mnt/d/CollegeStuff/Final_Year_project/XtalOpt-14.3.0_SourceCode/XtalOpt-14.3.0/MO_codes/element_calc_property.py
STRUCT_FILE="output.POSCAR"  # match whatever your scheme actually hands you

# Convert relative path to full absolute path
FULL_PATH="$(realpath "$STRUCT_FILE")"

"$PYTHON" "$SCRIPT" "$FULL_PATH"