/* Generated automatically from machmode.def and config/mips/mips-modes.def
   by genmodes.  */

#include "config.h"
#include "system.h"
#include "coretypes.h"
#include "tm.h"
#include "real.h"

const char *const mode_name[NUM_MACHINE_MODES] =
{
  "VOID",
  "BLK",
  "CC",
  "CCV2",
  "CCV4",
  "CCDSP",
  "CCF",
  "BI",
  "QI",
  "HI",
  "SI",
  "DI",
  "TI",
  "QQ",
  "HQ",
  "SQ",
  "DQ",
  "TQ",
  "UQQ",
  "UHQ",
  "USQ",
  "UDQ",
  "UTQ",
  "HA",
  "SA",
  "DA",
  "TA",
  "UHA",
  "USA",
  "UDA",
  "UTA",
  "SF",
  "DF",
  "TF",
  "SD",
  "DD",
  "TD",
  "CQI",
  "CHI",
  "CSI",
  "CDI",
  "CTI",
  "SC",
  "DC",
  "TC",
  "V4QI",
  "V2HI",
  "V8QI",
  "V4HI",
  "V2SI",
  "V16QI",
  "V8HI",
  "V4SI",
  "V2DI",
  "V32QI",
  "V16HI",
  "V8SI",
  "V4DI",
  "V4QQ",
  "V2HQ",
  "V4UQQ",
  "V2UHQ",
  "V2HA",
  "V2UHA",
  "V2SF",
  "V4SF",
  "V2DF",
  "V8SF",
  "V4DF",
};

const unsigned char mode_class[NUM_MACHINE_MODES] =
{
  MODE_RANDOM,             /* VOID */
  MODE_RANDOM,             /* BLK */
  MODE_CC,                 /* CC */
  MODE_CC,                 /* CCV2 */
  MODE_CC,                 /* CCV4 */
  MODE_CC,                 /* CCDSP */
  MODE_CC,                 /* CCF */
  MODE_INT,                /* BI */
  MODE_INT,                /* QI */
  MODE_INT,                /* HI */
  MODE_INT,                /* SI */
  MODE_INT,                /* DI */
  MODE_INT,                /* TI */
  MODE_FRACT,              /* QQ */
  MODE_FRACT,              /* HQ */
  MODE_FRACT,              /* SQ */
  MODE_FRACT,              /* DQ */
  MODE_FRACT,              /* TQ */
  MODE_UFRACT,             /* UQQ */
  MODE_UFRACT,             /* UHQ */
  MODE_UFRACT,             /* USQ */
  MODE_UFRACT,             /* UDQ */
  MODE_UFRACT,             /* UTQ */
  MODE_ACCUM,              /* HA */
  MODE_ACCUM,              /* SA */
  MODE_ACCUM,              /* DA */
  MODE_ACCUM,              /* TA */
  MODE_UACCUM,             /* UHA */
  MODE_UACCUM,             /* USA */
  MODE_UACCUM,             /* UDA */
  MODE_UACCUM,             /* UTA */
  MODE_FLOAT,              /* SF */
  MODE_FLOAT,              /* DF */
  MODE_FLOAT,              /* TF */
  MODE_DECIMAL_FLOAT,      /* SD */
  MODE_DECIMAL_FLOAT,      /* DD */
  MODE_DECIMAL_FLOAT,      /* TD */
  MODE_COMPLEX_INT,        /* CQI */
  MODE_COMPLEX_INT,        /* CHI */
  MODE_COMPLEX_INT,        /* CSI */
  MODE_COMPLEX_INT,        /* CDI */
  MODE_COMPLEX_INT,        /* CTI */
  MODE_COMPLEX_FLOAT,      /* SC */
  MODE_COMPLEX_FLOAT,      /* DC */
  MODE_COMPLEX_FLOAT,      /* TC */
  MODE_VECTOR_INT,         /* V4QI */
  MODE_VECTOR_INT,         /* V2HI */
  MODE_VECTOR_INT,         /* V8QI */
  MODE_VECTOR_INT,         /* V4HI */
  MODE_VECTOR_INT,         /* V2SI */
  MODE_VECTOR_INT,         /* V16QI */
  MODE_VECTOR_INT,         /* V8HI */
  MODE_VECTOR_INT,         /* V4SI */
  MODE_VECTOR_INT,         /* V2DI */
  MODE_VECTOR_INT,         /* V32QI */
  MODE_VECTOR_INT,         /* V16HI */
  MODE_VECTOR_INT,         /* V8SI */
  MODE_VECTOR_INT,         /* V4DI */
  MODE_VECTOR_FRACT,       /* V4QQ */
  MODE_VECTOR_FRACT,       /* V2HQ */
  MODE_VECTOR_UFRACT,      /* V4UQQ */
  MODE_VECTOR_UFRACT,      /* V2UHQ */
  MODE_VECTOR_ACCUM,       /* V2HA */
  MODE_VECTOR_UACCUM,      /* V2UHA */
  MODE_VECTOR_FLOAT,       /* V2SF */
  MODE_VECTOR_FLOAT,       /* V4SF */
  MODE_VECTOR_FLOAT,       /* V2DF */
  MODE_VECTOR_FLOAT,       /* V8SF */
  MODE_VECTOR_FLOAT,       /* V4DF */
};

