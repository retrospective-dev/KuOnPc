#include "common.h"
#include "kuon_types.h"
#include "m2c_macros.h"

int GetMdlMngIndexByCtrlId(int Type, int CtrlId);
void SetObjFollowTarget(MdlMng_t *lpObj, unsigned short WalkAnimId, unsigned short StayAnimId, MdlMng_t *lpTarget);
extern MdlMng_t MdlMng[770];
extern MdlMng_t D_006B90D0[];

void SCR_SetObjFollowMe(Ss *ss) {
    SetObjFollowTarget(&MdlMng[GetMdlMngIndexByCtrlId(1, ss->arg[0].val) + 0x30], M2C_FIELD(ss, u16 *, 0x10), M2C_FIELD(ss, u16 *, 0x18), &D_006B90D0[0]);
    ss->kind = 0;
}
