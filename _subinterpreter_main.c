#include "include/api/api.h"
#include "include/subinterpreter/subinterpreter.h"
#include "_subinterpreter_main.h"
_subinterpreter_main_main_self_t* new__subinterpreter_main() {
    _subinterpreter_main_main_self_t* self = (_subinterpreter_main_main_self_t*)_lf_new_reactor(sizeof(_subinterpreter_main_main_self_t));

    return self;
}
