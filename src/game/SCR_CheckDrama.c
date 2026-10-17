#include "common.h"
#include "kuon_types.h"

void fsScr_SetPointerData(Rv *Rp, int data);
int GetDramaReadFlag(void);
int GetFadeDrama(void);
void SCR_CheckDrama(Ss *ss) {
    if ((GetDramaReadFlag() != 0) || (GetFadeDrama() != -1)) {
        fsScr_SetPointerData(ss->arg, 1);
    } else {
        fsScr_SetPointerData(ss->arg, 0);
    }
    ss->kind = 0;
}
