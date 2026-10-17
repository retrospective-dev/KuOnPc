#include "common.h"
#include "kuon_types.h"

int func_00159CE0(float *LP, float *LV, float *P1, float *V12, float *V13, float *pT);
s32 func_00159A40(MapHit *pPo, LineHit *pL, HitInfo *pHL) {
    f32 sp2C;

    if (func_00159CE0(pL->P, pL->V, pPo->P1, pPo->V12, pPo->V13, &sp2C) != 0) {
        if (pHL != NULL) {
            pHL->t1 = sp2C;
            pHL->t2 = sp2C;
        }
        return 1;
    }
    return 0;
}
