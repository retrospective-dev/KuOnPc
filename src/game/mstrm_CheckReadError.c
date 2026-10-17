#include "common.h"

extern u8 (*s_ReadErrCB)();

void mstrm_CheckReadError(void) {
    if (s_ReadErrCB != NULL) {
        s_ReadErrCB();
    }
}
