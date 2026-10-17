#include "common.h"
#include "kuon_types.h"

int CheckEventFlag(int EventFlag);
extern u8 D_003AC8A4[];

void InitS0006Event000(Event *lpEvent) {
    if (D_003AC8A4[0] == 1) {
        if (CheckEventFlag(0x3C8) != 0) {
            goto block_3;
        }
    } else {
block_3:
        lpEvent->State[0] = 2;
    }
}
