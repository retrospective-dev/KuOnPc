#include "common.h"
#include "kuon_types.h"

int GetMdlMngIndexByCtrlId(int Type, int CtrlId);
void SetObjTalkStart(MdlMng_t *lpObj, int MsgId, int ReStart, int MsgNum);
extern MdlMng_t MdlMng[770];
void SCR_SetObjTalkStart(Ss *ss) {
    SetObjTalkStart(&MdlMng[GetMdlMngIndexByCtrlId(1, ss->arg[0].val) + 0x30], ss->arg[1].val, ss->arg[2].val, 0);
    ss->kind = 0;
}
