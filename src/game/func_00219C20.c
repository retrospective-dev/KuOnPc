#include "common.h"
#include "kuon_types.h"

int func_0016C510(int EventFlag);
extern u8 D_003AC8A4[];

void func_00219C20(Event *lpEvent) {
    if (D_003AC8A4[0] == 1) {
        if (func_0016C510(0x3C8) != 0) {
            goto block_3;
        }
    } else {
block_3:
        lpEvent->State[0] = 2;
    }
}
