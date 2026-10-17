#include "common.h"
#include "kuon_types.h"

s32 func_0011A190(s32, s32, s32, u32);

void mpg_audioDecChangeVolume(s32 arg0) {
    s32 var_s1;

    var_s1 = 0;
    do {
        func_0011A190(1, 0x8010, var_s1 | 0x980, arg0);
        func_0011A190(1, 0x8010, var_s1 | 0xA80, arg0);
        var_s1 += 1;
    } while (var_s1 < 2);
}
