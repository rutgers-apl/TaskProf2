#!/bin/bash

make clean
make

echo "***** Running Serial version ******"
time ./swaptions -ns 64 -sm 40000 -nt 1

echo "***** Running Parallel version ******"
time ./swaptions -ns 64 -sm 40000 -nt 16
