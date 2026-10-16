#include "common.h"
#include "m2c_macros.h"

void func_002046B0(void *arg0, void *arg1);
void func_00204780(void *arg0, void *arg1);
void func_00204850(s32 arg0, void *arg1) {
    M2C_FIELD(arg1, void (**)(void *, void *), 0) = func_00204780;
    M2C_FIELD(arg1, void (**)(void *, void *), 4) = func_002046B0;
}
