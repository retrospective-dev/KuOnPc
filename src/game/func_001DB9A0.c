#include "common.h"

extern s32 D_0025E664;
extern u8 D_00A50030[];
extern u8 D_00A50034[];

s32 func_001DB9A0(s32 arg0, s32 arg1) {
    s32 temp_a4;

    temp_a4 = D_0025E664 * 8;
    *(s32 *)(&D_00A50030[0] + temp_a4) = arg0 & 0xFFFF;
    *(s32 *)(&D_00A50034[0] + temp_a4) = arg1;
    D_0025E664 += 1;
    D_0025E664 = (s32) D_0025E664 % 10;
    return 1;
}
