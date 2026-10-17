#include "common.h"
#include "m2c_macros.h"

extern void * D_006B9218[];

void SetMyActFreeFlag(s8 arg0) {
    M2C_FIELD(D_006B9218[0], s8 *, 0x102) = arg0;
}
