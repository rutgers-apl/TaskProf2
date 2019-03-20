#!/bin/bash

make clean
make

echo "***** Running what-if analyses ******"
./sort -r 1 -o /tmp/ofile959994_651631 -t 16 ../sequenceData/data/exptSeq_10M_double

../../../../../src/ptprof_lib/analysis_phase/gentprof
