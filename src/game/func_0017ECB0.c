#include "common.h"
#include "kuon_types.h"

int func_0017E7B0(Mng_state *pMngState);
s32 func_0017ECB0(TmpMenuMng *pTmpMenuMng) {
    if (pTmpMenuMng == NULL) {
        return 0;
    }
    func_0017E7B0(&pTmpMenuMng->mng_state);
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
