#include "common.h"
#include "kuon_types.h"

u8 *func_001D48D0(u8 *pBuffer_, unsigned int buffer_size_, unsigned short data_size_);
extern u8 *D_0025E774;
extern u8 *D_0025E778;
extern char D_00A586A0[20480];
extern char D_00A5D6A0[10240];
s32 func_00209E70(void) {
    D_0025E774 = func_001D48D0(D_00A5D6A0, 0x2800U, 0xC80U);
    if (D_0025E774 == NULL) {
        return 0;
    }
    D_0025E778 = func_001D48D0(D_00A586A0, 0x5000U, 0x18U);
    return D_0025E778 != NULL;
}
