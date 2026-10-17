#include "common.h"

extern u8 (*D_0025E4E0)();

void func_0019BF00(void) {
    if (D_0025E4E0 != NULL) {
        D_0025E4E0();
    }
}
