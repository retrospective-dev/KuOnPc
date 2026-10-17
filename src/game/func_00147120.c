#include "common.h"

extern s8 D_00788680[];

void *func_00147120(s32 arg0, s32 arg1) {
    return &D_00788680[0] + ((arg1 + (arg0 * 4)) * 0x1C0) + 0x100;
}
