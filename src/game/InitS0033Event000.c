#include "common.h"
#include "kuon_types.h"

s32 func_0012F3F0(u8 *arg0, s32 arg1, f32 fparg0);
void FreeMdlMng(MdlMng_t *lpMdlMng);
int GetMdlMngIndexByCtrlId(int Type, int CtrlId);
int CheckEventFlag(int EventFlag);
extern u8 D_003AC8A4[];
extern u8 D_006ACCD0[];

void InitS0033Event000(Event *lpEvent) {
    lpEvent->lpMdl[0] = &D_006ACCD0[0] + (GetMdlMngIndexByCtrlId(1, 0x16) * 0x1C0);
    if ((D_003AC8A4[0] != 0) || (CheckEventFlag(0x543) != 0)) {
        FreeMdlMng(lpEvent->lpMdl[0]);
        lpEvent->State[0] = 3;
        return;
    }
    func_0012F3F0(lpEvent->lpMdl[0], 5, 0.0f);
    lpEvent->lpMdl[0]->HitSize = 0.5f;
    lpEvent->lpMdl[0]->Pos[0] = 3.2f;
    lpEvent->lpMdl[0]->Pos[2] = -30.8f;
}
