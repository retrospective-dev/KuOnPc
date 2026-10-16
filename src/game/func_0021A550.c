#include "common.h"
#include "m2c_macros.h"

void func_0021A450(s32 arg0, void *arg1);
void func_0021A4A0(void *arg0, void *arg1);
void func_0021A550(s32 arg0, void *arg1) {
    M2C_FIELD(arg1, void (**)(void *, void *), 0x94) = func_0021A4A0;
    M2C_FIELD(arg1, void (**)(s32, void *), 0x90) = func_0021A450;
}
