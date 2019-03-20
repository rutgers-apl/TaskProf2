We present, TaskProf2, a profiler for identifying performance
bottlenecks in task-based parallel programs written in C++ using Intel
Threading Building Blocks library(TBB).

PART 1 - Getting Started
------------------------

## Requirements

The artifact requires a Linux based multi-core machine (ideally 16
cores and greater) with at least 64GB of RAM. We have tested it on
Ubuntu 14.04 and 16.04. The artifact requires about 3 GB of disk space
during execution.

TaskProf relies on hardware support for performance counters. To
access the performance counters, TaskProf must be executed directly on
the machine and not through a VM. Currently available VMs cannot
access the host machine's performance counters. The build script that
we provide for installation, checks if the machine supports hardware
performance counters. Alternatively, to check if the machine supports
hardware performance counters,

	dmesg | grep PMU
	
If the output is "Performance Events: Unsupported...", then the
machine does not support performance counters and TaskProf cannot be
executed on the machine.

## Installation

We use <ART_ROOT> to refer to the base directory of the artifact.

Install perf. On Ubuntu, the following command can be used to install
perf.

	sudo apt-get install linux-tools-common linux-tools-generic linux-tools-`uname -r`
	
We had to extend the TBB library to enable measurement of performance
counter events. We provide two version of the TBB library. (1) TBB
without TaskProf extensions to measure running time and speedup, and
(2) TBB with TaskProf extensions for profiling. Install each version
in **separate shell**

Install TBB without TaskProf

	cd <ART_ROOT>
	source build_orig_tbb.sh

In separate shell, install TBB and TaskProf

        cd <ART_ROOT>
        source build_tprof.sh	
	
## Usage

We demonstrate how to use TaskProf with test programs. First, we show
how to TaskProf's what-if analyses to identify serialization
bottlenecks and regions that must be optimized to increase
parallelism. Next, we show how TaskProf identifies spawn sites with
high task creation overheads. Finally, we show how to identify
secondary effects using TaskProf's differential analyses.

## What-if analyses

We demonstrate TaskProf's what-if analyses using the "primes" example.

       cd <ART_ROOT>/tests/primes

First, measure the speedup of the primes program (on the shell with TBB
without TaskProf extensions)

       cd orig
       make

Run serial program and then task based program

       time ./detect_primes 0 10000000
       time ./detect_primes_tasks 0 10000000 2500000

Expected speedup is 2.89X.

Next, run the primes program with TaskProf(On shell with TBB with TaskProf).

      cd <ART_ROOT>/tests/primes/tprof
      make
      ./detect_primes_tasks 0 10000000 2500000

Generate what-if regions and profile

      $TP_GENPROF/gentprof

This generates four csv files. The parallelism_profile.csv specifies
the parallelism of the program(first line after headers) and the
parallelism at each spawn site in the program(rest of the lines). The
parallelism of the program should be around 2.9.

The what_if_regions.csv file specifies the regions that must be
optimized to increase the parallelism in the program. For the primes
program, TaskProf specifies the region between lines 32 and 47 in
detect_primes_tasks.cpp file. To optimize this region re-run the
program with reduced grain size.

  	./detect_primes_tasks 0 10000000 10000
	$TP_GENPROF/gentprof

The parallelism in parallelism_profile.csv has increased to 216.3.

Similarly, the speedup of the program on TBB without TaskProf shell
would have increased 3.85X to after executing,

	time ./detect_primes_tasks 0 10000000 10000

## Task creation overhead

We demonstrate how TaskProf highlights task creation overheads using a
test program. In the shell with TaskProf

        cd <ART_ROOT>/tests/sched_overhead/
	make
	./test_task_creation 1
	$TP_GENPROF/gentprof

This generates the tasking overhead profile in the file
task_overhead_profile.csv. The profile shows that the program has a
high task creation overhead of 87% of the total useful work. Three
spawn sites at lines 46,47 and 69 contribute almost all of the
overhead at 35, 35, and 28 percent respectively.

