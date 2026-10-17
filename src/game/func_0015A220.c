#include "common.h"
#include "kuon_types.h"
#include "m2c_macros.h"

s32 func_0015A220(MdlMng *lpMdlMng, u16 *sfxIndex) {
    s32 temp_a3;
    u16 temp_v1;
    u8 temp_v0;
    u8 *temp_a2;

    temp_a3 = *sfxIndex;
    if ((temp_a3 == 0x186) || (temp_a3 == 0x189)) {
        temp_a2 = lpMdlMng->lpCtrlSt;
        if ((M2C_FIELD(temp_a2, u8 *, 0x100) == 3) && (lpMdlMng->lpMdlData->MdlType == 0)) {
            temp_v0 = M2C_FIELD(temp_a2, u8 *, 0x1AD);
            if (temp_v0 == 0) {
                return 0;
            }
            *sfxIndex = temp_a3 + temp_v0;
            goto block_15;
        }
        goto block_15;
    }
    if (((s32) temp_a3 >= 0x2C6) && ((s32) temp_a3 < 0x2CB) && ((temp_v1 = lpMdlMng->lpMdlData->MdlType, (temp_v1 == 1)) || (temp_v1 == 2)) && (M2C_FIELD(lpMdlMng->lpCtrlSt, u8 *, 0x180) == 7)) {
        return 0;
    }
block_15:
    return 1;
}
