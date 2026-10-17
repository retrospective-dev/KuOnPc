#include "common.h"
#include "kuon_types.h"

void SetEventFlag(int EventFlag);
int CheckEventFlag(int EventFlag);
extern SaveEvent_t SaveEvent;
extern u8 D_003AC899[];
extern u8 D_003AC8A4[];

s32 SetSaveDrama(void) {
    if ((D_003AC8A4[0] != 0) || (D_003AC899[0] != 0x33)) {
        return 0;
    }
    if (CheckEventFlag(0x47F) != 0) {
        return 0;
    }
    SetEventFlag(0x47F);
    SaveEvent.State = 3;
    return 1;
}
