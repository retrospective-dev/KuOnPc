#include "common.h"
#include "m2c_macros.h"

s32 func_00197830(void *arg0);
s32 func_00197C50(void *arg0);
void func_00197DD0(s32 arg0, void *arg1);
void func_00197DF0(s32 *arg0, void *arg1);
void func_001981B0(void *arg0, void *arg1);
void func_001982E0(s32 arg0, void *arg1) {
    M2C_FIELD(arg1, void (**)(void *, void *), 0x8C) = func_001981B0;
    M2C_FIELD(arg1, void (**)(s32 *, void *), 0xA0) = func_00197DF0;
    M2C_FIELD(arg1, s32 (**)(void *), 0x184) = func_00197830;
    M2C_FIELD(arg1, s32 (**)(void *), 0x188) = func_00197C50;
    M2C_FIELD(arg1, void (**)(s32, void *), 0x120) = func_00197DD0;
}
