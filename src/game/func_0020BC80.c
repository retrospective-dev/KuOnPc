#include "common.h"
#include "kuon_types.h"

s32 func_0012F3F0(u8 *arg0, s32 arg1, f32 fparg0);
void func_0013C9F0(MdlMng *lpMdlMng);
int func_0014F0F0(int Type, int CtrlId);
void func_0016C470(int EventFlag);
void func_0016C4C0(int EventFlag);
int func_0016C510(int EventFlag);
void func_0020B3F0(int CtrlId);
extern MdlMng D_006A78D0[770];
extern u8 D_003AC8A4[];

void func_0020BC80(Event *lpEvent) {
    lpEvent->lpMdl[0] = &D_006A78D0[func_0014F0F0(1, 0xA) + 0x30];
    lpEvent->lpMdl[3] = &D_006A78D0[func_0014F0F0(1, 2) + 0x30];
    lpEvent->lpMdl[3]->HitOff = 1;
    if (D_003AC8A4[0] != 2) {
        if (func_0016C510(0x550) == 0) {
            func_0016C4C0(0x403);
            lpEvent->State[1] = 1;
            return;
        }
        if (func_0016C510(0x551) == 0) {
            func_0016C470(0x403);
            lpEvent->State[1] = 3;
            return;
        }
        func_0016C4C0(0x403);
        lpEvent->State[1] = 7;
        func_0012F3F0(lpEvent->lpMdl[0], 0x1F, 0.0f);
        lpEvent->lpMdl[0]->HitOff = 1;
        lpEvent->lpMdl[3]->HitOff = 0;
        if (func_0016C510(0x552) == 0) {
            func_0020B3F0(1);
            lpEvent->lpMdl[1] = &D_006A78D0[func_0014F0F0(2, 1) + 0xA1];
        }
        if (func_0016C510(0x553) == 0) {
            func_0020B3F0(2);
            lpEvent->lpMdl[2] = &D_006A78D0[func_0014F0F0(2, 2) + 0xA1];
        }
    } else {
        func_0013C9F0(&D_006A78D0[func_0014F0F0(7, 1) + 0x90]);
        func_0013C9F0(&D_006A78D0[func_0014F0F0(7, 3) + 0x90]);
        func_0016C4C0(0x403);
        lpEvent->State[1] = 7;
        func_0012F3F0(lpEvent->lpMdl[0], 0x1E, 0.0f);
        lpEvent->lpMdl[0]->HitOff = 1;
        lpEvent->lpMdl[3]->HitOff = 0;
    }
}
