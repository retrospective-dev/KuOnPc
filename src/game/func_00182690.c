#include "common.h"

extern s8 D_00A083F0[];

void *func_00182690(s32 arg0) {
    return &D_00A083F0[0] + (arg0 * 8);
}
