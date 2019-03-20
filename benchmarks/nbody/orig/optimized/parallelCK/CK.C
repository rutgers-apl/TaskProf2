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

// This is an implementation of the Callahan-Kosaraju (CK) algorithm
// for n-body simulation.
//
//   Paul Callahan and S. Rao Kosaraju
//   A decomposition of multi-dimensional point-sets with applications 
//   to k-nearest-neighbors and n-body potential fields 
//   ACM Symposium on Theory of Computation, 1992
// 
// It uses similar ideas to the Greengard-Rothkin FMM method but is
// more flexible for umbalanced trees.  As with FMM it uses
// "Multipole" and "Local" expansion and translations between them.
// For the expansions it uses a modified version of the multipole
// translation code from the PETFMM library using spherical
// harmonics.  The translations are implemented in spherical.h and can
// be changed for any other routines that support the public interface
// of the transform structure.
//
// Similarly to most FMM-based codes it works in the following steps
//   1) build the CK tree recursively (similar to a k-d tree)
//   2) calculate multipole expansions going up the tree
//   3) figure out all far-field interactions using the CK method
//   4) translate all multipole to local expansions along 
//      the far-field interactions calculated in 3).
//   5) propagate local expansions down the tree
//   6) finally add in all direct leaf-leaf interactions
//
// The accuracy can be adjusted using the parameters
//   ALPHA -- controls distance which is considered far-field
//            it is the min ratio of the larger of two interacting 
//            boxes to the distance between them
//   terms -- number of terms in the expansions
//   BOXSIZE -- the max number of particles in each leaf of the tree

#include <iostream>
#include <vector>
#include "gettime.h"
#include "utils.h"
#include "parallel.h"
#include "sequence.h"
#include "geometry.h"
#include "octTree.h"
#include "spherical.h"
#include "nbody.h"

using namespace std;

#define CHECK 0

// Following for 1e-1 accuracy (1.05 seconds for 1million 8 cores)
//#define ALPHA 1.9
//#define terms 3
//#define BOXSIZE 25

// Following for 1e-3 accuracy (4 seconds for 1million 8 cores)
//#define ALPHA 2.2
//#define terms 7
//#define BOXSIZE 60

// Following for 1e-6 accuracy (12.5 seconds for 1million insphere 8 cores)
#define ALPHA 2.65
#define terms 12
#define BOXSIZE 130

// Following for 1e-9 accuracy (40 seconds for 1million 8 cores)
//#define ALPHA 3.0
//#define terms 17
//#define BOXSIZE 250

double check(particle** p, intT n) {
  int nCheck = min<intT>(n,200);
  double* Err = newA(double,nCheck);
  
  // parallel_for (int i=0; i < nCheck; i++) {
  //   intT idx = utils::hash(i)%n;
  //   vect3d force(0.,0.,0.);
  //   for (intT j=0; j < n; j++) {
  //     if (idx != j) {
  // 	vect3d v = (p[j]->pt) - (p[idx]->pt);
  // 	double r2 = v.dot(v);
  // 	force = force + (v * (p[j]->mass * p[idx]->mass / (r2*sqrt(r2))));
  //     }
  //   }

  //   Err[i] = (force - p[idx]->force).Length()/force.Length();
  // }

  parallel_for(
	       tbb::blocked_range<int>(0, nCheck),
	       [=](tbb::blocked_range<int> br)
	       {for( int i=br.begin(); i!=br.end(); ++i ) {
		   intT idx = utils::hash(i)%n;
		   vect3d force(0.,0.,0.);
		   for (intT j=0; j < n; j++) {
		     if (idx != j) {
		       vect3d v = (p[j]->pt) - (p[idx]->pt);
		       double r2 = v.dot(v);
		       force = force + (v * (p[j]->mass * p[idx]->mass / (r2*sqrt(r2))));
		     }
		   }		   
		   Err[i] = (force - p[idx]->force).Length()/force.Length();
		 }
	       }
	       );


  double total = 0.0;
  for(int i=0; i < nCheck; i++) 
    total += Err[i];
  free(Err);
  return total/nCheck;
}

