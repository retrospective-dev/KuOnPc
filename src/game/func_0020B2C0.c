#include "common.h"
#include "kuon_types.h"

unsigned int func_0015E5F0(MdlMng *lpMdlMng, MdlMng **HitMdlMng);
void func_0020B2C0(MdlMng *lpEne) {
    if (lpEne->GravOff == 0) {
        lpEne->Pos[1] += 0.1f;
    }
    if (lpEne->MapHitOff == 0) {
        lpEne->HitFlag = func_0015E5F0(lpEne, lpEne->lpHitMap);
    }
}
