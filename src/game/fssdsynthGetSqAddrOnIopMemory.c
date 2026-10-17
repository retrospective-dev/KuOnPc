#include "common.h"

extern u8 D_0078B010[];

s32 fssdsynthGetSqAddrOnIopMemory(s32 arg0) {
    return *(s32 *)(&D_0078B010[0] + (arg0 * 0x10));
}
