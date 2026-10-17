#include "common.h"
#include "kuon_types.h"

unsigned int CheckEneAttackState(MdlMng_t *lpEne, Ctrl *lpCtrl);
unsigned int CheckE022JumpState(MdlMng_t *lpEne, Ctrl *lpCtrl);
unsigned int CheckE022StayState(MdlMng_t *lpEne, Ctrl *lpCtrl);
void E022ThkStay(MdlMng_t *lpEne, Ctrl *lpCtrl) {
    if ((CheckE022JumpState(lpEne, lpCtrl) == 0) && ((lpEne->State[1] != 0) || (CheckEneAttackState(lpEne, lpCtrl) == 0))) {
        CheckE022StayState(lpEne, lpCtrl);
        lpCtrl->stayTimer += 1;
    }
}
