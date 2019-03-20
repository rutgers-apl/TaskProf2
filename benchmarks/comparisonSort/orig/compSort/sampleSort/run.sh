#!/bin/bash

make clean
make

echo "***** Running Serial version ******"
time ./sort -r 1 -o /tmp/ofile959994_651631 -t 1 ../sequenceData/data/exptSeq_10M_double

echo "***** Running Parallel version ******"
time ./sort -r 1 -o /tmp/ofile959994_651631 -t 16 ../sequenceData/data/exptSeq_10M_double
