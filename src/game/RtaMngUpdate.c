#include "common.h"

s32 MngState_UpdateExeCheck(u8 *arg0);
void MngState_ResetTime(u8 *arg0);
extern u8 s_RtaMng[];

s32 RtaMngUpdate(void) {
    if (MngState_UpdateExeCheck(&s_RtaMng[0]) != 1) {
        return 0;
    }
    MngState_ResetTime(&s_RtaMng[0]);
    return 1;
}
