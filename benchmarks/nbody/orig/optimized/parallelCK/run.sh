#!/bin/bash

make clean
make

echo "***** Running Serial version ******"
time ./nbody -r 1 -o /tmp/ofile974877_207802 -t 1 ../geometryData/data/3DonSphere_1000000

echo "***** Running Parallel version ******"
time ./nbody -r 1 -o /tmp/ofile974877_207802 -t 16 ../geometryData/data/3DonSphere_1000000