const poly_uint16_pod mode_precision[NUM_MACHINE_MODES] = 
{
  { 0 },                   /* VOID */
  { 0 },                   /* BLK */
  { 4 * BITS_PER_UNIT },   /* CC */
  { 4 * BITS_PER_UNIT },   /* CCV2 */
  { 4 * BITS_PER_UNIT },   /* CCV4 */
  { 4 * BITS_PER_UNIT },   /* CCDSP */
  { 4 * BITS_PER_UNIT },   /* CCF */
  { 1 },                   /* BI */
  { 1 * BITS_PER_UNIT },   /* QI */
  { 2 * BITS_PER_UNIT },   /* HI */
  { 4 * BITS_PER_UNIT },   /* SI */
  { 8 * BITS_PER_UNIT },   /* DI */
  { 16 * BITS_PER_UNIT },  /* TI */
  { 1 * BITS_PER_UNIT },   /* QQ */
  { 2 * BITS_PER_UNIT },   /* HQ */
  { 4 * BITS_PER_UNIT },   /* SQ */
  { 8 * BITS_PER_UNIT },   /* DQ */
  { 16 * BITS_PER_UNIT },  /* TQ */
  { 1 * BITS_PER_UNIT },   /* UQQ */
  { 2 * BITS_PER_UNIT },   /* UHQ */
  { 4 * BITS_PER_UNIT },   /* USQ */
  { 8 * BITS_PER_UNIT },   /* UDQ */
  { 16 * BITS_PER_UNIT },  /* UTQ */
  { 2 * BITS_PER_UNIT },   /* HA */
  { 4 * BITS_PER_UNIT },   /* SA */
  { 8 * BITS_PER_UNIT },   /* DA */
  { 16 * BITS_PER_UNIT },  /* TA */
  { 2 * BITS_PER_UNIT },   /* UHA */
  { 4 * BITS_PER_UNIT },   /* USA */
  { 8 * BITS_PER_UNIT },   /* UDA */
  { 16 * BITS_PER_UNIT },  /* UTA */
  { 4 * BITS_PER_UNIT },   /* SF */
  { 8 * BITS_PER_UNIT },   /* DF */
  { 16 * BITS_PER_UNIT },  /* TF */
  { 4 * BITS_PER_UNIT },   /* SD */
  { 8 * BITS_PER_UNIT },   /* DD */
  { 16 * BITS_PER_UNIT },  /* TD */
  { 2 * BITS_PER_UNIT },   /* CQI */
  { 4 * BITS_PER_UNIT },   /* CHI */
  { 8 * BITS_PER_UNIT },   /* CSI */
  { 16 * BITS_PER_UNIT },  /* CDI */
  { 32 * BITS_PER_UNIT },  /* CTI */
  { 8 * BITS_PER_UNIT },   /* SC */
  { 16 * BITS_PER_UNIT },  /* DC */
  { 32 * BITS_PER_UNIT },  /* TC */
  { 4 * BITS_PER_UNIT },   /* V4QI */
  { 4 * BITS_PER_UNIT },   /* V2HI */
  { 8 * BITS_PER_UNIT },   /* V8QI */
  { 8 * BITS_PER_UNIT },   /* V4HI */
  { 8 * BITS_PER_UNIT },   /* V2SI */
  { 16 * BITS_PER_UNIT },  /* V16QI */
  { 16 * BITS_PER_UNIT },  /* V8HI */
  { 16 * BITS_PER_UNIT },  /* V4SI */
  { 16 * BITS_PER_UNIT },  /* V2DI */
  { 32 * BITS_PER_UNIT },  /* V32QI */
  { 32 * BITS_PER_UNIT },  /* V16HI */
  { 32 * BITS_PER_UNIT },  /* V8SI */
  { 32 * BITS_PER_UNIT },  /* V4DI */
  { 4 * BITS_PER_UNIT },   /* V4QQ */
  { 4 * BITS_PER_UNIT },   /* V2HQ */
  { 4 * BITS_PER_UNIT },   /* V4UQQ */
  { 4 * BITS_PER_UNIT },   /* V2UHQ */
  { 4 * BITS_PER_UNIT },   /* V2HA */
  { 4 * BITS_PER_UNIT },   /* V2UHA */
  { 8 * BITS_PER_UNIT },   /* V2SF */
  { 16 * BITS_PER_UNIT },  /* V4SF */
  { 16 * BITS_PER_UNIT },  /* V2DF */
  { 32 * BITS_PER_UNIT },  /* V8SF */
  { 32 * BITS_PER_UNIT },  /* V4DF */
};

poly_uint16_pod mode_size[NUM_MACHINE_MODES] = 
{
  { 0 },                   /* VOID */
  { 0 },                   /* BLK */
  { 4 },                   /* CC */
  { 4 },                   /* CCV2 */
  { 4 },                   /* CCV4 */
  { 4 },                   /* CCDSP */
  { 4 },                   /* CCF */
  { 1 },                   /* BI */
  { 1 },                   /* QI */
  { 2 },                   /* HI */
  { 4 },                   /* SI */
  { 8 },                   /* DI */
  { 16 },                  /* TI */
  { 1 },                   /* QQ */
  { 2 },                   /* HQ */
  { 4 },                   /* SQ */
  { 8 },                   /* DQ */
  { 16 },                  /* TQ */
  { 1 },                   /* UQQ */
  { 2 },                   /* UHQ */
  { 4 },                   /* USQ */
  { 8 },                   /* UDQ */
  { 16 },                  /* UTQ */
  { 2 },                   /* HA */
  { 4 },                   /* SA */
  { 8 },                   /* DA */
  { 16 },                  /* TA */
  { 2 },                   /* UHA */
  { 4 },                   /* USA */
  { 8 },                   /* UDA */
  { 16 },                  /* UTA */
  { 4 },                   /* SF */
  { 8 },                   /* DF */
  { 16 },                  /* TF */
  { 4 },                   /* SD */
  { 8 },                   /* DD */
  { 16 },                  /* TD */
  { 2 },                   /* CQI */
  { 4 },                   /* CHI */
  { 8 },                   /* CSI */
  { 16 },                  /* CDI */
  { 32 },                  /* CTI */
  { 8 },                   /* SC */
  { 16 },                  /* DC */
  { 32 },                  /* TC */
  { 4 },                   /* V4QI */
  { 4 },                   /* V2HI */
  { 8 },                   /* V8QI */
  { 8 },                   /* V4HI */
  { 8 },                   /* V2SI */
  { 16 },                  /* V16QI */
  { 16 },                  /* V8HI */
  { 16 },                  /* V4SI */
  { 16 },                  /* V2DI */
  { 32 },                  /* V32QI */
  { 32 },                  /* V16HI */
  { 32 },                  /* V8SI */
  { 32 },                  /* V4DI */
  { 4 },                   /* V4QQ */
  { 4 },                   /* V2HQ */
  { 4 },                   /* V4UQQ */
  { 4 },                   /* V2UHQ */
  { 4 },                   /* V2HA */
  { 4 },                   /* V2UHA */
  { 8 },                   /* V2SF */
  { 16 },                  /* V4SF */
  { 16 },                  /* V2DF */
  { 32 },                  /* V8SF */
  { 32 },                  /* V4DF */
};

