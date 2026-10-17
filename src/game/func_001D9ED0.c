#include "common.h"
#include "kuon_types.h"

int func_0017E7B0(Mng_state *pMngState);
extern KnMenuWindMng *D_0025E0C0;
s32 func_001D9ED0(void) {
    if (D_0025E0C0 == NULL) {
        return 0;
    }
    func_0017E7B0(&D_0025E0C0->mng_state);
    if (D_0025E0C0 == NULL) {
        if (D_0025E0C0 != NULL) {
            D_0025E0C0->mng_state.state = 0;
        }
        return 0;
    }
    D_0025E0C0->mng_state.state = 2;
    return 1;
}
