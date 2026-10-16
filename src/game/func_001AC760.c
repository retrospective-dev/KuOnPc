#include "common.h"

void func_0014B580(s32 arg0);
extern s32 D_0025E520;

void func_001AC760(void) {
    if (D_0025E520 != 0) {
        func_0014B580(D_0025E520);
        D_0025E520 = 0;
    }
}
