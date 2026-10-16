#include "common.h"
#include "m2c_macros.h"

void func_001A8E80(void *arg0, void *arg1);
void func_001A8F10(void *arg0, void *arg1);
s32 func_001A8F90(void *arg0);
void func_001A8FA0(void *arg0, void *arg1, s32 arg2);
void func_001A9080(s32 arg0, void *arg1);
void func_001A90C0(void);
void func_001A90D0(void *arg0, void *arg1);
void func_001A91E0(s32 arg0, void *arg1) {
    M2C_FIELD(arg1, void (**)(void *, void *), 0x94) = func_001A90D0;
    M2C_FIELD(arg1, void (**)(), 0x80) = func_001A90C0;
    M2C_FIELD(arg1, void (**)(s32, void *), 0x90) = func_001A9080;
    M2C_FIELD(arg1, s32 (**)(void *), 0x188) = func_001A8F90;
    M2C_FIELD(arg1, void (**)(void *, void *, s32), 0x110) = func_001A8FA0;
    M2C_FIELD(arg1, void (**)(void *, void *), 0x190) = func_001A8F10;
    M2C_FIELD(arg1, void (**)(void *, void *), 0x194) = func_001A8E80;
    M2C_FIELD(arg1, s8 *, 0x24D) = 1;
}
