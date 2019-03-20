#ifndef _QLA_H
#define _QLA_H

#ifdef __cplusplus
extern "C" {
#endif

  // allow the user to specify QLA_Precision and/or QLA_PrecisionInt
  // default to single precision
#ifndef QLA_Precision
#  ifndef QLA_PrecisionInt
#    define QLA_PrecisionInt 1
#  endif
#  if QLA_PrecisionInt == 1
#    define QLA_Precision 'F'
#    define QLA_PrecisionLetter F
#  elif QLA_PrecisionInt == 2
#    define QLA_Precision 'D'
#    define QLA_PrecisionLetter D
#  elif QLA_PrecisionInt == 4
#    define QLA_Precision 'Q'
#    define QLA_PrecisionLetter Q
#  else
#    error "bad QLA_PrecisionInt"
#  endif
#else
#  ifndef QLA_PrecisionInt
#    if QLA_Precision == 'F'
#      define QLA_PrecisionInt 1
#      define QLA_PrecisionLetter F
#    elif QLA_Precision == 'D'
#      define QLA_PrecisionInt 2
#      define QLA_PrecisionLetter D
#    elif QLA_Precision == 'Q'
#      define QLA_PrecisionInt 4
#      define QLA_PrecisionLetter Q
#    else
#      error "bad QLA_Precision"
#    endif
#  else
#    if QLA_Precision == 'F'
#      if QLA_PrecisionInt != 1
#        error "inconsistent QLA_Precision='F' and QLA_PrecisionInt"
#      endif
#      define QLA_PrecisionLetter F
#    elif QLA_Precision == 'D'
#      if QLA_PrecisionInt != 2
#        error "inconsistent QLA_Precision='D' and QLA_PrecisionInt"
#      endif
#      define QLA_PrecisionLetter D
#    elif QLA_Precision == 'Q'
#      if QLA_PrecisionInt != 4
#        error "inconsistent QLA_Precision='Q' and QLA_PrecisionInt"
#      endif
#      define QLA_PrecisionLetter Q
#    else
#      error "bad QLA_Precision"
#    endif
#  endif
#endif

  // allow the user to specify QLA_Colors and/or QLA_Nc
  // default to Nc=3
#ifndef QLA_Colors
#  ifndef QLA_Nc
#    define QLA_Nc 3
#  endif
#  if QLA_Nc == 2 || QLA_Nc == 3
#    define QLA_Colors QLA_Nc
#  elif QLA_Nc > 0
#    define QLA_Colors 'N'
#  else
#    error "bad QLA_Nc"
#  endif
#else
#  ifndef QLA_Nc
#    if QLA_Colors == 2 || QLA_Colors == 3
#      define QLA_Nc QLA_Colors
#    elif QLA_Colors == 'N'
#      define QLA_Nc 3
#    else
#      error "bad QLA_Colors"
#    endif
#  else
#    if QLA_Colors == 2 || QLA_Colors == 3
#      if QLA_Colors != QLA_Nc
#        error "inconsistent QLA_Colors and QLA_Nc"
#      endif
#    elif QLA_Colors == 'N'
#      if QLA_Nc <= 0
#        error "bad QLA_Nc"
#      endif
#    else
#      error "bad QLA_Colors"
#    endif
#  endif
#endif

#ifndef QLA_RESTRICT
#define QLA_RESTRICT
#endif

/* Define specific types and map them to generic types */
#include <qla_types.h>

/* Random number functions */
#include <qla_random.h>

/* Prototypes for complex functions */
#include <qla_cmath.h>

/* Headers we always define */
#include <qla_int.h>
#include <qla_df.h>
#include <qla_dq.h>

/* Headers we define regardless of precision */
#if ( QLA_Colors == 3 )
#include <qla_df3.h>
#include <qla_dq3.h>
#elif ( QLA_Colors == 2 )
#include <qla_df2.h>
#include <qla_dq2.h>
#elif ( QLA_Colors == 'N' )
#include <qla_dfn.h>
#include <qla_dqn.h>
#endif

/* Headers we define regardless of color */
#if ( QLA_Precision == 'F' )
#include <qla_f.h>
#elif ( QLA_Precision == 'D' )
#include <qla_d.h>
#elif ( QLA_Precision == 'Q' )
#include <qla_q.h>
#endif

/* Headers specific to color and precision */

#if ( QLA_Precision == 'F' )

#if   ( QLA_Colors == 3 )
#include <qla_f3.h>
#elif ( QLA_Colors == 2 )
#include <qla_f2.h>
#elif ( QLA_Colors == 'N' )
#include <qla_fn.h>
#endif

#elif ( QLA_Precision == 'D' )

#if   ( QLA_Colors == 3 )
#include <qla_d3.h>
#elif ( QLA_Colors == 2 )
#include <qla_d2.h>
#elif ( QLA_Colors == 'N' )
#include <qla_dn.h>
#endif

#elif ( QLA_Precision == 'Q' )

#if   ( QLA_Colors == 3 )
#include <qla_q3.h>
#elif ( QLA_Colors == 2 )
#include <qla_q2.h>
#elif ( QLA_Colors == 'N' )
#include <qla_qn.h>
#endif

#endif /* QLA_Precision */

#ifdef __cplusplus
}
#endif

#endif /* _QLA_H */
