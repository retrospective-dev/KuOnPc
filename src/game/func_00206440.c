#include "common.h"
#include "m2c_macros.h"

void func_002063A0(s32 arg0, void *arg1);
void func_002063C0(void *arg0, void *arg1);
void func_00206440(s32 arg0, void *arg1) {
    M2C_FIELD(arg1, void (**)(void *, void *), 0x90) = func_002063C0;
    M2C_FIELD(arg1, void (**)(s32, void *), 0x110) = func_002063A0;
}
