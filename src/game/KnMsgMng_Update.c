#include "common.h"
#include "kuon_types.h"

int MsgMng_Update(MsgMng *pMsgMng);
int MngState_UpdateExeCheck(Mng_state *pMngState);
extern KnMsgMng s_KnMsgMng;
extern u8 D_003AC89F[];
extern MsgMng D_00A07D30[];

s32 KnMsgMng_Update(void) {
    if (MngState_UpdateExeCheck(&s_KnMsgMng.mng_state) != 1) {
        return 0;
    }
    if (D_003AC89F[0] == 0) {
        MsgMng_Update(&D_00A07D30[0]);
    }
    return 1;
}
