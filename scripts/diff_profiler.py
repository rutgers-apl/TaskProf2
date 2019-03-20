#! /usr/bin/python

import argparse,os,string
import util

class Region():
    def __init__(self, beg_line, end_line):
        self.beg_line = beg_line
        self.end_line = end_line
        self.inflations = []

counters=[
    "CYCLES",
    "LOCAL_HITM",
    "REMOTE_HITM",
    "LOCAL_DRAM",
    "REMOTE_DRAM",
    # "INSTRUCTIONS",
    # "PAGE_FAULTS",
    "LLC_MISS",
    # "L1_M_REPLACE",
    # "L1_EVICTION",
    # "L1_REPLACEMENT",
    # "FP_DIVIDE",
]

counter_args=[
    "1",    
    "3",
    "4",
    "5",
    "6",
    # "2",
    # "7",
    "8",
    # "9",
    # "10",
    # "11",
    # "12",
]

#set paths
TBBROOT=os.environ['TBBROOT']
print "TBBROOT = " + TBBROOT
TP_ROOT=os.environ['TP_ROOT']
print "TP_ROOT = " + TP_ROOT
TP_GENPROF=os.environ['TP_GENPROF']
print "TP_GENPROF = " + TP_GENPROF 

#args: path to binary(p),binary name(b),arguments to binary(a)
parser = argparse.ArgumentParser(description='Differential profiling of task parallel programs to identify secondary effects')
parser.add_argument('-p', type=str, default='.',  help='path/to/input/program/executable. Absolute path, not relative path')
parser.add_argument('-b', type=str, help='Executable file name')
#parser.add_argument('-a', type=str, default='', help='argument string of input program')

args = parser.parse_args()

ref_cwd = os.getcwd();

regions = {}

cp = 0

util.chdir(args.p)
exists = os.path.isfile('diff_profile.csv')
if exists:
    util.run_command("rm diff_profile.csv", verbose=False)

#remove step_work.csv sc_ov.csv and step_nodes_serial
util.run_command("rm -rf step_work_*.csv sched_ov_*.csv step_nodes_serial", verbose=False)  
for counter in counter_args:
    #run serial program
    #run_string = "taskset -c 0 ./" + args.b + " " + args.a + " -- " + counter
    run_string = "./" + args.b + " 1 -- " + counter
    util.run_command(run_string, verbose=False)

    #mkdir step_nodes_serial
    util.run_command("mkdir step_nodes_serial", verbose=False)
    util.run_command("mv *.csv step_nodes_serial", verbose=False)

    #run parallel program
    run_string = "./" + args.b + " 16 -- " + counter
    util.run_command(run_string, verbose=False)

    #run gentprof
    gen_prof_string = TP_GENPROF + "/gentprof"
    util.run_command(gen_prof_string, verbose=False) 

    #read diff_profile.csv in regions
    f=open("diff_profile.csv",'r')
    lines = f.read().splitlines()

    for line in lines:
        #print line
        (beg_line, end_line, inflation) = string.split(line, ',')

        key = beg_line + end_line
        if key in regions:
            reg = regions[key]
            reg.inflations.append(inflation)
        else:
            reg = Region(beg_line, end_line)
            reg.inflations.append(inflation)
            regions[key] = reg
    f.close()
    util.run_command("rm diff_profile.csv", verbose=False)
    #remove step_work.csv sc_ov.csv and step_nodes_serial
    util.run_command("rm -rf step_work_*.csv sched_ov_*.csv step_nodes_serial", verbose=False)

    #print regions

#output diff_profile.csv
f=open("diff_profile.csv",'w')

hdr_str = "Region_Begin,Region_End"
for counter in counters:
    hdr_str = hdr_str + "," + counter
hdr_str = hdr_str + "\n"
f.write(hdr_str)

program_stats = regions["ProgramProgram"]
program_str = program_stats.beg_line + "," + program_stats.end_line
for prg in program_stats.inflations:
    program_str = program_str + "," + prg + "X"
program_str = program_str + "\n"
f.write(program_str)

del regions["ProgramProgram"]

for key,reg in regions.items():
    write_str = reg.beg_line + "," + reg.end_line
    for inf in reg.inflations:
        write_str = write_str + "," + inf + "X"
    write_str = write_str + "\n"
    f.write(write_str)
    
f.close()
