#include "common.h"
#include "kuon_types.h"

void func_0013C9F0(MdlMng *lpMdlMng);
int func_0014F0F0(int Type, int CtrlId);
int func_0016C510(int EventFlag);
extern u8 D_003AC8A4[];
extern u8 D_006ACCD0[];

void func_00217590(Event *lpEvent) {
    lpEvent->lpMdl[0] = &D_006ACCD0[0] + (func_0014F0F0(1, 0xE) * 0x1C0);
    if (D_003AC8A4[0] != 1) {
        goto block_3;
    }
    if (func_0016C510(0x54B) == 0) {
        goto block_5;
    }
block_3:
    func_0013C9F0(lpEvent->lpMdl[0]);
    lpEvent->State[0] = 2;
    return;
block_5:
    lpEvent->lpMdl[0]->bErase = 1;
    return;
}
