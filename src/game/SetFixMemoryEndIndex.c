#include "common.h"
#include "m2c_macros.h"

extern s32 FixMemEndIndex;
extern void * D_0078B650[];

void SetFixMemoryEndIndex(void) {
    FixMemEndIndex = (s32) M2C_FIELD(D_0078B650[0], u16 *, 2);
}
