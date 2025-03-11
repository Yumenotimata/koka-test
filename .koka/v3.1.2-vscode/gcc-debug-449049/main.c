// Koka generated module: main, koka version: 3.1.2, platform: 64-bit
#include "main.h"
 
// monadic lift


// lift anonymous function
struct kk_main__mlift_main_10006_fun48__t {
  struct kk_function_s _base;
};
static kk_unit_t kk_main__mlift_main_10006_fun48(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_main__new_mlift_main_10006_fun48(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_main__mlift_main_10006_fun48, _ctx)
  return kk_function_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_main__mlift_main_10006_fun51__t {
  struct kk_function_s _base;
};
static kk_unit_t kk_main__mlift_main_10006_fun51(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_main__new_mlift_main_10006_fun51(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_main__mlift_main_10006_fun51, _ctx)
  return kk_function_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_main__mlift_main_10006_fun52__t {
  struct kk_function_s _base;
};
static bool kk_main__mlift_main_10006_fun52(kk_function_t _fself, kk_box_t _b_x4, kk_box_t _b_x5, kk_context_t* _ctx);
static kk_function_t kk_main__new_mlift_main_10006_fun52(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_main__mlift_main_10006_fun52, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static bool kk_main__mlift_main_10006_fun52(kk_function_t _fself, kk_box_t _b_x4, kk_box_t _b_x5, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_integer_t _brw_x44 = kk_integer_unbox(_b_x4, _ctx); /*int*/;
  kk_integer_t _brw_x43 = kk_integer_unbox(_b_x5, _ctx); /*int*/;
  bool _brw_x45 = kk_integer_eq_borrow(_brw_x44,_brw_x43,kk_context()); /*bool*/;
  kk_integer_drop(_brw_x44, _ctx);
  kk_integer_drop(_brw_x43, _ctx);
  return _brw_x45;
}


// lift anonymous function
struct kk_main__mlift_main_10006_fun53__t {
  struct kk_function_s _base;
};
static kk_string_t kk_main__mlift_main_10006_fun53(kk_function_t _fself, kk_box_t _b_x6, kk_context_t* _ctx);
static kk_function_t kk_main__new_mlift_main_10006_fun53(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_main__mlift_main_10006_fun53, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_string_t kk_main__mlift_main_10006_fun53(kk_function_t _fself, kk_box_t _b_x6, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_integer_t _x_x54 = kk_integer_unbox(_b_x6, _ctx); /*int*/
  return kk_std_core_int_show(_x_x54, _ctx);
}
static kk_unit_t kk_main__mlift_main_10006_fun51(kk_function_t _fself, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_utest_assert_eq(kk_integer_box(kk_integer_from_small(1), _ctx), kk_integer_box(kk_integer_from_small(2), _ctx), kk_main__new_mlift_main_10006_fun52(_ctx), kk_main__new_mlift_main_10006_fun53(_ctx), _ctx); return kk_Unit;
}
static kk_unit_t kk_main__mlift_main_10006_fun48(kk_function_t _fself, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_string_t _x_x49;
  kk_define_string_literal(, _s_x50, 7, "b1 test", _ctx)
  _x_x49 = kk_string_dup(_s_x50, _ctx); /*string*/
  kk_utest_test(_x_x49, kk_main__new_mlift_main_10006_fun51(_ctx), _ctx); return kk_Unit;
}

kk_unit_t kk_main__mlift_main_10006(kk_unit_t wild__, kk_context_t* _ctx) { /* (wild_ : ()) -> utest/test-suite () */ 
  kk_string_t _x_x46;
  kk_define_string_literal(, _s_x47, 7, "b suite", _ctx)
  _x_x46 = kk_string_dup(_s_x47, _ctx); /*string*/
  kk_utest_suite(_x_x46, kk_main__new_mlift_main_10006_fun48(_ctx), _ctx); return kk_Unit;
}


// lift anonymous function
struct kk_main_main_fun55__t {
  struct kk_function_s _base;
};
static kk_unit_t kk_main_main_fun55(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_main_new_main_fun55(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_main_main_fun55, _ctx)
  return kk_function_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_main_main_fun58__t {
  struct kk_function_s _base;
};
static kk_unit_t kk_main_main_fun58(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_main_new_main_fun58(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_main_main_fun58, _ctx)
  return kk_function_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_main_main_fun61__t {
  struct kk_function_s _base;
};
static kk_unit_t kk_main_main_fun61(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_main_new_main_fun61(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_main_main_fun61, _ctx)
  return kk_function_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_main_main_fun62__t {
  struct kk_function_s _base;
};
static bool kk_main_main_fun62(kk_function_t _fself, kk_box_t _b_x15, kk_box_t _b_x16, kk_context_t* _ctx);
static kk_function_t kk_main_new_main_fun62(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_main_main_fun62, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static bool kk_main_main_fun62(kk_function_t _fself, kk_box_t _b_x15, kk_box_t _b_x16, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_integer_t _brw_x41 = kk_integer_unbox(_b_x15, _ctx); /*int*/;
  kk_integer_t _brw_x40 = kk_integer_unbox(_b_x16, _ctx); /*int*/;
  bool _brw_x42 = kk_integer_eq_borrow(_brw_x41,_brw_x40,kk_context()); /*bool*/;
  kk_integer_drop(_brw_x41, _ctx);
  kk_integer_drop(_brw_x40, _ctx);
  return _brw_x42;
}


// lift anonymous function
struct kk_main_main_fun63__t {
  struct kk_function_s _base;
};
static kk_string_t kk_main_main_fun63(kk_function_t _fself, kk_box_t _b_x17, kk_context_t* _ctx);
static kk_function_t kk_main_new_main_fun63(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_main_main_fun63, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_string_t kk_main_main_fun63(kk_function_t _fself, kk_box_t _b_x17, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_integer_t _x_x64 = kk_integer_unbox(_b_x17, _ctx); /*int*/
  return kk_std_core_int_show(_x_x64, _ctx);
}
static kk_unit_t kk_main_main_fun61(kk_function_t _fself, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_utest_assert_eq(kk_integer_box(kk_integer_from_small(1), _ctx), kk_integer_box(kk_integer_from_small(1), _ctx), kk_main_new_main_fun62(_ctx), kk_main_new_main_fun63(_ctx), _ctx); return kk_Unit;
}
static kk_unit_t kk_main_main_fun58(kk_function_t _fself, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_string_t _x_x59;
  kk_define_string_literal(, _s_x60, 7, "a1 test", _ctx)
  _x_x59 = kk_string_dup(_s_x60, _ctx); /*string*/
  kk_utest_test(_x_x59, kk_main_new_main_fun61(_ctx), _ctx); return kk_Unit;
}


// lift anonymous function
struct kk_main_main_fun66__t {
  struct kk_function_s _base;
};
static kk_box_t kk_main_main_fun66(kk_function_t _fself, kk_box_t _b_x23, kk_context_t* _ctx);
static kk_function_t kk_main_new_main_fun66(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_main_main_fun66, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_main_main_fun66(kk_function_t _fself, kk_box_t _b_x23, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_unit_t _x_x67 = kk_Unit;
  kk_unit_t _x_x68 = kk_Unit;
  kk_unit_unbox(_b_x23);
  kk_main__mlift_main_10006(_x_x68, _ctx);
  return kk_unit_box(_x_x67);
}


// lift anonymous function
struct kk_main_main_fun71__t {
  struct kk_function_s _base;
};
static kk_unit_t kk_main_main_fun71(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_main_new_main_fun71(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_main_main_fun71, _ctx)
  return kk_function_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_main_main_fun74__t {
  struct kk_function_s _base;
};
static kk_unit_t kk_main_main_fun74(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_main_new_main_fun74(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_main_main_fun74, _ctx)
  return kk_function_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_main_main_fun75__t {
  struct kk_function_s _base;
};
static bool kk_main_main_fun75(kk_function_t _fself, kk_box_t _b_x28, kk_box_t _b_x29, kk_context_t* _ctx);
static kk_function_t kk_main_new_main_fun75(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_main_main_fun75, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static bool kk_main_main_fun75(kk_function_t _fself, kk_box_t _b_x28, kk_box_t _b_x29, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_integer_t _brw_x38 = kk_integer_unbox(_b_x28, _ctx); /*int*/;
  kk_integer_t _brw_x37 = kk_integer_unbox(_b_x29, _ctx); /*int*/;
  bool _brw_x39 = kk_integer_eq_borrow(_brw_x38,_brw_x37,kk_context()); /*bool*/;
  kk_integer_drop(_brw_x38, _ctx);
  kk_integer_drop(_brw_x37, _ctx);
  return _brw_x39;
}


// lift anonymous function
struct kk_main_main_fun76__t {
  struct kk_function_s _base;
};
static kk_string_t kk_main_main_fun76(kk_function_t _fself, kk_box_t _b_x30, kk_context_t* _ctx);
static kk_function_t kk_main_new_main_fun76(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_main_main_fun76, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_string_t kk_main_main_fun76(kk_function_t _fself, kk_box_t _b_x30, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_integer_t _x_x77 = kk_integer_unbox(_b_x30, _ctx); /*int*/
  return kk_std_core_int_show(_x_x77, _ctx);
}
static kk_unit_t kk_main_main_fun74(kk_function_t _fself, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_utest_assert_eq(kk_integer_box(kk_integer_from_small(1), _ctx), kk_integer_box(kk_integer_from_small(2), _ctx), kk_main_new_main_fun75(_ctx), kk_main_new_main_fun76(_ctx), _ctx); return kk_Unit;
}
static kk_unit_t kk_main_main_fun71(kk_function_t _fself, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_string_t _x_x72;
  kk_define_string_literal(, _s_x73, 7, "b1 test", _ctx)
  _x_x72 = kk_string_dup(_s_x73, _ctx); /*string*/
  kk_utest_test(_x_x72, kk_main_new_main_fun74(_ctx), _ctx); return kk_Unit;
}
static kk_unit_t kk_main_main_fun55(kk_function_t _fself, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_unit_t x_10007 = kk_Unit;
  kk_string_t _x_x56;
  kk_define_string_literal(, _s_x57, 7, "a suite", _ctx)
  _x_x56 = kk_string_dup(_s_x57, _ctx); /*string*/
  kk_utest_suite(_x_x56, kk_main_new_main_fun58(_ctx), _ctx);
  if (kk_yielding(kk_context())) {
    kk_box_t _x_x65 = kk_std_core_hnd_yield_extend(kk_main_new_main_fun66(_ctx), _ctx); /*3003*/
    kk_unit_unbox(_x_x65); return kk_Unit;
  }
  {
    kk_string_t _x_x69;
    kk_define_string_literal(, _s_x70, 7, "b suite", _ctx)
    _x_x69 = kk_string_dup(_s_x70, _ctx); /*string*/
    kk_utest_suite(_x_x69, kk_main_new_main_fun71(_ctx), _ctx); return kk_Unit;
  }
}

kk_unit_t kk_main_main(kk_context_t* _ctx) { /* () -> console/console () */ 
  kk_utest_run_utest(kk_main_new_main_fun55(_ctx), _ctx); return kk_Unit;
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
  kk_utest__init(_ctx);
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
  kk_utest__done(_ctx);
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
