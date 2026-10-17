#include "common.h"
#include "kuon_types.h"

int ItemMng_Add_Direct(unsigned short item_id_, short num_);
s32 ItemMng_Add(u16 type_, u16 idx_, s16 num_) {
    s32 temp_v1;

    temp_v1 = type_ & 0xFFFF;
    switch (temp_v1) {
    case 0:
        return ItemMng_Add_Direct(idx_, num_);
    case 1:
        return ItemMng_Add_Direct(((idx_ & 0xFFFF) + 0x2710) & 0xFFFF, num_);
    case 2:
        return ItemMng_Add_Direct(((idx_ & 0xFFFF) + 0x4E20) & 0xFFFF, num_);
    case 3:
        return ItemMng_Add_Direct(((idx_ & 0xFFFF) + 0x7530) & 0xFFFF, num_);
    case 4:
        return ItemMng_Add_Direct(((idx_ & 0xFFFF) + 0x7FFF + 0x1C41) & 0xFFFF, num_);
    default:
        return 0;
    }
}
