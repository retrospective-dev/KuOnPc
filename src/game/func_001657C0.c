#include "common.h"

void func_00127BE0(void* dst, s32 c, u32 n);
extern s32 D_0097C090[];
extern s32 D_0097C0C0[];

void func_001657C0(void) {
    func_00127BE0(&D_0097C0C0[0], 0, 0x300U);
    func_00127BE0(&D_0097C090[0], 0, 0x30U);
}
