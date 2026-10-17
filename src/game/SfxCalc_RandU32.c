#include "common.h"

extern s32 A;
extern s32 B;

s32 SfxCalc_RandU32(void) {
    A = B + (A * 0x85);
    B = (A * 5) + (B * 7);
    return A ^ B;
}
