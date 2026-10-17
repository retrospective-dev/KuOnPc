#include "common.h"
#include "m2c_macros.h"

s32 func_001A9EC0(void *arg0);
void func_001A9EE0(void *arg0, s32 arg1, s32 arg2);
void func_001A9FB0(void *arg0, void *arg1);
void func_001AA080(s32 arg0);
void func_001AA0D0(void *arg0, void *arg1);
void func_001AA170(s32 arg0, void *arg1) {
    M2C_FIELD(arg1, void (**)(void *, void *), 0x94) = func_001AA0D0;
    M2C_FIELD(arg1, void (**)(s32), 0x80) = func_001AA080;
    M2C_FIELD(arg1, void (**)(void *, void *), 0x8C) = func_001A9FB0;
    M2C_FIELD(arg1, void (**)(void *, s32, s32), 0x90) = func_001A9EE0;
    M2C_FIELD(arg1, s32 (**)(void *), 0x184) = func_001A9EC0;
    M2C_FIELD(arg1, s8 *, 0x1DA) = 1;
    M2C_FIELD(arg1, u16 *, 0x1FA) = 0xFFFF;
}
