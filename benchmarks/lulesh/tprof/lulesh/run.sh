#!/bin/bash

make clean
make

echo "***** Running Differential Analysis ******"
python ../../../../scripts/diff_profiler.py -b lulesh2.0
