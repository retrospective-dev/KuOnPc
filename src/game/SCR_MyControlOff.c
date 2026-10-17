#include "common.h"
#include "kuon_types.h"

void SetMyControlOff(void);
int CheckMyControlOff(MdlMng_t *lpMy);
void fsScr_SetPointerData(Rv *Rp, int data);
extern MdlMng_t D_006B90D0[];

void SCR_MyControlOff(Ss *ss) {
    if (CheckMyControlOff(&D_006B90D0[0]) != 0) {
        SetMyControlOff();
        fsScr_SetPointerData(ss->arg, 1);
    } else {
        fsScr_SetPointerData(ss->arg, 0);
    }
    ss->kind = 0;
}
