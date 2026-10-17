#include "common.h"
/* mwcc_pad: noternary */

void func_0014B580(s32 arg0);
extern u8 D_009BB7F8[];

s32 func_0016BDC0(u32 arg0) {
    s32 *temp_s0;

    if (arg0 >= 0x302U) {
        return 0;
    }
    temp_s0 = &D_009BB7F8[0] + (arg0 * 4);
    func_0014B580(*temp_s0);
    *temp_s0 = 0;
    return 1;
}
