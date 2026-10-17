#include "common.h"
/* mwcc_pad: noternary */
#include "m2c_macros.h"

s32 func_001D46A0(u8 *arg0, s32 arg1);
extern u8 *D_0025E610;

s32 func_001D3520(s32 arg0) {
    s32 temp_v0;

    temp_v0 = func_001D46A0(D_0025E610, arg0);
    if (temp_v0 == 0) {
        return 0;
    }
    M2C_FIELD(temp_v0, s32 *, 8) = 0;
    return 1;
}
