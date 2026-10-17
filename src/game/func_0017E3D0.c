#include "common.h"
#include "kuon_types.h"

void func_0014B580(u8 *lpMem);
s32 func_0017E3D0(ListMng *pListMng) {
    if (pListMng == NULL) {
        return 0;
    }
    if (pListMng != NULL) {
        func_0014B580(pListMng->pList);
        pListMng->pList = NULL;
    }
    pListMng->mng_state.state = 0;
    return 1;
}
