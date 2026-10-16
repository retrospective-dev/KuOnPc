#include "common.h"

void * func_001D48D0(void *arg0, u32 arg1, s16 arg2);
extern void *D_0025E610;
extern void *D_0025E614;
extern s32 D_00A4D1C0[];
extern s32 D_00A4F9C0[];

s32 func_001D45C0(void) {
    D_0025E610 = func_001D48D0(&D_00A4F9C0[0], 0x400U, 0x2C);
    D_0025E614 = func_001D48D0(&D_00A4D1C0[0], 0x2800U, 0x30);
    return 1;
}
