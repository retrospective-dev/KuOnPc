#include "common.h"
#include "m2c_macros.h"

void func_002043D0(s32 arg0, void *arg1, s32 arg2);
void func_00204400(void *arg0, void *arg1);
void func_00204690(s32 arg0, void *arg1) {
    M2C_FIELD(arg1, void (**)(void *, void *), 0x88) = func_00204400;
    M2C_FIELD(arg1, void (**)(s32, void *, s32), 0x110) = func_002043D0;
}