// *************************************************************
//    FORCE CALCULATIONS
// *************************************************************

struct innerExpansion {
  Transform<terms>* TR;
  complex<double> coefficients[terms*terms];
  point3d center;
  void addTo(point3d pt, double mass) {
    TR->P2Madd(coefficients, mass, center, pt);
  }
  void addTo(innerExpansion* y) {
    TR->M2Madd(coefficients, center, y->coefficients, y->center);
  }
  innerExpansion(Transform<terms>* _TR, point3d _center) : TR(_TR), center(_center) {
    for (intT i=0; i < terms*terms; i++) coefficients[i] = 0.0;
  }
  vect3d force(point3d y, double mass) {
    vect3d result;
    double potential;
    TR->M2P(potential, result, y, coefficients, center);
    result = result*mass;
    return result;
  }
  innerExpansion() {}
};

struct outerExpansion {
  Transform<terms>* TR;
  complex<double> coefficients[terms*terms];
  point3d center;
  void addTo(innerExpansion* y) {
    TR->M2Ladd(coefficients, center, y->coefficients, y->center);}
  void addTo(outerExpansion* y) {
    TR->L2Ladd(coefficients, center, y->coefficients, y->center);
  }
  vect3d force(point3d y, double mass) {
    vect3d result;
    double potential;
    TR->L2P(potential, result, y, coefficients, center);
    result = result*mass;
    return result;
  }
  outerExpansion(Transform<terms>* _TR, point3d _center) : TR(_TR), center(_center) {
    for (intT i=0; i < terms*terms; i++) coefficients[i] = 0.0;
  }
  outerExpansion() {}
};

Transform<terms>* TRglobal = new Transform<terms>();

struct node {
  typedef pair<node*,intT> edge;
  node* left;
  node* right;
  particle** particles;
  intT n;
  point3d bot;
  point3d top;
  innerExpansion* Inx;
  outerExpansion* Outx;
  vector<node*> indirectNeighbors;
  vector<edge> leftNeighbors;
  vector<edge> rightNeighbors;
  vector<vect3d*> hold;
  bool leaf() {return left == NULL;}
  node() {}
  point3d center() { return bot + (top-bot)/2.0;}
  double radius() { return (top - bot).Length()/2.0;}
  double lmax() {
    vect3d d = top-bot;
    return max(d.x,max(d.y,d.z));
  }
  node(node* L, node* R, intT _n, point3d _minPt, point3d _maxPt) 
    : left(L), right(R), particles(NULL), n(_n), bot(_minPt), top(_maxPt) {}
  node(particle** P, intT _n, point3d _minPt, point3d _maxPt) 
    : left(NULL), right(NULL), particles(P), n(_n), bot(_minPt), top(_maxPt) {}
};

typedef pair<node*,intT> edge;
typedef pair<point3d,point3d> ppair;

struct ppairF {
  ppair operator() (particle* a) { return ppair(a->pt,a->pt);}
};

struct minmaxpt {
  ppair operator() (ppair a, ppair b) {
    return ppair((a.first).minCoords(b.first),
		 (a.second).maxCoords(b.second));}
};

class BuildTree:public tbb::task {
private:
  particle** particles;
  particle** Tmp;
  bool* Tflags;
  intT n, depth;
  node** ret_val;

public:

  BuildTree(particle** particles, particle** Tmp, bool* Tflags, intT n, intT depth, node** ret_val)
    :particles(particles), Tmp(Tmp), Tflags(Tflags), n(n), depth(depth), ret_val(ret_val) {}

