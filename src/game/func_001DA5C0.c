#include "common.h"
#include "kuon_types.h"

int func_001B0CA0(unsigned char track, unsigned char type, int timer);
int func_001DA3C0(Menu_id menu_id, unsigned char *pMenuMng_Open);
extern s16 D_00A500AA[];

s32 func_001DA5C0(enum Menu_id menu_id, u8 *pMenuMng_Open) {
    func_001B0CA0(0U, 3U, 1);
    func_001B0CA0(1U, 3U, 1);
    func_001B0CA0(2U, 3U, 1);
    func_001B0CA0(3U, 3U, 1);
    func_001B0CA0(4U, 3U, 1);
    func_001B0CA0(5U, 3U, 1);
    if (pMenuMng_Open != NULL) {
        D_00A500AA[0] = (s16) menu_id;
    }
    return func_001DA3C0(menu_id, pMenuMng_Open);
}
