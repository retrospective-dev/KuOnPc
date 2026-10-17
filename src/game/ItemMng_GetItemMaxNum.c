#include "common.h"
#include "kuon_types.h"

extern unsigned short s_aSeqSize[3][5];
extern u8 D_003AC8A4[];

u16 ItemMng_GetItemMaxNum(u16 type_) {
    return s_aSeqSize[D_003AC8A4[0]][type_ & 0xFFFF];
}
