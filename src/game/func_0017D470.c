#include "common.h"

s32 func_0017C000(void *arg0);
s32 func_0017E960(void *arg0, s32 arg1);
extern s32 D_00A07D30[];
extern s32 D_00A07F70[];

s32 func_0017D470(void) {
    if (func_0017C000(&D_00A07D30[0]) == 0) {
        func_0017E960(&D_00A07F70[0], 1);
    }
    return 1;
}
