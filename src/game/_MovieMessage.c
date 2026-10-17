#include "common.h"
#include "kuon_types.h"

s32 fsmmo_Exec(void);
extern unsigned char s_MovieMessageEndFlag;
extern u8 *s_pMovieMessageWork;
void _MovieMessage(void) {
    if (s_pMovieMessageWork == NULL) {
        if (s_MovieMessageEndFlag != 1) {
            goto block_3;
        }
    } else {
block_3:
        if (fsmmo_Exec() != 0) {
            s_MovieMessageEndFlag = 1;
        }
    }
}
