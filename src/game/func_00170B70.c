#include "common.h"

extern u8 D_009BCB60[];

void func_00170B70(s32 arg0, s32 arg1) {
    *(s32 *)(&D_009BCB60[0] + (arg0 * 4)) = arg1;
}
