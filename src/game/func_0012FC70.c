#include "common.h"
#include "kuon_types.h"

void func_0012FEE0(AnimCtrl *lpAnimCtrl);
void func_001309C0(AnimCtrl *lpAnimCtrl, float (*lpScl)[4], float AnimSpeed, float Rate);
void func_00130BD0(AnimCtrl *lpAnimCtrl, float (*lpAng)[4], float AnimSpeed, float Rate);
void func_00131080(AnimCtrl *lpAnimCtrl, float (*lpPos)[4], float AnimSpeed, float Rate);
void func_0012FC70(AnimCtrl *lpAnimCtrl, f32 AnimSpeed, f32 HokanRate) {
    if (lpAnimCtrl->ClothJoint == 0) {
        func_00131080(lpAnimCtrl, (f32 (*)[4]) &lpAnimCtrl->Pos[1], AnimSpeed, HokanRate);
        func_00130BD0(lpAnimCtrl, (f32 (*)[4]) &lpAnimCtrl->Ang[1], AnimSpeed, HokanRate);
        func_001309C0(lpAnimCtrl, (f32 (*)[4]) &lpAnimCtrl->Scl[1], AnimSpeed, HokanRate);
        func_0012FEE0(lpAnimCtrl);
    }
}
