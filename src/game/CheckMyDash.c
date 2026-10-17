#include "common.h"

typedef struct {
    /* 0x000 */ u8 unk000[0x104];
    /* 0x104 */ s16 unk104;
} UnkObj_00150830;

s32 CheckMyDash(UnkObj_00150830* obj) {
    if (obj->unk104 == 10 || obj->unk104 == 11) {
        return 1;
    }
    return 0;
}
