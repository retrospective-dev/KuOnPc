#include "common.h"
#include "kuon_types.h"

int func_001AED30(int iSndId, short sVol, short sPitch, float (*pPos)[4], float fDist);
void func_001A99D0(MdlMng *lpEne, Ctrl *lpCtrl) {
    if (lpEne->State[0] == 1) {
        lpCtrl->SeHdl[0] = func_001AED30(0x88E, 0x3C, 0, (f32 (*)[4]) lpEne->Pos, 30.0f);
    }
    if (lpEne->State[1] == 1) {
        lpCtrl->SeHdl[1] = func_001AED30(0x88E, 0x64, 0x12C, (f32 (*)[4]) lpEne->Pos, 30.0f);
    }
}
