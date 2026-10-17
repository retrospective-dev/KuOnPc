#include "common.h"

s32 RtaMngUpdate(void);
s32 CsMngUpdate(void) {
    return RtaMngUpdate() == 1;
}
