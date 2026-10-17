#include "common.h"
#include "kuon_types.h"

void SetMdlFade(MdlMng_t *lpMdlMng, u8 Type, f32 FadeStep) {
    lpMdlMng->FadeType = Type;
    lpMdlMng->FadeStep = FadeStep;
}
