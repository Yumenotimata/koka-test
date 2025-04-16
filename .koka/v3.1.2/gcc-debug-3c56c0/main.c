// Koka generated module: main, koka version: 3.1.2, platform: 64-bit
#include "main.h"


// lift anonymous function
struct kk_main_main_fun41__t {
  struct kk_function_s _base;
};
static kk_box_t kk_main_main_fun41(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_main_new_main_fun41(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_main_main_fun41, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_main_main_fun41(kk_function_t _fself, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core_types__list _x_x42 = kk_std_os_env_get_args(_ctx); /*list<string>*/
  return kk_std_core_types__list_box(_x_x42, _ctx);
}


// lift anonymous function
struct kk_main_main_fun43__t {
  struct kk_function_s _base;
};
static kk_box_t kk_main_main_fun43(kk_function_t _fself, kk_box_t _b_x29, kk_context_t* _ctx);
static kk_function_t kk_main_new_main_fun43(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_main_main_fun43, _ctx)
  return kk_function_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_main_main_fun45__t {
  struct kk_function_s _base;
};
static kk_box_t kk_main_main_fun45(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_main_new_main_fun45(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_main_main_fun45, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_main_main_fun45(kk_function_t _fself, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_unit_t _x_x46 = kk_Unit;
  kk_function_t _x_x47 = kk_function_dup(kk_parser_parser_test, _ctx); /*() -> utest/test-suite ()*/
  kk_function_call(kk_unit_t, (kk_function_t, kk_context_t*), _x_x47, (_x_x47, _ctx), _ctx);
  return kk_unit_box(_x_x46);
}


// lift anonymous function
struct kk_main_main_fun48__t {
  struct kk_function_s _base;
};
static kk_box_t kk_main_main_fun48(kk_function_t _fself, kk_box_t _b_x12, kk_context_t* _ctx);
static kk_function_t kk_main_new_main_fun48(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_main_main_fun48, _ctx)
  return kk_function_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_main_main_fun49__t {
  struct kk_function_s _base;
};
static kk_box_t kk_main_main_fun49(kk_function_t _fself, kk_box_t _b_x7, kk_context_t* _ctx);
static kk_function_t kk_main_new_main_fun49(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_main_main_fun49, _ctx)
  return kk_function_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_main_main_fun51__t {
  struct kk_function_s _base;
  kk_box_t _b_x7;
};
static kk_unit_t kk_main_main_fun51(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_main_new_main_fun51(kk_box_t _b_x7, kk_context_t* _ctx) {
  struct kk_main_main_fun51__t* _self = kk_function_alloc_as(struct kk_main_main_fun51__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_main_main_fun51, kk_context());
  _self->_b_x7 = _b_x7;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_unit_t kk_main_main_fun51(kk_function_t _fself, kk_context_t* _ctx) {
  struct kk_main_main_fun51__t* _self = kk_function_as(struct kk_main_main_fun51__t*, _fself, _ctx);
  kk_box_t _b_x7 = _self->_b_x7; /* 1000 */
  kk_drop_match(_self, {kk_box_dup(_b_x7, _ctx);}, {}, _ctx)
  kk_box_t _x_x52;
  kk_function_t _x_x53 = kk_function_unbox(_b_x7, _ctx); /*() -> utest/test-suite 8*/
  _x_x52 = kk_function_call(kk_box_t, (kk_function_t, kk_context_t*), _x_x53, (_x_x53, _ctx), _ctx); /*8*/
  kk_unit_unbox(_x_x52); return kk_Unit;
}
static kk_box_t kk_main_main_fun49(kk_function_t _fself, kk_box_t _b_x7, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_unit_t _x_x50 = kk_Unit;
  kk_utest_run_utest(kk_main_new_main_fun51(_b_x7, _ctx), _ctx);
  return kk_unit_box(_x_x50);
}


// lift anonymous function
struct kk_main_main_fun54__t {
  struct kk_function_s _base;
  kk_box_t _b_x12;
};
static kk_box_t kk_main_main_fun54(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_main_new_main_fun54(kk_box_t _b_x12, kk_context_t* _ctx) {
  struct kk_main_main_fun54__t* _self = kk_function_alloc_as(struct kk_main_main_fun54__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_main_main_fun54, kk_context());
  _self->_b_x12 = _b_x12;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_main_main_fun54(kk_function_t _fself, kk_context_t* _ctx) {
  struct kk_main_main_fun54__t* _self = kk_function_as(struct kk_main_main_fun54__t*, _fself, _ctx);
  kk_box_t _b_x12 = _self->_b_x12; /* 1001 */
  kk_drop_match(_self, {kk_box_dup(_b_x12, _ctx);}, {}, _ctx)
  kk_function_t _x_x55 = kk_function_unbox(_b_x12, _ctx); /*() -> utest/test-suite 13*/
  return kk_function_call(kk_box_t, (kk_function_t, kk_context_t*), _x_x55, (_x_x55, _ctx), _ctx);
}
static kk_box_t kk_main_main_fun48(kk_function_t _fself, kk_box_t _b_x12, kk_context_t* _ctx) {
  kk_unused(_fself);
  return kk_std_core_hnd__open_none1(kk_main_new_main_fun49(_ctx), kk_function_box(kk_main_new_main_fun54(_b_x12, _ctx), _ctx), _ctx);
}


// lift anonymous function
struct kk_main_main_fun63__t {
  struct kk_function_s _base;
};
static kk_box_t kk_main_main_fun63(kk_function_t _fself, kk_box_t _b_x26, kk_context_t* _ctx);
static kk_function_t kk_main_new_main_fun63(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_main_main_fun63, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_main_main_fun63(kk_function_t _fself, kk_box_t _b_x26, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_unit_t _x_x64 = kk_Unit;
  kk_std_core_types__list _x_x65 = kk_std_core_types__list_unbox(_b_x26, KK_OWNED, _ctx); /*list<()>*/
  kk_main__mlift_main_10006(_x_x65, _ctx);
  return kk_unit_box(_x_x64);
}
static kk_box_t kk_main_main_fun43(kk_function_t _fself, kk_box_t _b_x29, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core_types__list x_0_10011;
  kk_string_t _match_x39 = kk_string_unbox(_b_x29); /*string*/;
  if (kk_string_cmp_cstr_borrow(_match_x39, "-test", _ctx) == 0) {
    kk_string_drop(_match_x39, _ctx);
    kk_std_core_types__list _x_x44 = kk_std_core_types__new_Cons(kk_reuse_null, 0, kk_function_box(kk_main_new_main_fun45(_ctx), _ctx), kk_std_core_types__new_Nil(_ctx), _ctx); /*list<1024>*/
    x_0_10011 = kk_std_core_list_map(_x_x44, kk_main_new_main_fun48(_ctx), _ctx); /*list<()>*/
  }
  else {
    kk_string_drop(_match_x39, _ctx);
    kk_box_t _x_x56;
    kk_string_t _x_x57;
    kk_define_string_literal(, _s_x58, 11, "main(11, 5)", _ctx)
    _x_x57 = kk_string_dup(_s_x58, _ctx); /*string*/
    kk_string_t _x_x59;
    kk_define_string_literal(, _s_x60, 1, "_", _ctx)
    _x_x59 = kk_string_dup(_s_x60, _ctx); /*string*/
    _x_x56 = kk_std_core_exn_error_pattern(_x_x57, _x_x59, _ctx); /*1000*/
    x_0_10011 = kk_std_core_types__list_unbox(_x_x56, KK_OWNED, _ctx); /*list<()>*/
  }
  kk_std_core_types__list_drop(x_0_10011, _ctx);
  kk_unit_t _x_x61 = kk_Unit;
  if (kk_yielding(kk_context())) {
    kk_box_t _x_x62 = kk_std_core_hnd_yield_extend(kk_main_new_main_fun63(_ctx), _ctx); /*3003*/
    kk_unit_unbox(_x_x62);
  }
  else {
    
  }
  return kk_unit_box(_x_x61);
}


// lift anonymous function
struct kk_main_main_fun67__t {
  struct kk_function_s _base;
};
static kk_box_t kk_main_main_fun67(kk_function_t _fself, kk_box_t _b_x35, kk_context_t* _ctx);
static kk_function_t kk_main_new_main_fun67(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_main_main_fun67, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_main_main_fun67(kk_function_t _fself, kk_box_t _b_x35, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_unit_t _x_x68 = kk_Unit;
  kk_std_core_types__list _x_x69 = kk_std_core_types__list_unbox(_b_x35, KK_OWNED, _ctx); /*list<()>*/
  kk_main__mlift_main_10007(_x_x69, _ctx);
  return kk_unit_box(_x_x68);
}

kk_unit_t kk_main_main(kk_context_t* _ctx) { /* () -> <console/console,exn,ndet> () */ 
  kk_std_core_types__list args;
  kk_box_t _x_x40 = kk_std_core_hnd__open_none0(kk_main_new_main_fun41(_ctx), _ctx); /*1000*/
  args = kk_std_core_types__list_unbox(_x_x40, KK_OWNED, _ctx); /*list<string>*/
  kk_std_core_types__list x_10008 = kk_std_core_list_map(args, kk_main_new_main_fun43(_ctx), _ctx); /*list<()>*/;
  kk_std_core_types__list_drop(x_10008, _ctx);
  if (kk_yielding(kk_context())) {
    kk_box_t _x_x66 = kk_std_core_hnd_yield_extend(kk_main_new_main_fun67(_ctx), _ctx); /*3003*/
    kk_unit_unbox(_x_x66); return kk_Unit;
  }
  {
    kk_Unit; return kk_Unit;
  }
}

// initialization
void kk_main__init(kk_context_t* _ctx){
  static bool _kk_initialized = false;
  if (_kk_initialized) return;
  _kk_initialized = true;
  kk_std_core_types__init(_ctx);
  kk_std_core_hnd__init(_ctx);
  kk_std_core_exn__init(_ctx);
  kk_std_core_bool__init(_ctx);
  kk_std_core_order__init(_ctx);
  kk_std_core_char__init(_ctx);
  kk_std_core_int__init(_ctx);
  kk_std_core_vector__init(_ctx);
  kk_std_core_string__init(_ctx);
  kk_std_core_sslice__init(_ctx);
  kk_std_core_list__init(_ctx);
  kk_std_core_maybe__init(_ctx);
  kk_std_core_either__init(_ctx);
  kk_std_core_tuple__init(_ctx);
  kk_std_core_show__init(_ctx);
  kk_std_core_debug__init(_ctx);
  kk_std_core_delayed__init(_ctx);
  kk_std_core_console__init(_ctx);
  kk_std_core__init(_ctx);
  kk_std_os_env__init(_ctx);
  kk_utest__init(_ctx);
  kk_parser__init(_ctx);
  #if defined(KK_CUSTOM_INIT)
    KK_CUSTOM_INIT (_ctx);
  #endif
}

// termination
void kk_main__done(kk_context_t* _ctx){
  static bool _kk_done = false;
  if (_kk_done) return;
  _kk_done = true;
  #if defined(KK_CUSTOM_DONE)
    KK_CUSTOM_DONE (_ctx);
  #endif
  kk_parser__done(_ctx);
  kk_utest__done(_ctx);
  kk_std_os_env__done(_ctx);
  kk_std_core__done(_ctx);
  kk_std_core_console__done(_ctx);
  kk_std_core_delayed__done(_ctx);
  kk_std_core_debug__done(_ctx);
  kk_std_core_show__done(_ctx);
  kk_std_core_tuple__done(_ctx);
  kk_std_core_either__done(_ctx);
  kk_std_core_maybe__done(_ctx);
  kk_std_core_list__done(_ctx);
  kk_std_core_sslice__done(_ctx);
  kk_std_core_string__done(_ctx);
  kk_std_core_vector__done(_ctx);
  kk_std_core_int__done(_ctx);
  kk_std_core_char__done(_ctx);
  kk_std_core_order__done(_ctx);
  kk_std_core_bool__done(_ctx);
  kk_std_core_exn__done(_ctx);
  kk_std_core_hnd__done(_ctx);
  kk_std_core_types__done(_ctx);
}
