#include "common.h"
#include "m2c_macros.h"

void func_001ABCF0(void *arg0, void *arg1);
void func_001ABE50(s32 arg0, void *arg1) {
    M2C_FIELD(arg1, void (**)(void *, void *), 0x94) = func_001ABCF0;
    M2C_FIELD(arg1, s8 *, 0x24D) = 1;
}
