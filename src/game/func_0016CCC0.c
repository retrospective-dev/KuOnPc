#include "common.h"
#include "kuon_types.h"

int func_0014F0F0(int Type, int CtrlId);
void func_0017F440(MdlMng *lpObj);
extern MdlMng D_006A78D0[770];
void func_0016CCC0(Ss *ss) {
    func_0017F440(&D_006A78D0[func_0014F0F0(1, ss->arg[0].val) + 0x30]);
    ss->kind = 0;
}
