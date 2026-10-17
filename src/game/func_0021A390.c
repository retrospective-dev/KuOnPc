#include "common.h"
#include "kuon_types.h"

void func_0016C4C0(int EventFlag);
int func_0016C510(int EventFlag);
extern u8 D_003AC8A4[];

void func_0021A390(Event *lpEvent) {
    if (D_003AC8A4[0] != 0) {
        goto block_3;
    }
    if (func_0016C510(0x6D6) == 0) {
        goto block_5;
    }
block_3:
    func_0016C4C0(0x6D6);
    lpEvent->State[0] = 2;
    return;
block_5:
    if (func_0016C510(0x7A) != 0) {
        goto block_7;
    }
    lpEvent->State[0] = 2;
    return;
block_7:
    lpEvent->State[0] = 0;
    return;
}
