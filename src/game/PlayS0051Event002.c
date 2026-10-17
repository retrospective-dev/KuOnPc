#include "common.h"
#include "kuon_types.h"
#include "m2c_macros.h"

unsigned int CheckAnimEndFrame(AnimCtrl *lpAnimCtrl);
s32 func_0012F3F0(u8 *arg0, s32 arg1, f32 fparg0);
float Math_GetDist2(float *v1, float *v2);
unsigned int CheckMyDash(MdlMng_t *lpMy);
int CheckEneDead(MdlMng_t *lpEne);
void SetEventFlag(int EventFlag);
extern MdlMng_t D_006B90D0[];
extern f32 D_006B90F0[];
extern s16 D_006B91D4[];

void PlayS0051Event002(Event *lpEvent) {
    MdlMng_t *temp_a0_2;
    f32 temp_f0;
    s32 temp_a0;

    temp_a0 = lpEvent->State[0];
    switch (temp_a0) {
    case 0:
        temp_f0 = Math_GetDist2(lpEvent->lpMdl[1]->Pos, &D_006B90F0[0]);
        if ((temp_f0 <= 10.0f) && ((temp_f0 < 4.0f) || (CheckMyDash(&D_006B90D0[0]) != 0) || ((D_006B91D4[0] >= 0x29) && (D_006B91D4[0] < 0x2C)))) {
            func_0012F3F0(lpEvent->lpMdl[0], 0, 0.0f);
            func_0012F3F0(lpEvent->lpMdl[1], 0x53, 0.0f);
            lpEvent->State[0] = 1;
            SetEventFlag(0x6CA);
        }
        break;
    case 1:
        if (CheckAnimEndFrame((AnimCtrl *) lpEvent->lpMdl[1]->lpAnimCtrl) != 0) {
            M2C_FIELD(lpEvent->lpMdl[1]->lpCtrlSt, s8 *, 0x182) = 1;
            lpEvent->State[0] = 2;
        }
        break;
    }
    temp_a0_2 = lpEvent->lpMdl[1];
    if ((temp_a0_2 != NULL) && (CheckEneDead(temp_a0_2) != 0)) {
        SetEventFlag(0x6CB);
    }
}
