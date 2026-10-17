#include "common.h"
#include "kuon_types.h"

void P019DramaEnd(MdlMng_t *lpEne, Ctrl *lpCtrl);
void P019DramaStart(MdlMng_t *lpEne, Ctrl *lpCtrl);
void SetP019Dead(MdlMng_t *lpEne, Ctrl *lpCtrl, unsigned short AnimIndex);
void P019ActDead(MdlMng_t *lpEne, Ctrl *lpCtrl);
void P019ActStay(void);
void P019ActAppear(MdlMng_t *lpEne, Ctrl *lpCtrl);
void P019ActInit(MdlMng_t *lpEne, Ctrl *lpCtrl) {
    lpCtrl->func.ActFunc[5] = P019ActAppear;
    lpCtrl->func.ActFunc[0] = (void (*)(MdlMng_t *, Ctrl *)) P019ActStay;
    lpCtrl->func.ActFunc[4] = P019ActDead;
    lpCtrl->func.SetActFunc[4] = SetP019Dead;
    lpCtrl->func.DramaStartFunc = P019DramaStart;
    lpCtrl->func.DramaEndFunc = P019DramaEnd;
    lpCtrl->bHitOff = 1;
    lpEne->NoSearched = -1;
    lpCtrl->noDamage = 0xFFFF;
    lpCtrl->AppearTypeAlpha = 1;
}
