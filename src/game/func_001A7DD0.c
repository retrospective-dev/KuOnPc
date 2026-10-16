#include "common.h"

void func_001A7E70(void);
void func_001A7F70(void);
extern s8 D_003AC895[];
extern s32 D_00A3F330[];

void func_001A7DD0(void) {
    if (D_00A3F330[0] != 0) {
        func_001A7F70();
        func_001A7E70();
        D_003AC895[0] = 0;
    }
}
