#include "common.h"
#include "kuon_types.h"

float Math_GetAngle360(float ang);
void __sghDice_AnimeRot(MdlMng_t *lpMdlMng) {
    lpMdlMng->Ang[0] = Math_GetAngle360(lpMdlMng->Ang[0]);
    lpMdlMng->Ang[1] = Math_GetAngle360(lpMdlMng->Ang[1]);
    lpMdlMng->Ang[2] = Math_GetAngle360(-0.40135f + lpMdlMng->Ang[2]);
}
