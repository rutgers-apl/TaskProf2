#!/bin/bash

make clean
make

echo "***** Running Serial version ******"
time ./BFS -r 1 -o /tmp/ofile564664_442514 -t 1 ../graphData/data/randLocalGraph_J_5_10000000

echo "***** Running Parallel version ******"
time ./BFS -r 1 -o /tmp/ofile564664_442514 -t 16 ../graphData/data/randLocalGraph_J_5_10000000
