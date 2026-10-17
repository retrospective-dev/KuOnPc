#include "common.h"
#include "kuon_types.h"

int func_001ACB40(SeKind SeKind, char *pFileName);
extern s8 D_0025BB90[];
extern s8 D_0025BBB0[];

s32 func_001AC720(void) {
    func_001ACB40(0, &D_0025BB90[0]);
    func_001ACB40(1, &D_0025BBB0[0]);
    return 0;
}
