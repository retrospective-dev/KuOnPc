#include "common.h"
#include "kuon_types.h"

s32 func_0012F3F0(u8 *arg0, s32 arg1, f32 fparg0);
void func_001963C0(unsigned char fade_, int bAppear_);
int func_001AEDA0(int iSndId, short sVol, short sPitch, float *Pos, float fDist);
extern u8 D_003AC8A4[];

void func_00154890(MdlMng *lpMy, MyCtrl *lpCtrl, u16 AnimIndex) {
    s32 temp_a1;

    if (lpCtrl->func.actID == 7) {
        func_001963C0(1U, 1);
    }
    func_001AEDA0((D_003AC8A4[0] * 0x64) + 0xBEE, 0x64, 0, lpMy->Pos, 25.0f);
    temp_a1 = AnimIndex & 0xFFFF;
    lpCtrl->func.actID = 5;
    if (temp_a1 != 0xFFFF) {
        func_0012F3F0(lpMy, temp_a1, 0.0f);
    }
}
