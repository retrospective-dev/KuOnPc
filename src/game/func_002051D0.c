#include "common.h"
#include "m2c_macros.h"

s32 func_00204C30(void *arg0);
s32 func_00204ED0(void *arg0);
void func_00205080(s32 arg0, void *arg1, s32 arg2);
void func_002050B0(s32 arg0, void *arg1, s32 arg2);
void func_00205140(s32 arg0, void *arg1, s32 arg2);
void func_002051D0(s32 arg0, void *arg1) {
    M2C_FIELD(arg1, s32 (**)(void *), 0x184) = func_00204C30;
    M2C_FIELD(arg1, s32 (**)(void *), 0x188) = func_00204ED0;
    M2C_FIELD(arg1, void (**)(s32, void *, s32), 0x100) = func_00205140;
    M2C_FIELD(arg1, void (**)(s32, void *, s32), 0x104) = func_002050B0;
    M2C_FIELD(arg1, void (**)(s32, void *, s32), 0x110) = func_00205080;
}
