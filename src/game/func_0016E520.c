#include "common.h"
#include "kuon_types.h"
#include "m2c_macros.h"

int func_0014F0F0(int Type, int CtrlId);
extern MdlMng D_006A78D0[770];
void func_0016E520(Ss *ss) {
    MdlMng *temp_a0;
    u8 *temp_a1;

    temp_a0 = &D_006A78D0[func_0014F0F0(2, ss->arg[0].val) + 0xA1];
    temp_a1 = temp_a0->lpCtrlSt;
    M2C_FIELD(temp_a1, s32 (**)(MdlMng *, u8 *, u16), 0x118)(temp_a0, temp_a1, M2C_FIELD(ss, u16 *, 0x10));
    ss->kind = 0;
}
