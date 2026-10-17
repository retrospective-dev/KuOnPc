#include "common.h"
#include "kuon_types.h"

extern SCurrentP *sCurrentP_0025E420;
s32 FsFontSetTexBuf(s32 id, u8 *pTexFileBuf) {
    sCurrentP_0025E420->pTex[id] = (u8 *) pTexFileBuf;
    return 0;
}
