#include "common.h"
#include "m2c_macros.h"

void func_00191240(void);
void func_00191250(void);
void func_00191260(void *arg0, void *arg1);
void func_00191560(void *arg0);
void func_001915F0(void *arg0, void *arg1);
void func_00191650(void *arg0, void *arg1) {
    M2C_FIELD(arg1, void (**)(void *, void *), 0x94) = func_001915F0;
    M2C_FIELD(arg1, void (**)(void *), 0x80) = func_00191560;
    M2C_FIELD(arg1, void (**)(void *, void *), 0x84) = func_00191260;
    M2C_FIELD(arg1, void (**)(), 0x8C) = func_00191250;
    M2C_FIELD(arg1, void (**)(), 0x90) = func_00191240;
    M2C_FIELD(arg0, s8 *, 0x130) = 1;
    M2C_FIELD(arg0, s8 *, 0x131) = 1;
    M2C_FIELD(arg0, s8 *, 0x132) = 1;
}
