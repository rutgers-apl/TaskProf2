#!/bin/bash

make clean
make

echo "***** Running What-if analyses ******"
./ST -r 1 -o /tmp/ofile780084_677212 -t 16 ../graphData/data/randLocalGraph_E_5_10000000

../../../../../src/ptprof_lib/analysis_phase/gentprof
