#ifndef _TABULATED_HAMMING_WEIGHT_H_
#define _TABULATED_HAMMING_WEIGHT_H_

#include <stdint.h>
#include <stdlib.h>

// compute the Hamming weight of an array of 8-bit words using the small table look-ups
int table_bitset8_weight(const uint8_t * input, size_t length);

#endif
