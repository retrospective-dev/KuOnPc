#include "common.h"
#include "kuon_types.h"

int func_001ACB40(SeKind SeKind, char *pFileName);
void func_001ADB20(char *pFileName);
s32 func_00129770(s8 *, s32 *, s32);
extern u8 D_0025BAB0[];
extern u8 D_0025BAD0[];
extern u8 D_0025BAF0[];
extern u8 D_0025BB10[];
extern u8 D_0025BB30[];
extern u8 D_003AC8BC[];

s32 func_001AC5E0(s32 id) {
    s8 sp20[256];

    if (D_003AC8BC[0] == 0) {
        func_00129770(sp20, &D_0025BAB0[0], id);
    } else {
        func_00129770(sp20, &D_0025BAD0[0], id);
    }
    func_001ACB40(3, sp20);
    if (D_003AC8BC[0] == 0) {
        func_00129770(sp20, &D_0025BAF0[0], id);
    } else {
        func_00129770(sp20, &D_0025BB10[0], id);
    }
    func_001ACB40(4, sp20);
    func_00129770(sp20, &D_0025BB30[0], id);
    func_001ADB20(sp20);
    return 0;
}
