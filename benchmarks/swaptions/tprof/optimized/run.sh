#!/bin/bash

make clean
make

echo "***** Running What-if analyses ******"
./swaptions -ns 64 -sm 40000 -nt 16
../../../../src/ptprof_lib/analysis_phase/gentprof
