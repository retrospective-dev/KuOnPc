#include "common.h"
#include "kuon_types.h"

unsigned short *func_0017D4D0(int msg_id);
extern S_aItemData D_00A37B60[5][128];
s8 *func_00187C00(u16 type_, u16 idx_) {
    return func_0017D4D0(D_00A37B60[type_ & 0xFFFF][idx_ & 0xFFFF].id + 0x30D40);
}
