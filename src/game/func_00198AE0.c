#include "common.h"
#include "kuon_types.h"

unsigned int func_00163CA0(MdlMng *lpEne, Ctrl *lpCtrl);
unsigned int func_00198320(MdlMng *lpEne, Ctrl *lpCtrl);
unsigned int func_001987D0(MdlMng *lpEne, Ctrl *lpCtrl);
void func_00198AE0(MdlMng *lpEne, Ctrl *lpCtrl) {
    if ((func_00198320(lpEne, lpCtrl) == 0) && ((lpEne->State[1] != 0) || (func_00163CA0(lpEne, lpCtrl) == 0))) {
        func_001987D0(lpEne, lpCtrl);
        lpCtrl->stayTimer += 1;
    }
}
