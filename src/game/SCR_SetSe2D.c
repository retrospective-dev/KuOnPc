#include "common.h"
#include "kuon_types.h"
#include "m2c_macros.h"

void fsScr_SetPointerData(Rv *Rp, int data);
int SND_Play2D(int iSndId, short sVol, short sPitch);
void SCR_SetSe2D(Ss *ss) {
    fsScr_SetPointerData(&ss->arg[4], SND_Play2D(ss->arg[0].val, M2C_FIELD(ss, u16 *, 0x10), M2C_FIELD(ss, u16 *, 0x18)));
    ss->kind = 0;
}