  tbb::task* execute() {
    

    if (depth > 100) abort();

    ppair R = sequence::mapReduce<ppair>(particles, n, minmaxpt(), ppairF());
    point3d minPt = R.first;
    point3d maxPt = R.second;
    if (n < BOXSIZE) {
      *ret_val = new node(particles, n, minPt, maxPt);
      return NULL;
    }

    intT d = 0;
    double mind = 0.0;
    for (int i=0; i < 3; i++) {
      if (maxPt[i] - minPt[i] > mind) {
	d = i;
	mind = maxPt[i] - minPt[i];
      }
    }
    double splitpoint = (maxPt[d] + minPt[d])/2.0;

    for (intT i=0; i < n; i++)
      Tflags[i] = particles[i]->pt[d] < splitpoint;

    // parallel_for(
    // 		 tbb::blocked_range<intT>(0, n),
    // 		 [=](tbb::blocked_range<intT> br)
    // 		 {for( intT i=br.begin(); i!=br.end(); ++i ) {
    // 		     Tflags[i] = particles[i]->pt[d] < splitpoint;
    // 		   }
    // 		 }//, tbb::simple_partitioner()
    // 		 );
  
    intT l = sequence::pack(particles,Tmp,Tflags,n);

    for (intT i=0; i < n; i++) Tflags[i] = !Tflags[i];

    // parallel_for(
    // 		 tbb::blocked_range<intT>(0, n),
    // 		 [=](tbb::blocked_range<intT> br)
    // 		 {for( intT i=br.begin(); i!=br.end(); ++i ) {
    // 		     Tflags[i] = !Tflags[i];
    // 		   }
    // 		 }//, tbb::simple_partitioner()
    // 		 );

    intT r = sequence::pack(particles,Tmp+l,Tflags,n);
    for (intT i=0; i < n; i++) particles[i] = Tmp[i];
    // parallel_for(
    // 		 tbb::blocked_range<intT>(0, n),
    // 		 [=](tbb::blocked_range<intT> br)
    // 		 {for( intT i=br.begin(); i!=br.end(); ++i ) {
    // 		     particles[i] =Tmp[i];
    // 		   }
    // 		 }//, tbb::simple_partitioner()
    // 		 );

    set_ref_count(3);
    //a = cilk_spawn buildTree(particles,Tmp,Tflags,l,depth+1);
    node* a;
    BuildTree& t_a = *new(tbb::task::allocate_child()) BuildTree(particles,Tmp,Tflags,l,depth+1, &a);
    tbb::task::spawn(t_a);
    //b = buildTree(particles+l,Tmp+l,Tflags+l,n-l,depth+1);
    node* b;
    BuildTree& t_b = *new(tbb::task::allocate_child()) BuildTree(particles+l,Tmp+l,Tflags+l,n-l,depth+1, &b);
    tbb::task::spawn(t_b);
    tbb::task::wait_for_all();

    *ret_val = new node(a, b, n, minPt, maxPt);
    
    return NULL;
  }
};

#if 0
node* buildTree(particle** particles, particle** Tmp, bool* Tflags, intT n, intT depth) {
  if (depth > 100) abort();

  ppair R = sequence::mapReduce<ppair>(particles, n, minmaxpt(), ppairF());
  point3d minPt = R.first;
  point3d maxPt = R.second;
  if (n < BOXSIZE) return new node(particles, n, minPt, maxPt);

  intT d = 0;
  double mind = 0.0;
  for (int i=0; i < 3; i++) {
    if (maxPt[i] - minPt[i] > mind) {
      d = i;
      mind = maxPt[i] - minPt[i];
    }
  }
  double splitpoint = (maxPt[d] + minPt[d])/2.0;

  // parallel_for (intT i=0; i < n; i++)
  //   Tflags[i] = particles[i]->pt[d] < splitpoint;

  parallel_for(
	       tbb::blocked_range<intT>(0, n),
	       [=](tbb::blocked_range<intT> br)
	       {for( intT i=br.begin(); i!=br.end(); ++i ) {
		   Tflags[i] = particles[i]->pt[d] < splitpoint;
		 }
	       }
	       );
  
  intT l = sequence::pack(particles,Tmp,Tflags,n);

  //parallel_for (intT i=0; i < n; i++) Tflags[i] = !Tflags[i];

  parallel_for(
	       tbb::blocked_range<intT>(0, n),
	       [=](tbb::blocked_range<intT> br)
	       {for( intT i=br.begin(); i!=br.end(); ++i ) {
		   Tflags[i] = !Tflags[i];
		 }
	       }
	       );

  intT r = sequence::pack(particles,Tmp+l,Tflags,n);
  //parallel_for (intT i=0; i < n; i++) particles[i] = Tmp[i];
  parallel_for(
	       tbb::blocked_range<intT>(0, n),
	       [=](tbb::blocked_range<intT> br)
	       {for( intT i=br.begin(); i!=br.end(); ++i ) {
		   particles[i] =Tmp[i];
		 }
	       }
	       );

  node* a;
  node* b;
  a = cilk_spawn buildTree(particles,Tmp,Tflags,l,depth+1);
  b = buildTree(particles+l,Tmp+l,Tflags+l,n-l,depth+1);
  cilk_sync;

  return new node(a, b, n, minPt, maxPt);
}
#endif