Now, reduce the task creation overhead by increasing the grainsize and
generate the profile.

	./test_task_creation 512
	$TP_GENPROF/gentprof

In the task_overhead_profile.csv, the overall task creation overhead
reduced from 87% to 4%.

## Secondary effects

We demonstrate TaskProf's differential analyses to identify secondary
effects using an example that has false sharing. First, measure the
speedup of the program in the shell for TBB without TaskProf.

	cd <ART_ROOT>/tests/false_sharing/orig
	make
	time ./ser_small_array
	time ./par_small_array

The parallel program should run slower than the serial program. Now in
the shell will TBB with TaskProf, run the differential analyses
profiler.

The differential analyses profiler is a python script located in
<ART_ROOT>/scripts. The python script automates performing
differential analyses over multiple performance counters and generates
the profile in the file diff_profile.csv.

    	cd <ART_ROOT>/tests/false_sharing/tprof
	make
	python ../../../scripts/diff_profiler.py -b par_small_array

Running the python script will take about 5 minutes to complete. The
diff_profile.csv file shows the differential profile for the test
program. The profile shows in the first line that the program has high
inflation in cycles (25.7X). It also highlight the region at line 25
(parallel_for) in par_small_array.cpp file as having high inflation in
cycles and HITM counters. This region is experiencing false sharing.

After fixing the false sharing,

        python ../../../scripts/diff_profiler.py -b par_small_array_padded

The diff_profile.csv does not show inflation in cycles, and negligible
inflation in other counters.

Next, measure the speedup after fixing the false sharing in the shell
with TBB without TaskProf.

        time ./par_small_array_padded

This should show a speedup of almost 16X over the serial execution.

PART 2 - Step-by-step Instructions
----------------------------------

In this section, we will demonstrate how to use TaskProf on all of the
case studies described in the paper. The applications used in the case
studies are provided in the "benchmarks" directory. Please maintain
two shells, one with TBB without TaskProf extensions for speedup
measurements, and other with TBB and TaskProf for profiling. For each
application, we provide two versions, (1) the original program, (2)
the program after optimizing the regions we found with TaskProf.

## MILCmk

Measure the initial speedup of original MILCmk program in the shell
with TBB without TaskProf Extensions.

	 cd <ART_ROOT>/benchmarks/MILCmk/orig/MILCmk
	 source run.sh

The run.sh shell script will run both the serial and parallel versions
of the program and print the running times of the programs. The
speedup of the parallel execution over the serial execution should be
around 2.2X.

We provide a script that will execute both the what-if analyses and
differential analysis on the program. In the shell with TaskProf and
TBB,

	cd <ART_ROOT>/benchmarks/MILCmk/tprof/MILCmk
	source run.sh

This will generate the generate the parallelism profile, tasking
overhead profile, what-if regions, what-if profile, and differential
analysis profile similar to Figure 5(a), 5(b), and 5(d) in the paper.
The diff_profile.csv results may not be exactly similar to the results
in the paper, since the numbers depend on the actual execution
environment. Nevertheless, it should show 5 regions to have high
inflation in all counters. The regions are parallel_for calls at
QLA_F3_M_veq_M_times_pM.c:29
QLA_F3_V_vpeq_M_times_pV.c:27
QLA_F3_D_vpeq_spproj_M_times_pD.c:50
QLA_F3_V_veq_Ma_times_V.c:27
QLA_F3_V_vmeq_pV.c:22

After optimizing the regions highlighted in the profiles, we provide
the optimized code in,

    	cd <ART_ROOT>/benchmarks/MILCmk/orig/optimized

Measure the speedup after optimization by executing the run.sh shell
script in the shell with TBB without TaskProf.

	source run.sh

The speedup of the program should increase to about 5.5X.
The TaskProf profiles after optimization can be generated by,

    	cd <ART_ROOT>/benchmarks/MILCmk/tprof/optimized
	source run.sh

The overall inflation in the program reduces. The inflation in the 5
regions mentioned above should also reduce. The task creation overhead
will also reduce.

## NBody

