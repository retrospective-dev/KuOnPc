#include "common.h"

void SfxMng_DeleteAll(s32 arg0);
void SfxPLight_DeleteAll(void);
void func_001D46D0(u8 *arg0);
extern u8 *s_pAddDataList;

void func_001BEF80(s32 arg0) {
    SfxMng_DeleteAll(arg0);
    func_001D46D0(s_pAddDataList);
    SfxPLight_DeleteAll();
}
