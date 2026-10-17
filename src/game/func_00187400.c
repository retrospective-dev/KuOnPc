#include "common.h"
#include "kuon_types.h"

extern unsigned short D_00A36C30[3][5];
extern u8 D_003AC8A4[];

u16 func_00187400(u16 type_) {
    return D_00A36C30[D_003AC8A4[0]][type_ & 0xFFFF];
}
