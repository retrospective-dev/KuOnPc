#include "common.h"
#include "kuon_types.h"

extern int D_0025E3A4;
extern int D_0025E3A8;
extern unsigned char D_007897C0[512];
extern S_scdRpc D_0078AA70;
s32 func_00110B58(S_scdRpc *, s32, s32);
s32 func_00110D28(S_scdRpc *, s32, s32, u8 *, s32, u8 *, s32, s32, s64);
s32 func_00110F20(S_scdRpc *);
s32 func_00128DE8(s32 *);
extern u8 D_002590E0[];
extern s32 D_0078AA94[];

s32 func_001487C0(void) {
    s32 var_s0;
    s32 var_v0;

    if (D_0025E3A4 == 1) {
        return 0;
    }
    D_0025E3A8 = 0;
    do {
        func_00110B58(&D_0078AA70, 0x101A, 0);
    } while (D_0078AA94[0] == 0);
    var_s0 = 0x989680;
    if (func_00110F20(&D_0078AA70) == 1) {
loop_6:
        if (var_s0 < 0) {
            func_00128DE8(&D_002590E0[0]);
            var_v0 = -1;
        } else {
            var_s0 -= 1;
            if (func_00110F20(&D_0078AA70) != 1) {
                goto block_10;
            }
            goto loop_6;
        }
    } else {
block_10:
        var_v0 = 1;
    }
    if (var_v0 >= 0) {
        func_00110D28(&D_0078AA70, 0x10000, 0, D_007897C0, 0, D_007897C0, 0x10, 0, 0);
    }
    D_0025E3A4 = 1;
    return 1;
}