const poly_uint16_pod mode_nunits[NUM_MACHINE_MODES] = 
{
  { 0 },                   /* VOID */
  { 0 },                   /* BLK */
  { 1 },                   /* CC */
  { 1 },                   /* CCV2 */
  { 1 },                   /* CCV4 */
  { 1 },                   /* CCDSP */
  { 1 },                   /* CCF */
  { 1 },                   /* BI */
  { 1 },                   /* QI */
  { 1 },                   /* HI */
  { 1 },                   /* SI */
  { 1 },                   /* DI */
  { 1 },                   /* TI */
  { 1 },                   /* QQ */
  { 1 },                   /* HQ */
  { 1 },                   /* SQ */
  { 1 },                   /* DQ */
  { 1 },                   /* TQ */
  { 1 },                   /* UQQ */
  { 1 },                   /* UHQ */
  { 1 },                   /* USQ */
  { 1 },                   /* UDQ */
  { 1 },                   /* UTQ */
  { 1 },                   /* HA */
  { 1 },                   /* SA */
  { 1 },                   /* DA */
  { 1 },                   /* TA */
  { 1 },                   /* UHA */
  { 1 },                   /* USA */
  { 1 },                   /* UDA */
  { 1 },                   /* UTA */
  { 1 },                   /* SF */
  { 1 },                   /* DF */
  { 1 },                   /* TF */
  { 1 },                   /* SD */
  { 1 },                   /* DD */
  { 1 },                   /* TD */
  { 2 },                   /* CQI */
  { 2 },                   /* CHI */
  { 2 },                   /* CSI */
  { 2 },                   /* CDI */
  { 2 },                   /* CTI */
  { 2 },                   /* SC */
  { 2 },                   /* DC */
  { 2 },                   /* TC */
  { 4 },                   /* V4QI */
  { 2 },                   /* V2HI */
  { 8 },                   /* V8QI */
  { 4 },                   /* V4HI */
  { 2 },                   /* V2SI */
  { 16 },                  /* V16QI */
  { 8 },                   /* V8HI */
  { 4 },                   /* V4SI */
  { 2 },                   /* V2DI */
  { 32 },                  /* V32QI */
  { 16 },                  /* V16HI */
  { 8 },                   /* V8SI */
  { 4 },                   /* V4DI */
  { 4 },                   /* V4QQ */
  { 2 },                   /* V2HQ */
  { 4 },                   /* V4UQQ */
  { 2 },                   /* V2UHQ */
  { 2 },                   /* V2HA */
  { 2 },                   /* V2UHA */
  { 2 },                   /* V2SF */
  { 4 },                   /* V4SF */
  { 2 },                   /* V2DF */
  { 8 },                   /* V8SF */
  { 4 },                   /* V4DF */
};

const unsigned char mode_wider[NUM_MACHINE_MODES] =
{
  E_VOIDmode,              /* VOID */
  E_VOIDmode,              /* BLK */
  E_VOIDmode,              /* CC */
  E_VOIDmode,              /* CCV2 */
  E_VOIDmode,              /* CCV4 */
  E_VOIDmode,              /* CCDSP */
  E_VOIDmode,              /* CCF */
  E_QImode,                /* BI */
  E_HImode,                /* QI */
  E_SImode,                /* HI */
  E_DImode,                /* SI */
  E_TImode,                /* DI */
  E_VOIDmode,              /* TI */
  E_HQmode,                /* QQ */
  E_SQmode,                /* HQ */
  E_DQmode,                /* SQ */
  E_TQmode,                /* DQ */
  E_VOIDmode,              /* TQ */
  E_UHQmode,               /* UQQ */
  E_USQmode,               /* UHQ */
  E_UDQmode,               /* USQ */
  E_UTQmode,               /* UDQ */
  E_VOIDmode,              /* UTQ */
  E_SAmode,                /* HA */
  E_DAmode,                /* SA */
  E_TAmode,                /* DA */
  E_VOIDmode,              /* TA */
  E_USAmode,               /* UHA */
  E_UDAmode,               /* USA */
  E_UTAmode,               /* UDA */
  E_VOIDmode,              /* UTA */
  E_DFmode,                /* SF */
  E_TFmode,                /* DF */
  E_VOIDmode,              /* TF */
  E_DDmode,                /* SD */
  E_TDmode,                /* DD */
  E_VOIDmode,              /* TD */
  E_CHImode,               /* CQI */
  E_CSImode,               /* CHI */
  E_CDImode,               /* CSI */
  E_CTImode,               /* CDI */
  E_VOIDmode,              /* CTI */
  E_DCmode,                /* SC */
  E_TCmode,                /* DC */
  E_VOIDmode,              /* TC */
  E_V2HImode,              /* V4QI */
  E_V8QImode,              /* V2HI */
  E_V4HImode,              /* V8QI */
  E_V2SImode,              /* V4HI */
  E_V16QImode,             /* V2SI */
  E_V8HImode,              /* V16QI */
  E_V4SImode,              /* V8HI */
  E_V2DImode,              /* V4SI */
  E_V32QImode,             /* V2DI */
  E_V16HImode,             /* V32QI */
  E_V8SImode,              /* V16HI */
  E_V4DImode,              /* V8SI */
  E_VOIDmode,              /* V4DI */
  E_V2HQmode,              /* V4QQ */
  E_VOIDmode,              /* V2HQ */
  E_V2UHQmode,             /* V4UQQ */
  E_VOIDmode,              /* V2UHQ */
  E_VOIDmode,              /* V2HA */
  E_VOIDmode,              /* V2UHA */
  E_V4SFmode,              /* V2SF */
  E_V2DFmode,              /* V4SF */
  E_V8SFmode,              /* V2DF */
  E_V4DFmode,              /* V8SF */
  E_VOIDmode,              /* V4DF */
};

