#include "common.h"

extern u8 D_0024EC60[];
extern u8 D_003AC899[];

void func_001F9DE0(void) {
    s32 (*temp_v1)(s32);
    s32 temp_a0;

    temp_a0 = D_003AC899[0] * 4;
    temp_v1 = (int (*)(int)) (*(s32 *)(&D_0024EC60[0] + temp_a0));
    if (temp_v1 != NULL) {
        temp_v1(temp_a0);
    }
}
