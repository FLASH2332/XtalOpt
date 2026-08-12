# Go to build directory
cd ~/projects/XtalOpt/build

# Clear cached build files
rm -rf CMakeCache.txt CMakeFiles/

# Re-configure CMake (including the minimum policy flag for qhull)
cmake -DCMAKE_POLICY_VERSION_MINIMUM=3.5 ..

# Compile across all CPU cores
make -j$(nproc)

cd ..

.build/bin/xtalopt --cli