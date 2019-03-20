#!/bin/bash

make clean
make

echo "***** Running Serial version ******"
time ./MST -r 1 -o /tmp/ofile897171_477798 -t 1 ../graphData/data/rMatGraph_WE_5_10000000

echo "***** Running Parallel version ******"
time ./MST -r 1 -o /tmp/ofile897171_477798 -t 16 ../graphData/data/rMatGraph_WE_5_10000000
