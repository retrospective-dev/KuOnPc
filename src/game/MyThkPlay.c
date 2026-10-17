#include "common.h"
#include "kuon_types.h"

void MyThkPlay(MdlMng_t *lpMy, MyCtrl *lpCtrl) {
    lpCtrl->func.ThkFunc[lpCtrl->func.actID]();
}
