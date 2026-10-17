#include "common.h"
#include "kuon_types.h"

extern int D_0025E3E8;
s32 func_0010D9A0(s32);
s32 func_0010D9B0(s32);
extern u8 D_0097F5E8[];
extern u8 D_0097F5E9[];
extern s32 D_0097F5EC[];

s32 func_00165C90(s32 mode, s32 *cmd, s32 *result) {
    s32 temp_v0;

    switch (mode) {
    case 0:
        func_0010D9A0(D_0025E3E8);
        if (cmd != NULL) {
            *cmd = (s32) D_0097F5E9[0];
        }
        if (result != NULL) {
            *result = D_0097F5EC[0];
        }
        return 1;
    case 1:
        temp_v0 = func_0010D9B0(D_0025E3E8);
        if (cmd != NULL) {
            if (D_0097F5E8[0] != 0) {
                *cmd = D_0097F5E8[0] & 0xFF;
            } else {
                *cmd = (s32) D_0097F5E9[0];
            }
        }
        if (result != NULL) {
            *result = D_0097F5EC[0];
        }
        if (temp_v0 == -1) {
            return 0;
        }
        return 1;
    default:
        return -1;
    }
}
