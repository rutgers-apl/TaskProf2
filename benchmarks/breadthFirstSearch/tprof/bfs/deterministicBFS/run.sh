#!/bin/bash

make clean
make

echo "***** Running What-if analyses ******"
./BFS -r 1 -o /tmp/ofile564664_442514 -t 16 ../graphData/data/randLocalGraph_J_5_10000000

../../../../../src/ptprof_lib/analysis_phase/gentprof
