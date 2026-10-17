#include "common.h"
#include "m2c_macros.h"

extern u8 *D_0025E424;
extern s32 D_0025E428;

void func_001773F0(s32 arg0, s32 arg1) {
    D_0025E424 = (unsigned char *) (D_0025E428 + 0x9C);
    M2C_FIELD(D_0025E424, s32 *, 0) = arg0;
    M2C_FIELD(D_0025E424, s32 *, 4) = arg1;
}
