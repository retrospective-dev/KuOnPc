#include "common.h"
#include "kuon_types.h"
#include "m2c_macros.h"

void func_0014B170(float *v0, float *v1);
void func_0014B580(u8 *lpMem);
int func_0017D080(MsgMng *pMsgMng);
int func_0017E3D0(ListMng *pListMng);
int func_0017E7B0(Mng_state *pMngState);
s32 func_0017D250(MsgMng *pMsgMng, MsgFileMng *pMsgFileMng, u32 msg_data_num, u32 str_max_length, f32 *draw_pos) {
    if (pMsgMng == NULL) {
        return 0;
    }
    if (pMsgFileMng == NULL) {
        return 0;
    }
    if (msg_data_num == 0) {
        return 0;
    }
    if (str_max_length == 1) {
        return 0;
    }
    func_0017E7B0(&pMsgMng->mng_state);
    pMsgMng->msg_data_num = msg_data_num;
    pMsgMng->str_max_length = str_max_length;
    func_0014B170(&pMsgMng->draw_pos[1], draw_pos);
    pMsgMng->befor_select = 0;
    pMsgMng->select = 0;
    pMsgMng->select_num = 0;
    M2C_FIELD(pMsgMng, s32 *, 0x204) = 0;
    pMsgMng->pMsgFileMng = pMsgFileMng;
    if (func_0017D080(pMsgMng) != 1) {
        if (pMsgMng != NULL) {
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
        }
        return 0;
    }
    pMsgMng->mng_state.state = 2;
    return 1;
}
