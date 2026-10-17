#include "common.h"
#include "kuon_types.h"

extern u8 D_00A082D0[];
extern s32 D_00A082D4[];

s32 CheckNowFade(s32 Type) {
    if ((D_00A082D0[0] == Type) && (D_00A082D4[0] != 0)) {
        return 1;
    }
    return 0;
}
