#include "common.h"

void func_00127BE0(void* dst, s32 c, u32 n);
s32 func_00129770(s32 *, s32 *);
extern s32 D_00258D68[];
extern s32 D_0032BF30[];
extern s32 D_0032BFB0[];

void func_00138DD0(void) {
    func_00127BE0(&D_0032BFB0[0], 0, 0x80U);
    func_00127BE0(&D_0032BF30[0], 0, 0x80U);
    func_00129770(&D_0032BFB0[0], &D_00258D68[0]);
    func_00129770(&D_0032BF30[0], &D_00258D68[0]);
}
