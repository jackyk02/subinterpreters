#ifndef _SERVERREACTOR_H
#define _SERVERREACTOR_H
#include "include/core/reactor.h"
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
#line 34 "/mnt/c/Users/jacky/Desktop/simple_multi/src/subinterpreter.lf"
typedef generic_port_instance_struct _serverreactor_updated_parameters_t;
#line 33 "/mnt/c/Users/jacky/Desktop/simple_multi/src/subinterpreter.lf"
typedef generic_port_instance_struct _serverreactor_global_parameters_t;
typedef struct {
    struct self_base_t base;
    char *_lf_name;
    PyObject* _lf_py_reaction_function_0;
    PyObject* _lf_py_reaction_function_1;
    int interp_index;
    
    #line 35 "/mnt/c/Users/jacky/Desktop/simple_multi/src/subinterpreter.lf"
    PyObject* round_num;
    #line 36 "/mnt/c/Users/jacky/Desktop/simple_multi/src/subinterpreter.lf"
    PyObject* benchmark_start_time;
    #line 37 "/mnt/c/Users/jacky/Desktop/simple_multi/src/subinterpreter.lf"
    PyObject* total_start_time;
    #line 34 "/mnt/c/Users/jacky/Desktop/simple_multi/src/subinterpreter.lf"
    // Multiport input array will be malloc'd later.
    #line 34 "/mnt/c/Users/jacky/Desktop/simple_multi/src/subinterpreter.lf"
    _serverreactor_updated_parameters_t** _lf_updated_parameters;
    #line 34 "/mnt/c/Users/jacky/Desktop/simple_multi/src/subinterpreter.lf"
    int _lf_updated_parameters_width;
    #line 34 "/mnt/c/Users/jacky/Desktop/simple_multi/src/subinterpreter.lf"
    // Default input (in case it does not get connected)
    #line 34 "/mnt/c/Users/jacky/Desktop/simple_multi/src/subinterpreter.lf"
    _serverreactor_updated_parameters_t _lf_default__updated_parameters;
    #line 34 "/mnt/c/Users/jacky/Desktop/simple_multi/src/subinterpreter.lf"
    // Struct to support efficiently reading sparse inputs.
    #line 34 "/mnt/c/Users/jacky/Desktop/simple_multi/src/subinterpreter.lf"
    lf_sparse_io_record_t* _lf_updated_parameters__sparse;
    #line 33 "/mnt/c/Users/jacky/Desktop/simple_multi/src/subinterpreter.lf"
    _serverreactor_global_parameters_t _lf_global_parameters;
    #line 33 "/mnt/c/Users/jacky/Desktop/simple_multi/src/subinterpreter.lf"
    int _lf_global_parameters_width;
    #line 39 "/mnt/c/Users/jacky/Desktop/simple_multi/src/subinterpreter.lf"
    reaction_t _lf__reaction_0;
    #line 48 "/mnt/c/Users/jacky/Desktop/simple_multi/src/subinterpreter.lf"
    reaction_t _lf__reaction_1;
    trigger_t _lf__startup;
    reaction_t* _lf__startup_reactions[1];
    #line 34 "/mnt/c/Users/jacky/Desktop/simple_multi/src/subinterpreter.lf"
    trigger_t _lf__updated_parameters;
    #line 34 "/mnt/c/Users/jacky/Desktop/simple_multi/src/subinterpreter.lf"
    reaction_t* _lf__updated_parameters_reactions[1];
    #ifdef FEDERATED
    trigger_t* _lf__updated_parameters_network_port_status;
    
    #endif // FEDERATED
} _serverreactor_self_t;
_serverreactor_self_t* new__serverreactor();
#endif // _SERVERREACTOR_H
