#!/usr/bin/env python3
import sys
import shutil
from pathlib import Path

# ==============================================================================
# CONFIGURATION FLAGS
# ==============================================================================
# Set to True if you want to clear/delete the contents of localWorkingDirectory 
# after copying. Set to False if you want to keep them intact.
CLEAR_SOURCE = True  # Change to True if you want to auto-clean after saving
# ==============================================================================

def clear_directory_contents(dir_path: Path):
    """Deletes all files and subfolders inside a given directory without removing the root directory itself."""
    for item in dir_path.iterdir():
        try:
            if item.is_dir() and not item.is_symlink():
                shutil.rmtree(item)
            else:
                item.unlink()
        except Exception as e:
            print(f"Warning: Could not remove {item}: {e}")

def save_results():
    # Ensure a custom directory name argument was provided
    if len(sys.argv) < 2:
        print("Error: Please provide a target directory name.")
        print("Usage: python3 save_results.py <custom_dirname>")
        sys.exit(1)

    target_name = sys.argv[1]

    # Resolve paths relative to the user's Mac home directory
    home = Path.home()
    src_dir = home / "Documents" / "projects" / "batteryinformatics" / "XtalOpt" / "build" / "localWorkingDirectory"
    dest_dir = home / "Documents" / "projects" / "batteryinformatics" / "XtalOpt" / "results" / target_name

    # Check if localWorkingDirectory exists on your Mac
    if not src_dir.exists() or not src_dir.is_dir():
        print(f"Error: Source directory '{src_dir}' does not exist on your Mac.")
        sys.exit(1)

    # Create the target directory on macOS if it doesn't exist
    dest_dir.mkdir(parents=True, exist_ok=True)

    print(f"Copying contents from {src_dir} to {dest_dir}...")

    try:
        # Recursively copy directory contents
        shutil.copytree(src_dir, dest_dir, dirs_exist_ok=True)
        print(f"Successfully saved results to: {dest_dir}")

        # If flag is set, clear localWorkingDirectory
        if CLEAR_SOURCE:
            print(f"Clearing contents of {src_dir}...")
            clear_directory_contents(src_dir)
            print("Source directory cleared successfully.")

    except Exception as e:
        print(f"Error processing files: {e}")
        sys.exit(1)

if __name__ == "__main__":
    save_results()