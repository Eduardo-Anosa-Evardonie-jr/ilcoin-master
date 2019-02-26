/* All Rights Reserved. Ilgamos International 2017© */

#ifndef _SECP256K1_NUM_REPR_
#define _SECP256K1_NUM_REPR_

#include <gmp.h>

#define NUM_LIMBS ((256+GMP_NUMB_BITS-1)/GMP_NUMB_BITS)

typedef struct {
    mp_limb_t data[2*NUM_LIMBS];
    int neg;
    int limbs;
} secp256k1_num;

#endif
