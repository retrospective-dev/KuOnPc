#include "common.h"
#include "kuon_types.h"

s32 func_0012F3F0(u8 *arg0, s32 arg1, f32 fparg0);
int func_0014F0F0(int Type, int CtrlId);
void func_0016C4C0(int EventFlag);
int func_0016C510(int EventFlag);
extern u8 D_003AC8A4[];
extern u8 D_006ACCD0[];

void func_002176C0(Event *lpEvent) {
    lpEvent->lpMdl[0] = &D_006ACCD0[0] + (func_0014F0F0(1, 1) * 0x1C0);
    if (D_003AC8A4[0] != 1) {
        goto block_3;
    }
    if (func_0016C510(0x54A) == 0) {
        goto block_4;
    }
block_3:
    func_0016C4C0(0x54A);
    return;
block_4:
    func_0012F3F0(lpEvent->lpMdl[0], 3, 0.0f);
    lpEvent->lpMdl[0]->HitOff = 1;
    return;
}
