#include "common.h"
#include "kuon_types.h"

unsigned int CheckAnimEndFrame(AnimCtrl *lpAnimCtrl);
unsigned int CheckEneAttackState(MdlMng_t *lpEne, Ctrl *lpCtrl);
unsigned int CheckEneWalkState(MdlMng_t *lpEne, Ctrl *lpCtrl);
unsigned int CheckE022JumpState(MdlMng_t *lpEne, Ctrl *lpCtrl);
void E022ThkWalk(MdlMng_t *lpEne, Ctrl *lpCtrl) {
    s16 temp_v1;
    u8 *temp_s1;

    temp_s1 = lpEne->lpAnimCtrl;
    if (CheckE022JumpState(lpEne, lpCtrl) == 0) {
        temp_v1 = lpEne->IndexAnim;
        if ((temp_v1 != 0x12) && (temp_v1 != 0x13)) {
            if (CheckEneAttackState(lpEne, lpCtrl) == 0) {
                CheckEneWalkState(lpEne, lpCtrl);
                goto block_8;
            }
        } else {
            if (CheckAnimEndFrame((AnimCtrl *) temp_s1) != 0) {
                lpCtrl->func.SetActFunc[0](lpEne, lpCtrl, 2);
            }
block_8:
            lpCtrl->walkTimer += 1;
        }
    }
}
