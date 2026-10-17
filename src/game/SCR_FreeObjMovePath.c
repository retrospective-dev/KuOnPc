#include "common.h"
#include "kuon_types.h"

int GetMdlMngIndexByCtrlId(int Type, int CtrlId);
void FreeObjMovePath(MdlMng_t *lpObj);
extern MdlMng_t MdlMng[770];
void SCR_FreeObjMovePath(Ss *ss) {
    FreeObjMovePath(&MdlMng[GetMdlMngIndexByCtrlId(1, ss->arg[0].val) + 0x30]);
    ss->kind = 0;
}