const unsigned char mode_2xwider[NUM_MACHINE_MODES] =
{
  E_VOIDmode,              /* VOID */
  E_BLKmode,               /* BLK */
  E_VOIDmode,              /* CC */
  E_VOIDmode,              /* CCV2 */
  E_VOIDmode,              /* CCV4 */
  E_VOIDmode,              /* CCDSP */
  E_VOIDmode,              /* CCF */
  E_VOIDmode,              /* BI */
  E_HImode,                /* QI */
  E_SImode,                /* HI */
  E_DImode,                /* SI */
  E_TImode,                /* DI */
  E_VOIDmode,              /* TI */
  E_HQmode,                /* QQ */
  E_SQmode,                /* HQ */
  E_DQmode,                /* SQ */
  E_TQmode,                /* DQ */
  E_VOIDmode,              /* TQ */
  E_UHQmode,               /* UQQ */
  E_USQmode,               /* UHQ */
  E_UDQmode,               /* USQ */
  E_UTQmode,               /* UDQ */
  E_VOIDmode,              /* UTQ */
  E_SAmode,                /* HA */
  E_DAmode,                /* SA */
  E_TAmode,                /* DA */
  E_VOIDmode,              /* TA */
  E_USAmode,               /* UHA */
  E_UDAmode,               /* USA */
  E_UTAmode,               /* UDA */
  E_VOIDmode,              /* UTA */
  E_DFmode,                /* SF */
  E_TFmode,                /* DF */
  E_VOIDmode,              /* TF */
  E_DDmode,                /* SD */
  E_TDmode,                /* DD */
  E_VOIDmode,              /* TD */
  E_CHImode,               /* CQI */
  E_CSImode,               /* CHI */
  E_CDImode,               /* CSI */
  E_CTImode,               /* CDI */
  E_VOIDmode,              /* CTI */
  E_DCmode,                /* SC */
  E_TCmode,                /* DC */
  E_VOIDmode,              /* TC */
  E_V8QImode,              /* V4QI */
  E_V4HImode,              /* V2HI */
  E_V16QImode,             /* V8QI */
  E_V8HImode,              /* V4HI */
  E_V4SImode,              /* V2SI */
  E_V32QImode,             /* V16QI */
  E_V16HImode,             /* V8HI */
  E_V8SImode,              /* V4SI */
  E_V4DImode,              /* V2DI */
  E_VOIDmode,              /* V32QI */
  E_VOIDmode,              /* V16HI */
  E_VOIDmode,              /* V8SI */
  E_VOIDmode,              /* V4DI */
  E_VOIDmode,              /* V4QQ */
  E_VOIDmode,              /* V2HQ */
  E_VOIDmode,              /* V4UQQ */
  E_VOIDmode,              /* V2UHQ */
  E_VOIDmode,              /* V2HA */
  E_VOIDmode,              /* V2UHA */
  E_V4SFmode,              /* V2SF */
  E_V8SFmode,              /* V4SF */
  E_V4DFmode,              /* V2DF */
  E_VOIDmode,              /* V8SF */
  E_VOIDmode,              /* V4DF */
};

const unsigned char mode_complex[NUM_MACHINE_MODES] =
{
  E_VOIDmode,              /* VOID */
  E_VOIDmode,              /* BLK */
  E_VOIDmode,              /* CC */
  E_VOIDmode,              /* CCV2 */
  E_VOIDmode,              /* CCV4 */
  E_VOIDmode,              /* CCDSP */
  E_VOIDmode,              /* CCF */
  E_VOIDmode,              /* BI */
  E_CQImode,               /* QI */
  E_CHImode,               /* HI */
  E_CSImode,               /* SI */
  E_CDImode,               /* DI */
  E_CTImode,               /* TI */
  E_VOIDmode,              /* QQ */
  E_VOIDmode,              /* HQ */
  E_VOIDmode,              /* SQ */
  E_VOIDmode,              /* DQ */
  E_VOIDmode,              /* TQ */
  E_VOIDmode,              /* UQQ */
  E_VOIDmode,              /* UHQ */
  E_VOIDmode,              /* USQ */
  E_VOIDmode,              /* UDQ */
  E_VOIDmode,              /* UTQ */
  E_VOIDmode,              /* HA */
  E_VOIDmode,              /* SA */
  E_VOIDmode,              /* DA */
  E_VOIDmode,              /* TA */
  E_VOIDmode,              /* UHA */
  E_VOIDmode,              /* USA */
  E_VOIDmode,              /* UDA */
  E_VOIDmode,              /* UTA */
  E_SCmode,                /* SF */
  E_DCmode,                /* DF */
  E_TCmode,                /* TF */
  E_VOIDmode,              /* SD */
  E_VOIDmode,              /* DD */
  E_VOIDmode,              /* TD */
  E_VOIDmode,              /* CQI */
  E_VOIDmode,              /* CHI */
  E_VOIDmode,              /* CSI */
  E_VOIDmode,              /* CDI */
  E_VOIDmode,              /* CTI */
  E_VOIDmode,              /* SC */
  E_VOIDmode,              /* DC */
  E_VOIDmode,              /* TC */
  E_VOIDmode,              /* V4QI */
  E_VOIDmode,              /* V2HI */
  E_VOIDmode,              /* V8QI */
  E_VOIDmode,              /* V4HI */
  E_VOIDmode,              /* V2SI */
  E_VOIDmode,              /* V16QI */
  E_VOIDmode,              /* V8HI */
  E_VOIDmode,              /* V4SI */
  E_VOIDmode,              /* V2DI */
  E_VOIDmode,              /* V32QI */
  E_VOIDmode,              /* V16HI */
  E_VOIDmode,              /* V8SI */
  E_VOIDmode,              /* V4DI */
  E_VOIDmode,              /* V4QQ */
  E_VOIDmode,              /* V2HQ */
  E_VOIDmode,              /* V4UQQ */
  E_VOIDmode,              /* V2UHQ */
  E_VOIDmode,              /* V2HA */
  E_VOIDmode,              /* V2UHA */
  E_VOIDmode,              /* V2SF */
  E_VOIDmode,              /* V4SF */
  E_VOIDmode,              /* V2DF */
  E_VOIDmode,              /* V8SF */
  E_VOIDmode,              /* V4DF */
};

