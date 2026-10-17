#include "common.h"
#include "kuon_types.h"

int func_001ACB40(SeKind SeKind, char *pFileName);
s32 func_00129770(s8 *, s32 *, s32);
extern u8 D_0025BA70[];
extern u8 D_0025BA90[];
extern u8 D_003AC8BC[];

s32 func_001AC6C0(s32 id) {
    s8 sp10[256];

    if (D_003AC8BC[0] == 0) {
        func_00129770(sp10, &D_0025BA70[0], id);
    } else {
        func_00129770(sp10, &D_0025BA90[0], id);
    }
    func_001ACB40(2, sp10);
    return 0;
}
