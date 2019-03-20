#!/bin/bash

make clean
make

echo "***** Running Serial version ******"
time ./lulesh2.0 1

echo "***** Running Parallel version ******"
time ./lulesh2.0 16
