#include "common.h"
#include "kuon_types.h"
#include "m2c_macros.h"

int func_0014F0F0(int Type, int CtrlId);
void func_0017FC40(MdlMng *lpObj, int PathIndex, unsigned short AnimId, unsigned short EndAnimId);
extern MdlMng D_006A78D0[770];
void func_0016CF90(Ss *ss) {
    func_0017FC40(&D_006A78D0[func_0014F0F0(1, ss->arg[0].val) + 0x30], ss->arg[1].val, M2C_FIELD(ss, s16 *, 0x18), M2C_FIELD(ss, s16 *, 0x20));
    ss->kind = 0;
}
