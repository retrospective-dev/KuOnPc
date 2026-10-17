#include "common.h"
#include "kuon_types.h"

unsigned int func_001916A0(MdlMng *lpEne, Ctrl *lpCtrl);
void func_00191B10(MdlMng *lpEne, Ctrl *lpCtrl) {
    func_001916A0(lpEne, lpCtrl);
    lpCtrl->walkTimer += 1;
}
