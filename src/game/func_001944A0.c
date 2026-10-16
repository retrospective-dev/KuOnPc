#include "common.h"
#include "m2c_macros.h"

void func_00194390(s32 arg0, void *arg1);
void func_001943E0(void);
void func_001943F0(void *arg0, void *arg1);
void func_001944A0(s32 arg0, void *arg1) {
    M2C_FIELD(arg1, void (**)(void *, void *), 0x94) = func_001943F0;
    M2C_FIELD(arg1, void (**)(), 0x80) = func_001943E0;
    M2C_FIELD(arg1, void (**)(s32, void *), 0x90) = func_00194390;
    M2C_FIELD(arg1, s8 *, 0x1DA) = 1;
}
