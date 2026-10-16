#include "common.h"

extern s32 D_00A500A0[];
extern s16 D_00A500A8[];
extern s16 D_00A500AA[];
extern s32 D_00A500AC[];

s32 func_001DBD30(void) {
    D_00A500A0[0] = 0;
    D_00A500AC[0] = 0;
    D_00A500A8[0] = 0x3E7;
    D_00A500AA[0] = 0x3E7;
    return 1;
}
