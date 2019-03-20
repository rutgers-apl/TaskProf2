#!/bin/bash

make clean
make

echo "***** Running Serial version ******"
time ./SA -r 1 -o /tmp/ofile802103_686914 -t 1 ../sequenceData/data/trigramString_10000000

echo "***** Running Parallel version ******"
time ./SA -r 1 -o /tmp/ofile802103_686914 -t 16 ../sequenceData/data/trigramString_10000000
