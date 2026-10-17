#include "common.h"

extern u8 (*D_0025E504)();

void func_001A2070(void) {
    if (D_0025E504 != NULL) {
        D_0025E504();
    }
}
