#include "common.h"

s32 func_0017E700(void *arg0);
s32 func_0019EEE0(void *arg0, s32 arg1);
extern s32 D_00A07D10[];
extern s32 D_00A07F40[];

s32 func_0017D4D0(s32 arg0) {
    if (func_0017E700(&D_00A07D10[0]) != 1) {
        return 0;
    }
    return func_0019EEE0(&D_00A07F40[0], arg0);
}
