#ifndef _serverreactor_H
#define _serverreactor_H
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
#ifdef __cplusplus
extern "C" {
#endif
#include "../include/api/api.h"
#include "../include/core/reactor.h"
#ifdef __cplusplus
}
#endif
typedef struct serverreactor_self_t{
    self_base_t base; // This field is only to be used by the runtime, not the user.
    PyObject* round_num;
    PyObject* benchmark_start_time;
    PyObject* total_start_time;
    int end[0]; // placeholder; MSVC does not compile empty structs
} serverreactor_self_t;
#line 34 "/mnt/c/Users/jacky/Desktop/simple_multi/src/subinterpreter.lf"
typedef generic_port_instance_struct _serverreactor_updated_parameters_t;
#line 33 "/mnt/c/Users/jacky/Desktop/simple_multi/src/subinterpreter.lf"
typedef generic_port_instance_struct _serverreactor_global_parameters_t;
#endif