Measure the initial speedup of the original NBody program in the shell
for TBB without TaskProf Extensions. For the first run the input file
has to be generated.

       	cd <ART_ROOT>/benchmarks/nbody/orig/nbody
	cd parallelCK
	source generate_inputs.sh

To run the serial and parallel versions of the program to measure
speedup,
	
	source run.sh

The speedup of the program should be around 12.2X.

In the shell with TBB for TaskProf, run the program with TaskProf's
what-if analyses. We provide a shell script.

	cd <ART_ROOT>/benchmarks/nbody/tprof/nbody/parallelCK
	source generate_inputs.sh (only the first time)
	source run.sh

The task_overhead_profile.csv should show that the program has a
tasking overhead of 16 percent (first line). Most of the tasking
overhead is due to three lines CK.C:276, CK.C:289, and CK.C:300. This
should be similar to the profiles shown in Figure 7 in the paper.

To measure the speedup after optimization,

   	cd <ART_ROOT>/benchmarks/nbody/orig/optimized/parallelCK
	source generate_inputs.sh (only the first time in current directory)
	source run.sh

The speedup of the program should increase to 13.8X. To generate the
profiles after optimization,

	 cd <ART_ROOT>/benchmarks/nbody/tprof/optimized/parallelCK
	 source generate_inputs.sh (only the first time)
	 source run.sh

The tasking overhead of the program should reduce.

## MinSpanningForest

Measure initial speedup in the shell for TBB without TaskProf.

	cd <ART_ROOT>/benchmarks/minSpanningForest/orig/minSpanningForest/parallelKruskal
	source generate_inputs.sh
	source run.sh

The initial speedup is around 6.4X. In the shell with TBB for
TaskProf, run the program with TaskProf's what-if analyses

	cd <ART_ROOT>/benchmarks/minSpanningForest/tprof/minSpanningForest/parallelKruskal
	source generate_inputs.sh
	source run.sh

The parallel_profile.csv file shows the parallelism in the program.
The first line in the what_if_regions.csv profile shows the region
between the lines sequence.h,227 and sampleSort.h,143. This region
contains two function calls, transpose and blockTrans which are being
executed serially. These profiles correspond to Figure 7(II) in the
paper.

After parallelizing the two functions, to measure speedup, run the
following commands,

	cd <ART_ROOT>/benchmarks/minSpanningForest/orig/optimized/parallelKruskal
	source generate_inputs.sh (first time only)
	
The speedup after parallelization with increase to about 9X.

## Lulesh

Measure initial speedup in the shell for TBB without TaskProf.

	cd <ART_ROOT>/benchmarks/lulesh/orig/lulesh
	source run.sh

The initial speedup is around 4.1X. Run TaskProf's differential
analyses in the shell with TBB and TaskProf.

	cd <ART_ROOT>/benchmarks/lulesh/tprof/lulesh
	source run.sh

This will generate the differential analysis profile in
diff_profile.csv file similar to Figure 6 in the paper. The
diff_profile.csv results may not be exactly similar to the results in
the paper, since the numbers depend on the actual execution
environment. The profile shows a high inflation of about 4X for the
entire program (first line, CYCLES).  It shows 2 regions to have high
inflation in all counters. The regions are parallel_for calls at
lulesh.cc:2823
lulesh.cc:2847

To measure the speedup after optimization, in the shell for TBB
without TaskProf, run,

	cd <ART_ROOT>/benchmarks/lulesh/orig/optimized
	source run.sh

The speedup improves to about 5.8X after removing the secondary
effects.

## Swaptions

Measure initial speedup in the shell for TBB without TaskProf.

	cd <ART_ROOT>/benchmarks/swaptions/orig/swaptions
	source run.sh

The initial speedup is around 11.5X. Next, run TaskProf's tasking
overhead analyses in the shell for TBB with TaskProf.

	 cd <ART_ROOT>/benchmarks/swaptions/tprof/swaptions
	 source run.sh

The task_overhead_profile.csv should show that the program has a
tasking overhead of about 48 percent and the spawn site at
HJM_SimPath_Forward_Blocking.cpp line 136 contributes almost all of
the tasking overhead. The profile is similar to Figure 8 in the paper.

