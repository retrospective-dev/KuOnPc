#include "common.h"

typedef struct {
    /* 0x0 */ s32 unk0;
    /* 0x4 */ s32 unk4;
    /* 0x8 */ s32 unk8;
} UnkObj_0016DA40;

void func_001322C0(s32);

void func_0016DA40(UnkObj_0016DA40* obj) {
    func_001322C0(obj->unk8);
    obj->unk0 = 0;
}
