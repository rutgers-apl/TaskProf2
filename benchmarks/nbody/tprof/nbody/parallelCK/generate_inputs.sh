#!/bin/bash

root_cwd="$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )" #

echo "***** Generating inputs ******"
cd ../geometryData/data/
make 3DonSphere_1000000

cd $root_cwd
