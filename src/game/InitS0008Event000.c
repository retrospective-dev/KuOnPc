#include "common.h"
#include "kuon_types.h"

void FreeMdlMng(MdlMng_t *lpMdlMng);
int GetMdlMngIndexByCtrlId(int Type, int CtrlId);
int CheckEventFlag(int EventFlag);
extern u8 D_003AC8A4[];
extern u8 D_006ACCD0[];

void InitS0008Event000(Event *lpEvent) {
    lpEvent->lpMdl[0] = &D_006ACCD0[0] + (GetMdlMngIndexByCtrlId(1, 0xE) * 0x1C0);
    if (D_003AC8A4[0] != 1) {
        goto block_3;
    }
    if (CheckEventFlag(0x54B) == 0) {
        goto block_5;
    }
block_3:
    FreeMdlMng(lpEvent->lpMdl[0]);
    lpEvent->State[0] = 2;
    return;
block_5:
    lpEvent->lpMdl[0]->bErase = 1;
    return;
}
