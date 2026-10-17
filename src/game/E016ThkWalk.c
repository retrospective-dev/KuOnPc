#include "common.h"
#include "kuon_types.h"

unsigned int CheckE016WalkState(MdlMng_t *lpEne, Ctrl *lpCtrl);
void E016ThkWalk(MdlMng_t *lpEne, Ctrl *lpCtrl) {
    CheckE016WalkState(lpEne, lpCtrl);
    lpCtrl->walkTimer += 1;
}
