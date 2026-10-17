#include "common.h"
#include "kuon_types.h"

int MngState_UpdateExeCheck(Mng_state *pMngState);
s32 TmpMenuMng_Update(TmpMenuMng *pTmpMenuMng) {
    if (pTmpMenuMng != NULL) {
        goto block_3;
    }
    return 0;
block_3:
    return MngState_UpdateExeCheck(&pTmpMenuMng->mng_state) == 1;
}
