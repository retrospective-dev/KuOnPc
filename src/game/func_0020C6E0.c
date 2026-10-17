#include "common.h"
#include "kuon_types.h"

void func_0012F170(MdlMng *lpMdlMng, float HokanFrame);
s32 func_0012F3F0(u8 *arg0, s32 arg1, f32 fparg0);
int func_0014F0F0(int Type, int CtrlId);
int func_0016C510(int EventFlag);
extern u8 D_003AC8A4[];
extern u8 D_006ACCD0[];

void func_0020C6E0(Event *lpEvent) {
    lpEvent->lpMdl[0] = &D_006ACCD0[0] + (func_0014F0F0(1, 0x14) * 0x1C0);
    if ((func_0016C510(0x62) != 0) && (func_0016C510(0x6D3) == 0) && (D_003AC8A4[0] == 1)) {
        lpEvent->State[0] = 2;
        return;
    }
    if ((func_0016C510(0x6D3) == 0) && (func_0016C510(0x546) == 0)) {
        if (D_003AC8A4[0] != 0) {
            goto block_8;
        }
    } else {
block_8:
        func_0012F3F0(lpEvent->lpMdl[0], 2, 0.0f);
        func_0012F170(lpEvent->lpMdl[0], 0.0f);
        lpEvent->State[0] = 5;
    }
}
