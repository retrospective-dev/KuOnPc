#include "common.h"

extern s32 *pKnMenuWindMng;

s32 KnMenuWindMng_Delete(void) {
    if (pKnMenuWindMng == NULL) {
        return 0;
    }
    *pKnMenuWindMng = 0;
    return 1;
}
