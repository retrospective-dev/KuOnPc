#include "common.h"
#include "kuon_types.h"

s32 func_0012F3F0(u8 *arg0, s32 arg1, f32 fparg0);
void func_00203380(unsigned char FrameNum);
void func_00207960(void);
void func_00207A20(void);
extern unsigned char D_0025E72C;
extern u8 D_006BED90[];

void func_001FC960(void) {
    func_00203380(0x80U);
    func_0012F3F0(&D_006BED90[0], 0, 0.0f);
    if (D_0025E72C == 0) {
        func_00207A20();
        return;
    }
    if (D_0025E72C == 1) {
        func_00207960();
    }
}
