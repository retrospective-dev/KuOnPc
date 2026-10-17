#include "common.h"

typedef struct {
    /* 0x000 */ u8 unk000[0x198];
    /* 0x198 */ s32 unk198;
    /* 0x19C */ u8 unk19C[0x1BC - 0x19C];
    /* 0x1BC */ s32 unk1BC;
} UnkObj_001519C0;

/* D_006B9218 is the field at +0x148 of the large global at D_006B90D0 */
extern UnkObj_001519C0* D_006B9218[];
void func_001BEFB0(s32, s32);

void SetMyLumpOff(void) {
    UnkObj_001519C0* obj = D_006B9218[0];

    func_001BEFB0(obj->unk1BC, 1);
    obj->unk1BC = -1;
    func_001BEFB0(obj->unk198, 1);
    obj->unk198 = -1;
}
