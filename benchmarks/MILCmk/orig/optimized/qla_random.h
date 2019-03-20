#ifndef _QLA_RANDOM_H
#define _QLA_RANDOM_H

#include <qla_types.h>

/* random number structures */

typedef struct {
  /* We assume long is at least 32 bits */
  // now using int since that is more likely to always be 32 bits
  unsigned int r0,r1,r2,r3,r4,r5,r6;
  unsigned int multiplier,addend,ic_state;
  float scale;
} QLA_RandomState;

/* Generic random number generator returning a uniformly distributed
   random value on [0,1] */

QLA_F_Real QLA_random(QLA_RandomState *prn_pt);
QLA_F_Real QLA_gaussian(QLA_RandomState *prn_pt);
void QLA_seed_random(QLA_RandomState *prn_pt, int seed, QLA_Int index);

// use same Gaussian generator as MILC if nonzero
extern int QLA_use_milc_gaussian;

/**
 *  Version information
 */

extern const char * QLA_version_str(void);
extern int QLA_version_int(void);

#endif /* _QLA_RANDOM_H */
