#include "common.h"
#include "kuon_types.h"

typedef struct {
    /* 0x00 */ f32 unk0;
    /* 0x04 */ u8 unk4[0x20];
    /* 0x24 */ s32 unk24;
} Unk_00154FC0;

unsigned int CheckAnimNumFrame(AnimCtrl *lpAnimCtrl, float frame);
unsigned int CheckAnimEndFrame(AnimCtrl *lpAnimCtrl);
s32 func_0012F3F0(u8 *arg0, s32 arg1, f32 fparg0);
unsigned int Math_GotoVectorXZ(float *now, float *end, float add);
float Math_GotoAngle(float FromAngle, float ToAngle, float Rate);
int CheckMyTired(MdlMng_t *lpMy);
float GetMyJumpCorrectFrame(MdlMng_t *lpMy);
s32 func_00103E88(f32 *, f32 *);

/* Warning: Gap in callee-saved word stack region.
 * Saved: [0x0, 0x10, 0x14, 0x18, 0x1c, 0x20, 0x24, 0x28, 0x2c, 0x30, 0x34, 0x38, 0x3c, 0x40, 0x44], gap at: 0x8. */
void MyActJump(MdlMng_t *lpMy, MyCtrl *lpCtrl) {
    f32 temp_f0;
    s32 temp_a1;
    Unk_00154FC0 *temp_s0;

    temp_s0 = lpMy->lpAnimCtrl;
    temp_f0 = GetMyJumpCorrectFrame(lpMy);
    if (temp_s0->unk0 < temp_f0) {
        lpMy->Ang[1] = Math_GotoAngle(lpMy->Ang[1], lpMy->Target.angY, lpMy->Target.angStep);
        Math_GotoVectorXZ(lpMy->Pos, lpMy->Acc, lpMy->Target.distXZ / temp_f0);
    }
    if (CheckAnimNumFrame((AnimCtrl *) temp_s0, temp_f0) != 0) {
        func_00103E88(lpMy->Pos, lpMy->Acc);
        temp_s0->unk24 = (s32) (temp_s0->unk24 & ~0x10);
    }
    if (CheckAnimEndFrame((AnimCtrl *) temp_s0) != 0) {
        temp_a1 = CheckMyTired(lpMy) != 0;
        lpCtrl->func.actID = 0;
        func_0012F3F0(lpMy, temp_a1, 0.0f);
        lpMy->GravOff = 0;
        lpMy->MapHitOff = 0;
        lpMy->CharHitOutOff = 0;
    }
}
