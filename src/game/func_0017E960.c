#include "common.h"
#include "kuon_types.h"

int func_0017E700(Mng_state *pMngState);
s32 func_0017E960(TmpMenuMng *pTmpMenuMng, enum Order order) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v1;

    if (func_0017E700(&pTmpMenuMng->mng_state) != 1) {
        return 0;
    }
    if (pTmpMenuMng == NULL) {
        return 0;
    }
    temp_v1 = order & 0xFF;
    switch (temp_v1) {
    case 2:
        pTmpMenuMng->DrawState = 0;
        break;
    case 0:
        temp_v0 = pTmpMenuMng->DrawState;
        if (temp_v0 < 0x100) {
            pTmpMenuMng->DrawState = temp_v0 + 1;
        }
        break;
    case 1:
        temp_v0_2 = pTmpMenuMng->DrawState;
        if (temp_v0_2 > 0) {
            pTmpMenuMng->DrawState = temp_v0_2 - 1;
        }
        break;
    }
    return 1;
}
