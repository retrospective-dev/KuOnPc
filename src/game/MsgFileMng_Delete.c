#include "common.h"

void MsgFileMng_Free(void *arg0);
s32 MsgFileMng_Delete(s32 *arg0) {
    MsgFileMng_Free(arg0);
    *arg0 = 0;
    return 1;
}
