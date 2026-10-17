#include "common.h"

typedef struct {
    /* 0x00 */ s32 unk0;
    /* 0x04 */ u8 unk4[0x13];
    /* 0x17 */ s8 unk17;
} Unk_0017A140;

void func_0017B430(void);
void func_0017B560(void);
extern Unk_0017A140 *D_0025DFCC;

void func_0017A140(void) {
    if (D_0025DFCC->unk0 != 0) {
        D_0025DFCC->unk17 = 1;
        func_0017B430();
        func_0017B560();
    }
}