To measure the speedup after optimization in the shell with TBB
without TaskProf, run

	cd <ART_ROOT>/benchmarks/swaptions/orig/optimized
	source run.sh

The speedup should increase to about 14X.

To check if the optimization reduced the tasking overhead in the
program, in the shell with TBB and TaskProf, run

	 cd <ART_ROOT>/benchmarks/swaptions/tprof/optimized
	 source run.sh

The tasking overhead reduces to about 8-12% similar to Figure 8 in the
paper.

## breadthFirstSearch

Measure initial speedup in the shell for TBB without TaskProf.

	cd <ART_ROOT>/benchmarks/breadthFirstSearch/orig/bfs/deterministicBFS
	source generate_inputs.sh
	source run.sh

The initial speedup is around 6.6X. Next run what-if analyses in the
shell with TBB and TaskProf.

	cd <ART_ROOT>/benchmarks/breadthFirstSearch/tprof/bfs/deterministicBFS
	source generate_inputs.sh
	source run.sh

The parallel_profile.csv file shows the parallelism in the program to
be 24. The what-if analyses identifies a region in graph.h copy
function which was parallelized. To check the speedup after parallelization,

	cd <ART_ROOT>/benchmarks/breadthFirstSearch/orig/optimized/deterministicBFS
	source generate_inputs.sh
	source run.sh

The speedup of the program increases to 8X after parallelization.

## SpanningForest

Measure initial speedup in the shell for TBB without TaskProf.

	cd <ART_ROOT>/benchmarks/spanningForest/orig/spanningForest/incrementalST
	source generate_inputs.sh
	source run.sh

The initial speedup is around 7X. Next run what-if analyses in the
shell with TBB and TaskProf.

	cd <ART_ROOT>/benchmarks/spanningForest/tprof/spanningForest/incrementalST
	source generate_inputs.sh
	source run.sh

The parallel_profile.csv file shows the parallelism in the program to
be 36. The what-if analyses identifies a region in graphIO.h file delete
function which was parallelized. To check the speedup after parallelization,

	cd <ART_ROOT>/benchmarks/spanningForest/orig/optimized/incrementalST
	source generate_inputs.sh
	source run.sh

The speedup of the program increases to 8.2X after parallelization.

## suffixArray

Measure initial speedup in the shell for TBB without TaskProf.

	cd <ART_ROOT>/benchmarks/suffixArray/orig/suffixArray/parallelKS
	source generate_inputs.sh
	source run.sh

The initial speedup is around 2.1X. Next run what-if analyses in the
shell with TBB and TaskProf.

	cd <ART_ROOT>/benchmarks/suffixArray/tprof/suffixArray/parallelKS
	source generate_inputs.sh
	source run.sh

The parallel_profile.csv file shows the parallelism in the program to
be around 6. The what-if analyses identifies a region in merge.h file
which was parallelized. To check the speedup after parallelization,

	cd <ART_ROOT>/benchmarks/suffixArray/orig/optimized/parallelKS
	source generate_inputs.sh
	source run.sh

The speedup of the program increases to about 6X after parallelization.

## comparisonSort

Measure initial speedup in the shell for TBB without TaskProf.

	cd <ART_ROOT>/benchmarks/comparisonSort/orig/compSort/sampleSort
	source generate_inputs.sh
	source run.sh

The initial speedup is around 4.9X. Next run what-if analyses in the
shell with TBB and TaskProf.

	cd <ART_ROOT>/benchmarks/comparisonSort/tprof/compSort/sampleSort
	source generate_inputs.sh
	source run.sh

The parallel_profile.csv file shows the parallelism in the program to
be around 28. The what-if analyses identifies a region in transpose.h file
which was parallelized. To check the speedup after parallelization,

	cd <ART_ROOT>/benchmarks/comparisonSort/orig/optimized/sampleSort
	source generate_inputs.sh
	source run.sh

The speedup of the program increases to about 6.5X after parallelization.
