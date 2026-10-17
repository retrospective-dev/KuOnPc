#include "common.h"
#include "kuon_types.h"

unsigned int CheckEneWalkState(MdlMng_t *lpEne, Ctrl *lpCtrl);
unsigned int CheckP025AttackState(MdlMng_t *lpEne, Ctrl *lpCtrl);
void P025ThkWalk(MdlMng_t *lpEne, Ctrl *lpCtrl) {
    if (CheckP025AttackState(lpEne, lpCtrl) == 0) {
        if (lpCtrl->bWeak == 0) {
            CheckEneWalkState(lpEne, lpCtrl);
        }
        lpCtrl->walkTimer += 1;
    }
}
