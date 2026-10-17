#include "common.h"
#include "kuon_types.h"

void MemFree(u8 *lpMem);
int ReadFile(unsigned char **pOutputData, char *pFileName, int file_type);
s32 MsgFileMng_ReadMsgFile(MsgFileMng *pMsgFileMng, u32 buffer_id, s8 *pFileName) {
    u8 *temp_a0;

    if (pMsgFileMng == NULL) {
        return 0;
    }
    if (buffer_id >= (u32) pMsgFileMng->msg_file_num) {
        return 0;
    }
    if (pFileName == NULL) {
        MemFree(pMsgFileMng->pMsgFileBuf[buffer_id]);
        pMsgFileMng->pMsgFileBuf[buffer_id] = NULL;
        return 1;
    }
    temp_a0 = pMsgFileMng->pMsgFileBuf[buffer_id];
    if (temp_a0 != NULL) {
        MemFree(temp_a0);
        pMsgFileMng->pMsgFileBuf[buffer_id] = NULL;
    }
    if (ReadFile(&pMsgFileMng->pMsgFileBuf[buffer_id], pFileName, 0xE) == 0) {
        return 0;
    }
    return 1;
}
