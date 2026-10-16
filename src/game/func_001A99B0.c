#include "common.h"
#include "m2c_macros.h"

void func_001A9910(s32 arg0, void *arg1);
void func_001A9960(s32 arg0, void *arg1);
void func_001A99B0(s32 arg0, void *arg1) {
    M2C_FIELD(arg1, void (**)(s32, void *), 0) = func_001A9960;
    M2C_FIELD(arg1, void (**)(s32, void *), 4) = func_001A9910;
}
