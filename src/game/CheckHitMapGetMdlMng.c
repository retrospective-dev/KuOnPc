#include "common.h"

s32 CheckHitMap(void *arg0);
extern s32 gHitMdlMng;

void CheckHitMapGetMdlMng(s32 arg0, s32 *arg1) {
    CheckHitMap((void *) arg0);
    *arg1 = gHitMdlMng;
}