bool far(node* a, node* b) {
  vect3d sep;
  for (int dim =0; dim < 3; dim++) {
    if (a->bot[dim] > b->top[dim]) sep[dim] = a->bot[dim] - b->top[dim];
    else if (a->top[dim] < b->bot[dim]) sep[dim] = b->bot[dim] - a->top[dim];
    else sep[dim] = 0.0;
  }
  double sepDistance = sep.Length();
  double rmax = max(a->radius(), b->radius());
  double r = (a->center() - b->center()).Length();
  return r >= (ALPHA * rmax);
  //return sepDistance/rmax > 1.2;
}

// used to count the number of interactions
struct ipair {
  long direct;
  long indirect;
  ipair() {}
  ipair(long a, long b) : direct(a), indirect(b) {}
  ipair operator+ (ipair b) {
    return ipair(direct + b.direct, indirect + b.indirect);}
};


ipair interactions(node* Left, node* Right) {
  if (far(Left,Right)) {
    Left->indirectNeighbors.push_back(Right); 
    Right->indirectNeighbors.push_back(Left); 
    return ipair(0,2);
  } else {
    if (!Left->leaf() && (Left->lmax() >= Right->lmax() || Right->leaf())) {
      ipair x = interactions(Left->left, Right);
      ipair y = interactions(Left->right, Right);
      return x + y;
    } else if (!Right->leaf()) {
      ipair x = interactions(Left, Right->left);
      ipair y = interactions(Left, Right->right);
      return x + y;
    } else {
      if (Right->n > Left->n) swap(Right,Left);
      intT rn = Right->leftNeighbors.size();
      intT ln = Left->rightNeighbors.size();
      Right->leftNeighbors.push_back(edge(Left,ln)); 
      Left->rightNeighbors.push_back(edge(Right,rn));
      return ipair(Right->n*Left->n,0);
    }
  }
}

#if 0
// could be parallelized, but so fast it does not help
ipair interactions(node* tr) {
  if (!tr->leaf()) {
    ipair x, y, z;
    x = interactions(tr->left);
    y = interactions(tr->right);
    z = interactions(tr->left,tr->right);
    return x + y + z;
  } else return ipair(0,0);
}
#endif

#if 1
class interactionsTask: public tbb::task {
private:
  node* tr;
  ipair* ret_val;

public:
  interactionsTask(node* tr, ipair* ret_val):tr(tr), ret_val(ret_val) {}

  tbb::task* execute() {
    if (!tr->leaf()) {
      ipair x, y, z;
      set_ref_count(3);
      interactionsTask& t_a = *new(tbb::task::allocate_child()) interactionsTask(tr->left, &x);
      tbb::task::spawn(t_a);
      interactionsTask& t_b = *new(tbb::task::allocate_child()) interactionsTask(tr->right, &y);
      tbb::task::spawn(t_b);
      tbb::task::wait_for_all();
      z = interactions(tr->left,tr->right);
      *ret_val = x + y + z;
    } else {
      *ret_val = ipair(0,0);
    }
    return NULL;
  }
};
#endif

intT numLeaves(node* tr) {
  if (tr->leaf()) return 1;
  else return(numLeaves(tr->left)+numLeaves(tr->right));
}

