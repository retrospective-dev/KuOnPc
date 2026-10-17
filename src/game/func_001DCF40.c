#include "common.h"

extern s32 D_0025E6D4;
extern s32 D_0025E6D8;
extern s32 D_0025E6DC;

void func_001DCF40(void) {
    if (D_0025E6D4 > 0) {
        D_0025E6D4 -= 1;
    }
    if (D_0025E6D8 != 0) {
        D_0025E6DC = D_0025E6D8;
    }
    D_0025E6D8 = 0;
}
