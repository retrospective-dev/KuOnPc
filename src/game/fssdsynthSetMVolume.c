#include "common.h"

s32 fssdCallRpcInt(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
void fssdsynthSetMVolume(s32 arg0) {
    fssdCallRpcInt(4, 1, 0x300, arg0 & 0xFFFF);
}
