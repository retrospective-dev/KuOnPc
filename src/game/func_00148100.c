#include "common.h"

extern u8 D_00789A30[];

void func_00148100(s32 arg0, s32 arg1) {
    *(s32 *)(&D_00789A30[0] + (arg0 * 4)) = arg1;
}
