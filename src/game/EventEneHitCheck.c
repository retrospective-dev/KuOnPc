#include "common.h"
#include "kuon_types.h"

unsigned int CheckHitMapGetMdlMng(MdlMng_t *lpMdlMng, MdlMng_t **HitMdlMng);
void EventEneHitCheck(MdlMng_t *lpEne) {
    if (lpEne->GravOff == 0) {
        lpEne->Pos[1] += 0.1f;
    }
    if (lpEne->MapHitOff == 0) {
        lpEne->HitFlag = CheckHitMapGetMdlMng(lpEne, lpEne->lpHitMap);
    }
}
