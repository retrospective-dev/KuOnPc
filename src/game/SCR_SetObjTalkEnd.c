#include "common.h"
#include "kuon_types.h"

int GetMdlMngIndexByCtrlId(int Type, int CtrlId);
void SetObjTalkEnd(MdlMng_t *lpObj);
extern MdlMng_t MdlMng[770];
void SCR_SetObjTalkEnd(Ss *ss) {
    SetObjTalkEnd(&MdlMng[GetMdlMngIndexByCtrlId(1, ss->arg[0].val) + 0x30]);
    ss->kind = 0;
}
