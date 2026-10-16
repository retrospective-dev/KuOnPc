#include "common.h"

s32 func_00174B60(s32 arg0);
s32 func_00174B90(s32 arg0);
extern s32 D_0025DFBC;
extern s32 D_0025DFC0;

void func_00177A30(void) {
    D_0025DFBC = D_0025DFC0;
    func_00174B90(D_0025DFBC);
    func_00174B60(D_0025DFBC);
}
