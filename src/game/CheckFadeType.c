#include "common.h"

extern u8 D_00A082D0[];

u8 CheckFadeType(void) {
    return D_00A082D0[0];
}
