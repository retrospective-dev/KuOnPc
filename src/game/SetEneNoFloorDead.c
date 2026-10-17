#include "common.h"
#include "kuon_types.h"

void EneDeadProc(MdlMng_t *lpEne, Ctrl *lpCtrl);
void SetEneNoFloorDead(MdlMng_t *lpEne, Ctrl *lpCtrl) {
    if ((lpEne->MapHitOff == 0) && (lpEne->GravOff == 0) && (lpCtrl->bNoFloorDeadDisable == 0) && (lpEne->Hp > 0) && (lpCtrl->func.actID != 4)) {
        if (lpEne->HitFlag & 1) {
            lpCtrl->NoFloorDeadTimer = 0;
        } else {
            lpCtrl->NoFloorDeadTimer += 1;
        }
        if ((s32) lpCtrl->NoFloorDeadTimer >= 0x3C) {
            lpCtrl->ItemId = -1;
            lpCtrl->NoSave = 1;
            lpCtrl->bFree = 1;
            lpCtrl->func.SetActFunc[4](lpEne, lpCtrl, 0x28);
            EneDeadProc(lpEne, lpCtrl);
        }
    }
}
