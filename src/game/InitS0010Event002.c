#include "common.h"
#include "kuon_types.h"

void SetEventFlag(int EventFlag);
int CheckEventFlag(int EventFlag);
void EasyEneAppear(int CtrlId);
extern u8 D_003AC8A4[];

void InitS0010Event002(Event *lpEvent) {
    if (D_003AC8A4[0] != 0) {
        goto block_4;
    }
    if (CheckEventFlag(0x6C6) != 0) {
        goto block_4;
    }
    if (CheckEventFlag(0x6CC) != 0) {
        goto block_6;
    }
block_4:
    lpEvent->State[2] = 4;
    return;
block_6:
    if (CheckEventFlag(0x6C5) == 0) {
        goto block_8;
    }
    lpEvent->State[2] = 4;
    EasyEneAppear(5);
    EasyEneAppear(6);
    EasyEneAppear(7);
    SetEventFlag(0x6C6);
block_8:
    return;
}
