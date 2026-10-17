#include "common.h"
#include "kuon_types.h"
#include "m2c_macros.h"

int GetMdlMngIndexByCtrlId(int Type, int CtrlId);
extern MdlMng_t MdlMng[770];
void SCR_SetEneOutLogic(Ss *ss) {
    MdlMng_t *temp_a0;
    u8 *temp_a1;

    temp_a0 = &MdlMng[GetMdlMngIndexByCtrlId(2, ss->arg[0].val) + 0xA1];
    temp_a1 = temp_a0->lpCtrlSt;
    M2C_FIELD(temp_a1, s32 (**)(MdlMng_t *, u8 *, u16), 0x118)(temp_a0, temp_a1, M2C_FIELD(ss, u16 *, 0x10));
    ss->kind = 0;
}
