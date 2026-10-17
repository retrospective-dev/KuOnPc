#include "common.h"
#include "kuon_types.h"

extern SCurrentP *D_0025E420;
s32 func_00174CF0(s32 id, u8 *pTexFileBuf) {
    D_0025E420->pTex[id] = (u8 *) pTexFileBuf;
    return 0;
}
