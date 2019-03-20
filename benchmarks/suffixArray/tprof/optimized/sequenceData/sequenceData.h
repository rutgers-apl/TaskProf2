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

#include <iostream>
#include <fstream>
#include "parallel.h"
#include <math.h>
#include "dataGen.h"

namespace dataGen {

  struct payload {
    double key;
    double payload[2];
  };

  class payloadCmp : public std::binary_function <payload, payload, bool> {
  public:
    bool operator()(payload const& A, payload const& B) const {
      return A.key<B.key;
    }
  };

  template <class T>
  T* rand(intT s, intT e) { 
    intT n = e - s;
    T *A = newA(T, n);
    for (intT i = 0; i < n; i++) { // for some reason cilk_for does not work
      A[i] = hash<T>(i+s);
    }
    return A;
  }

  intT* randIntRange(intT s, intT e, intT m) { 
    intT n = e - s;
    intT *A = newA(intT, n);
    for (intT i = 0; i < n; i++) // for some reason cilk_for does not work
      A[i] = hash<intT>(i+s)%m;
    return A;
  }

  payload* randPayload(intT s, intT e) { 
    intT n = e - s;
    payload *A = newA(payload, n);
    for (intT i = 0; i < n; i++) 
      A[i].key = hash<double>(i+s); // breaks with cilk_for
    return A;
  }

  template <class T>
  T* almostSorted(intT s, intT e, intT swaps) { 
    intT n = e - s;
    T *A = newA(T,n);
    for (intT i = 0; i < n; i++) A[i] = (T) i;
    for (intT i = s; i < s+swaps; i++)
      swap(A[utils::hash(2*i)%n],A[utils::hash(2*i+1)%n]);
    return A;
  }

  template <class T>
  T* same(intT n, T v) { 
    T *A = newA(T,n);
    for (intT i = 0; i < n; i++) A[i] = v;
    return A;
  }

  template <class T>
  T* expDist(intT s, intT e) { 
    intT n = e - s;
    T *A = newA(T,n);
    intT lg = utils::log2Up(n)+1;
    for (intT i = 0; i < n; i++) {
      intT range = (1 << (utils::hash(2*(i+s))%lg));
      A[i] = hash<T>((intT)(range + utils::hash(2*(i+s)+1)%range));
    }
    return A;
  }

};