intT allocateExpansionsR(node* tr, innerExpansion* I, outerExpansion* O) {
  if (tr->leaf()) {
    tr->Inx = new (I) innerExpansion(TRglobal, tr->center());
    tr->Outx = new (O) outerExpansion(TRglobal, tr->center());
    return 1;
  } else {
    intT l = allocateExpansionsR(tr->left,I,O);
    tr->Inx = new (I+l) innerExpansion(TRglobal, tr->center());
    tr->Outx = new (O+l) outerExpansion(TRglobal, tr->center());
    intT r = allocateExpansionsR(tr->right,I+l+1,O+l+1);
    return l+r+1;
  }
}

void allocateExpansions(node* tr) {
  intT n = numLeaves(tr);
  innerExpansion* I = newA(innerExpansion,2*n-1);
  outerExpansion* O = newA(outerExpansion,2*n-1);
  intT m = allocateExpansionsR(tr,I,O);
}

class doIndirectTask: public tbb::task {
private:
  node* tr;

public:
  doIndirectTask(node* tr):tr(tr){}
  
  tbb::task* execute() {
    //tr->Outx = new outerExpansion(TRglobal, tr->center());
    for (intT i = 0; i < tr->indirectNeighbors.size(); i++) 
      tr->Outx->addTo(tr->indirectNeighbors[i]->Inx);
    if (!tr->leaf()) {
      set_ref_count(3);
      doIndirectTask& t_a = *new(tbb::task::allocate_child()) doIndirectTask(tr->left);
      tbb::task::spawn(t_a);
      doIndirectTask& t_b = *new(tbb::task::allocate_child()) doIndirectTask(tr->right);
      tbb::task::spawn(t_b);
      tbb::task::wait_for_all();
    }
    return NULL;
  }
};

#if 0
void doIndirect(node* tr) {
  //tr->Outx = new outerExpansion(TRglobal, tr->center());
  for (intT i = 0; i < tr->indirectNeighbors.size(); i++) 
    tr->Outx->addTo(tr->indirectNeighbors[i]->Inx);
  if (!tr->leaf()) {
    cilk_spawn doIndirect(tr->left);
    doIndirect(tr->right);
    cilk_sync;
  }
}
#endif

class upSweepTask: public tbb::task {
private:
  node* tr;
public:
  upSweepTask(node* tr): tr(tr) {}

  tbb::task* execute() {
    //tr->Inx = new innerExpansion(TRglobal, tr->center());
    if (tr->leaf()) {
      for (intT i=0; i < tr->n; i++) {
	particle* P = tr->particles[i];
	tr->Inx->addTo(P->pt, P->mass);
      }
    } else {
      set_ref_count(3);
      upSweepTask& t_a = *new(tbb::task::allocate_child()) upSweepTask(tr->left);
      tbb::task::spawn(t_a);
      upSweepTask& t_b = *new(tbb::task::allocate_child()) upSweepTask(tr->right);
      tbb::task::spawn(t_b);
      tbb::task::wait_for_all();
      tr->Inx->addTo(tr->left->Inx);
      tr->Inx->addTo(tr->right->Inx);
    }
    return NULL;
  }
};

#if 0
void upSweep(node* tr) {
  //tr->Inx = new innerExpansion(TRglobal, tr->center());
  if (tr->leaf()) {
    for (intT i=0; i < tr->n; i++) {
      particle* P = tr->particles[i];
      tr->Inx->addTo(P->pt, P->mass);
    }
  } else {
    cilk_spawn upSweep(tr->left);
    upSweep(tr->right);
    cilk_sync;
    tr->Inx->addTo(tr->left->Inx);
    tr->Inx->addTo(tr->right->Inx);
  }
}
#endif

class downSweepTask: public tbb::task {
private:
  node* tr;
public:
  downSweepTask(node* tr): tr(tr) {}

