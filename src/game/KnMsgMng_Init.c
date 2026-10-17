#include "common.h"
#include "kuon_types.h"

int MsgMng_Delete(MsgMng *pMsgMng);
s32 func_0017D790(void);
int MngState_Init(Mng_state *pMngState);
int MsgFileMng_Delete(MsgFileMng *pMsgFileMng);
extern KnMsgMng s_KnMsgMng;
extern MsgMng D_00A07D30[];
extern MsgFileMng D_00A07F40[];

s32 KnMsgMng_Init(void) {
    MngState_Init(&s_KnMsgMng.mng_state);
    if (func_0017D790() != 1) {
        MsgMng_Delete(&D_00A07D30[0]);
        MsgFileMng_Delete(&D_00A07F40[0]);
        s_KnMsgMng.mng_state.state = 0;
        return 0;
    }
    s_KnMsgMng.mng_state.state = 2;
    return 1;
}
