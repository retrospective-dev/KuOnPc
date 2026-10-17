#include "common.h"
#include "kuon_types.h"

int CheckEventFlag(int EventFlag);
extern u8 D_003AC8A4[];

void InitS0010Event003(Event *lpEvent) {
    if (D_003AC8A4[0] == 0) {
        if (CheckEventFlag(0x6CE) != 0) {
            goto block_3;
        }
    } else {
block_3:
        lpEvent->State[0] = 2;
    }
}
