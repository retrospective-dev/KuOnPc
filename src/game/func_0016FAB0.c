#include "common.h"

void func_0016F330(void);
s32 func_00170CA0(u16 arg0);
s32 func_00170FD0(s32 arg0, s32 arg1);
extern s8 D_003AC89D[];

s32 func_0016FAB0(s32 arg0, s32 arg1) {
    if (func_00170FD0(arg1, arg0) == 0) {
        return 0;
    }
    func_0016F330();
    if (func_00170CA0(0x7FFFU) <= 0) {
        return 0;
    }
    D_003AC89D[0] = 1;
    return 1;
}
