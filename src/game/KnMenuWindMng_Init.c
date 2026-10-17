#include "common.h"
#include "kuon_types.h"

int MngState_Init(Mng_state *pMngState);
extern KnMenuWindMng *pKnMenuWindMng;
s32 KnMenuWindMng_Init(void) {
    if (pKnMenuWindMng == NULL) {
        return 0;
    }
    MngState_Init(&pKnMenuWindMng->mng_state);
    if (pKnMenuWindMng == NULL) {
        if (pKnMenuWindMng != NULL) {
            pKnMenuWindMng->mng_state.state = 0;
        }
        return 0;
    }
    pKnMenuWindMng->mng_state.state = 2;
    return 1;
}
