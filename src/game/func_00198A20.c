#include "common.h"
#include "kuon_types.h"

unsigned int func_0012F290(AnimCtrl *lpAnimCtrl);
unsigned int func_00163CA0(MdlMng *lpEne, Ctrl *lpCtrl);
unsigned int func_00163DF0(MdlMng *lpEne, Ctrl *lpCtrl);
unsigned int func_00198320(MdlMng *lpEne, Ctrl *lpCtrl);
void func_00198A20(MdlMng *lpEne, Ctrl *lpCtrl) {
    s16 temp_v1;
    u8 *temp_s1;

    temp_s1 = lpEne->lpAnimCtrl;
    if (func_00198320(lpEne, lpCtrl) == 0) {
        temp_v1 = lpEne->IndexAnim;
        if ((temp_v1 != 0x12) && (temp_v1 != 0x13)) {
            if (func_00163CA0(lpEne, lpCtrl) == 0) {
                func_00163DF0(lpEne, lpCtrl);
                goto block_8;
            }
        } else {
            if (func_0012F290((AnimCtrl *) temp_s1) != 0) {
                lpCtrl->func.SetActFunc[0](lpEne, lpCtrl, 2);
            }
block_8:
            lpCtrl->walkTimer += 1;
        }
    }
}
