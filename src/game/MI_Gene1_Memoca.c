#include "common.h"

extern u8 s_memoca_real_time_check_state;

void MI_Gene1_Memoca(void) {
    if (s_memoca_real_time_check_state == 6) {
        s_memoca_real_time_check_state = 9;
    }
}
