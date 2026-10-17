#include "common.h"

void func_0013F910(u8 *arg0);
void func_0014B580(s32 arg0);
s32 func_001DA670(s32 arg0);
extern u8 * D_00A3A3A0[];
extern u8 * D_00A3A3A4[];
extern u8 * D_00A3A3A8[];

void func_001909C0(void) {
    if (D_00A3A3A0[0] != NULL) {
        func_0013F910(D_00A3A3A0[0]);
        func_0014B580((s32) D_00A3A3A0[0]);
        D_00A3A3A0[0] = NULL;
    }
    if (D_00A3A3A4[0] != NULL) {
        func_0013F910(D_00A3A3A4[0]);
        func_0014B580((s32) D_00A3A3A4[0]);
        D_00A3A3A4[0] = NULL;
    }
    if (D_00A3A3A8[0] != NULL) {
        func_0013F910(D_00A3A3A8[0]);
        func_0014B580((s32) D_00A3A3A8[0]);
        D_00A3A3A8[0] = NULL;
    }
    func_001DA670(0x64);
}
