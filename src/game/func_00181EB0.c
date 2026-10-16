#include "common.h"

void func_00127BE0(void* dst, s32 c, u32 n);
extern s32 D_0025DFD0;
extern s32 D_0025DFD4;
extern s32 D_0025DFD8;
extern s32 D_00A082C0[];

void func_00181EB0(void) {
    func_00127BE0(&D_00A082C0[0], 0, 0x30U);
    D_0025DFD0 = -1;
    D_0025DFD4 = -1;
    D_0025DFD8 = -1;
}
