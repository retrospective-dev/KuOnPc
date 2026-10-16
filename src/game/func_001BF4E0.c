#include "common.h"

s32 func_0013ADA0(void);
void func_001BE090(void *arg0);
s32 func_001C2940(s32 arg0);
s32 func_001C29A0(s32 arg0);
extern s32 D_0025E57C;

void func_001BF4E0(s32 arg0) {
    s32 temp_s0;

    temp_s0 = func_0013ADA0();
    func_001C29A0(1);
    func_001BE090((void *) arg0);
    func_001C2940(1);
    D_0025E57C += func_0013ADA0() - temp_s0;
}
