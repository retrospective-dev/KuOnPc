#include "common.h"
#include "kuon_types.h"
#include "m2c_macros.h"

void fsvu0_CopyVectorF(float *v0, float *v1);
void MemFree(u8 *lpMem);
int MsgMng_Alloc(MsgMng *pMsgMng);
int ListMng_Delete(ListMng *pListMng);
int MngState_Init(Mng_state *pMngState);
s32 MsgMng_Init(MsgMng *pMsgMng, MsgFileMng *pMsgFileMng, u32 msg_data_num, u32 str_max_length, f32 *draw_pos) {
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
    MngState_Init(&pMsgMng->mng_state);
    pMsgMng->msg_data_num = msg_data_num;
    pMsgMng->str_max_length = str_max_length;
    fsvu0_CopyVectorF(&pMsgMng->draw_pos[1], draw_pos);
    pMsgMng->befor_select = 0;
    pMsgMng->select = 0;
    pMsgMng->select_num = 0;
    M2C_FIELD(pMsgMng, s32 *, 0x204) = 0;
    pMsgMng->pMsgFileMng = pMsgFileMng;
    if (MsgMng_Alloc(pMsgMng) != 1) {
        if (pMsgMng != NULL) {
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
        }
        return 0;
    }
    pMsgMng->mng_state.state = 2;
    return 1;
}
