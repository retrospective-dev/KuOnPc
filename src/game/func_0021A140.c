#include "common.h"
#include "kuon_types.h"

void func_0013C9F0(MdlMng *lpMdlMng);
int func_0014F0F0(int Type, int CtrlId);
void func_0016C4C0(int EventFlag);
int func_0016C510(int EventFlag);
extern MdlMng D_006A78D0[770];
extern u8 D_003AC8A4[];

void func_0021A140(Event *lpEvent) {
    if ((D_003AC8A4[0] != 1) || (func_0016C510(0x6CE) != 0)) {
        func_0013C9F0(&D_006A78D0[func_0014F0F0(1, 0x11) + 0x30]);
        func_0013C9F0(&D_006A78D0[func_0014F0F0(1, 0x12) + 0x30]);
        lpEvent->State[0] = 3;
        func_0016C4C0(0x6CE);
        return;
    }
    lpEvent->lpMdl[0] = &D_006A78D0[func_0014F0F0(1, 0x12) + 0x30];
    lpEvent->lpMdl[0]->bErase = 1;
    lpEvent->State[0] = 0;
}
