#include "common.h"
#include "kuon_types.h"

int func_00217E40(int msg_id, int flag, int check);
extern int LastDizzyMode;
extern s8 D_003AC89E[];

void SetDizzy(s32 Mode) {
    if (Mode != LastDizzyMode) {
        D_003AC89E[0] = (s8) Mode;
    }
    LastDizzyMode = Mode;
    if (Mode != 0) {
        func_00217E40(0x1D507, 0x39B, 1);
    }
}
