#include "common.h"
#include "kuon_types.h"

void func_0013FC10(u8 *lpTexList, Tm2 *lpTm2, char *filename);
void func_00141A90(void);
void func_0013F9F0(u8 *lpTexList, u32 ResetFlag) {
    MdlLink *var_s0;

    var_s0 = lpTexList;
    if (var_s0 != NULL) {
        do {
            func_0013FC10(lpTexList, var_s0->lpFile, var_s0->lpFileName);
            var_s0 = var_s0->lpNextNode;
            if (ResetFlag == 2) {
                func_00141A90();
            }
        } while (var_s0 != NULL);
    }
    if (ResetFlag == 1) {
        func_00141A90();
    }
}
