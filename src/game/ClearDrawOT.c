#include "common.h"

void func_00127BE0(void* dst, s32 c, u32 n);
extern s32 lpDrawOTTop_00A32990[];
extern s32 D_00A32994[];
extern s32 D_00A32998[];
extern s32 D_00A3299C[];
extern s32 D_00A329A0[];
extern s32 D_00A329A4[];
extern s32 D_00A329A8[];
extern s32 lpDrawOTTop_00A329AC[];
extern s32 DrawOT[];

void ClearDrawOT(void) {
    func_00127BE0(&DrawOT[0], 0, 0x4000U);
    lpDrawOTTop_00A32990[0] = 0;
    D_00A32994[0] = 0;
    D_00A32998[0] = 0;
    D_00A3299C[0] = 0;
    D_00A329A0[0] = 0;
    D_00A329A4[0] = 0;
    D_00A329A8[0] = 0;
    lpDrawOTTop_00A329AC[0] = 0;
}
