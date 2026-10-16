#include "common.h"

typedef struct {
    /* 0x00 */ u8 unk0[0x80];
    /* 0x80 */ void* unk80;
} Unk_001A89A0;

void func_001A8870(void);

void func_001A89A0(s32 arg0, Unk_001A89A0* arg1) {
    arg1->unk80 = func_001A8870;
}
