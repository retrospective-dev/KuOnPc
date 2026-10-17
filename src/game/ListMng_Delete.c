#include "common.h"
#include "kuon_types.h"

void MemFree(u8 *lpMem);
s32 ListMng_Delete(ListMng *pListMng) {
    if (pListMng == NULL) {
        return 0;
    }
    if (pListMng != NULL) {
        MemFree(pListMng->pList);
        pListMng->pList = NULL;
    }
    pListMng->mng_state.state = 0;
    return 1;
}
