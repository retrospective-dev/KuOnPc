#include "common.h"
#include "m2c_macros.h"

void func_00198A10(void);
void func_00198A20(void *arg0, void *arg1);
void func_00198AE0(void *arg0, void *arg1);
void func_00198B50(s32 arg0, void *arg1) {
    M2C_FIELD(arg1, void (**)(void *, void *), 0) = func_00198AE0;
    M2C_FIELD(arg1, void (**)(void *, void *), 4) = func_00198A20;
    M2C_FIELD(arg1, void (**)(), 0x20) = func_00198A10;
}
