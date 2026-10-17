#include "common.h"
#include "kuon_types.h"

extern MCMng *lpMCMng;
s32 GetMemoryCardMessage(u8 Port) {
    return (s32) lpMCMng->Message[Port & 0xFF];
}