  tbb::task* execute() {
    if (tr->leaf()) {
      for (intT i=0; i < tr->n; i++) {
	particle* P = tr->particles[i];
	P->force = P->force + tr->Outx->force(P->pt, P->mass);
      }
    } else {
      set_ref_count(3);
      tr->left->Outx->addTo(tr->Outx);
      downSweepTask& t_a = *new(tbb::task::allocate_child()) downSweepTask(tr->left);
      tbb::task::spawn(t_a);
      tr->right->Outx->addTo(tr->Outx);
      downSweepTask& t_b = *new(tbb::task::allocate_child()) downSweepTask(tr->right);
      tbb::task::spawn(t_b);
      tbb::task::wait_for_all();
    }
    return NULL;
  }
};

#if 0
void downSweep(node* tr) {
  if (tr->leaf()) {
    for (intT i=0; i < tr->n; i++) {
      particle* P = tr->particles[i];
      P->force = P->force + tr->Outx->force(P->pt, P->mass);
    }
  } else {
    tr->left->Outx->addTo(tr->Outx);
    cilk_spawn downSweep(tr->left);

    tr->right->Outx->addTo(tr->Outx);
    downSweep(tr->right);
    cilk_sync;
  }
}
#endif

intT getLeaves(node* tr, node** Leaves) {
  if (tr->leaf()) {
    Leaves[0] = tr;
    return 1;
  } else {
    intT l = getLeaves(tr->left, Leaves);
    intT r = getLeaves(tr->right, Leaves + l);
    return l + r;
  }
}

#if 0
void direct(node* Left, node* ngh, vect3d* hold) {
  particle** LP = Left->particles;
  particle** RP = ngh->particles;
  intT nl = Left->n;
  intT nr = ngh->n;

  parallel_for(
               tbb::blocked_range<intT>(0, nr),
               [=](tbb::blocked_range<intT> br)
               {for( intT j=br.begin(); j!=br.end(); ++j ) {
                   hold[j] = vect3d(0.,0.,0.);
                 }
               }
               );

  for (intT i=0; i < nl; i++) {
    particle* pa = LP[i];

    vect3d* tmp_frc = newA(vect3d,nr);
    parallel_for(
                 tbb::blocked_range<intT>(0, nr),
                 [=](tbb::blocked_range<intT> br)
                 {for( intT j=br.begin(); j!=br.end(); ++j ) {
                     tmp_frc[j] = vect3d(0.,0.,0.);
                   }
                 }
                 );

    parallel_for(
                 tbb::blocked_range<intT>(0, nr),
                 [=](tbb::blocked_range<intT> br)
                 {for( intT j=br.begin(); j!=br.end(); ++j ) {
                     particle* pb = RP[j];
                     vect3d v = (pb->pt) - (pa->pt);
                     double r2 = v.dot(v);
                     vect3d force;
                     if (terms > 15) {
                       force = (v * (pa->mass * pb->mass / (r2*sqrt(r2))));;
                     } else { // use single precision sqrt for lower accuracy                                                                                                                                                                                                      
                       float rf2 = r2;
                       force = (v * (pa->mass * pb->mass / (r2*sqrt(rf2))));
                     }
                     tmp_frc[j] = tmp_frc[j] + force;
                     hold[j] = hold[j] - force;
                   }
                 }
                 );

    vect3d frc(0.,0.,0.);
    for (intT j=0; j < nr; j++)
      frc= frc + tmp_frc[j];
    pa->force = pa->force + frc;
  }
}
#endif

#if 1
void direct(node* Left, node* ngh, vect3d* hold) {
  particle** LP = Left->particles;
  particle** RP = ngh->particles;
  intT nl = Left->n;
  intT nr = ngh->n;
  //vect3d* rfrc = E.second;
  for (intT j=0; j < nr; j++) 
    hold[j] = vect3d(0.,0.,0.);
  for (intT i=0; i < nl; i++) {
    vect3d frc(0.,0.,0.);
    particle* pa = LP[i];
    for (intT j=0; j < nr; j++) {
      particle* pb = RP[j];
      vect3d v = (pb->pt) - (pa->pt);
      double r2 = v.dot(v);
      vect3d force;
      if (terms > 15) {
	force = (v * (pa->mass * pb->mass / (r2*sqrt(r2))));;
      } else { // use single precision sqrt for lower accuracy
	float rf2 = r2;
	force = (v * (pa->mass * pb->mass / (r2*sqrt(rf2))));
      }
      frc = frc + force;
      hold[j] = hold[j] - force;
    }
    pa->force = pa->force + frc;
  }
}
#endif

