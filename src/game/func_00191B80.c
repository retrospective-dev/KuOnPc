#include "common.h"
#include "m2c_macros.h"

void func_00191AF0(void);
void func_00191B00(void);
void func_00191B10(s32 arg0, void *arg1);
void func_00191B40(s32 arg0, void *arg1);
void func_00191B70(void);
void func_00191B80(s32 arg0, void *arg1) {
    M2C_FIELD(arg1, void (**)(), 0x14) = func_00191B70;
    M2C_FIELD(arg1, void (**)(s32, void *), 0) = func_00191B40;
    M2C_FIELD(arg1, void (**)(s32, void *), 4) = func_00191B10;
    M2C_FIELD(arg1, void (**)(), 0xC) = func_00191B00;
    M2C_FIELD(arg1, void (**)(), 0x10) = func_00191AF0;
}
