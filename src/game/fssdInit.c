#include "common.h"
#include "kuon_types.h"

extern int s_iIsInit;
extern int s_iIsMakeIopToEeRpc;
extern unsigned char g_ucEeToIopRpcBuff[512];
extern S_scdRpc s_scdRpc_0078AA70;
s32 func_00110B58(S_scdRpc *, s32, s32);
s32 func_00110D28(S_scdRpc *, s32, s32, u8 *, s32, u8 *, s32, s32, s64);
s32 func_00110F20(S_scdRpc *);
s32 func_00128DE8(s32 *);
extern u8 D_002590E0[];
extern s32 D_0078AA94[];

s32 fssdInit(void) {
    s32 var_s0;
    s32 var_v0;

    if (s_iIsInit == 1) {
        return 0;
    }
    s_iIsMakeIopToEeRpc = 0;
    do {
        func_00110B58(&s_scdRpc_0078AA70, 0x101A, 0);
    } while (D_0078AA94[0] == 0);
    var_s0 = 0x989680;
    if (func_00110F20(&s_scdRpc_0078AA70) == 1) {
loop_6:
        if (var_s0 < 0) {
            func_00128DE8(&D_002590E0[0]);
            var_v0 = -1;
        } else {
            var_s0 -= 1;
            if (func_00110F20(&s_scdRpc_0078AA70) != 1) {
                goto block_10;
            }
            goto loop_6;
        }
    } else {
block_10:
        var_v0 = 1;
    }
    if (var_v0 >= 0) {
        func_00110D28(&s_scdRpc_0078AA70, 0x10000, 0, g_ucEeToIopRpcBuff, 0, g_ucEeToIopRpcBuff, 0x10, 0, 0);
    }
    s_iIsInit = 1;
    return 1;
}
