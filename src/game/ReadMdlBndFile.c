#include "common.h"
#include "kuon_types.h"

void ReadBinderFile(char *filename, u8 **lplpBuf, int dataindex, int filetype);
extern MdlData_t MdlData[304];
void ReadMdlBndFile(s8 *filename, s32 Index, u8 *lpFixBuf) {
    MdlData_t *temp_v0;

    temp_v0 = &MdlData[Index];
    if (lpFixBuf == NULL) {
        ReadBinderFile(filename, &temp_v0->lpBndFile, Index, 0);
        return;
    }
    temp_v0->lpBndFile = lpFixBuf;
    ReadBinderFile(filename, &temp_v0->lpBndFile, Index, 0x80);
}