const unsigned HOST_WIDE_INT mode_mask_array[NUM_MACHINE_MODES] = 
{
#define MODE_MASK(m)                          \
  ((m) >= HOST_BITS_PER_WIDE_INT)             \
   ? HOST_WIDE_INT_M1U                        \
   : (HOST_WIDE_INT_1U << (m)) - 1

  MODE_MASK (0),           /* VOID */
  MODE_MASK (0),           /* BLK */
  MODE_MASK (4*BITS_PER_UNIT),   /* CC */
  MODE_MASK (4*BITS_PER_UNIT),   /* CCV2 */
  MODE_MASK (4*BITS_PER_UNIT),   /* CCV4 */
  MODE_MASK (4*BITS_PER_UNIT),   /* CCDSP */
  MODE_MASK (4*BITS_PER_UNIT),   /* CCF */
  MODE_MASK (1),           /* BI */
  MODE_MASK (1*BITS_PER_UNIT),   /* QI */
  MODE_MASK (2*BITS_PER_UNIT),   /* HI */
  MODE_MASK (4*BITS_PER_UNIT),   /* SI */
  MODE_MASK (8*BITS_PER_UNIT),   /* DI */
  MODE_MASK (16*BITS_PER_UNIT),    /* TI */
  MODE_MASK (1*BITS_PER_UNIT),   /* QQ */
  MODE_MASK (2*BITS_PER_UNIT),   /* HQ */
  MODE_MASK (4*BITS_PER_UNIT),   /* SQ */
  MODE_MASK (8*BITS_PER_UNIT),   /* DQ */
  MODE_MASK (16*BITS_PER_UNIT),    /* TQ */
  MODE_MASK (1*BITS_PER_UNIT),   /* UQQ */
  MODE_MASK (2*BITS_PER_UNIT),   /* UHQ */
  MODE_MASK (4*BITS_PER_UNIT),   /* USQ */
  MODE_MASK (8*BITS_PER_UNIT),   /* UDQ */
  MODE_MASK (16*BITS_PER_UNIT),    /* UTQ */
  MODE_MASK (2*BITS_PER_UNIT),   /* HA */
  MODE_MASK (4*BITS_PER_UNIT),   /* SA */
  MODE_MASK (8*BITS_PER_UNIT),   /* DA */
  MODE_MASK (16*BITS_PER_UNIT),    /* TA */
  MODE_MASK (2*BITS_PER_UNIT),   /* UHA */
  MODE_MASK (4*BITS_PER_UNIT),   /* USA */
  MODE_MASK (8*BITS_PER_UNIT),   /* UDA */
  MODE_MASK (16*BITS_PER_UNIT),    /* UTA */
  MODE_MASK (4*BITS_PER_UNIT),   /* SF */
  MODE_MASK (8*BITS_PER_UNIT),   /* DF */
  MODE_MASK (16*BITS_PER_UNIT),    /* TF */
  MODE_MASK (4*BITS_PER_UNIT),   /* SD */
  MODE_MASK (8*BITS_PER_UNIT),   /* DD */
  MODE_MASK (16*BITS_PER_UNIT),    /* TD */
  MODE_MASK (2*BITS_PER_UNIT),   /* CQI */
  MODE_MASK (4*BITS_PER_UNIT),   /* CHI */
  MODE_MASK (8*BITS_PER_UNIT),   /* CSI */
  MODE_MASK (16*BITS_PER_UNIT),    /* CDI */
  MODE_MASK (32*BITS_PER_UNIT),    /* CTI */
  MODE_MASK (8*BITS_PER_UNIT),   /* SC */
  MODE_MASK (16*BITS_PER_UNIT),    /* DC */
  MODE_MASK (32*BITS_PER_UNIT),    /* TC */
  MODE_MASK (4*BITS_PER_UNIT),   /* V4QI */
  MODE_MASK (4*BITS_PER_UNIT),   /* V2HI */
  MODE_MASK (8*BITS_PER_UNIT),   /* V8QI */
  MODE_MASK (8*BITS_PER_UNIT),   /* V4HI */
  MODE_MASK (8*BITS_PER_UNIT),   /* V2SI */
  MODE_MASK (16*BITS_PER_UNIT),    /* V16QI */
  MODE_MASK (16*BITS_PER_UNIT),    /* V8HI */
  MODE_MASK (16*BITS_PER_UNIT),    /* V4SI */
  MODE_MASK (16*BITS_PER_UNIT),    /* V2DI */
  MODE_MASK (32*BITS_PER_UNIT),    /* V32QI */
  MODE_MASK (32*BITS_PER_UNIT),    /* V16HI */
  MODE_MASK (32*BITS_PER_UNIT),    /* V8SI */
  MODE_MASK (32*BITS_PER_UNIT),    /* V4DI */
  MODE_MASK (4*BITS_PER_UNIT),   /* V4QQ */
  MODE_MASK (4*BITS_PER_UNIT),   /* V2HQ */
  MODE_MASK (4*BITS_PER_UNIT),   /* V4UQQ */
  MODE_MASK (4*BITS_PER_UNIT),   /* V2UHQ */
  MODE_MASK (4*BITS_PER_UNIT),   /* V2HA */
  MODE_MASK (4*BITS_PER_UNIT),   /* V2UHA */
  MODE_MASK (8*BITS_PER_UNIT),   /* V2SF */
  MODE_MASK (16*BITS_PER_UNIT),    /* V4SF */
  MODE_MASK (16*BITS_PER_UNIT),    /* V2DF */
  MODE_MASK (32*BITS_PER_UNIT),    /* V8SF */
  MODE_MASK (32*BITS_PER_UNIT),    /* V4DF */
#undef MODE_MASK
};

