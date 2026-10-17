#include "common.h"
#include "kuon_types.h"

void FreeMdlMng(MdlMng_t *lpMdlMng);
int GetMdlMngIndexByCtrlId(int Type, int CtrlId);
int CheckEventFlag(int EventFlag);
extern u8 D_003AC8A4[];
extern u8 D_006ACCD0[];

void InitS0008Event001(Event *lpEvent) {
    if (D_003AC8A4[0] == 1) {
        if (CheckEventFlag(0x6C0) != 0) {
            goto block_3;
        }
    } else {
block_3:
        lpEvent->State[2] = 2;
    }
    if (D_003AC8A4[0] == 0) {
        FreeMdlMng(&D_006ACCD0[0] + (GetMdlMngIndexByCtrlId(1, 0xA) * 0x1C0));
    }
}
