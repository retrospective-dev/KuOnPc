#include "common.h"
#include "kuon_types.h"

typedef struct {
    /* 0x00 */ f32 unk0;
    /* 0x04 */ f32 unk4;
    /* 0x08 */ f32 unk8;
    /* 0x0C */ f32 unkC;
} Unk_0021E8E0;

void func_0021E8E0(Unk_0021E8E0 *arg0, f32 fparg0, f32 fparg1, f32 fparg2, f32 fparg3) {
    arg0->unk0 = fparg0;
    arg0->unk4 = fparg1;
    arg0->unk8 = fparg2;
    arg0->unkC = fparg3;
}
