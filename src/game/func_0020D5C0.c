#include "common.h"

extern s8 D_00A617F6[];

void func_0020D5C0(s32 arg0, s8 arg1) {
    *(&D_00A617F6[0] + ((arg0 & 0xFF) * 0x60)) = arg1;
}
