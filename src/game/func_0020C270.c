#include "common.h"
#include "kuon_types.h"

s32 func_0012F3F0(u8 *arg0, s32 arg1, f32 fparg0);
int func_0014F0F0(int Type, int CtrlId);
int func_0016C510(int EventFlag);
void func_0020B320(int CtrlId, unsigned short AnimId, unsigned char bLogicFree);
void func_0020B3F0(int CtrlId);
extern MdlMng D_006A78D0[770];
extern u8 D_003AC8A4[];

void func_0020C270(Event *lpEvent) {
    lpEvent->lpMdl[0] = &D_006A78D0[func_0014F0F0(1, 0x25) + 0x30];
    lpEvent->lpMdl[1] = NULL;
    if ((D_003AC8A4[0] != 0) || (func_0016C510(0x6CB) != 0)) {
        lpEvent->State[0] = 2;
        return;
    }
    if (func_0016C510(0x6CA) != 0) {
        func_0020B3F0(3);
        lpEvent->State[0] = 2;
        lpEvent->lpMdl[1] = &D_006A78D0[func_0014F0F0(2, 3) + 0xA1];
        return;
    }
    func_0020B320(3, 0x52U, 1U);
    lpEvent->lpMdl[1] = &D_006A78D0[func_0014F0F0(2, 3) + 0xA1];
    func_0012F3F0(lpEvent->lpMdl[0], 0x1E, 0.0f);
    lpEvent->State[0] = 0;
}
