#include "common.h"
#include "kuon_types.h"

void MenuCtrlMng_Free(MenuCtrlMng *pMenuCtrlMng);
s32 MenuCtrlMng_Delete(MenuCtrlMng *pMenuCtrlMng) {
    if (pMenuCtrlMng == NULL) {
        return 0;
    }
    MenuCtrlMng_Free(pMenuCtrlMng);
    pMenuCtrlMng->mng_state.state = 0;
    return 1;
}