void self(node* Tr) {
  particle** PP = Tr->particles;
  for (intT i=0; i < Tr->n; i++) {
    particle* pa = PP[i];
    for (intT j=i+1; j < Tr->n; j++) {
	particle* pb = PP[j];
	vect3d v = (pb->pt) - (pa->pt);
	double r2 = v.dot(v);
	vect3d force = (v * (pa->mass * pb->mass / (r2*sqrt(r2))));
	pb->force = pb->force - force;
	pa->force = pa->force + force;
      }
  }
}

void doDirect(node* a) {
  intT nleaves = numLeaves(a);
  node** Leaves = newA(node*,nleaves);
  getLeaves(a,Leaves);

  intT* counts = newA(intT,nleaves);

  // the following allocates space avoiding malloc
  // parallel_for (intT i =0; i < nleaves; i++) {
  //   counts[i] = 0;
  //   for (intT j =0; j < Leaves[i]->rightNeighbors.size(); j++)
  //     counts[i] += Leaves[i]->rightNeighbors[j].first->n;
  // }

  parallel_for(
  	       tbb::blocked_range<intT>(0, nleaves),
  	       [=](tbb::blocked_range<intT> br)
  	       {for( intT i=br.begin(); i!=br.end(); ++i ) {
  		   counts[i] = 0;
  		   for (intT j =0; j < Leaves[i]->rightNeighbors.size(); j++)
  		     counts[i] += Leaves[i]->rightNeighbors[j].first->n;
  		 }
  	       }
  	       );

  intT total = sequence::plusScan(counts,counts,nleaves);
  vect3d* hold = newA(vect3d,total);

  // calculates interactions and neighbors results in hold
  // parallel_for (intT i =0; i < nleaves; i++) {
  //   vect3d* lhold = hold + counts[i];
  //   for (intT j =0; j < Leaves[i]->rightNeighbors.size(); j++) {
  //     Leaves[i]->hold.push_back(lhold);
  //     node* ngh = Leaves[i]->rightNeighbors[j].first;
  //     direct(Leaves[i], ngh, lhold);
  //     lhold += ngh->n;
  //   }
  // }

  //bool __flag = false;
  parallel_for(
  	       tbb::blocked_range<intT>(0, nleaves,1),
  	       [=](tbb::blocked_range<intT> br)
  	       {for( intT i=br.begin(); i!=br.end(); ++i ) {
  		   vect3d* lhold = hold + counts[i];
  		   for (intT j =0; j < Leaves[i]->rightNeighbors.size(); j++) {
  		     Leaves[i]->hold.push_back(lhold);
  		     node* ngh = Leaves[i]->rightNeighbors[j].first;
  		     direct(Leaves[i], ngh, lhold);
  		     lhold += ngh->n;
  		   }
  		 }
	       }, tbb::simple_partitioner()
  	       );

  free(counts);

  // picks up results from neighbors
  // parallel_for (intT i =0; i < nleaves; i++) {
  //   for (intT j =0; j < Leaves[i]->leftNeighbors.size(); j++) {
  //     node* L = Leaves[i];
  //     edge e = L->leftNeighbors[j];
  //     vect3d* hold = e.first->hold[e.second];
  //     for (intT k=0; k < Leaves[i]->n; k++) 
  // 	L->particles[k]->force = L->particles[k]->force + hold[k];
  //   }
  // }
  parallel_for(
	       tbb::blocked_range<intT>(0, nleaves),
	       [=](tbb::blocked_range<intT> br)
	       {for( intT i=br.begin(); i!=br.end(); ++i ) {
		   for (intT j =0; j < Leaves[i]->leftNeighbors.size(); j++) {
		     node* L = Leaves[i];
		     edge e = L->leftNeighbors[j];
		     vect3d* hold = e.first->hold[e.second];
		     for (intT k=0; k < Leaves[i]->n; k++) 
		       L->particles[k]->force = L->particles[k]->force + hold[k];
		   }
		 }
	       }
	       );

  free(hold);

  // parallel_for (intT i=0; i < nleaves; i++)
  //   self(Leaves[i]);
  //__flag = false;
  parallel_for(
	       tbb::blocked_range<intT>(0, nleaves),
	       [=](tbb::blocked_range<intT> br)
	       {for( intT i=br.begin(); i!=br.end(); ++i ) {
		   self(Leaves[i]);
		 }
	       }
	       );

  free(Leaves);
}

