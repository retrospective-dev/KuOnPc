#include "common.h"
#include "kuon_types.h"

void EneThkPlay(MdlMng_t *lpEne, Ctrl *lpCtrl) {
    lpCtrl->func.ThkFunc[lpCtrl->func.actID]();
}
