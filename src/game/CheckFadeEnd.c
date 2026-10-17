#include "common.h"

extern s32 D_00A082D4[];

s32 CheckFadeEnd(void) {
    return D_00A082D4[0] == 0;
}
