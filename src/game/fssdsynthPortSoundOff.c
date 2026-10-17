#include "common.h"

s32 fssdCallRpcInt(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
void fssdsynthPortSoundOff(s32 arg0) {
    fssdCallRpcInt(4, 1, 0x10300, arg0);
}
