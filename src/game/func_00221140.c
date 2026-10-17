#include "common.h"

s32 func_0021C540(s32 arg0);
s32 func_0021E510(void);
extern s32 D_00A62890[];
extern s32 D_00A62894[];
extern u8 D_00A628A4[];

void func_00221140(void) {
    if (D_00A62890[0] != 0) {
        func_0021C540((s32) &D_00A628A4[0]);
        func_0021E510();
        D_00A62894[0] = 1;
    }
}
