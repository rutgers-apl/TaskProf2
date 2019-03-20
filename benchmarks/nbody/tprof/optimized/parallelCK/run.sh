#!/bin/bash

make clean
make

echo "***** Running What-if analyses ******"
./nbody -r 1 -o /tmp/ofile974877_207802 -t 16 ../geometryData/data/3DonSphere_1000000
../../../../../src/ptprof_lib/analysis_phase/gentprof
