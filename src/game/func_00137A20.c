#include "common.h"
#include "kuon_types.h"
#include "m2c_macros.h"

extern DrawMng *D_0025DF80;
void func_00137A20(s32 *col) {
    M2C_FIELD(D_0025DF80, s8 *, 0x100) = (s8) M2C_FIELD(col, s32 *, 0);
    M2C_FIELD(D_0025DF80, s8 *, 0x101) = (s8) M2C_FIELD(col, s32 *, 4);
    M2C_FIELD(D_0025DF80, s8 *, 0x102) = (s8) M2C_FIELD(col, s32 *, 8);
    M2C_FIELD(D_0025DF80, s8 *, 0x103) = (s8) M2C_FIELD(col, s32 *, 0xC);
    M2C_FIELD(D_0025DF80, s8 *, 0x1F0) = (s8) M2C_FIELD(col, s32 *, 0);
    M2C_FIELD(D_0025DF80, s8 *, 0x1F1) = (s8) M2C_FIELD(col, s32 *, 4);
    M2C_FIELD(D_0025DF80, s8 *, 0x1F2) = (s8) M2C_FIELD(col, s32 *, 8);
    M2C_FIELD(D_0025DF80, s8 *, 0x1F3) = (s8) M2C_FIELD(col, s32 *, 0xC);
}
