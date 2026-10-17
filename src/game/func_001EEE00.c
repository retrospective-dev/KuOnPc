#include "common.h"
#include "kuon_types.h"
#include "m2c_macros.h"

void func_001AD0F0(SndMode mode);
int func_001AEE30(int iSndId, short sVol, short sPitch);
extern G_pSndMng *D_0025E530;
extern int D_0025E700;
extern int D_0025E704;
void func_001EEE00(Variable *pVariable) {
    u8 temp_a1;

    if (D_0025E530 == NULL) {
        pVariable->_s32 = 0;
        return;
    }
    temp_a1 = M2C_FIELD(D_0025E530, u8 *, 0x2C);
    switch (temp_a1) {
    case 0:
        func_001AD0F0(1);
        break;
    case 1:
        func_001AD0F0(2);
        break;
    case 2:
        func_001AD0F0(0);
        break;
    }
    if (D_0025E704 == 0) {
        if (D_0025E700 > 0) {
            D_0025E700 -= 1;
            return;
        }
        func_001AEE30(0x11, 0x64, 0);
    }
}
