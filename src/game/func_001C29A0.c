#include "common.h"

s32 func_0013ADA0(void);
extern u8 D_00A49EB0[];

s32 func_001C29A0(s32 arg0) {
    *(s32 *)(&D_00A49EB0[0] + ((arg0 & 0xFFFF) * 4)) = func_0013ADA0();
    return 1;
}
