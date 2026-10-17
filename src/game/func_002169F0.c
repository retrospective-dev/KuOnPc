#include "common.h"
#include "kuon_types.h"

void func_0016C4C0(int EventFlag);
int func_0016C510(int EventFlag);
void func_0020B3F0(int CtrlId);
extern u8 D_003AC8A4[];

void func_002169F0(Event *lpEvent) {
    if (D_003AC8A4[0] != 0) {
        goto block_4;
    }
    if (func_0016C510(0x6C6) != 0) {
        goto block_4;
    }
    if (func_0016C510(0x6CC) != 0) {
        goto block_6;
    }
block_4:
    lpEvent->State[2] = 4;
    return;
block_6:
    if (func_0016C510(0x6C5) == 0) {
        goto block_8;
    }
    lpEvent->State[2] = 4;
    func_0020B3F0(5);
    func_0020B3F0(6);
    func_0020B3F0(7);
    func_0016C4C0(0x6C6);
block_8:
    return;
}
