#!/bin/bash

# �2024 Sanjay Madhav, Nathan Greenfield, and Gregory Pohlner

# Pull the graded tests
# https://drive.google.com/file/d/1hYqgPIB01bzZIW48bJ8_7O5rxwJo92x1/view?usp=sharing
wget "https://drive.google.com/uc?export=download&id=1hYqgPIB01bzZIW48bJ8_7O5rxwJo92x1" -O hw02.tar.gz
tar xzf hw02.tar.gz

# Cmake into build directory
echo "Compiling..."
mkdir build
cd build
CC=clang CXX=clang++ cmake -DCMAKE_EXPORT_COMPILE_COMMANDS=ON .. || exit 1
make || exit 1

# Return to root folder (so cwd is correct)
cd ..

# Run graded tests
echo "Running graded tests..."
# timeout 30 build/tests/tests [graded]
timeout 30 build/tests/tests [graded] -r=github|| exit 1

