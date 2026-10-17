#include "common.h"
#include "kuon_types.h"

void UpdateAnimLocalMatrix(AnimCtrl *lpAnimCtrl);
void GetAnimSclFrameData(AnimCtrl *lpAnimCtrl, float (*lpScl)[4], float AnimSpeed, float Rate);
void GetAnimAngFrameData(AnimCtrl *lpAnimCtrl, float (*lpAng)[4], float AnimSpeed, float Rate);
void GetAnimPosFrameData(AnimCtrl *lpAnimCtrl, float (*lpPos)[4], float AnimSpeed, float Rate);
void CalcMi3ObjectMatrix(AnimCtrl *lpAnimCtrl, f32 AnimSpeed, f32 HokanRate) {
    if (lpAnimCtrl->ClothJoint == 0) {
        GetAnimPosFrameData(lpAnimCtrl, (f32 (*)[4]) &lpAnimCtrl->Pos[1], AnimSpeed, HokanRate);
        GetAnimAngFrameData(lpAnimCtrl, (f32 (*)[4]) &lpAnimCtrl->Ang[1], AnimSpeed, HokanRate);
        GetAnimSclFrameData(lpAnimCtrl, (f32 (*)[4]) &lpAnimCtrl->Scl[1], AnimSpeed, HokanRate);
        UpdateAnimLocalMatrix(lpAnimCtrl);
    }
}
