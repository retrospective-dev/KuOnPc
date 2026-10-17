#include "common.h"
#include "kuon_types.h"

int MCProcSaveHeader(void);
int MCProcLoadList(void);
extern MCMng *lpMCMng;
s32 MemoryCardProc(void) {
    s32 temp_v0;

    if (lpMCMng->State != 0) {
        goto block_2;
    }
    return 0;
block_2:
    temp_v0 = lpMCMng->Function();
    if (temp_v0 == 0) {
        goto block_9;
    }
    if (temp_v0 <= 0) {
        goto block_8;
    }
    if (lpMCMng->Mode != 4) {
        goto block_8;
    }
    if (lpMCMng->Function != MCProcLoadList) {
        goto block_8;
    }
    lpMCMng->State = 1;
    lpMCMng->Function = MCProcSaveHeader;
    return 0;
block_8:
    lpMCMng->State = 0;
block_9:
    return temp_v0;
}
