#include "common.h"

s32 func_0021E410(void);
extern s32 D_00A62890[];
extern s32 D_00A62894[];

void func_00221100(void) {
    if (D_00A62890[0] != 0) {
        func_0021E410();
        D_00A62894[0] = 0;
    }
}
