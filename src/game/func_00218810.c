#include "common.h"
#include "m2c_macros.h"

void func_00218770(s32 arg0, void *arg1);
void func_00218790(void *arg0, void *arg1);
void func_00218810(s32 arg0, void *arg1) {
    M2C_FIELD(arg1, void (**)(void *, void *), 0x90) = func_00218790;
    M2C_FIELD(arg1, void (**)(s32, void *), 0x110) = func_00218770;
}
