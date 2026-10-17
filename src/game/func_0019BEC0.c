#include "common.h"

extern u8 (*D_0025E4E4)();

void func_0019BEC0(void) {
    if (D_0025E4E4 != NULL) {
        D_0025E4E4();
    }
}
