#include "common.h"
#include "kuon_types.h"

u32 CheckAnimEndFrame(AnimCtrl *lpAnimCtrl) {
    if (lpAnimCtrl->Loop != 0) {
        if (!(lpAnimCtrl->NumFrame < (lpAnimCtrl->EndFrame - 1.0f))) {
            return 1U;
        }
        goto block_7;
    }
    if (!(lpAnimCtrl->NumFrame < lpAnimCtrl->EndFrame)) {
        return 1U;
    }
block_7:
    return 0U;
}
