
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

#ifndef _myRMQ_hpp_
#define _myRMQ_hpp_

#include <iostream>
#include "parallel.h"
#include "math.h"
#define BSIZE 16
using namespace std;

class myRMQ{
protected:
  intT* a;
  intT n;
  intT m;
  intT** table;
  intT depth;

 public:
  myRMQ(intT* _A, intT _n);
  void precomputeQueries();
  intT query(intT,intT);
  ~myRMQ();
};

myRMQ::myRMQ(intT* _a, intT _n){
  a = _a;
  n = _n;
  m = 1 + (n-1)/BSIZE;
  precomputeQueries();
}

void myRMQ::precomputeQueries(){
  depth = log2(m) + 1;
  table = new intT*[depth];
  /* parallel_for(intT k=0;k<depth;k++) { */
  /*   table[k] = new intT[n]; */
  /* } */
  parallel_for(
	       tbb::blocked_range<intT>(0,depth),
	       [=](tbb::blocked_range<intT> r, size_t thdId)
	       {for( intT k=r.begin(); k!=r.end(); ++k ) {
		   table[k] = new intT[n];
		 }
	       }, __FILE__, __LINE__
	       );

  /* parallel_for(intT i=0; i < m; i++) { */
  /*   intT start = i*BSIZE; */
  /*   intT end = min(start+BSIZE,n); */
  /*   intT k = i*BSIZE; */
  /*   for (intT j = start+1; j < end; j++)  */
  /*     if (a[j] < a[k]) k = j; */
  /*   table[0][i] = k; */
  /* } */
  parallel_for(
	       tbb::blocked_range<intT>(0,m),
	       [=](tbb::blocked_range<intT> r, size_t thdId)
	       {for( intT i=r.begin(); i!=r.end(); ++i ) {
		   intT start = i*BSIZE;
		   intT end = min(start+BSIZE,n);
		   intT k = i*BSIZE;
		   for (intT j = start+1; j < end; j++) 
		     if (a[j] < a[k]) k = j;
		   table[0][i] = k;
		 }
	       }, __FILE__, __LINE__
	       );

  intT dist = 1;
  for(intT j=1;j<depth;j++) {
    /* parallel_for(intT i=0; i< m-dist; i++){ */
    /*   if (a[table[j-1][i]] <= a[table[j-1][i+dist]]) */
    /* 	table[j][i] = table[j-1][i]; */
    /*   else table[j][i] = table[j-1][i+dist]; */
    /* } */
    parallel_for(
		 tbb::blocked_range<intT>(0,(m-dist)),
		 [=](tbb::blocked_range<intT> r, size_t thdId)
		 {for( intT i=r.begin(); i!=r.end(); ++i ) {
		     if (a[table[j-1][i]] <= a[table[j-1][i+dist]])
		       table[j][i] = table[j-1][i];
		     else table[j][i] = table[j-1][i+dist];
		   }
		 }, __FILE__, __LINE__
		 );

    /* parallel_for(intT l = m-dist; l<m; l++) { */
    /*   table[j][l] = table[j-1][l]; */
    /* } */
    parallel_for(
		 tbb::blocked_range<intT>(0,(m-dist)),
		 [=](tbb::blocked_range<intT> r, size_t thdId)
		 {for( intT l=r.begin(); l!=r.end(); ++l ) {
		     table[j][l] = table[j-1][l];
		   }
		 }, __FILE__, __LINE__
		 );
    dist*=2;
  }

}

intT myRMQ::query(intT i, intT j){
  //same block
  if (j-i < BSIZE) {
    intT r = i;
    for (intT k = i+1; k <= j; k++) 
      if (a[k] < a[r]) r = k;
    return r;
  } 
  intT block_i = i/BSIZE;
  intT block_j = j/BSIZE;
  intT min = i;
  for(intT k=i+1;k<(block_i+1)*BSIZE;k++){
    if(a[k] < a[min]) min = k;
  }
  for(intT k=j; k>=(block_j)*BSIZE;k--){
    if(a[k] < a[min]) min = k;
  }
  if(block_j == block_i + 1) return min;
  intT outOfBlockMin;
  //not same or adjacent blocks
  if(block_j > block_i + 1){
    block_i++;
    block_j--;
    if(block_j == block_i) outOfBlockMin = table[0][block_i];
    else if(block_j == block_i + 1) outOfBlockMin = table[1][block_i];
    else {
      intT k = log2(block_j - block_i);
      intT p = 1<<k; //2^k
      outOfBlockMin = a[table[k][block_i]] <= a[table[k][block_j+1-p]]
	? table[k][block_i] : table[k][block_j+1-p];
    }
  }

  return a[min] < a[outOfBlockMin] ? min : outOfBlockMin;

}

myRMQ::~myRMQ(){
  
  /* parallel_for(intT i=0;i<depth;i++){ */
  /*   delete[] table[i]; */
  /* } */
  parallel_for(
	       tbb::blocked_range<intT>(0,depth),
	       [=](tbb::blocked_range<intT> r, size_t thdId)
	       {for( intT i=r.begin(); i!=r.end(); ++i ) {
		   delete[] table[i];
		 }
	       }, __FILE__, __LINE__
	       );

  delete[] table;
}

#endif
