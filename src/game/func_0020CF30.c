#include "common.h"
#include "kuon_types.h"

float func_0013BB60(float ang);
void func_0020CF30(MdlMng *lpMdlMng) {
    lpMdlMng->Ang[0] = func_0013BB60(lpMdlMng->Ang[0]);
    lpMdlMng->Ang[1] = func_0013BB60(lpMdlMng->Ang[1]);
    lpMdlMng->Ang[2] = func_0013BB60(-0.40135f + lpMdlMng->Ang[2]);
}
