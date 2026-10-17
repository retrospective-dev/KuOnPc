#include "common.h"
#include "kuon_types.h"

void func_0014B580(u8 *lpMem);
int func_0017E3D0(ListMng *pListMng);
s32 func_0017C210(MsgMng *pMsgMng) {
    if (pMsgMng == NULL) {
        return 0;
    }
    if (pMsgMng != NULL) {
        func_0017E3D0(&pMsgMng->list_mng);
        func_0014B580(pMsgMng->pMsgDataBuf);
        pMsgMng->pMsgDataBuf = NULL;
        func_0014B580(pMsgMng->pWorkStr);
        pMsgMng->pWorkStr = NULL;
        func_0014B580(pMsgMng->pDrawStr);
        pMsgMng->pDrawStr = NULL;
    }
    pMsgMng->mng_state.state = 0;
    return 1;
}
