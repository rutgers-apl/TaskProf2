#include <stddef.h>
#include <qla_config.h>

#if QLA_SSE_LEVEL >= 1
#include <xmmintrin.h>
#endif
#if QLA_SSE_LEVEL >= 2
#include <emmintrin.h>
#endif
#if QLA_SSE_LEVEL >= 3
#include <pmmintrin.h>
#endif

typedef __m128 v4sf;
typedef __m64 v2sf;

typedef union {
  int  i[4];
  v4sf v;
} _ivu;

static const _ivu _sgn01  = {{0x00000000, 0x00000000, 0x80000000, 0x80000000}};
static const _ivu _sgn02  = {{0x00000000, 0x80000000, 0x00000000, 0x80000000}};
static const _ivu _sgn03  = {{0x80000000, 0x00000000, 0x00000000, 0x80000000}};
static const _ivu _sgn12  = {{0x00000000, 0x80000000, 0x80000000, 0x00000000}};
static const _ivu _sgn13  = {{0x80000000, 0x00000000, 0x80000000, 0x00000000}};
static const _ivu _sgn23  = {{0x80000000, 0x80000000, 0x00000000, 0x00000000}};
static const _ivu _sgn0123= {{0x80000000, 0x80000000, 0x80000000, 0x80000000}};

#if 0
static const v4sf _sse_sign_01   = { 1, 1,-1,-1};
static const v4sf _sse_sign_02   = { 1,-1, 1,-1};
static const v4sf _sse_sign_03   = {-1, 1, 1,-1};
static const v4sf _sse_sign_12   = { 1,-1,-1, 1};
static const v4sf _sse_sign_13   = {-1, 1,-1, 1};
static const v4sf _sse_sign_23   = {-1,-1, 1, 1};
static const v4sf _sse_sign_0123 = {-1,-1,-1,-1};
#endif

#define is_aligned(p,a) ((((size_t)(p))&((size_t)(a-1)))==0)

#define foff(a,n) (((float *)(a))+(n))
#define prefetch(a) _mm_prefetch((const char *)(a),_MM_HINT_T0)
#define prefetchnt(a) _mm_prefetch((const char *)(a),_MM_HINT_NTA)

#define sign01(a)   xorps(a,_sgn01.v)
#define sign02(a)   xorps(a,_sgn02.v)
#define sign03(a)   xorps(a,_sgn03.v)
#define sign12(a)   xorps(a,_sgn12.v)
#define sign13(a)   xorps(a,_sgn13.v)
#define sign23(a)   xorps(a,_sgn23.v)
#define sign0123(a) xorps(a,_sgn0123.v)

#define setss(a) _mm_set_ss(a)
#define setps(a,b,c,d) _mm_set_ps(a,b,c,d)

#define loadaps(a) _mm_load_ps((float *)(a))
#define loadups(a) _mm_loadu_ps((float *)(a))
#define loadlps(a,b) _mm_loadl_pi(a,(v2sf *)(b))
#define loadhps(a,b) _mm_loadh_pi(a,(v2sf *)(b))

#define storeaps(a,b) _mm_store_ps((float *)(a),b)
#define storeups(a,b) _mm_storeu_ps((float *)(a),b)
#define storelps(a,b) _mm_storel_pi((v2sf *)(a),b)
#define storehps(a,b) _mm_storeh_pi((v2sf *)(a),b)
#define storentps(a,b) _mm_stream_ps((float *)(a),b)

#define shufps(a,b,c) _mm_shuffle_ps(a,b,c)

#define xorps(a,b) _mm_xor_ps(a,b)

#define addps(a,b) _mm_add_ps(a,b)
#define subps(a,b) _mm_sub_ps(a,b)
#define mulps(a,b) _mm_mul_ps(a,b)

#if QLA_SSE_LEVEL >= 3
#define addsubps(a,b) _mm_addsub_ps(a,b)
#else
#define addsubps(a,b) addps(a,sign13(b))
#endif

#define concat(a,b) a ## b
#define spproj(x) concat(spproj,x)
#define sprecon(x) concat(sprecon,x)

#define spproj0p(r,p) {	v4sf d0, d1; d0=loadaps(p); d1=loadaps(foff(p,4)); \
    r = addsubps(d0, shufps(d1, d1, 0x1b)); }

#define spproj0m(r,p) {	v4sf d0, d1; d0=loadaps(p); d1=loadaps(foff(p,4)); \
    r = subps(d0, sign13(shufps(d1, d1, 0x1b))); }

#define spproj1p(r,p) {	v4sf d0, d1; d0=loadaps(p); d1=loadaps(foff(p,4)); \
    r = subps(d0, sign01(shufps(d1, d1, 0x4e))); }

#define spproj1m(r,p) {	v4sf d0, d1; d0=loadaps(p); d1=loadaps(foff(p,4)); \
    r = addps(d0, sign01(shufps(d1, d1, 0x4e))); }

#define spproj2p(r,p) {	v4sf d0, d1; d0=loadaps(p); d1=loadaps(foff(p,4)); \
    r = addps(d0, sign03(shufps(d1, d1, 0xb1))); }

#define spproj2m(r,p) {	v4sf d0, d1; d0=loadaps(p); d1=loadaps(foff(p,4)); \
    r = subps(d0, sign03(shufps(d1, d1, 0xb1))); }

#define spproj3p(r,p) {	v4sf d0, d1; d0=loadaps(p); d1=loadaps(foff(p,4)); \
    r = addps(d0, d1); }

#define spproj3m(r,p) {	v4sf d0, d1; d0=loadaps(p); d1=loadaps(foff(p,4)); \
    r = subps(d0, d1); }

#define spproj4p(r,p) {	r=loadaps(p); }

#define spproj4m(r,p) {	r=loadaps(foff(p,4)); }

#define sprecon0p(r,h) { r = sign02(shufps(h, h, 0x1b)); }
#define sprecon0m(r,h) { r = sign13(shufps(h, h, 0x1b)); }
#define sprecon1p(r,h) { r = sign01(shufps(h, h, 0x4e)); }
#define sprecon1m(r,h) { r = sign23(shufps(h, h, 0x4e)); }
#define sprecon2p(r,h) { r = sign12(shufps(h, h, 0xb1)); }
#define sprecon2m(r,h) { r = sign03(shufps(h, h, 0xb1)); }
#define sprecon3p(r,h) { r = h; }
#define sprecon3m(r,h) { r = sign0123(h); }
