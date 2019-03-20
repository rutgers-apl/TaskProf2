#!/bin/bash

root_cwd="$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )" #

echo "***** Generating inputs ******"
cd ../sequenceData/data/
make exptSeq_10M_double

cd $root_cwd
