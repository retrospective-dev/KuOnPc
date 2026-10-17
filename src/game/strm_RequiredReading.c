#include "common.h"
#include "m2c_macros.h"

s32 sbuf_RequiredRead(void *arg0);
s32 strm_RequiredReading(void *arg0) {
    if (arg0 == NULL) {
        return 0;
    }
    return sbuf_RequiredRead(M2C_FIELD(arg0, void **, 0x1C));
}
