#include "common.h"

void func_00127BE0(void* dst, s32 c, u32 n);
f32 func_0015C7C0(f32 *arg0, s32 arg1);
extern s8 D_00902D30[];
extern s32 D_00902D3C[];

void func_0015D2C0(s32 arg0, s32 arg1, s32 arg2) {
    func_00127BE0((void *) arg2, 0, 0x20U);
    D_00902D3C[0] = arg2;
    D_00902D30[0] = 1;
    func_0015C7C0((f32 *) arg0, arg1);
    D_00902D30[0] = 0;
}
