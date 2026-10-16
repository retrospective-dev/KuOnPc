#include "common.h"
#include "m2c_macros.h"

void func_0020A170(void *arg0);
void func_0020A280(s32 arg0, void *arg1, s32 arg2);
void func_0020A2C0(s32 arg0, void *arg1) {
    M2C_FIELD(arg1, void (**)(s32, void *, s32), 0x110) = func_0020A280;
    M2C_FIELD(arg1, void (**)(void *), 0x18C) = func_0020A170;
    M2C_FIELD(arg1, s8 *, 0x24C) = 1;
}
