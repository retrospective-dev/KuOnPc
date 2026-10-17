#include "common.h"
#include "kuon_types.h"

void fsScr_SetPointerData(Rv *Rp, int data);
int KnMenuMng_GetPlayMenu(Menu_id menu_id);
void SCR_CheckItemMenuOpen(Ss *ss) {
    if (KnMenuMng_GetPlayMenu(7) == 0) {
        fsScr_SetPointerData(ss->arg, 0);
    } else {
        fsScr_SetPointerData(ss->arg, 1);
    }
    ss->kind = 0;
}
