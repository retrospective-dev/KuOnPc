#include "common.h"
/* mwcc_pad: noternary */

s32 MngState_UpdateExeCheck(u8 *arg0);
s32 TmpMenuMng_Update(u8 *arg0) {
    if (arg0 == NULL) {
        return 0;
    }
    return MngState_UpdateExeCheck(arg0) == 1;
}
