#include "common.h"
#include "m2c_macros.h"

void func_00204A70(void *arg0, void *arg1);
void func_00204B40(void *arg0, void *arg1);
void func_00204C10(s32 arg0, void *arg1) {
    M2C_FIELD(arg1, void (**)(void *, void *), 0) = func_00204B40;
    M2C_FIELD(arg1, void (**)(void *, void *), 4) = func_00204A70;
}
