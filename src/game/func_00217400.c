#include "common.h"
#include "kuon_types.h"

void func_0013C9F0(MdlMng *lpMdlMng);
int func_0014F0F0(int Type, int CtrlId);
int func_0016C510(int EventFlag);
extern u8 D_003AC8A4[];
extern u8 D_006ACCD0[];

void func_00217400(Event *lpEvent) {
    if (D_003AC8A4[0] == 1) {
        if (func_0016C510(0x6C0) != 0) {
            goto block_3;
        }
    } else {
block_3:
        lpEvent->State[2] = 2;
    }
    if (D_003AC8A4[0] == 0) {
        func_0013C9F0(&D_006ACCD0[0] + (func_0014F0F0(1, 0xA) * 0x1C0));
    }
}
