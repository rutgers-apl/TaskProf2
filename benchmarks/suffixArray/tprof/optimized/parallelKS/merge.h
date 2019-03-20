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

// This code breaks with suffixArray if _MERGE_BSIZE is lowered
// not sure if it is the fault of this code or suffix array

#include "parallel.h"
#define _MERGE_BSIZE (1 << 12)

template <class ET, class F, class intT> 
intT binSearchO(ET* S, intT n, ET v, F f) {
  if (n == 0) return 0;
  else { 
    intT mid = n/2;
    if (f(v,S[mid])) return binSearch(S, mid, v, f);
    else return mid + 1 + binSearch(S+mid+1, (n-mid)-1, v, f);
  }
}

template <class ET, class F, class intT> 
int binSearch(ET* S, intT n, ET v, F f) {
  ET* T = S;
  while (n > 0) {
    intT mid = n/2;
    if (f(v,T[mid])) n = mid;
    else {
      n = (n-mid)-1;
      T = T + mid + 1;
    }
  }
  return T-S;
}

template <class ET, class F, class intT>
  struct mergeTask:public tbb::t_debug_task {
  ET* S1; intT l1; ET* S2; intT l2; ET* R; F f;

 mergeTask(ET* SS1, intT ll1, ET* SS2, intT ll2, ET* RR, F ff):S1(SS1),l1(ll1),S2(SS2),l2(ll2),R(RR),f(ff) {}
  
  tbb::task* execute() {
    __exec_begin__(getTaskId(),__FILE__,__LINE__);
    intT lr = l1 + l2;
    if (lr > _MERGE_BSIZE) {
      // always split the larger in half
      if (l2>l1) {
	set_ref_count(2);
	tbb::task& b = *new(tbb::task::allocate_child()) mergeTask(S2,l2,S1,l1,R,f);
	tbb::t_debug_task::spawn_and_wait_for_all(b,__FILE__,__LINE__);	
	//merge(S2,l2,S1,l1,R,f);
      } else {
	intT m1 = l1/2;
	intT m2 = binSearch(S2,l2,S1[m1],f);
	set_ref_count(3);
	tbb::task& a = *new(tbb::task::allocate_child()) mergeTask<ET,F,intT>(S1,m1,S2,m2,R,f);
	tbb::t_debug_task::spawn(a,__FILE__,__LINE__);
	tbb::task& b = *new(tbb::task::allocate_child()) mergeTask<ET,F,intT>(S1+m1,l1-m1,S2+m2,l2-m2,R+m1+m2,f);
	tbb::t_debug_task::spawn_and_wait_for_all(b,__FILE__,__LINE__);
	/* cilk_spawn merge(S1,m1,S2,m2,R,f); */
	/* merge(S1+m1,l1-m1,S2+m2,l2-m2,R+m1+m2,f); */
	/* cilk_sync; */
      }
    } else {  // sequential merge
      ET* pR = R; 
      ET* pS1 = S1; 
      ET* pS2 = S2;
      ET* eS1 = S1+l1; 
      ET* eS2 = S2+l2;
      while (true) {
	if (pS1==eS1) {std::copy(pS2,eS2,pR); break;}
	if (pS2==eS2) {std::copy(pS1,eS1,pR); break;}
	*pR++ = f(*pS2,*pS1) ? *pS2++ : *pS1++;
      }
    }
    __exec_end__(getTaskId(),__FILE__,__LINE__);
    return NULL;
  }

};

template <class ET, class F, class intT> 
void merge(ET* S1, intT l1, ET* S2, intT l2, ET* R, F f) {
  tbb::task& main_task = *new(tbb::task::allocate_root()) mergeTask<ET,F,intT>(S1,l1,S2,l2,R,f);
  tbb::t_debug_task::spawn_root_and_wait(main_task,__FILE__,__LINE__);
  
  /* intT lr = l1 + l2; */
  /* if (lr > _MERGE_BSIZE) { */
  /*   // always split the larger in half */
  /*   if (l2>l1)  merge(S2,l2,S1,l1,R,f); */
  /*   else { */
  /*     intT m1 = l1/2; */
  /*     intT m2 = binSearch(S2,l2,S1[m1],f); */
  /*     cilk_spawn merge(S1,m1,S2,m2,R,f); */
  /*     merge(S1+m1,l1-m1,S2+m2,l2-m2,R+m1+m2,f); */
  /*     cilk_sync; */
  /*   } */
  /* } else {  // sequential merge */
  /*   ET* pR = R;  */
  /*   ET* pS1 = S1;  */
  /*   ET* pS2 = S2; */
  /*   ET* eS1 = S1+l1;  */
  /*   ET* eS2 = S2+l2; */
  /*   while (true) { */
  /*     if (pS1==eS1) {std::copy(pS2,eS2,pR); break;} */
  /*     if (pS2==eS2) {std::copy(pS1,eS1,pR); break;} */
  /*     *pR++ = f(*pS2,*pS1) ? *pS2++ : *pS1++; */
  /*   } */
  /* } */
}
