#include "common.h"
#include "m2c_macros.h"

s32 sbuf_SyncReadBlock(u8 *arg0, s32 arg1);
s32 strm_ReadSync(u8 *arg0, s32 arg1) {
    if (arg0 == NULL) {
        return 0;
    }
    return sbuf_SyncReadBlock(M2C_FIELD(arg0, u8 **, 0x1C), arg1);
}
