#include "common.h"
#include "m2c_macros.h"

void func_00132610();
s32 * func_00132770(void);
u8 * func_00133A30(u8 **arg0, s32 arg1);
void func_001ADD80(s32 arg0, s32 arg1);
s32 func_001ADE80(s32 arg0, s8 arg1);
extern u8 D_003AC8BC[];
extern u8 D_003AC8BD[];

void func_001AC2A0(void) {
    u8 **temp_v0;

    if (D_003AC8BD[0] == 0xFF) {
        func_001ADE80(0, 0);
        func_001ADD80(0, 2);
        func_001ADE80(1, 1);
        func_001ADD80(1, 2);
        func_001ADE80(2, 2);
        func_001ADD80(2, 2);
        func_001ADE80(3, 3);
        func_001ADD80(3, 2);
        temp_v0 = func_00132770();
        func_00132610(func_00133A30(temp_v0, M2C_FIELD(temp_v0, s32 *, 4)));
        D_003AC8BD[0] = D_003AC8BC[0];
    }
}
