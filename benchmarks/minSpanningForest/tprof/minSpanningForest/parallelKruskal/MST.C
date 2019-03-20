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
#include <limits.h>
#include "sequence.h"
#include "graph.h"
#include "parallel.h"
#include "MST.h"
#include "gettime.h"
#include "speculative_for.h"
#include "unionFind.h"
using namespace std;

// #if defined(CILK) || defined(CILKP)
#include "sampleSort.h"
// #elif defined(OPENMP)
// #include "stlParallelSort.h"
// #else
//#include "serialSort.h"
// #endif

// **************************************************************
//    FIND OPERATION FOR UNION FIND
// **************************************************************

// Assumes root is negative
inline intT find(intT i, intT* parent) {
  if ((parent[i]) < 0) return i;
  intT j = parent[i];     
  if (parent[j] < 0) return j;
  do j = parent[j]; 
  while (parent[j] >= 0);
  intT tmp;
  // shortcut all links on path
  while ((tmp = parent[i]) != j) { 
    parent[i] = j;
    i = tmp;
  }
  return j;
}

// **************************************************************
//    PARALLEL VERSION OF KRUSKAL'S ALGORITHM
// **************************************************************

struct indexedEdge {
  intT u;
  intT v;
  intT id;
  indexedEdge(intT _u, intT _v, intT _id) : u(_u), v(_v), id(_id) {}
};

struct UnionFindStep {
  intT u;  intT v;  
  indexedEdge *E;  reservation *R;  unionFind UF;  bool *inST;
  UnionFindStep(indexedEdge* _E, unionFind _UF, reservation* _R, bool* ist) 
    : E(_E), R(_R), UF(_UF), inST(ist) {}

  bool reserve(intT i) {
    u = UF.find(E[i].u);
    v = UF.find(E[i].v);
    if (u != v) {
      R[v].reserve(i);
      R[u].reserve(i);
      return 1;
    } else return 0;
  }

  bool commit(intT i) {
    if (R[v].check(i)) {
      R[u].checkReset(i); 
      UF.link(v, u); 
      inST[E[i].id] = 1;
      return 1;}
    else if (R[u].check(i)) {
      UF.link(u, v); 
      inST[E[i].id] = 1;
      return 1; }
    else return 0;
  }
};

template <class E, class F>
intT almostKth(E* A, E* B, intT k, intT n, F f) {
  intT ssize = min<intT>(1000,n);
  intT stride = n/ssize;
  intT km = (intT) (k * ((double) ssize) / n);
  E T[ssize];
  for (intT i = 0; i < ssize; i++) T[i] = A[i*stride];
  sort(T,T+ssize,f);
  E p = T[km];

  bool *flags = newA(bool,n);
  //{parallel_for (intT i=0; i < n; i++) flags[i] = f(A[i],p);}
  parallel_for(
	       tbb::blocked_range<intT>(0,n),
	       [=](tbb::blocked_range<intT> r, size_t thdId)
	       {for( intT i=r.begin(); i!=r.end(); ++i ) {
		   flags[i] = f(A[i],p);
		 }
	       }, __FILE__, __LINE__
	       );

  intT l = sequence::pack(A,B,flags,n);
  //{parallel_for (intT i=0; i < n; i++) flags[i] = !flags[i];}
  parallel_for(
	       tbb::blocked_range<intT>(0,n),
	       [=](tbb::blocked_range<intT> r, size_t thdId)
	       {for( intT i=r.begin(); i!=r.end(); ++i ) {
		   flags[i] = !flags[i];
		 }
	       }, __FILE__, __LINE__
	       );

  sequence::pack(A,B+l,flags,n);
  free(flags);
  return l;
}

typedef pair<double,intT> ei;

struct edgeLess {
  bool operator() (ei a, ei b) const { 
    return (a.first == b.first) ? (a.second < b.second) 
      : (a.first < b.first);}};

