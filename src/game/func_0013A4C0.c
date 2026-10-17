#include "common.h"

void func_001348B0(void);
void func_00139AE0(void);
void func_001970F0(void);
extern s32 D_0025E31C;

void func_0013A4C0(void) {
    if (D_0025E31C == 0) {
        func_001970F0();
        func_001348B0();
        func_00139AE0();
        D_0025E31C = 1;
    }
}
