#include "common.h"

extern s8 D_00A52C05[];

void func_001FC4A0(s32 arg0, s8 arg1) {
    *(&D_00A52C05[0] + ((arg0 & 0xFF) * 0x50)) = arg1;
}
