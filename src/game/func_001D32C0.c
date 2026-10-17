#include "common.h"
#include "kuon_types.h"

void func_001D2E70(void);
extern S_setting D_00A4D1B0;
extern f32 D_00A4D1B8[];
extern u8 D_00A4D1BC[];

s32 func_001D32C0(void) {
    if (!(D_00A4D1BC[0] & 1)) {
        return 1;
    }
    if (D_00A4D1B0.flicker.amplitude == 0.0f) {
        return 1;
    }
    if (D_00A4D1B8[0] == 0.0f) {
        return 1;
    }
    func_001D2E70();
    return 1;
}
