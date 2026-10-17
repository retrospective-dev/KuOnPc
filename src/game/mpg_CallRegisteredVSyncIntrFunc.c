#include "common.h"

extern u8 (*s_pfVSyncCallback)();

void mpg_CallRegisteredVSyncIntrFunc(void) {
    if (s_pfVSyncCallback != NULL) {
        s_pfVSyncCallback();
    }
}
