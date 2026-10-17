#include "common.h"
#include "kuon_types.h"

int func_0017C210(MsgMng *pMsgMng);
s32 func_0017D790(void);
int func_0017E7B0(Mng_state *pMngState);
int func_0019F140(MsgFileMng *pMsgFileMng);
extern KnMsgMng D_00A07D10;
extern MsgMng D_00A07D30[];
extern MsgFileMng D_00A07F40[];

s32 func_0017DE30(void) {
    func_0017E7B0(&D_00A07D10.mng_state);
    if (func_0017D790() != 1) {
        func_0017C210(&D_00A07D30[0]);
        func_0019F140(&D_00A07F40[0]);
        D_00A07D10.mng_state.state = 0;
        return 0;
    }
    D_00A07D10.mng_state.state = 2;
    return 1;
}
