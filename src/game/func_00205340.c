#include "common.h"
#include "kuon_types.h"

unsigned int func_00163DF0(MdlMng *lpEne, Ctrl *lpCtrl);
unsigned int func_00205210(MdlMng *lpEne, Ctrl *lpCtrl);
void func_00205340(MdlMng *lpEne, Ctrl *lpCtrl) {
    if (func_00205210(lpEne, lpCtrl) == 0) {
        if (lpCtrl->bWeak == 0) {
            func_00163DF0(lpEne, lpCtrl);
        }
        lpCtrl->walkTimer += 1;
    }
}
