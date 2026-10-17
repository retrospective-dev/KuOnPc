#include "common.h"
#include "kuon_types.h"

void SetEventFlag(int EventFlag);
int CheckEventFlag(int EventFlag);
extern u8 D_003AC8A4[];

void InitS0001Event000(Event *lpEvent) {
    if (D_003AC8A4[0] != 0) {
        goto block_3;
    }
    if (CheckEventFlag(0x6D6) == 0) {
        goto block_5;
    }
block_3:
    SetEventFlag(0x6D6);
    lpEvent->State[0] = 2;
    return;
block_5:
    if (CheckEventFlag(0x7A) != 0) {
        goto block_7;
    }
    lpEvent->State[0] = 2;
    return;
block_7:
    lpEvent->State[0] = 0;
    return;
}
