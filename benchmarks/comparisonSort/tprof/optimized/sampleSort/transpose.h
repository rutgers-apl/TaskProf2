// This code is part of the Problem Based Benchmark Suite (PBBS)
// Copyright (c) 2010 Guy Blelloch and the PBBS team
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

#ifndef A_TRANSPOSE_INCLUDED
#define A_TRANSPOSE_INCLUDED

#include "t_debug_task.h"
#include "parallel.h"

#define _TRANS_THRESHHOLD 64

template <class E, class intT>
  struct transpose {
    E *A, *B;
  transpose(E *AA, E *BB) : A(AA), B(BB) {}

    template <class F, class intTT>
      struct transR:public tbb::t_debug_task {
      intT rStart, rCount, rLength, cStart, cCount, cLength;
      struct transpose<F,intT>* bt;

    transR(struct transpose<F,intTT>* bbt, intT rrStart, intT rrCount, intT rrLength,
	   intT ccStart, intT ccCount, intT ccLength)
      : bt(bbt),rStart(rrStart), rCount(rrCount), rLength(rrLength),
	cStart(ccStart), cCount(ccCount), cLength(ccLength) {}

      tbb::task* execute() {
	__exec_begin__(getTaskId(),__FILE__,__LINE__);
	//cout << "cc,rc: " << cCount << "," << rCount << endl;
	if (cCount < _TRANS_THRESHHOLD && rCount < _TRANS_THRESHHOLD) {
	  for (intT i=rStart; i < rStart + rCount; i++) 
	    for (intT j=cStart; j < cStart + cCount; j++) 
	      bt->B[j*cLength + i] = bt->A[i*rLength + j];
	} else if (cCount > rCount) {
	  intT l1 = cCount/2;
	  intT l2 = cCount - cCount/2;
	
	  set_ref_count(3);
	  tbb::task& a = *new(tbb::task::allocate_child()) transR<F,intTT>(bt,rStart,rCount,rLength,cStart,l1,cLength);
	  tbb::t_debug_task::spawn(a,__FILE__,__LINE__);
	  tbb::task& b = *new(tbb::task::allocate_child()) transR<F,intTT>(bt,rStart,rCount,rLength,cStart + l1,l2,cLength);
	  tbb::t_debug_task::spawn_and_wait_for_all(b,__FILE__,__LINE__);
	} else {
	  intT l1 = rCount/2;
	  intT l2 = rCount - rCount/2;

	  set_ref_count(3);
	  tbb::task& a = *new(tbb::task::allocate_child()) transR<F,intTT>(bt,rStart,l1,rLength,cStart,cCount,cLength);
	  tbb::t_debug_task::spawn(a,__FILE__,__LINE__);
	  tbb::task& b = *new(tbb::task::allocate_child()) transR<F,intTT>(bt,rStart + l1,l2,rLength,cStart,cCount,cLength);
	  tbb::t_debug_task::spawn_and_wait_for_all(b,__FILE__,__LINE__);
	}
	__exec_end__(getTaskId(),__FILE__,__LINE__);
	return NULL;
      }

    };    

    void trans(intT rCount, intT cCount) {
      tbb::task& main_task = *new(tbb::task::allocate_root()) transR<E,intT>(this, 0,rCount,cCount,0,cCount,rCount);
      tbb::t_debug_task::spawn_root_and_wait(main_task,__FILE__,__LINE__);
    }
  };

template <class E, class intT>
  struct blockTrans {
    E *A, *B;
    intT *OA, *OB, *L;

  blockTrans(E *AA, E *BB, intT *OOA, intT *OOB, intT *LL) 
  : A(AA), B(BB), OA(OOA), OB(OOB), L(LL) {}

    template <class F, class intTT>
    struct transR:public tbb::t_debug_task {
      intT rStart, rCount, rLength, cStart, cCount, cLength;
      struct blockTrans<F,intT>* bt;

    transR(struct blockTrans<F,intTT>* bbt, intT rrStart, intT rrCount, intT rrLength,
	   intT ccStart, intT ccCount, intT ccLength)
      : bt(bbt),rStart(rrStart), rCount(rrCount), rLength(rrLength),
	cStart(ccStart), cCount(ccCount), cLength(ccLength) {}

      tbb::task* execute() {
	__exec_begin__(getTaskId(),__FILE__,__LINE__);
	//cout << "cc,rc: " << cCount << "," << rCount << endl;
	if (cCount < _TRANS_THRESHHOLD && rCount < _TRANS_THRESHHOLD) {
	  for (intT i=rStart; i < rStart + rCount; i++) 
	    for (intT j=cStart; j < cStart + cCount; j++) {
	      E* pa = bt->A+bt->OA[i*rLength + j];
	      E* pb = bt->B+bt->OB[j*cLength + i];
	      intT l = bt->L[i*rLength + j];
	      //cout << "pa,pb,l: " << pa << "," << pb << "," << l << endl;
	      for (intT k=0; k < l; k++) *(pb++) = *(pa++);
	    }
	} else if (cCount > rCount) {
	  intT l1 = cCount/2;
	  intT l2 = cCount - cCount/2;
	
	  set_ref_count(3);
	  tbb::task& a = *new(tbb::task::allocate_child()) transR<F,intTT>(bt,rStart,rCount,rLength,cStart,l1,cLength);
	  tbb::t_debug_task::spawn(a,__FILE__,__LINE__);
	  tbb::task& b = *new(tbb::task::allocate_child()) transR<F,intTT>(bt,rStart,rCount,rLength,cStart + l1,l2,cLength);
	  tbb::t_debug_task::spawn_and_wait_for_all(b,__FILE__,__LINE__);
	} else {
	  intT l1 = rCount/2;
	  intT l2 = rCount - rCount/2;

	  set_ref_count(3);
	  tbb::task& a = *new(tbb::task::allocate_child()) transR<F,intTT>(bt,rStart,l1,rLength,cStart,cCount,cLength);
	  tbb::t_debug_task::spawn(a,__FILE__,__LINE__);
	  tbb::task& b = *new(tbb::task::allocate_child()) transR<F,intTT>(bt,rStart + l1,l2,rLength,cStart,cCount,cLength);
	  tbb::t_debug_task::spawn_and_wait_for_all(b,__FILE__,__LINE__);
	}
	__exec_end__(getTaskId(),__FILE__,__LINE__);
	return NULL;
      }

    };
 
    void trans(intT rCount, intT cCount) {
      tbb::task& main_task = *new(tbb::task::allocate_root()) transR<E,intT>(this, 0,rCount,cCount,0,cCount,rCount);
      tbb::t_debug_task::spawn_root_and_wait(main_task,__FILE__,__LINE__);
    }

  } ;

#endif // A_TRANSPOSE_INCLUDED
