#include "common.h"

typedef struct {
    /* 0x00 */ u8 unk00[0x80];
    /* 0x80 */ void* unk80;
    /* 0x84 */ void* unk84;
    /* 0x88 */ void* unk88;
} UnkObj_00192240;

void func_001921B0(void);
void func_00192120(void);
void func_00191DF0(void);

void func_00192240(s32 arg0, UnkObj_00192240* obj) {
    obj->unk80 = func_001921B0;
    obj->unk84 = func_00192120;
    obj->unk88 = func_00191DF0;
}
