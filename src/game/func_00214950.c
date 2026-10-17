#include "common.h"
#include "kuon_types.h"

int func_0014F0F0(int Type, int CtrlId);
int func_0016C510(int EventFlag);
extern MdlMng D_006A78D0[770];
extern u8 D_003AC8A4[];

void func_00214950(Event *lpEvent) {
    if (D_003AC8A4[0] == 0) {
        lpEvent->lpMdl[0] = &D_006A78D0[func_0014F0F0(1, 2) + 0x30];
        if (func_0016C510(0x40F) == 0) {
            lpEvent->State[1] = 1;
        }
    }
}
