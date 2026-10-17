#include "common.h"

extern s32 D_0025E32C;

void func_0013ADC0(void) {
    D_0025E32C += 1;
    *(s32 *)0x10000010 = (s32) (*(s32 *)0x10000010 | 0x400);
}
