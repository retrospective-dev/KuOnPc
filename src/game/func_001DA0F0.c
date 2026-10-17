#include "common.h"
#include "kuon_types.h"

int func_001B0CA0(unsigned char track, unsigned char type, int timer);
int func_001DA3C0(Menu_id menu_id, unsigned char *pMenuMng_Open);
extern u8 D_003AC895[];

s32 func_001DA0F0(void) {
    if (D_003AC895[0] != 2) {
        func_001B0CA0(0U, 3U, 1);
        func_001B0CA0(1U, 3U, 1);
        func_001B0CA0(2U, 3U, 1);
        func_001B0CA0(3U, 3U, 1);
        func_001B0CA0(4U, 3U, 1);
        func_001B0CA0(5U, 3U, 1);
        return func_001DA3C0(4, NULL);
    }
    return 0;
}
