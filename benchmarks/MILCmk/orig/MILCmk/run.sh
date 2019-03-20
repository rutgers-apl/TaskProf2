#!/bin/bash

make clean
make

echo "***** Running Serial version ******"
time ./qla_bench-f3 1

echo "***** Running Parallel version ******"
time ./qla_bench-f3 16
