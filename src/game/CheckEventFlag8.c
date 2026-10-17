#include "common.h"

extern s8 GameEventFlag[];

u8 CheckEventFlag8(s32 arg0) {
    s32 var_v1;

    var_v1 = arg0 >> 3;
    if (arg0 < 0) {
        var_v1 = (s32) (arg0 + 7) >> 3;
    }
    return *(&GameEventFlag[0] + var_v1);
}
