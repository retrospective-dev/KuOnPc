#include "common.h"

extern u8 (*s_pfCallback)();

void mpg_CallRegisteredFunc(void) {
    if (s_pfCallback != NULL) {
        s_pfCallback();
    }
}
