#include "common.h"
#include "m2c_macros.h"

void func_001A9400(s32 arg0, void *arg1, s32 arg2);
void func_001A9470(void *arg0, void *arg1);
void func_001A97C0(s32 arg0, void *arg1) {
    M2C_FIELD(arg1, void (**)(void *, void *), 0x88) = func_001A9470;
    M2C_FIELD(arg1, void (**)(s32, void *, s32), 0x110) = func_001A9400;
}
