#include "common.h"
#include "kuon_types.h"

void SetTm2Data(u8 *lpTexList, Tm2 *lpTm2, char *filename);
void ResetVramAddr(void);
void SetTexList(u8 *lpTexList, u32 ResetFlag) {
    MdlLink *var_s0;

    var_s0 = lpTexList;
    if (var_s0 != NULL) {
        do {
            SetTm2Data(lpTexList, var_s0->lpFile, var_s0->lpFileName);
            var_s0 = var_s0->lpNextNode;
            if (ResetFlag == 2) {
                ResetVramAddr();
            }
        } while (var_s0 != NULL);
    }
    if (ResetFlag == 1) {
        ResetVramAddr();
    }
}
