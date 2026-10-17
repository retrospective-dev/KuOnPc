#include "common.h"
#include "kuon_types.h"

u8 *SList_Init(u8 *pBuffer_, unsigned int buffer_size_, unsigned short data_size_);
extern u8 *s_pMngObjList;
extern u8 *s_pBugObjList;
extern char s_data_buff_bug[20480];
extern char s_data_buff_mng[10240];
s32 SfxBugs_Initialize(void) {
    s_pMngObjList = SList_Init(s_data_buff_mng, 0x2800U, 0xC80U);
    if (s_pMngObjList == NULL) {
        return 0;
    }
    s_pBugObjList = SList_Init(s_data_buff_bug, 0x5000U, 0x18U);
    return s_pBugObjList != NULL;
}
