#include "common.h"

void func_001FE460(void);
extern u8 D_0025E744;
extern s8 D_003AC899[];

void func_00201FA0(void) {
    D_0025E744 -= 1;
    if ((s32) D_0025E744 <= 0) {
        D_003AC899[0] = 0x16;
        func_001FE460();
    }
}
