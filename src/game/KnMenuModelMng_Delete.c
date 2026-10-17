#include "common.h"

extern s32 *pKnMenuModelMng;

s32 KnMenuModelMng_Delete(void) {
    if (pKnMenuModelMng == NULL) {
        return 0;
    }
    *pKnMenuModelMng = 0;
    return 1;
}
