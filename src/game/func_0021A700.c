#include "common.h"
#include "kuon_types.h"

s32 func_0012F3F0(u8 *arg0, s32 arg1, f32 fparg0);
int func_0014F0F0(int Type, int CtrlId);
int func_0016C510(int EventFlag);
extern MdlMng D_006A78D0[770];
extern u8 D_003AC8A4[];

void func_0021A700(Event *lpEvent) {
    if ((D_003AC8A4[0] == 2) && (func_0016C510(0x6D8) == 0)) {
        lpEvent->State[0] = 0;
        lpEvent->State[1] = 0;
        lpEvent->lpMdl[0] = &D_006A78D0[func_0014F0F0(1, 1) + 0x30];
        func_0012F3F0(lpEvent->lpMdl[0], 0x1E, 0.0f);
        return;
    }
    lpEvent->State[0] = 3;
}
