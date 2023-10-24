#include "include/api/api.h"
#include "include/subinterpreter/serverReactor.h"
#include "_serverreactor.h"
#include "include/api/set.h"
#include "include/pythontarget.h"

void _serverreactorreaction_function_0(void* instance_args){
    _serverreactor_self_t* self = (_serverreactor_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    _serverreactor_global_parameters_t* global_parameters = &self->_lf_global_parameters;
    #line 40 "/mnt/c/Users/jacky/Desktop/simple_multi/src/subinterpreter.lf"
    // Acquire the GIL (Global Interpreter Lock) to be able to call Python APIs.
    PyGILState_STATE gstate;
    gstate = PyGILState_Ensure();

    // Switch to subinterpreter
    PyInterpreterState* interp = interp_list[self->interp_index];
    PyThreadState* save_tstate = NULL;
    if (interp != PyInterpreterState_Get()) {
        PyThreadState* tstate = PyInterpreterState_ThreadHead(interp);
        save_tstate = PyThreadState_Swap(tstate);
        lf_print("switched state");
    }
    
    LF_PRINT_DEBUG("Calling reaction function _serverreactor.reaction_function_0");
    PyObject *rValue = PyObject_CallObject(
        self->_lf_py_reaction_function_0, 
        Py_BuildValue("(O)", convert_C_port_to_py(global_parameters, -2))
    );

    if (rValue == NULL) {
        lf_print_error("FATAL: Calling reaction _serverreactor.reaction_function_0 failed.");
        if (PyErr_Occurred()) {
            PyErr_PrintEx(0);
            PyErr_Clear(); // this will reset the error indicator so we can run Python code again
        }
        /* Release the thread. No Python API allowed beyond this point. */
    PyGILState_Release(gstate);
        exit(1);
    }

    // Switch back to global interpreter
    if (save_tstate != NULL) {
        PyThreadState_Swap(save_tstate);
    }
    
    /* Release the thread. No Python API allowed beyond this point. */
    /* Release the thread. No Python API allowed beyond this point. */
    PyGILState_Release(gstate);
}
#include "include/api/set_undef.h"
#include "include/api/set.h"
void _serverreactorreaction_function_1(void* instance_args){
    _serverreactor_self_t* self = (_serverreactor_self_t*)instance_args; SUPPRESS_UNUSED_WARNING(self);
    _serverreactor_updated_parameters_t** updated_parameters = self->_lf_updated_parameters;
    int updated_parameters_width = self->_lf_updated_parameters_width; SUPPRESS_UNUSED_WARNING(updated_parameters_width);
    _serverreactor_global_parameters_t* global_parameters = &self->_lf_global_parameters;
    #line 49 "/mnt/c/Users/jacky/Desktop/simple_multi/src/subinterpreter.lf"
    // Acquire the GIL (Global Interpreter Lock) to be able to call Python APIs.
    PyGILState_STATE gstate;
    gstate = PyGILState_Ensure();

    // Switch to subinterpreter
    PyInterpreterState* interp = interp_list[self->interp_index];
    PyThreadState* save_tstate = NULL;
    if (interp != PyInterpreterState_Get()) {
        PyThreadState* tstate = PyInterpreterState_ThreadHead(interp);
        save_tstate = PyThreadState_Swap(tstate);
        lf_print("switched state");
    }
    
    LF_PRINT_DEBUG("Calling reaction function _serverreactor.reaction_function_1");
    PyObject *rValue = PyObject_CallObject(
        self->_lf_py_reaction_function_1, 
        Py_BuildValue("(OO)", convert_C_port_to_py(updated_parameters, updated_parameters_width), convert_C_port_to_py(global_parameters, -2))
    );
    if (rValue == NULL) {
        lf_print_error("FATAL: Calling reaction _serverreactor.reaction_function_1 failed.");
        if (PyErr_Occurred()) {
            PyErr_PrintEx(0);
            PyErr_Clear(); // this will reset the error indicator so we can run Python code again
        }
        /* Release the thread. No Python API allowed beyond this point. */
    PyGILState_Release(gstate);
        exit(1);
    }
    
    // Switch back to global interpreter
    if (save_tstate != NULL) {
        PyThreadState_Swap(save_tstate);
    }

    /* Release the thread. No Python API allowed beyond this point. */
    /* Release the thread. No Python API allowed beyond this point. */
    PyGILState_Release(gstate);
}
#include "include/api/set_undef.h"
_serverreactor_self_t* new__serverreactor(int interp_index) {
    _serverreactor_self_t* self = (_serverreactor_self_t*)_lf_new_reactor(sizeof(_serverreactor_self_t));
    self->interp_index = interp_index;
    #line 34 "/mnt/c/Users/jacky/Desktop/simple_multi/src/subinterpreter.lf"
    // Set the default source reactor pointer
    #line 34 "/mnt/c/Users/jacky/Desktop/simple_multi/src/subinterpreter.lf"
    self->_lf_default__updated_parameters._base.source_reactor = (self_base_t*)self;
    #line 39 "/mnt/c/Users/jacky/Desktop/simple_multi/src/subinterpreter.lf"
    self->_lf__reaction_0.number = 0;
    #line 39 "/mnt/c/Users/jacky/Desktop/simple_multi/src/subinterpreter.lf"
    self->_lf__reaction_0.function = _serverreactorreaction_function_0;
    #line 39 "/mnt/c/Users/jacky/Desktop/simple_multi/src/subinterpreter.lf"
    self->_lf__reaction_0.self = self;
    #line 39 "/mnt/c/Users/jacky/Desktop/simple_multi/src/subinterpreter.lf"
    self->_lf__reaction_0.deadline_violation_handler = NULL;
    #line 39 "/mnt/c/Users/jacky/Desktop/simple_multi/src/subinterpreter.lf"
    self->_lf__reaction_0.STP_handler = NULL;
    #line 39 "/mnt/c/Users/jacky/Desktop/simple_multi/src/subinterpreter.lf"
    self->_lf__reaction_0.name = "?";
    #line 39 "/mnt/c/Users/jacky/Desktop/simple_multi/src/subinterpreter.lf"
    self->_lf__reaction_0.mode = NULL;
    #line 48 "/mnt/c/Users/jacky/Desktop/simple_multi/src/subinterpreter.lf"
    self->_lf__reaction_1.number = 1;
    #line 48 "/mnt/c/Users/jacky/Desktop/simple_multi/src/subinterpreter.lf"
    self->_lf__reaction_1.function = _serverreactorreaction_function_1;
    #line 48 "/mnt/c/Users/jacky/Desktop/simple_multi/src/subinterpreter.lf"
    self->_lf__reaction_1.self = self;
    #line 48 "/mnt/c/Users/jacky/Desktop/simple_multi/src/subinterpreter.lf"
    self->_lf__reaction_1.deadline_violation_handler = NULL;
    #line 48 "/mnt/c/Users/jacky/Desktop/simple_multi/src/subinterpreter.lf"
    self->_lf__reaction_1.STP_handler = NULL;
    #line 48 "/mnt/c/Users/jacky/Desktop/simple_multi/src/subinterpreter.lf"
    self->_lf__reaction_1.name = "?";
    #line 48 "/mnt/c/Users/jacky/Desktop/simple_multi/src/subinterpreter.lf"
    self->_lf__reaction_1.mode = NULL;
    #ifdef FEDERATED_DECENTRALIZED
    self->_lf__startup.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #endif // FEDERATED_DECENTRALIZED
    self->_lf__startup_reactions[0] = &self->_lf__reaction_0;
    self->_lf__startup.last = NULL;
    self->_lf__startup.reactions = &self->_lf__startup_reactions[0];
    self->_lf__startup.number_of_reactions = 1;
    self->_lf__startup.is_timer = false;
    #line 34 "/mnt/c/Users/jacky/Desktop/simple_multi/src/subinterpreter.lf"
    self->_lf__updated_parameters.last = NULL;
    #line 34 "/mnt/c/Users/jacky/Desktop/simple_multi/src/subinterpreter.lf"
    #ifdef FEDERATED_DECENTRALIZED
    #line 34 "/mnt/c/Users/jacky/Desktop/simple_multi/src/subinterpreter.lf"
    self->_lf__updated_parameters.intended_tag = (tag_t) { .time = NEVER, .microstep = 0u};
    #line 34 "/mnt/c/Users/jacky/Desktop/simple_multi/src/subinterpreter.lf"
    #endif // FEDERATED_DECENTRALIZED
    #line 34 "/mnt/c/Users/jacky/Desktop/simple_multi/src/subinterpreter.lf"
    #line 34 "/mnt/c/Users/jacky/Desktop/simple_multi/src/subinterpreter.lf"
    self->_lf__updated_parameters_reactions[0] = &self->_lf__reaction_1;
    #line 34 "/mnt/c/Users/jacky/Desktop/simple_multi/src/subinterpreter.lf"
    self->_lf__updated_parameters.reactions = &self->_lf__updated_parameters_reactions[0];
    #line 34 "/mnt/c/Users/jacky/Desktop/simple_multi/src/subinterpreter.lf"
    self->_lf__updated_parameters.number_of_reactions = 1;
    #line 34 "/mnt/c/Users/jacky/Desktop/simple_multi/src/subinterpreter.lf"
    #ifdef FEDERATED
    #line 34 "/mnt/c/Users/jacky/Desktop/simple_multi/src/subinterpreter.lf"
    self->_lf__updated_parameters.physical_time_of_arrival = NEVER;
    #line 34 "/mnt/c/Users/jacky/Desktop/simple_multi/src/subinterpreter.lf"
    #endif // FEDERATED
    self->_lf__updated_parameters.tmplt.type.element_size = sizeof(PyObject);
    return self;
}
