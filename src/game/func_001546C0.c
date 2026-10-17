#include "common.h"
#include "kuon_types.h"

typedef struct {
    /* 0x000 */ u8 unk0[0x100];
    /* 0x100 */ s8 unk100;
    /* 0x101 */ u8 unk101[0x8F];
    /* 0x190 */ s8 unk190;
} Unk_001546C0;

s32 func_0012F3F0(u8 *arg0, s32 arg1, f32 fparg0);
void func_001963C0(unsigned char fade_, int bAppear_);
void func_001546C0(MdlMng *lpMy) {
    Unk_001546C0 *temp_s0;

    temp_s0 = lpMy->lpCtrlSt;
    temp_s0->unk100 = 9;
    func_0012F3F0(lpMy, 0x55, 0.0f);
    temp_s0->unk190 = 1;
    lpMy->HitHigh *= 0.5f;
    func_001963C0(2U, 0);
}
