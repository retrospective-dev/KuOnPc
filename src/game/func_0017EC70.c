#include "common.h"
#include "kuon_types.h"

int func_0017E700(Mng_state *pMngState);
s32 func_0017EC70(TmpMenuMng *pTmpMenuMng) {
    if (pTmpMenuMng != NULL) {
        goto block_3;
    }
    return 0;
block_3:
    return func_0017E700(&pTmpMenuMng->mng_state) == 1;
}
