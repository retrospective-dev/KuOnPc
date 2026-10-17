#include "common.h"
#include "kuon_types.h"

int func_0014F0F0(int Type, int CtrlId);
void func_0017F6C0(MdlMng *lpObj, int MsgId, int ReStart, int MsgNum);
extern MdlMng D_006A78D0[770];
void func_0016CE10(Ss *ss) {
    func_0017F6C0(&D_006A78D0[func_0014F0F0(1, ss->arg[0].val) + 0x30], ss->arg[1].val, ss->arg[2].val, ss->arg[3].val);
    ss->kind = 0;
}
