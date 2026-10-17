#include "common.h"

extern u8 s_go_ttl_state;

void MI_Decide_GoTtl(void) {
    if (s_go_ttl_state == 0) {
        s_go_ttl_state = 1;
    }
}
