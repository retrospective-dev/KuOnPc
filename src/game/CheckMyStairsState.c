#include "common.h"
#include "kuon_types.h"

u32 CheckMyStairsState(MdlMng_t *lpMy, MyCtrl *lpCtrl) {
    u32 temp_v1;
    u8 temp_a2;

    temp_a2 = lpCtrl->StairsState;
    if (temp_a2 == 0) {
        temp_v1 = lpCtrl->WallHit;
        if (temp_v1 & 0x400000) {
            lpCtrl->StairsState = 1;
        } else if (temp_v1 & 0x200000) {
            lpCtrl->StairsState = 2;
        }
    } else if (temp_a2 == 2) {
        if (lpMy->Pos[1] < lpCtrl->LastPreAnimPos[1]) {
            lpCtrl->StairsState = 1;
        }
        if (!(lpCtrl->WallHit & 0x400000)) {
            if (!(lpMy->HitFlag & 0x8000)) {
                goto block_11;
            }
        } else {
block_11:
            lpCtrl->StairsState = 0;
        }
    } else if (temp_a2 == 1) {
        if (!(lpMy->Pos[1] <= lpCtrl->LastPreAnimPos[1])) {
            lpCtrl->StairsState = 2;
        }
        if (!(lpCtrl->WallHit & 0x200000)) {
            if (!(lpMy->HitFlag & 0x8000)) {
                goto block_18;
            }
        } else {
block_18:
            lpCtrl->StairsState = 0;
        }
    }
    return (u32) lpCtrl->StairsState;
}
