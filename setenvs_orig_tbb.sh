#!/bin/bash

root_cwd="$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )" #
echo $root_cwd

echo "***** Building TBB *****"
cd $root_cwd
cd src/orig-tbb-lib
source obj/tbbvars.sh
cd $root_cwd
