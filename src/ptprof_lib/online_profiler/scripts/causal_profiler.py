#! /usr/bin/python

import argparse,os,string
import util

class Region():
    def __init__(self, beg_file, beg_line, end_file, end_line, opt_factor):
        self.beg_file = beg_file
        self.beg_line = beg_line
        self.end_file = end_file
        self.end_line = end_line
        self.opt_factor = opt_factor

#set paths
TBBROOT=os.environ['TBBROOT']
print "TBBROOT = " + TBBROOT
TP_ROOT=os.environ['TP_ROOT']
print "TP_ROOT = " + TP_ROOT

#args: path to binary(p),binary name(b),arguments to binary(a),optimization factor(f),threshold parallelism(t)
parser = argparse.ArgumentParser(description='Causal profiling of task parallel programs')
parser.add_argument('-p', type=str, help='path/to/input/program/executable. Full path, not relative path')
parser.add_argument('-b', type=str, help='Executable file name')
parser.add_argument('-a', type=str, default='', help='argument string of input program')
parser.add_argument('-f', type=int, default=1, help='Optimization factor')
parser.add_argument('-t', type=int, default=1, help='threshold parallelism')
args = parser.parse_args()

ref_cwd = os.getcwd();

#cd to location of binary

regions = []

cp = 0

util.chdir(args.p)
exists = os.path.isfile('causal_regions.csv')
if exists:
    util.run_command("rm causal_regions.csv", verbose=False)

#If parallelism is greater or equal to the threshold, then done, exit.
while cp < args.t:
    run_string = "./" + args.b + " " + args.a
    util.run_command(run_string, verbose=True)

    #open max_region.csv. If not present exit
    exists = os.path.isfile('max_region.csv')
    if not exists:
        print "max_region.csv does not exist"
        exit

    f=open("max_region.csv",'r')
    
    #Read parallelism from first line
    lines = f.read().splitlines()
    cp = float(lines[0])

    (beg_file, beg_line, end_file, end_line) = string.split(lines[1], ',')
    
    f.close()

    found = 0
    for reg in regions:
        if reg.beg_file == beg_file and reg.beg_line == beg_line and reg.end_file == end_file and reg.end_line == end_line:
            found = 1
            reg.opt_factor = reg.opt_factor + 1

    if not found:
        region = Region(beg_file, beg_line, end_file, end_line, 1)
        regions.append(region)

    #if not, copy max region to causal_regions.csv file and re-run the program
    f=open("causal_regions.csv",'w')

    for reg in regions:
        write_str = reg.beg_file + "," + reg.beg_line + "," + reg.end_file + "," + reg.end_line + "," + str(reg.opt_factor*args.f)
        f.write(write_str)

    f.close()
