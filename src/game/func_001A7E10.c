#include "common.h"

void func_00132600(s32 arg0);
void func_00196E30(s32 arg0);
void func_001A7E70(void);
extern s8 D_003AC895[];
extern s32 D_00A3F320[];

void func_001A7E10(void) {
    if (D_00A3F320[0] == 9) {
        func_001A7E70();
        D_00A3F320[0] = 0;
        D_003AC895[0] = 0;
        func_00132600(0);
        func_00196E30(1);
    }
}
