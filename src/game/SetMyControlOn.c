#include "common.h"
#include "m2c_macros.h"

extern void * D_006B9218[];

void SetMyControlOn(void) {
    M2C_FIELD(D_006B9218[0], s8 *, 0x189) = 0;
}
