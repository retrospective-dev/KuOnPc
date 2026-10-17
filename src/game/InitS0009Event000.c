#include "common.h"
#include "kuon_types.h"

s32 func_0012F3F0(u8 *arg0, s32 arg1, f32 fparg0);
int GetMdlMngIndexByCtrlId(int Type, int CtrlId);
void SetEventFlag(int EventFlag);
int CheckEventFlag(int EventFlag);
extern u8 D_003AC8A4[];
extern u8 D_006ACCD0[];

void InitS0009Event000(Event *lpEvent) {
    lpEvent->lpMdl[0] = &D_006ACCD0[0] + (GetMdlMngIndexByCtrlId(1, 1) * 0x1C0);
    if (D_003AC8A4[0] != 1) {
        goto block_3;
    }
    if (CheckEventFlag(0x54A) == 0) {
        goto block_4;
    }
block_3:
    SetEventFlag(0x54A);
    return;
block_4:
    func_0012F3F0(lpEvent->lpMdl[0], 3, 0.0f);
    lpEvent->lpMdl[0]->HitOff = 1;
    return;
}
