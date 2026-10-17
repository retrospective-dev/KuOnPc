#include "common.h"

void func_0014B580(s32 arg0);
extern s32 D_0025E410;
extern s8 D_003AC89D[];

void func_0016FA70(void) {
    D_003AC89D[0] = 0;
    if (D_0025E410 != 0) {
        func_0014B580(D_0025E410);
        D_0025E410 = 0;
    }
}
