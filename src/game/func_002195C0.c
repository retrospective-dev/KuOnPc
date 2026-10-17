#include "common.h"
#include "kuon_types.h"

int func_0016C510(int EventFlag);
extern u8 D_003AC8A4[];

void func_002195C0(Event *lpEvent) {
    if (D_003AC8A4[0] == 0) {
        if (func_0016C510(0x6CC) != 0) {
            goto block_3;
        }
    } else {
block_3:
        lpEvent->State[0] = 3;
    }
}
