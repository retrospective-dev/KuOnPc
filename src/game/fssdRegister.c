#include "common.h"

extern u8 s_psrcFunc[];

void fssdRegister(s32 arg0, s32 arg1) {
    *(s32 *)(&s_psrcFunc[0] + (arg0 * 4)) = arg1;
}
