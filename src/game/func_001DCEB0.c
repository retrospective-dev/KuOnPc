#include "common.h"
#include "kuon_types.h"

int func_001AEE30(int iSndId, short sVol, short sPitch);
extern int D_0025E700;
extern int D_0025E704;
s32 func_001DCEB0(s32 iSndId, s16 sVol, s16 sPitch) {
    if (iSndId == -1) {
        return 0;
    }
    if (D_0025E704 == 0) {
        if (D_0025E700 > 0) {
            D_0025E700 -= 1;
            goto block_7;
        }
        return func_001AEE30(iSndId, sVol, sPitch);
    }
block_7:
    return 0;
}
