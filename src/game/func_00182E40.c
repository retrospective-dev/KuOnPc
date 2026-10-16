#include "common.h"

void func_00127BE0(void* dst, s32 c, u32 n);
s32 func_00165800(s32 arg0);
extern s32 *D_0025DFE0;
extern s32 *D_0025DFE4;
extern s32 *D_0025DFE8;
extern s32 D_00A08500[];

void func_00182E40(void) {
    func_00127BE0(&D_00A08500[0], 0, 0x14C00U);
    D_0025DFE0 = &D_00A08500[0];
    D_0025DFE4 = &D_00A08500[0];
    D_0025DFE8 = &D_00A08500[0];
    func_00165800(0x14);
}
