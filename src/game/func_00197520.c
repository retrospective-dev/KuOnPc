#include "common.h"
#include "m2c_macros.h"

s32 func_00197110(void *arg0);
void func_001973F0(s32 arg0, void *arg1, s32 arg2);
void func_00197490(s32 arg0, void *arg1, s32 arg2);
void func_00197520(s32 arg0, void *arg1) {
    M2C_FIELD(arg1, s32 (**)(void *), 0x184) = func_00197110;
    M2C_FIELD(arg1, void (**)(s32, void *, s32), 0x100) = func_00197490;
    M2C_FIELD(arg1, void (**)(s32, void *, s32), 0x104) = func_001973F0;
}
