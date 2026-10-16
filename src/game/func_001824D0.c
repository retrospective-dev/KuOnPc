#include "common.h"

void func_00127BE0(void* dst, s32 c, u32 n);
extern s32 D_0025E468;
extern s8 D_003AC8AC[];
extern s32 D_00A082F0[];

void func_001824D0(void) {
    func_00127BE0(&D_00A082F0[0], 0, 0x100U);
    D_0025E468 = 0;
    D_003AC8AC[0] = 0;
}
