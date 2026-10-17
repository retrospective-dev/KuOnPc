#include "common.h"
/* mwcc_pad: noternary unsteal */

s32 fssdRequireIopToEeRpc(void);
void fssdRegister(s32 arg0, s32 arg1);
s32 fssdCallRpcVoid(s32 arg0, s32 arg1, s32 arg2);
s32 * _IopToEeRpcDispatch(s32 arg0, u8 *arg1, s32 arg2, s32 *arg3);
s32 fssdivagInit(void) {
    if (fssdCallRpcVoid(0xA, 1, 0x10000) == 0) {
        return 0;
    }
    fssdRegister(0xA, (s32) _IopToEeRpcDispatch);
    fssdRequireIopToEeRpc();
    return 1;
}
