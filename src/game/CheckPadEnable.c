#include "common.h"
#include "kuon_types.h"

extern int PadReqState[2];
extern int PadState[2];
s32 CheckPadEnable(u8 port) {
    s32 temp_v0;
    s32 temp_v1;

    temp_v0 = port & 0xFF;
    temp_v1 = PadState[temp_v0];
    if ((temp_v1 != 2) && (temp_v1 != 6)) {
        return 0;
    }
    if (PadReqState[temp_v0] != 0) {
        return 0;
    }
    return 1;
}
