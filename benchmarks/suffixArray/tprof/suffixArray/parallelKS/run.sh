#!/bin/bash

make clean
make

echo "***** Running What-if analyses ******"
./SA -r 1 -o /tmp/ofile802103_686914 -t 16 ../sequenceData/data/trigramString_10000000

../../../../../src/ptprof_lib/analysis_phase/gentprof
