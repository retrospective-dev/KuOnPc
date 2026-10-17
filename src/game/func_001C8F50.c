#include "common.h"
#include "kuon_types.h"

typedef struct {
    /* 0x00 */ s32 unk0;
    /* 0x04 */ s32 unk4;
    /* 0x08 */ s32 unk8;
    /* 0x0C */ s32 unkC;
    /* 0x10 */ s32 unk10;
    /* 0x14 */ s32 unk14;
    /* 0x18 */ u8 unk18[0x4];
    /* 0x1C */ u16 unk1C;
} Unk_001C8F50;

void func_00127BE0(void* dst, s32 c, u32 n);
u8 *func_001D46A0(u8 *pSList_, unsigned short hElem_);
unsigned short func_001D47C0(u8 *pSList_, u8 *pData_);
extern u8 *D_0025E5D0;
u16 func_001C8F50(u16 type_) {
    u16 temp_s2;
    Unk_001C8F50 *temp_v0;

    temp_s2 = func_001D47C0(D_0025E5D0, NULL) & 0xFFFF;
    if (temp_s2 == 0xFFFF) {
        return 0xFFFFU;
    }
    temp_v0 = func_001D46A0(D_0025E5D0, temp_s2);
    func_00127BE0(temp_v0, 0, 0x20U);
    temp_v0->unk0 = 0x43800000;
    temp_v0->unk4 = 0x43600000;
    temp_v0->unk8 = 0;
    temp_v0->unkC = 0x3F800000;
    temp_v0->unk10 = 0x3F000000;
    temp_v0->unk14 = 0x3F800000;
    temp_v0->unk1C = type_;
    return temp_s2;
}