// *************************************************************
//   STEP
// *************************************************************

// takes one step and places forces in particles[i]->force
void stepBH(particle** particles, intT n, double alpha) {
  TRglobal->precompute();
  startTime();

  //parallel_for (intT i=0; i <n; i++) 
  //particles[i]->force = vect3d(0.,0.,0.);
  parallel_for(
	       tbb::blocked_range<intT>(0, n),
	       [=](tbb::blocked_range<intT> br)
	       {for( intT i=br.begin(); i!=br.end(); ++i ) {
		   particles[i]->force = vect3d(0.,0.,0.);
		 }
	       }
	       );


  particle** Tmp = newA(particle*,n);
  particle** Hold = newA(particle*,n);
  //parallel_for(intT i=0; i < n; i++) 
  //Hold[i] = particles[i];

  parallel_for(
	       tbb::blocked_range<intT>(0, n),
	       [=](tbb::blocked_range<intT> br)
	       {for( intT i=br.begin(); i!=br.end(); ++i ) {
		   Hold[i] = particles[i];
		 }
	       }
	       );

  bool* Tflags = newA(bool,n);

  // build the CK tree
  //node* a = buildTree(particles, Tmp, Tflags, n, 0);
  node* a;
  BuildTree& t_bt = *new(tbb::task::allocate_root()) BuildTree(particles, Tmp, Tflags, n, 0, &a);
  tbb::task::spawn_root_and_wait(t_bt);

  nextTime("build tree");
  allocateExpansions(a);

  // Sweep up the tree calculating multipole expansions for each node
  upSweepTask& t_ust = *new(tbb::task::allocate_root()) upSweepTask(a);
  tbb::task::spawn_root_and_wait(t_ust);
  nextTime("up sweep");

  // Determine all far-field interactions using the CK method
  ipair z;// = interactions(a);
  interactionsTask& t_it = *new(tbb::task::allocate_root()) interactionsTask(a, &z);
  tbb::task::spawn_root_and_wait(t_it);

  nextTime("interactions");

  // Translate multipole to local expansions along the far-field
  // interactions
  //doIndirectTask& t_dit = *new(tbb::task::allocate_root()) doIndirectTask(a);
  //tbb::task::spawn_root_and_wait(t_dit);
  //nextTime("do Indirect");

  // Translate the local expansions down the tree to the leaves
  downSweepTask& t_dst = *new(tbb::task::allocate_root()) downSweepTask(a);
  tbb::task::spawn_root_and_wait(t_dst);
  nextTime("down sweep");

  // Add in all the direct (near-field) interactions
  doDirect(a);
  nextTime("do Direct");
  cout << "Direct = " << (long) z.direct << " Indirect = " << z.indirect
       << " Boxes = " << numLeaves(a) << endl;
  //parallel_for(intT i=0; i < n; i++) particles[i] = Hold[i];
  parallel_for(
	       tbb::blocked_range<intT>(0, n),
	       [=](tbb::blocked_range<intT> br)
	       {for( intT i=br.begin(); i!=br.end(); ++i ) {
		   particles[i] = Hold[i];
		 }
	       }
	       );

  if (CHECK) {
    cout << "  Sampled RMS Error = "<< check(particles,n) << endl;
    nextTime("check");
  }
}

void nbody(particle** particles, intT n) { 
  stepBH(particles, n, ALPHA); }
