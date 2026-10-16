#include "common.h"
#include "m2c_macros.h"

void func_00205340(s32 arg0, void *arg1);
void func_002053A0(s32 arg0, void *arg1);
void func_00205400(s32 arg0, void *arg1) {
    M2C_FIELD(arg1, void (**)(s32, void *), 0) = func_002053A0;
    M2C_FIELD(arg1, void (**)(s32, void *), 4) = func_00205340;
}
