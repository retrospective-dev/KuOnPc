#include "common.h"
#include "kuon_types.h"

int func_0017C600(MsgMng *pMsgMng);
int func_0017E700(Mng_state *pMngState);
extern KnMsgMng D_00A07D10;
extern u8 D_003AC89F[];
extern MsgMng D_00A07D30[];

s32 func_0017D730(void) {
    if (func_0017E700(&D_00A07D10.mng_state) != 1) {
        return 0;
    }
    if (D_003AC89F[0] == 0) {
        func_0017C600(&D_00A07D30[0]);
    }
    return 1;
}
