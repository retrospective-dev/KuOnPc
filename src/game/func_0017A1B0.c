#include "common.h"

typedef struct {
    /* 0x00 */ u8 unk0[0xF];
    /* 0x0F */ u8 unkF;
} Unk_0017A1B0;

void func_0017B560(void);
extern Unk_0017A1B0 *D_0025DFCC;
extern s8 D_003AC895[];

void func_0017A1B0(void) {
    if (D_0025DFCC->unkF != 0) {
        func_0017B560();
        D_003AC895[0] = 0;
    }
}
