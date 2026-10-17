#include "common.h"
#include "kuon_types.h"
#include "m2c_macros.h"

int GetMdlMngIndexByCtrlId(int Type, int CtrlId);
void SetObjMovePath(MdlMng_t *lpObj, int PathIndex, unsigned short AnimId, unsigned short EndAnimId);
extern MdlMng_t MdlMng[770];
void SCR_SetObjMovePathDirect(Ss *ss) {
    SetObjMovePath(&MdlMng[GetMdlMngIndexByCtrlId(1, ss->arg[0].val) + 0x30], ss->arg[1].val, M2C_FIELD(ss, s16 *, 0x18), M2C_FIELD(ss, s16 *, 0x20));
    ss->kind = 0;
}