pair<intT*,intT> mst(wghEdgeArray<intT> G) { 
  //startTime();
  wghEdge<intT> *E = G.E;
  ei* x = newA(ei,G.m);
  // parallel_for (intT i=0; i < G.m; i++) 
  //   x[i] = ei(E[i].weight,i);
  parallel_for(
	       tbb::blocked_range<intT>(0,G.m),
	       [=](tbb::blocked_range<intT> r, size_t thdId)
	       {for( intT i=r.begin(); i!=r.end(); ++i ) {
		   x[i] = ei(E[i].weight,i);
		 }
	       }, __FILE__, __LINE__
	       );

  //nextTime("copy with id");

  intT l = min<intT>(4*G.n/3,G.m);
  ei* y = newA(ei,G.m);
  l = almostKth(x, y, l, G.m, edgeLess());
  //nextTime("kth smallest");

  //__OPTIMIZE__BEGIN__
  compSort(y, l, edgeLess());
  //__OPTIMIZE__END__
  //nextTime("first sort");

  unionFind UF(G.n);
  reservation *R = new reservation[G.n];
  //nextTime("initialize nodes");

  indexedEdge* z = newA(indexedEdge,G.m);
  // parallel_for (intT i=0; i < l; i++) {
  //   intT j = y[i].second;
  //   z[i] = indexedEdge(E[j].u,E[j].v,j);
  // }
  parallel_for(
	       tbb::blocked_range<intT>(0,l),
	       [=](tbb::blocked_range<intT> r, size_t thdId)
	       {for( intT i=r.begin(); i!=r.end(); ++i ) {
		   intT j = y[i].second;
		   z[i] = indexedEdge(E[j].u,E[j].v,j);		   
		 }
	       }, __FILE__, __LINE__
	       );

  //nextTime("copy to edges");

  bool *mstFlags = newA(bool, G.m);
  //parallel_for (intT i=0; i < G.m; i++) mstFlags[i] = 0;
  parallel_for(
	       tbb::blocked_range<intT>(0,G.m),
	       [=](tbb::blocked_range<intT> r, size_t thdId)
	       {for( intT i=r.begin(); i!=r.end(); ++i ) {
		   mstFlags[i] = 0;
		 }
	       }, __FILE__, __LINE__
	       );
  UnionFindStep UFStep(z, UF, R,  mstFlags);
  speculative_for(UFStep, 0, l, 50);
  free(z);
  //nextTime("first union find loop");

  bool *flags = newA(bool,G.m-l);
  // parallel_for (intT i = 0; i < G.m-l; i++) {
  //   intT j = y[i+l].second;
  //   intT u = UF.find(E[j].u);
  //   intT v = UF.find(E[j].v);
  //   if (u != v) flags[i] = 1;
  //   else flags[i] = 0;
  // }
  parallel_for(
	       tbb::blocked_range<intT>(0,G.m-l),
	       [=](tbb::blocked_range<intT> r, size_t thdId)
	       {for( intT i=r.begin(); i!=r.end(); ++i ) {
		   intT j = y[i+l].second;
		   intT u = UF.find(E[j].u);
		   intT v = UF.find(E[j].v);
		   if (u != v) flags[i] = 1;
		   else flags[i] = 0;
		 }
	       }, __FILE__, __LINE__
	       );

  intT k = sequence::pack(y+l, x, flags, G.m-l);
  free(flags);
  free(y);
  //nextTime("filter out self edges");

  //__OPTIMIZE__BEGIN__
  compSort(x, k, edgeLess());
  //__OPTIMIZE__END__
  //nextTime("second sort");

  z = newA(indexedEdge, k);
  // parallel_for (intT i=0; i < k; i++) {
  //   intT j = x[i].second;
  //   z[i] = indexedEdge(E[j].u,E[j].v,j);
  // }
  parallel_for(
	       tbb::blocked_range<intT>(0,k),
	       [=](tbb::blocked_range<intT> r, size_t thdId)
	       {for( intT i=r.begin(); i!=r.end(); ++i ) {
		   intT j = x[i].second;
		   z[i] = indexedEdge(E[j].u,E[j].v,j);
		 }
	       }, __FILE__, __LINE__
	       );

  free(x);
  //nextTime("copy to edges");

  UFStep = UnionFindStep(z, UF, R, mstFlags);
  speculative_for(UFStep, 0, k, 10);

  free(z); 
  //nextTime("second union find loop");

  intT* mst = newA(intT, G.m);
  intT nInMst = sequence::packIndex(mst, mstFlags, G.m);
  free(mstFlags);
  //nextTime("pack results");

  //cout << "n=" << G.n << " m=" << G.m << " nInMst=" << nInMst << endl;
  UF.del(); delete R;
  return pair<intT*,intT>(mst, nInMst);
}
