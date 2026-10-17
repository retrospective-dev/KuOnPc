#include "common.h"

void func_00127BE0(void* dst, s32 c, u32 n);
f32 CheckHitMapLine(f32 *arg0, s32 arg1);
extern s8 gHitLine[];
extern s32 D_00902D3C[];

void CheckHitMapLineGetNormal(s32 arg0, s32 arg1, s32 arg2) {
    func_00127BE0((void *) arg2, 0, 0x20U);
    D_00902D3C[0] = arg2;
    gHitLine[0] = 1;
    CheckHitMapLine((f32 *) arg0, arg1);
    gHitLine[0] = 0;
}
