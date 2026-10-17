#include "common.h"
#include "kuon_types.h"

void func_0013D960(void);
void func_00201260(void);
void func_002014B0(void);
MGProcsts *func_002043C0(void);
extern u8 D_00254850[];
extern u8 D_003AC894[];
extern u8 D_003AC899[];

void func_002031C0(void) {
    s32 (*temp_v0)(u8);

    func_0013D960();
    if (D_003AC894[0] == 0) {
        temp_v0 = (int (*)(unsigned char)) (*(s32 *)(&D_00254850[0] + (D_003AC899[0] * 4)));
        if (temp_v0 == NULL) {
            func_002014B0();
            return;
        }
        temp_v0(D_003AC894[0]);
        if (func_002043C0()->ctrlID != 0) {
            func_002014B0();
        }
    } else if (D_003AC894[0] == 1) {
        func_00201260();
    }
}