const unsigned char mode_inner[NUM_MACHINE_MODES] =
{
  E_VOIDmode,              /* VOID */
  E_BLKmode,               /* BLK */
  E_CCmode,                /* CC */
  E_CCV2mode,              /* CCV2 */
  E_CCV4mode,              /* CCV4 */
  E_CCDSPmode,             /* CCDSP */
  E_CCFmode,               /* CCF */
  E_BImode,                /* BI */
  E_QImode,                /* QI */
  E_HImode,                /* HI */
  E_SImode,                /* SI */
  E_DImode,                /* DI */
  E_TImode,                /* TI */
  E_QQmode,                /* QQ */
  E_HQmode,                /* HQ */
  E_SQmode,                /* SQ */
  E_DQmode,                /* DQ */
  E_TQmode,                /* TQ */
  E_UQQmode,               /* UQQ */
  E_UHQmode,               /* UHQ */
  E_USQmode,               /* USQ */
  E_UDQmode,               /* UDQ */
  E_UTQmode,               /* UTQ */
  E_HAmode,                /* HA */
  E_SAmode,                /* SA */
  E_DAmode,                /* DA */
  E_TAmode,                /* TA */
  E_UHAmode,               /* UHA */
  E_USAmode,               /* USA */
  E_UDAmode,               /* UDA */
  E_UTAmode,               /* UTA */
  E_SFmode,                /* SF */
  E_DFmode,                /* DF */
  E_TFmode,                /* TF */
  E_SDmode,                /* SD */
  E_DDmode,                /* DD */
  E_TDmode,                /* TD */
  E_QImode,                /* CQI */
  E_HImode,                /* CHI */
  E_SImode,                /* CSI */
  E_DImode,                /* CDI */
  E_TImode,                /* CTI */
  E_SFmode,                /* SC */
  E_DFmode,                /* DC */
  E_TFmode,                /* TC */
  E_QImode,                /* V4QI */
  E_HImode,                /* V2HI */
  E_QImode,                /* V8QI */
  E_HImode,                /* V4HI */
  E_SImode,                /* V2SI */
  E_QImode,                /* V16QI */
  E_HImode,                /* V8HI */
  E_SImode,                /* V4SI */
  E_DImode,                /* V2DI */
  E_QImode,                /* V32QI */
  E_HImode,                /* V16HI */
  E_SImode,                /* V8SI */
  E_DImode,                /* V4DI */
  E_QQmode,                /* V4QQ */
  E_HQmode,                /* V2HQ */
  E_UQQmode,               /* V4UQQ */
  E_UHQmode,               /* V2UHQ */
  E_HAmode,                /* V2HA */
  E_UHAmode,               /* V2UHA */
  E_SFmode,                /* V2SF */
  E_SFmode,                /* V4SF */
  E_DFmode,                /* V2DF */
  E_SFmode,                /* V8SF */
  E_DFmode,                /* V4DF */
};

unsigned char mode_unit_size[NUM_MACHINE_MODES] = 
{
  0,                       /* VOID */
  0,                       /* BLK */
  4,                       /* CC */
  4,                       /* CCV2 */
  4,                       /* CCV4 */
  4,                       /* CCDSP */
  4,                       /* CCF */
  1,                       /* BI */
  1,                       /* QI */
  2,                       /* HI */
  4,                       /* SI */
  8,                       /* DI */
  16,                      /* TI */
  1,                       /* QQ */
  2,                       /* HQ */
  4,                       /* SQ */
  8,                       /* DQ */
  16,                      /* TQ */
  1,                       /* UQQ */
  2,                       /* UHQ */
  4,                       /* USQ */
  8,                       /* UDQ */
  16,                      /* UTQ */
  2,                       /* HA */
  4,                       /* SA */
  8,                       /* DA */
  16,                      /* TA */
  2,                       /* UHA */
  4,                       /* USA */
  8,                       /* UDA */
  16,                      /* UTA */
  4,                       /* SF */
  8,                       /* DF */
  16,                      /* TF */
  4,                       /* SD */
  8,                       /* DD */
  16,                      /* TD */
  1,                       /* CQI */
  2,                       /* CHI */
  4,                       /* CSI */
  8,                       /* CDI */
  16,                      /* CTI */
  4,                       /* SC */
  8,                       /* DC */
  16,                      /* TC */
  1,                       /* V4QI */
  2,                       /* V2HI */
  1,                       /* V8QI */
  2,                       /* V4HI */
  4,                       /* V2SI */
  1,                       /* V16QI */
  2,                       /* V8HI */
  4,                       /* V4SI */
  8,                       /* V2DI */
  1,                       /* V32QI */
  2,                       /* V16HI */
  4,                       /* V8SI */
  8,                       /* V4DI */
  1,                       /* V4QQ */
  2,                       /* V2HQ */
  1,                       /* V4UQQ */
  2,                       /* V2UHQ */
  2,                       /* V2HA */
  2,                       /* V2UHA */
  4,                       /* V2SF */
  4,                       /* V4SF */
  8,                       /* V2DF */
  4,                       /* V8SF */
  8,                       /* V4DF */
};

