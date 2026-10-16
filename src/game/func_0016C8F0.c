#include "common.h"

typedef struct {
    /* 0x0 */ s32 unk0;
    /* 0x4 */ s32 unk4;
    /* 0x8 */ s32 unk8;
} UnkObj_0016C8F0;

void func_001A8280(s32);

void func_0016C8F0(UnkObj_0016C8F0* obj) {
    func_001A8280(obj->unk8);
    obj->unk0 = 0;
}
