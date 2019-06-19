#ifndef PHI_H
#define PHI_H

#ifdef __cplusplus
extern "C" {
#endif

#include <stdint.h>

void phi1612_hash(const char* input, char* output, uint32_t len);
void phi2_hash(const char* input, char* output, uint32_t len);

#ifdef __cplusplus
}
#endif

#endif