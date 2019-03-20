#!/bin/bash

    root_cwd="$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )" #
    echo $root_cwd

    echo "***** Building TaskProf *****"
    export LD_LIBRARY_PATH=""
    cd $root_cwd
    cd src/ptprof_lib/collection_phase
    source tpvars.sh

    cd $root_cwd
    cd src/ptprof_lib/analysis_phase
    source tpvars.sh

    echo "***** Building TBB *****"
    cd $root_cwd
    cd src/tprof-tbb-lib
    source obj/tbbvars.sh
    cd $root_cwd
