#include "common.h"

typedef struct {
    /* 0x0 */ s32 unk0;
    /* 0x4 */ s32 unk4;
    /* 0x8 */ s32 unk8;
    /* 0xC */ s32 unkC;
} UnkObj_0017E7A0;

void func_0017E7A0(UnkObj_0017E7A0* obj) {
    obj->unkC = obj->unk8;
    obj->unk8 = 0;
}
