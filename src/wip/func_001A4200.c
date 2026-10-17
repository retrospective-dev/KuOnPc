#include "common.h"
/* mwcc_pad: noternary unsteal */

s32 func_00147FC0(void);
void func_00148100(s32 arg0, s32 arg1);
s32 func_00148460(s32 arg0, s32 arg1, s32 arg2);
s32 * func_001A4760(s32 arg0, u8 *arg1, s32 arg2, s32 *arg3);
s32 func_001A4200(void) {
    if (func_00148460(0xA, 1, 0x10000) == 0) {
        return 0;
    }
    func_00148100(0xA, (s32) func_001A4760);
    func_00147FC0();
    return 1;
}