const unsigned short mode_unit_precision[NUM_MACHINE_MODES] =
{
  0,                       /* VOID */
  0,                       /* BLK */
  4*BITS_PER_UNIT,         /* CC */
  4*BITS_PER_UNIT,         /* CCV2 */
  4*BITS_PER_UNIT,         /* CCV4 */
  4*BITS_PER_UNIT,         /* CCDSP */
  4*BITS_PER_UNIT,         /* CCF */
  1,                       /* BI */
  1*BITS_PER_UNIT,         /* QI */
  2*BITS_PER_UNIT,         /* HI */
  4*BITS_PER_UNIT,         /* SI */
  8*BITS_PER_UNIT,         /* DI */
  16*BITS_PER_UNIT,        /* TI */
  1*BITS_PER_UNIT,         /* QQ */
  2*BITS_PER_UNIT,         /* HQ */
  4*BITS_PER_UNIT,         /* SQ */
  8*BITS_PER_UNIT,         /* DQ */
  16*BITS_PER_UNIT,        /* TQ */
  1*BITS_PER_UNIT,         /* UQQ */
  2*BITS_PER_UNIT,         /* UHQ */
  4*BITS_PER_UNIT,         /* USQ */
  8*BITS_PER_UNIT,         /* UDQ */
  16*BITS_PER_UNIT,        /* UTQ */
  2*BITS_PER_UNIT,         /* HA */
  4*BITS_PER_UNIT,         /* SA */
  8*BITS_PER_UNIT,         /* DA */
  16*BITS_PER_UNIT,        /* TA */
  2*BITS_PER_UNIT,         /* UHA */
  4*BITS_PER_UNIT,         /* USA */
  8*BITS_PER_UNIT,         /* UDA */
  16*BITS_PER_UNIT,        /* UTA */
  4*BITS_PER_UNIT,         /* SF */
  8*BITS_PER_UNIT,         /* DF */
  16*BITS_PER_UNIT,        /* TF */
  4*BITS_PER_UNIT,         /* SD */
  8*BITS_PER_UNIT,         /* DD */
  16*BITS_PER_UNIT,        /* TD */
  1*BITS_PER_UNIT,         /* CQI */
  2*BITS_PER_UNIT,         /* CHI */
  4*BITS_PER_UNIT,         /* CSI */
  8*BITS_PER_UNIT,         /* CDI */
  16*BITS_PER_UNIT,        /* CTI */
  4*BITS_PER_UNIT,         /* SC */
  8*BITS_PER_UNIT,         /* DC */
  16*BITS_PER_UNIT,        /* TC */
  1*BITS_PER_UNIT,         /* V4QI */
  2*BITS_PER_UNIT,         /* V2HI */
  1*BITS_PER_UNIT,         /* V8QI */
  2*BITS_PER_UNIT,         /* V4HI */
  4*BITS_PER_UNIT,         /* V2SI */
  1*BITS_PER_UNIT,         /* V16QI */
  2*BITS_PER_UNIT,         /* V8HI */
  4*BITS_PER_UNIT,         /* V4SI */
  8*BITS_PER_UNIT,         /* V2DI */
  1*BITS_PER_UNIT,         /* V32QI */
  2*BITS_PER_UNIT,         /* V16HI */
  4*BITS_PER_UNIT,         /* V8SI */
  8*BITS_PER_UNIT,         /* V4DI */
  1*BITS_PER_UNIT,         /* V4QQ */
  2*BITS_PER_UNIT,         /* V2HQ */
  1*BITS_PER_UNIT,         /* V4UQQ */
  2*BITS_PER_UNIT,         /* V2UHQ */
  2*BITS_PER_UNIT,         /* V2HA */
  2*BITS_PER_UNIT,         /* V2UHA */
  4*BITS_PER_UNIT,         /* V2SF */
  4*BITS_PER_UNIT,         /* V4SF */
  8*BITS_PER_UNIT,         /* V2DF */
  4*BITS_PER_UNIT,         /* V8SF */
  8*BITS_PER_UNIT,         /* V4DF */
};

unsigned short mode_base_align[NUM_MACHINE_MODES] = 
{
  0,                       /* VOID */
  0,                       /* BLK */
  4,                       /* CC */
  4,                       /* CCV2 */
  4,                       /* CCV4 */
  4,                       /* CCDSP */
  4,                       /* CCF */
  1,                       /* BI */
  1,                       /* QI */
  2,                       /* HI */
  4,                       /* SI */
  8,                       /* DI */
  16,                      /* TI */
  1,                       /* QQ */
  2,                       /* HQ */
  4,                       /* SQ */
  8,                       /* DQ */
  16,                      /* TQ */
  1,                       /* UQQ */
  2,                       /* UHQ */
  4,                       /* USQ */
  8,                       /* UDQ */
  16,                      /* UTQ */
  2,                       /* HA */
  4,                       /* SA */
  8,                       /* DA */
  16,                      /* TA */
  2,                       /* UHA */
  4,                       /* USA */
  8,                       /* UDA */
  16,                      /* UTA */
  4,                       /* SF */
  8,                       /* DF */
  16,                      /* TF */
  4,                       /* SD */
  8,                       /* DD */
  16,                      /* TD */
  1,                       /* CQI */
  2,                       /* CHI */
  4,                       /* CSI */
  8,                       /* CDI */
  16,                      /* CTI */
  4,                       /* SC */
  8,                       /* DC */
  16,                      /* TC */
  4,                       /* V4QI */
  4,                       /* V2HI */
  8,                       /* V8QI */
  8,                       /* V4HI */
  8,                       /* V2SI */
  16,                      /* V16QI */
  16,                      /* V8HI */
  16,                      /* V4SI */
  16,                      /* V2DI */
  32,                      /* V32QI */
  32,                      /* V16HI */
  32,                      /* V8SI */
  32,                      /* V4DI */
  4,                       /* V4QQ */
  4,                       /* V2HQ */
  4,                       /* V4UQQ */
  4,                       /* V2UHQ */
  4,                       /* V2HA */
  4,                       /* V2UHA */
  8,                       /* V2SF */
  16,                      /* V4SF */
  16,                      /* V2DF */
  32,                      /* V8SF */
  32,                      /* V4DF */
};

const unsigned char class_narrowest_mode[MAX_MODE_CLASS] =
{
  MIN_MODE_RANDOM,         /* VOID */
  MIN_MODE_CC,             /* CC */
  MIN_MODE_INT,            /* QI */
  MIN_MODE_PARTIAL_INT,    /* VOID */
  MIN_MODE_FRACT,          /* QQ */
  MIN_MODE_UFRACT,         /* UQQ */
  MIN_MODE_ACCUM,          /* HA */
  MIN_MODE_UACCUM,         /* UHA */
  MIN_MODE_FLOAT,          /* SF */
  MIN_MODE_DECIMAL_FLOAT,  /* SD */
  MIN_MODE_COMPLEX_INT,    /* CQI */
  MIN_MODE_COMPLEX_FLOAT,  /* SC */
  MIN_MODE_VECTOR_BOOL,    /* VOID */
  MIN_MODE_VECTOR_INT,     /* V4QI */
  MIN_MODE_VECTOR_FRACT,   /* V4QQ */
  MIN_MODE_VECTOR_UFRACT,  /* V4UQQ */
  MIN_MODE_VECTOR_ACCUM,   /* V2HA */
  MIN_MODE_VECTOR_UACCUM,  /* V2UHA */
  MIN_MODE_VECTOR_FLOAT,   /* V2SF */
  MIN_MODE_OPAQUE,         /* VOID */
};

