// Koka generated module: parser, koka version: 3.1.2, platform: 64-bit
#include "parser.h"


// lift anonymous function
struct kk_parser_parser_test_fun11__t {
  struct kk_function_s _base;
};
static kk_unit_t kk_parser_parser_test_fun11(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_parser_new_parser_test_fun11(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_parser_parser_test_fun11, _ctx)
  return kk_function_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_parser_parser_test_fun14__t {
  struct kk_function_s _base;
};
static kk_unit_t kk_parser_parser_test_fun14(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_parser_new_parser_test_fun14(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_parser_parser_test_fun14, _ctx)
  return kk_function_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_parser_parser_test_fun17__t {
  struct kk_function_s _base;
};
static kk_unit_t kk_parser_parser_test_fun17(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_parser_new_parser_test_fun17(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_parser_parser_test_fun17, _ctx)
  return kk_function_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_parser_parser_test_fun24__t {
  struct kk_function_s _base;
};
static bool kk_parser_parser_test_fun24(kk_function_t _fself, kk_box_t _b_x4, kk_box_t _b_x5, kk_context_t* _ctx);
static kk_function_t kk_parser_new_parser_test_fun24(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_parser_parser_test_fun24, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static bool kk_parser_parser_test_fun24(kk_function_t _fself, kk_box_t _b_x4, kk_box_t _b_x5, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_string_t _x_x25 = kk_string_unbox(_b_x4); /*string*/
  kk_string_t _x_x26 = kk_string_unbox(_b_x5); /*string*/
  return kk_string_is_eq(_x_x25,_x_x26,kk_context());
}


// lift anonymous function
struct kk_parser_parser_test_fun27__t {
  struct kk_function_s _base;
};
static kk_string_t kk_parser_parser_test_fun27(kk_function_t _fself, kk_box_t _b_x6, kk_context_t* _ctx);
static kk_function_t kk_parser_new_parser_test_fun27(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_parser_parser_test_fun27, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_string_t kk_parser_parser_test_fun27(kk_function_t _fself, kk_box_t _b_x6, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_string_t _x_x28 = kk_string_unbox(_b_x6); /*string*/
  return kk_std_core_show_string_fs_show(_x_x28, _ctx);
}
static kk_unit_t kk_parser_parser_test_fun17(kk_function_t _fself, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_box_t _x_x18;
  kk_string_t _x_x19;
  kk_define_string_literal(, _s_x20, 5, "dummy", _ctx)
  _x_x19 = kk_string_dup(_s_x20, _ctx); /*string*/
  _x_x18 = kk_string_box(_x_x19); /*1000*/
  kk_box_t _x_x21;
  kk_string_t _x_x22;
  kk_define_string_literal(, _s_x23, 2, "du", _ctx)
  _x_x22 = kk_string_dup(_s_x23, _ctx); /*string*/
  _x_x21 = kk_string_box(_x_x22); /*1000*/
  kk_utest_assert_eq(_x_x18, _x_x21, kk_parser_new_parser_test_fun24(_ctx), kk_parser_new_parser_test_fun27(_ctx), _ctx); return kk_Unit;
}
static kk_unit_t kk_parser_parser_test_fun14(kk_function_t _fself, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_string_t _x_x15 = kk_string_empty(); /*string*/
  kk_utest_test(_x_x15, kk_parser_new_parser_test_fun17(_ctx), _ctx); return kk_Unit;
}
static kk_unit_t kk_parser_parser_test_fun11(kk_function_t _fself, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_string_t _x_x12;
  kk_define_string_literal(, _s_x13, 11, "dummy-suite", _ctx)
  _x_x12 = kk_string_dup(_s_x13, _ctx); /*string*/
  kk_utest_suite(_x_x12, kk_parser_new_parser_test_fun14(_ctx), _ctx); return kk_Unit;
}

kk_function_t kk_parser_parser_test;

// initialization
void kk_parser__init(kk_context_t* _ctx){
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
  {
    kk_parser_parser_test = kk_parser_new_parser_test_fun11(_ctx); /*() -> utest/test-suite ()*/
  }
}

// termination
void kk_parser__done(kk_context_t* _ctx){
  static bool _kk_done = false;
  if (_kk_done) return;
  _kk_done = true;
  #if defined(KK_CUSTOM_DONE)
    KK_CUSTOM_DONE (_ctx);
  #endif
  kk_function_drop(kk_parser_parser_test, _ctx);
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
