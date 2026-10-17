#include "common.h"
#include "m2c_macros.h"

s32 SList_GetElemPtr(u8 *arg0, s32 arg1);
extern u8 *s_pObjList_0025E610;

s32 SfxTracer_Kill(s32 arg0) {
    s32 temp_v0;

    temp_v0 = SList_GetElemPtr(s_pObjList_0025E610, arg0);
    if (temp_v0 == 0) {
        return 0;
    }
    M2C_FIELD(temp_v0, s32 *, 8) = 0;
    return 1;
}
