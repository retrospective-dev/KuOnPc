#include "common.h"

typedef struct {
    /* 0x00 */ u8 unk00[0x80];
    /* 0x80 */ void* unk80;
    /* 0x84 */ void* unk84;
    /* 0x88 */ void* unk88;
} UnkObj_00192240;

void E011ActStay(void);
void E011ActWalk(void);
void E011ActAttack(void);

void E011ActInit(s32 arg0, UnkObj_00192240* obj) {
    obj->unk80 = E011ActStay;
    obj->unk84 = E011ActWalk;
    obj->unk88 = E011ActAttack;
}
