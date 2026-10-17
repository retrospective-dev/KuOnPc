#include "common.h"

s32 MenuItemMng_Delete(s32 *arg0) {
    if (arg0 == NULL) {
        return 0;
    }
    *arg0 = 0;
    return 1;
}
