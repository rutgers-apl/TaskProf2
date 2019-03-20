#!/bin/bash

make clean
make

echo "***** Running Differential Analysis ******"
python ../../../../scripts/diff_profiler.py -b qla_bench-f3


echo "***** Running What-if analyses ******"
./qla_bench-f3 16
../../../../src/ptprof_lib/analysis_phase/gentprof