const struct real_format *
 real_format_for_mode[MAX_MODE_FLOAT - MIN_MODE_FLOAT + 1 + MAX_MODE_DECIMAL_FLOAT - MIN_MODE_DECIMAL_FLOAT + 1] =
{
  &ieee_single_format,     /* SF */
  &ieee_double_format,     /* DF */
  &ieee_quad_format,       /* TF */
  &decimal_single_format,  /* SD */
  &decimal_double_format,  /* DD */
  &decimal_quad_format,    /* TD */
};

void
init_adjust_machine_modes (void)
{
  poly_uint16 ps ATTRIBUTE_UNUSED;
  size_t s ATTRIBUTE_UNUSED;

  /* config/mips/mips-modes.def:50 */
  ps = s = 16;
  mode_unit_size[E_CCV4mode] = s;
  mode_size[E_CCV4mode] = ps;
  mode_base_align[E_CCV4mode] = known_alignment (ps);

  /* config/mips/mips-modes.def:46 */
  ps = s = 8;
  mode_unit_size[E_CCV2mode] = s;
  mode_size[E_CCV2mode] = ps;
  mode_base_align[E_CCV2mode] = known_alignment (ps);

  /* config/mips/mips-modes.def:51 */
  s = 16;
  mode_base_align[E_CCV4mode] = s;

  /* config/mips/mips-modes.def:47 */
  s = 8;
  mode_base_align[E_CCV2mode] = s;
}

const unsigned char mode_ibit[NUM_MACHINE_MODES] = 
{
  0,                       /* VOID */
  0,                       /* BLK */
  0,                       /* CC */
  0,                       /* CCV2 */
  0,                       /* CCV4 */
  0,                       /* CCDSP */
  0,                       /* CCF */
  0,                       /* BI */
  0,                       /* QI */
  0,                       /* HI */
  0,                       /* SI */
  0,                       /* DI */
  0,                       /* TI */
  0,                       /* QQ */
  0,                       /* HQ */
  0,                       /* SQ */
  0,                       /* DQ */
  0,                       /* TQ */
  0,                       /* UQQ */
  0,                       /* UHQ */
  0,                       /* USQ */
  0,                       /* UDQ */
  0,                       /* UTQ */
  8,                       /* HA */
  16,                      /* SA */
  32,                      /* DA */
  64,                      /* TA */
  8,                       /* UHA */
  16,                      /* USA */
  32,                      /* UDA */
  64,                      /* UTA */
  0,                       /* SF */
  0,                       /* DF */
  0,                       /* TF */
  0,                       /* SD */
  0,                       /* DD */
  0,                       /* TD */
  0,                       /* CQI */
  0,                       /* CHI */
  0,                       /* CSI */
  0,                       /* CDI */
  0,                       /* CTI */
  0,                       /* SC */
  0,                       /* DC */
  0,                       /* TC */
  0,                       /* V4QI */
  0,                       /* V2HI */
  0,                       /* V8QI */
  0,                       /* V4HI */
  0,                       /* V2SI */
  0,                       /* V16QI */
  0,                       /* V8HI */
  0,                       /* V4SI */
  0,                       /* V2DI */
  0,                       /* V32QI */
  0,                       /* V16HI */
  0,                       /* V8SI */
  0,                       /* V4DI */
  0,                       /* V4QQ */
  0,                       /* V2HQ */
  0,                       /* V4UQQ */
  0,                       /* V2UHQ */
  0,                       /* V2HA */
  0,                       /* V2UHA */
  0,                       /* V2SF */
  0,                       /* V4SF */
  0,                       /* V2DF */
  0,                       /* V8SF */
  0,                       /* V4DF */
};

const unsigned char mode_fbit[NUM_MACHINE_MODES] = 
{
  0,                       /* VOID */
  0,                       /* BLK */
  0,                       /* CC */
  0,                       /* CCV2 */
  0,                       /* CCV4 */
  0,                       /* CCDSP */
  0,                       /* CCF */
  0,                       /* BI */
  0,                       /* QI */
  0,                       /* HI */
  0,                       /* SI */
  0,                       /* DI */
  0,                       /* TI */
  7,                       /* QQ */
  15,                      /* HQ */
  31,                      /* SQ */
  63,                      /* DQ */
  127,                     /* TQ */
  8,                       /* UQQ */
  16,                      /* UHQ */
  32,                      /* USQ */
  64,                      /* UDQ */
  128,                     /* UTQ */
  7,                       /* HA */
  15,                      /* SA */
  31,                      /* DA */
  63,                      /* TA */
  8,                       /* UHA */
  16,                      /* USA */
  32,                      /* UDA */
  64,                      /* UTA */
  0,                       /* SF */
  0,                       /* DF */
  0,                       /* TF */
  0,                       /* SD */
  0,                       /* DD */
  0,                       /* TD */
  0,                       /* CQI */
  0,                       /* CHI */
  0,                       /* CSI */
  0,                       /* CDI */
  0,                       /* CTI */
  0,                       /* SC */
  0,                       /* DC */
  0,                       /* TC */
  0,                       /* V4QI */
  0,                       /* V2HI */
  0,                       /* V8QI */
  0,                       /* V4HI */
  0,                       /* V2SI */
  0,                       /* V16QI */
  0,                       /* V8HI */
  0,                       /* V4SI */
  0,                       /* V2DI */
  0,                       /* V32QI */
  0,                       /* V16HI */
  0,                       /* V8SI */
  0,                       /* V4DI */
  0,                       /* V4QQ */
  0,                       /* V2HQ */
  0,                       /* V4UQQ */
  0,                       /* V2UHQ */
  0,                       /* V2HA */
  0,                       /* V2UHA */
  0,                       /* V2SF */
  0,                       /* V4SF */
  0,                       /* V2DF */
  0,                       /* V8SF */
  0,                       /* V4DF */
};

const int_n_data_t int_n_data[] =
{
 {
  128,                     /* TI */
{ E_TImode }, },
};
