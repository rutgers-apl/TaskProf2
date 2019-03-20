#!/bin/bash

make clean
make

echo "***** Running Serial version ******"
time ./ST -r 1 -o /tmp/ofile780084_677212 -t 1 ../graphData/data/randLocalGraph_E_5_10000000

echo "***** Running Parallel version ******"
time ./ST -r 1 -o /tmp/ofile780084_677212 -t 16 ../graphData/data/randLocalGraph_E_5_10000000
