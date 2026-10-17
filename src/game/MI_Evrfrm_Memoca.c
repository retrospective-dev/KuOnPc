#include "common.h"

void MI_Get_Memoca();
s16 Menu_CheckSetMemocaState(void);
extern s16 s_memoca_state_msg_id;
extern s32 menu_load_ok;
extern s32 menu_save_ok;
extern s32 use_memoca_slot;

void MI_Evrfrm_Memoca(void) {
    MI_Get_Memoca();
    menu_load_ok = 0;
    menu_save_ok = 0;
    if (use_memoca_slot == 0) {
        s_memoca_state_msg_id = 0x19;
        return;
    }
    Menu_CheckSetMemocaState();
}
