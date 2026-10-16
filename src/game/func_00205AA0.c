#include "common.h"
#include "m2c_macros.h"

void func_00205650(void *arg0, void *arg1);
void func_00205980(void *arg0);
void func_00205A10(void *arg0);
void func_00205AA0(s32 arg0, void *arg1) {
    M2C_FIELD(arg1, void (**)(void *), 0x80) = func_00205A10;
    M2C_FIELD(arg1, void (**)(void *), 0x84) = func_00205980;
    M2C_FIELD(arg1, void (**)(void *, void *), 0x88) = func_00205650;
}
