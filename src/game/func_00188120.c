#include "common.h"

void func_00127BE0(void* dst, s32 c, u32 n);
void func_001870E0(void);
extern s32 D_00A369B0[];

void func_00188120(void) {
    func_00127BE0(&D_00A369B0[0], 0, 0x280U);
    func_001870E0();
}
