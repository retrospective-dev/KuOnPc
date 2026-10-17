#include "common.h"
#include "m2c_macros.h"

void func_001ABFA0(void *arg0, void *arg1);
void func_001AC1F0(void *arg0, void *arg1);
void func_001AC260(void *arg0, void *arg1) {
    M2C_FIELD(arg1, void (**)(void *, void *), 0x80) = func_001AC1F0;
    M2C_FIELD(arg1, void (**)(void *, void *), 0x88) = func_001ABFA0;
    M2C_FIELD(arg1, u16 *, 0x1FA) = 0xFFFF;
    M2C_FIELD(arg1, s8 *, 0x1DA) = 1;
    M2C_FIELD(arg0, s8 *, 0x130) = 1;
    M2C_FIELD(arg0, s8 *, 0x132) = 1;
    M2C_FIELD(arg0, s8 *, 0x131) = 1;
}
