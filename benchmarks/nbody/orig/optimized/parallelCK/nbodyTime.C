// This code is part of the Problem Based Benchmark Suite (PBBS)
// Copyright (c) 2011 Guy Blelloch and the PBBS team
//
// Permission is hereby granted, free of charge, to any person obtaining a
// copy of this software and associated documentation files (the
// "Software"), to deal in the Software without restriction, including
// without limitation the rights (to use, copy, modify, merge, publish,
// distribute, sublicense, and/or sell copies of the Software, and to
// permit persons to whom the Software is furnished to do so, subject to
// the following conditions:
//
// The above copyright notice and this permission notice shall be included
// in all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
// OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
// MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
// NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE
// LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION
// OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION
// WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

#include <iostream>
#include <algorithm>
#include "gettime.h"
#include "utils.h"
#include "geometry.h"
#include "geometryIO.h"
#include "parseCommandLine.h"
#include "parallel.h"
#include "nbody.h"

#include "tbb/task_scheduler_init.h"

using namespace std;
using namespace benchIO;

// *************************************************************
//  TIMING
// *************************************************************

void timeNBody(point3d* pts, intT n, int rounds, char* outFile) {
  particle** p = newA(particle*,n);
  particle* pp = newA(particle, n);
  //{parallel_for (intT i=0; i < n; i++) 
  //  p[i] = new (&pp[i]) particle(pts[i],1.0);}
  parallel_for(
	       tbb::blocked_range<intT>(0, n),
	       [=](tbb::blocked_range<intT> br)
	       {for( intT i=br.begin(); i!=br.end(); ++i ) {
		   p[i] = new (&pp[i]) particle(pts[i],1.0);
		 }
	       }
	       );


  for (int i=0; i < rounds; i++) {
    startTime();
    nbody(p, n);
    nextTimeN();
  }
  cout << endl;

  point3d* O = newA(point3d,n);
  //parallel_for(intT i=0; i < n; i++) 
  //O[i] = point3d(0.,0.,0.) + p[i]->force;
  parallel_for(
	       tbb::blocked_range<intT>(0, n),
	       [=](tbb::blocked_range<intT> br)
	       {for( intT i=br.begin(); i!=br.end(); ++i ) {
		   O[i] = point3d(0.,0.,0.) + p[i]->force;
		 }
	       }
	       );


  if (outFile != NULL) 
    writePointsToFile(O,n,outFile);

  free(O);
  free(p);
  free(pp);
}

int parallel_main(int argc, char* argv[]) {
  commandLine P(argc,argv,"[-o <outFile>] [-r <rounds>] <inFile>");
  char* iFile = P.getArgument(0);
  char* oFile = P.getOptionValue("-o");
  int rounds = P.getOptionIntValue("-r",1);
  int threads = P.getOptionIntValue("-t",16);

  tbb::task_scheduler_init init(threads);

  _seq<point3d> PIn = readPointsFromFile<point3d>(iFile);
  timeNBody(PIn.A, PIn.n, rounds, oFile);

  const double MULTIPLIER = 4096.0/(1024.0*1024.0); // 4kB page size, 1024*1024 bytes per MB,
  FILE* proc_file;
  int total_size_in_pages = 0;
  int res_size_in_pages = 0;

  proc_file = fopen("/proc/self/statm", "r");
  fscanf(proc_file, "%d %d", &total_size_in_pages, &res_size_in_pages);

  fprintf(stderr, "memory_total = %lf MB\n", total_size_in_pages*MULTIPLIER);
  fprintf(stderr, "memory_resident = %lf MB\n", res_size_in_pages*MULTIPLIER);
}
