#include "common.h"
#include "kuon_types.h"

int GetMdlMngIndexByCtrlId(int Type, int CtrlId);
int CheckEneDead(MdlMng_t *lpEne);
void fsScr_SetPointerData(Rv *Rp, int data);
extern MdlMng_t MdlMng[770];
void SCR_CheckEneDead(Ss *ss) {
    if (CheckEneDead(&MdlMng[GetMdlMngIndexByCtrlId(2, ss->arg[0].val) + 0xA1]) != 0) {
        fsScr_SetPointerData(&ss->arg[1], 1);
    } else {
        fsScr_SetPointerData(&ss->arg[1], 0);
    }
    ss->kind = 0;
}
