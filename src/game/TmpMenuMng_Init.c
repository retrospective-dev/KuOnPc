#include "common.h"
#include "kuon_types.h"

int MngState_Init(Mng_state *pMngState);
s32 TmpMenuMng_Init(TmpMenuMng *pTmpMenuMng) {
    if (pTmpMenuMng == NULL) {
        return 0;
    }
    MngState_Init(&pTmpMenuMng->mng_state);
    pTmpMenuMng->DrawState = 0;
    pTmpMenuMng->draw_up_rate = 0.0f;
    if (pTmpMenuMng == NULL) {
        if (pTmpMenuMng != NULL) {
            pTmpMenuMng->mng_state.state = 0;
        }
        return 0;
    }
    pTmpMenuMng->mng_state.state = 2;
    return 1;
}
