#include "common.h"
#include "kuon_types.h"

int func_001879C0(unsigned short item_id_, short num_);
s32 func_00187D50(u16 type_, u16 idx_, s16 num_) {
    s32 temp_v1;

    temp_v1 = type_ & 0xFFFF;
    switch (temp_v1) {
    case 0:
        return func_001879C0(idx_, num_);
    case 1:
        return func_001879C0(((idx_ & 0xFFFF) + 0x2710) & 0xFFFF, num_);
    case 2:
        return func_001879C0(((idx_ & 0xFFFF) + 0x4E20) & 0xFFFF, num_);
    case 3:
        return func_001879C0(((idx_ & 0xFFFF) + 0x7530) & 0xFFFF, num_);
    case 4:
        return func_001879C0(((idx_ & 0xFFFF) + 0x7FFF + 0x1C41) & 0xFFFF, num_);
    default:
        return 0;
    }
}
