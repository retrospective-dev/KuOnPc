#include "common.h"
#include "kuon_types.h"

void func_0015EF50(char *filename, u8 **lplpBuf, int dataindex, int filetype);
extern MdlData D_0062C0D0[304];
void func_0013D360(s8 *filename, s32 Index, u8 *lpFixBuf) {
    MdlData *temp_v0;

    temp_v0 = &D_0062C0D0[Index];
    if (lpFixBuf == NULL) {
        func_0015EF50(filename, &temp_v0->lpBndFile, Index, 0);
        return;
    }
    temp_v0->lpBndFile = lpFixBuf;
    func_0015EF50(filename, &temp_v0->lpBndFile, Index, 0x80);
}
