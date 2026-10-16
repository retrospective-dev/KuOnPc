#include "common.h"

s32 func_001D4610(void *arg0, s16 arg1);
void * func_001D48D0(void *arg0, u32 arg1, s16 arg2);
extern void *D_0025E604;
extern s32 D_00A4C9B0[];

void func_001D2220(void) {
    D_0025E604 = func_001D48D0(&D_00A4C9B0[0], 0x400U, 8);
    func_001D4610(D_0025E604, 0x80);
}
