#include "common.h"
#include "kuon_types.h"

extern MCMng *D_0025E044;
s32 func_0019FA10(u8 Port) {
    return (s32) D_0025E044->Message[Port & 0xFF];
}
