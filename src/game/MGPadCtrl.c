#include "common.h"
#include "kuon_types.h"

void PadUpdate(void);
void PadComplsionCtrl(void);
void PadCpmplsionCheck(void);
MGProcsts *GetMGPrcStatus(void);
extern u8 D_00254850[];
extern u8 D_003AC894[];
extern u8 D_003AC899[];

void MGPadCtrl(void) {
    s32 (*temp_v0)(u8);

    PadUpdate();
    if (D_003AC894[0] == 0) {
        temp_v0 = (int (*)(unsigned char)) (*(s32 *)(&D_00254850[0] + (D_003AC899[0] * 4)));
        if (temp_v0 == NULL) {
            PadCpmplsionCheck();
            return;
        }
        temp_v0(D_003AC894[0]);
        if (GetMGPrcStatus()->ctrlID != 0) {
            PadCpmplsionCheck();
        }
    } else if (D_003AC894[0] == 1) {
        PadComplsionCtrl();
    }
}
