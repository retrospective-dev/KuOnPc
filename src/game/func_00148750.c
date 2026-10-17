#include "common.h"
#include "kuon_types.h"

extern int D_0025DF9C;
extern int D_0025E3A4;
extern int D_0025E3A8;
s32 func_0010D770(s32);
s32 func_0010D7B0(s32);
s32 func_001110C8(s32 *, s32 *);
s32 func_00111160(s32 *);
extern u8 D_007899C0[];
extern u8 D_00789A10[];

s32 func_00148750(void) {
    if ((D_0025E3A4 != 0) && (D_0025E3A8 != 0)) {
        func_0010D7B0(D_0025DF9C);
        func_0010D770(D_0025DF9C);
        func_001110C8(&D_007899C0[0], &D_00789A10[0]);
        func_00111160(&D_00789A10[0]);
    }
    D_0025E3A4 = 0;
    D_0025E3A8 = 0;
    return 1;
}
