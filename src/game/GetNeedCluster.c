#include "common.h"
#include "kuon_types.h"

extern MCMng *lpMCMng;
s32 GetNeedCluster(s32 Mode) {
    switch (Mode) {
    case 0:
        return ((u32) (lpMCMng->IconSize[0] + 0x3FF) >> 0xA) + 7;
    case 1:
        return 2;
    default:
        return 0;
    }
}
