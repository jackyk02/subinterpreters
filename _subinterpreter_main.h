#ifndef _SUBINTERPRETER_MAIN_H
#define _SUBINTERPRETER_MAIN_H
#include "include/core/reactor.h"
#include "__lf_gendelay_0.h"
#include "_serverreactor.h"
#include "_clientreactor.h"
#include "pythontarget.h"
#include <limits.h>
#include "include/core/platform.h"
#include "include/api/api.h"
#include "include/core/reactor.h"
#include "include/core/reactor_common.h"
#include "include/core/threaded/scheduler.h"
#include "include/core/mixed_radix.h"
#include "include/core/port.h"
#include "include/core/environment.h"
int lf_reactor_c_main(int argc, const char* argv[]);
typedef struct {
    struct self_base_t base;
    char *_lf_name;
    
    
} _subinterpreter_main_main_self_t;
_subinterpreter_main_main_self_t* new__subinterpreter_main();
#endif // _SUBINTERPRETER_MAIN_H
