#include "common.h"
#include "m2c_macros.h"

void func_00196E40(void *arg0, s32 arg1);
void func_00197060(void *arg0, void *arg1) {
    M2C_FIELD(arg1, void (**)(void *, s32), 0x94) = func_00196E40;
    M2C_FIELD(arg1, s8 *, 0x1DA) = 1;
    M2C_FIELD(arg0, s8 *, 0x131) = 1;
    M2C_FIELD(arg1, u16 *, 0x1FA) = 0xFFFF;
    M2C_FIELD(arg1, s8 *, 0x24D) = 1;
}
