#include "common.h"

/* Only the u16 at 0x0078B1DE is known; it is part of a larger object. */
extern u16 D_0078B1DE[];
void func_00148460(s32, s32, s32);

void func_0014A670(void) {
    if (D_0078B1DE[0] != 1) {
        func_00148460(4, 1, 0x400);
        D_0078B1DE[0] = 1;
    }
}
