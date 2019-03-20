#!/bin/bash

make clean
make

echo "***** Running what-if analyses ******"
./MST -r 1 -o /tmp/ofile897171_477798 -t 16 ../graphData/data/rMatGraph_WE_5_10000000
../../../../../src/ptprof_lib/analysis_phase/gentprof
