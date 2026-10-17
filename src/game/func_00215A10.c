#include "common.h"
#include "kuon_types.h"

s32 func_0012F3F0(u8 *arg0, s32 arg1, f32 fparg0);
void func_0013C9F0(MdlMng *lpMdlMng);
int func_0014F0F0(int Type, int CtrlId);
int func_0016C510(int EventFlag);
extern u8 D_003AC8A4[];
extern u8 D_006ACCD0[];

void func_00215A10(Event *lpEvent) {
    lpEvent->lpMdl[0] = &D_006ACCD0[0] + (func_0014F0F0(1, 0x16) * 0x1C0);
    if ((D_003AC8A4[0] != 0) || (func_0016C510(0x543) != 0)) {
        func_0013C9F0(lpEvent->lpMdl[0]);
        lpEvent->State[0] = 3;
        return;
    }
    func_0012F3F0(lpEvent->lpMdl[0], 5, 0.0f);
    lpEvent->lpMdl[0]->HitSize = 0.5f;
    lpEvent->lpMdl[0]->Pos[0] = 3.2f;
    lpEvent->lpMdl[0]->Pos[2] = -30.8f;
}
