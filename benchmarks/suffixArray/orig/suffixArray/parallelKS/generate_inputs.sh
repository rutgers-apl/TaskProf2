#!/bin/bash

root_cwd="$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )" #

echo "***** Generating inputs ******"
cd ../sequenceData/data/
make trigramString_10000000

cd $root_cwd
