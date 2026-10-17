#include "common.h"
#include "kuon_types.h"

void func_001F1670(MenuCtrlMng *pMenuCtrlMng);
s32 func_001EF740(MenuCtrlMng *pMenuCtrlMng) {
    if (pMenuCtrlMng == NULL) {
        return 0;
    }
    func_001F1670(pMenuCtrlMng);
    pMenuCtrlMng->mng_state.state = 0;
    return 1;
}
