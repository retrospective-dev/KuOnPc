#include "common.h"

s32 fssdsynthSeStreamOn(s32 arg0, s8 arg1, s8 arg2, s8 arg3, s8 arg4, s32 arg5, s32 arg6, s32 arg7);
void fssdsynthSeStreamOn_forSurround(s32 arg0, s8 arg1, s8 arg2, s8 arg3, s8 arg4, s32 arg5) {
    fssdsynthSeStreamOn(arg0, arg1, arg2, arg3, arg4, 1, 0x3F, arg5);
}
