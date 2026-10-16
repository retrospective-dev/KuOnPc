#include "common.h"
#include "m2c_macros.h"

void func_00192A70(s32 arg0, void *arg1);
void func_00192AC0(s32 arg0, void *arg1);
void func_00192B10(s32 arg0, void *arg1) {
    M2C_FIELD(arg1, void (**)(s32, void *), 0) = func_00192AC0;
    M2C_FIELD(arg1, void (**)(s32, void *), 4) = func_00192A70;
}
