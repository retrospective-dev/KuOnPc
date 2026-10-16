#include "common.h"
#include "m2c_macros.h"

void func_002062D0(s32 arg0, void *arg1);
void func_00206320(s32 arg0, void *arg1);
void func_00206370(s32 arg0, void *arg1) {
    M2C_FIELD(arg1, void (**)(s32, void *), 0) = func_00206320;
    M2C_FIELD(arg1, void (**)(s32, void *), 4) = func_002062D0;
}
