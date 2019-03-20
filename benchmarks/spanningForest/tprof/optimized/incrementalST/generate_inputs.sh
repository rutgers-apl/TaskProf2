#!/bin/bash

root_cwd="$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )" #

echo "***** Generating inputs ******"
cd ../graphData/data/
make randLocalGraph_E_5_10000000

cd $root_cwd
