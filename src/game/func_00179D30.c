#include "common.h"
#include "kuon_types.h"

int func_00217E40(int msg_id, int flag, int check);
extern int D_0025E464;
extern s8 D_003AC89E[];

void func_00179D30(s32 Mode) {
    if (Mode != D_0025E464) {
        D_003AC89E[0] = (s8) Mode;
    }
    D_0025E464 = Mode;
    if (Mode != 0) {
        func_00217E40(0x1D507, 0x39B, 1);
    }
}
