#include "common.h"
#include "kuon_types.h"

void MasterMoveCalc(MdlMng_t *lpMdlMng);
void MasterMove(MdlMng_t *lpMdlMng) {
    if ((lpMdlMng->bUse == 0) || (lpMdlMng->lpMi3Head == NULL)) {
        return;
    }
    if (lpMdlMng->AnimState != 2) {
        MasterMoveCalc(lpMdlMng);
    }
}
