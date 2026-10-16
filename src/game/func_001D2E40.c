#include "common.h"

void * func_001D48D0(void *arg0, u32 arg1, s16 arg2);
extern void *D_0025E608;
extern s32 D_00A4CDB0[];

void func_001D2E40(void) {
    D_0025E608 = func_001D48D0(&D_00A4CDB0[0], 0x400U, 0x80);
}
