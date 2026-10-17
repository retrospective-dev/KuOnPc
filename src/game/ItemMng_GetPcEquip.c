#include "common.h"
#include "kuon_types.h"

Equip *GetMyEquip(MdlMng_t *lpMy, int button);
extern MdlMng_t D_006B90D0[];

u16 ItemMng_GetPcEquip(u16 btn_) {
    Equip *temp_v0;
    s32 var_a0;
    u8 temp_v1;

    temp_v0 = GetMyEquip(&D_006B90D0[0], btn_ & 0xFFFF);
    temp_v1 = temp_v0->type;
    var_a0 = temp_v0->id;
    if (temp_v1 == 0) {
        var_a0 = var_a0 + 0x7FFF + 0x1C41;
    } else if (temp_v1 == 1) {
        var_a0 += 0x7530;
    }
    return var_a0 & 0xFFFF;
}
