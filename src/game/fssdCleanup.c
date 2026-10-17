#include "common.h"
#include "kuon_types.h"

extern int s_iIopToEeRpcThreadId;
extern int s_iIsInit;
extern int s_iIsMakeIopToEeRpc;
s32 func_0010D770(s32);
s32 func_0010D7B0(s32);
s32 func_001110C8(s32 *, s32 *);
s32 func_00111160(s32 *);
extern u8 D_007899C0[];
extern u8 D_00789A10[];

s32 fssdCleanup(void) {
    if ((s_iIsInit != 0) && (s_iIsMakeIopToEeRpc != 0)) {
        func_0010D7B0(s_iIopToEeRpcThreadId);
        func_0010D770(s_iIopToEeRpcThreadId);
        func_001110C8(&D_007899C0[0], &D_00789A10[0]);
        func_00111160(&D_00789A10[0]);
    }
    s_iIsInit = 0;
    s_iIsMakeIopToEeRpc = 0;
    return 1;
}
