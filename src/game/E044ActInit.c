#include "common.h"
#include "m2c_macros.h"

void E044FrameLast(void *arg0);
void SetE044Dead(s32 arg0, void *arg1, s32 arg2);
void E044ActInit(s32 arg0, void *arg1) {
    M2C_FIELD(arg1, void (**)(s32, void *, s32), 0x110) = SetE044Dead;
    M2C_FIELD(arg1, void (**)(void *), 0x18C) = E044FrameLast;
    M2C_FIELD(arg1, s8 *, 0x24C) = 1;
}
