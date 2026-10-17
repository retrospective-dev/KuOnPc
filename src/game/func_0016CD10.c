#include "common.h"
#include "kuon_types.h"
#include "m2c_macros.h"

int func_0014F0F0(int Type, int CtrlId);
void func_0017F490(MdlMng *lpObj, unsigned short WalkAnimId, unsigned short StayAnimId, MdlMng *lpTarget);
extern MdlMng D_006A78D0[770];
extern MdlMng D_006B90D0[];

void func_0016CD10(Ss *ss) {
    func_0017F490(&D_006A78D0[func_0014F0F0(1, ss->arg[0].val) + 0x30], M2C_FIELD(ss, u16 *, 0x10), M2C_FIELD(ss, u16 *, 0x18), &D_006B90D0[0]);
    ss->kind = 0;
}
