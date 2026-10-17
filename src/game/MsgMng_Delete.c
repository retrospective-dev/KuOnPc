#include "common.h"
#include "kuon_types.h"

void MemFree(u8 *lpMem);
int ListMng_Delete(ListMng *pListMng);
s32 MsgMng_Delete(MsgMng *pMsgMng) {
    if (pMsgMng == NULL) {
        return 0;
    }
    if (pMsgMng != NULL) {
        ListMng_Delete(&pMsgMng->list_mng);
        MemFree(pMsgMng->pMsgDataBuf);
        pMsgMng->pMsgDataBuf = NULL;
        MemFree(pMsgMng->pWorkStr);
        pMsgMng->pWorkStr = NULL;
        MemFree(pMsgMng->pDrawStr);
        pMsgMng->pDrawStr = NULL;
    }
    pMsgMng->mng_state.state = 0;
    return 1;
}
