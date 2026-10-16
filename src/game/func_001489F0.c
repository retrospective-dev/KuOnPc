#include "common.h"

s32 * func_001488C0(s32 arg0);
s32 func_0010D850();
s32 func_001103C0(s32);
s32 func_00110F60(s32 *, s32);
s32 func_00110FF8(s32 *, s32, s32 *(*)(s32), s32 *, s32, s32, s32 *);
s32 func_00111410(s32 *);
extern s32 D_007895C0[];
extern s32 D_007899C0[];
extern s32 D_00789A10[];

void func_001489F0(void) {
    func_001103C0(0);
    func_00110F60(&D_00789A10[0], func_0010D850());
    func_00110FF8(&D_007899C0[0], 0x102A, func_001488C0, &D_007895C0[0], 0, 0, &D_00789A10[0]);
    func_00111410(&D_00789A10[0]);
}
