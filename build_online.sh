#!/bin/bash

perf list | grep "cpu-cycles OR cycles" &> /dev/null
if [ $? != 0 ]; then
    echo "Hardware Performance Counters not enabled. TaskProf requires a machine with Hardware Performance Counters. Exiting build."
else
    root_cwd="$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )" #
    echo $root_cwd

    echo "***** Building TaskProf *****"
    export LD_LIBRARY_PATH=""
    cd $root_cwd
    cd src/ptprof_lib/online_profiler
    make clean
    make
    source tpvars.sh

    echo "***** Building TBB *****"
    cd $root_cwd
    cd src/tprof-tbb-lib
    make clean
    make
    source obj/tbbvars.sh
    cd $root_cwd
fi
