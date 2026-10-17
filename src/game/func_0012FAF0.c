#include "common.h"
#include "kuon_types.h"

void func_0012F7D0(MdlMng *lpMdlMng);
void func_0012FAF0(MdlMng *lpMdlMng) {
    if ((lpMdlMng->bUse == 0) || (lpMdlMng->lpMi3Head == NULL)) {
        return;
    }
    if (lpMdlMng->AnimState != 2) {
        func_0012F7D0(lpMdlMng);
    }
}
