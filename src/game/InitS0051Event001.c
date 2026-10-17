#include "common.h"
#include "kuon_types.h"

void SetHokanFrame(MdlMng_t *lpMdlMng, float HokanFrame);
s32 func_0012F3F0(u8 *arg0, s32 arg1, f32 fparg0);
int GetMdlMngIndexByCtrlId(int Type, int CtrlId);
int CheckEventFlag(int EventFlag);
extern u8 D_003AC8A4[];
extern u8 D_006ACCD0[];

void InitS0051Event001(Event *lpEvent) {
    lpEvent->lpMdl[0] = &D_006ACCD0[0] + (GetMdlMngIndexByCtrlId(1, 0x14) * 0x1C0);
    if ((CheckEventFlag(0x62) != 0) && (CheckEventFlag(0x6D3) == 0) && (D_003AC8A4[0] == 1)) {
        lpEvent->State[0] = 2;
        return;
    }
    if ((CheckEventFlag(0x6D3) == 0) && (CheckEventFlag(0x546) == 0)) {
        if (D_003AC8A4[0] != 0) {
            goto block_8;
        }
    } else {
block_8:
        func_0012F3F0(lpEvent->lpMdl[0], 2, 0.0f);
        SetHokanFrame(lpEvent->lpMdl[0], 0.0f);
        lpEvent->State[0] = 5;
    }
}
