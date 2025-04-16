#pragma once
#ifndef kk_utest_H
#define kk_utest_H
// Koka generated module: utest, koka version: 3.1.2, platform: 64-bit
#include <kklib.h>
#include "std_core_types.h"
#include "std_core_hnd.h"
#include "std_core_exn.h"
#include "std_core_bool.h"
#include "std_core_order.h"
#include "std_core_char.h"
#include "std_core_int.h"
#include "std_core_vector.h"
#include "std_core_string.h"
#include "std_core_sslice.h"
#include "std_core_maybe.h"
#include "std_core_either.h"
#include "std_core_tuple.h"
#include "std_core_show.h"
#include "std_core_debug.h"
#include "std_core_delayed.h"
#include "std_core_console.h"
#include "std_core.h"
#include "std_core_list.h"

// type declarations

// type utest/test
struct kk_utest__test_s {
  kk_block_t _block;
};
typedef kk_datatype_ptr_t kk_utest__test;
struct kk_utest__Hnd_test {
  struct kk_utest__test_s _base;
  kk_integer_t _cfc;
  kk_std_core_hnd__clause2 _fun_test_fail;
};
static inline kk_utest__test kk_utest__base_Hnd_test(struct kk_utest__Hnd_test* _x, kk_context_t* _ctx) {
  return kk_datatype_from_base(&_x->_base, _ctx);
}
static inline kk_utest__test kk_utest__new_Hnd_test(kk_reuse_t _at, int32_t _cpath, kk_integer_t _cfc, kk_std_core_hnd__clause2 _fun_test_fail, kk_context_t* _ctx) {
  struct kk_utest__Hnd_test* _con = kk_block_alloc_at_as(struct kk_utest__Hnd_test, _at, 2 /* scan count */, _cpath, (kk_tag_t)(1), _ctx);
  _con->_cfc = _cfc;
  _con->_fun_test_fail = _fun_test_fail;
  return kk_utest__base_Hnd_test(_con, _ctx);
}
static inline struct kk_utest__Hnd_test* kk_utest__as_Hnd_test(kk_utest__test x, kk_context_t* _ctx) {
  return kk_datatype_as_assert(struct kk_utest__Hnd_test*, x, (kk_tag_t)(1), _ctx);
}
static inline bool kk_utest__is_Hnd_test(kk_utest__test x, kk_context_t* _ctx) {
  return (true);
}
static inline kk_utest__test kk_utest__test_dup(kk_utest__test _x, kk_context_t* _ctx) {
  return kk_datatype_ptr_dup(_x, _ctx);
}
static inline void kk_utest__test_drop(kk_utest__test _x, kk_context_t* _ctx) {
  kk_datatype_ptr_drop(_x, _ctx);
}
static inline kk_box_t kk_utest__test_box(kk_utest__test _x, kk_context_t* _ctx) {
  return kk_datatype_ptr_box(_x);
}
static inline kk_utest__test kk_utest__test_unbox(kk_box_t _x, kk_borrow_t _borrow, kk_context_t* _ctx) {
  return kk_datatype_ptr_unbox(_x);
}

// type utest/test-case
struct kk_utest__test_case_s {
  kk_block_t _block;
};
typedef kk_datatype_ptr_t kk_utest__test_case;
struct kk_utest__Hnd_test_case {
  struct kk_utest__test_case_s _base;
  kk_integer_t _cfc;
  kk_std_core_hnd__clause2 _fun_test_case_fail;
};
static inline kk_utest__test_case kk_utest__base_Hnd_test_case(struct kk_utest__Hnd_test_case* _x, kk_context_t* _ctx) {
  return kk_datatype_from_base(&_x->_base, _ctx);
}
static inline kk_utest__test_case kk_utest__new_Hnd_test_case(kk_reuse_t _at, int32_t _cpath, kk_integer_t _cfc, kk_std_core_hnd__clause2 _fun_test_case_fail, kk_context_t* _ctx) {
  struct kk_utest__Hnd_test_case* _con = kk_block_alloc_at_as(struct kk_utest__Hnd_test_case, _at, 2 /* scan count */, _cpath, (kk_tag_t)(1), _ctx);
  _con->_cfc = _cfc;
  _con->_fun_test_case_fail = _fun_test_case_fail;
  return kk_utest__base_Hnd_test_case(_con, _ctx);
}
static inline struct kk_utest__Hnd_test_case* kk_utest__as_Hnd_test_case(kk_utest__test_case x, kk_context_t* _ctx) {
  return kk_datatype_as_assert(struct kk_utest__Hnd_test_case*, x, (kk_tag_t)(1), _ctx);
}
static inline bool kk_utest__is_Hnd_test_case(kk_utest__test_case x, kk_context_t* _ctx) {
  return (true);
}
static inline kk_utest__test_case kk_utest__test_case_dup(kk_utest__test_case _x, kk_context_t* _ctx) {
  return kk_datatype_ptr_dup(_x, _ctx);
}
static inline void kk_utest__test_case_drop(kk_utest__test_case _x, kk_context_t* _ctx) {
  kk_datatype_ptr_drop(_x, _ctx);
}
static inline kk_box_t kk_utest__test_case_box(kk_utest__test_case _x, kk_context_t* _ctx) {
  return kk_datatype_ptr_box(_x);
}
static inline kk_utest__test_case kk_utest__test_case_unbox(kk_box_t _x, kk_borrow_t _borrow, kk_context_t* _ctx) {
  return kk_datatype_ptr_unbox(_x);
}

// type utest/test-failure
struct kk_utest__test_failure_s {
  kk_block_t _block;
};
typedef kk_datatype_ptr_t kk_utest__test_failure;
struct kk_utest_TestFailure {
  struct kk_utest__test_failure_s _base;
  kk_box_t expected;
  kk_box_t actual;
  kk_string_t msg;
};
static inline kk_utest__test_failure kk_utest__base_TestFailure(struct kk_utest_TestFailure* _x, kk_context_t* _ctx) {
  return kk_datatype_from_base(&_x->_base, _ctx);
}
static inline kk_utest__test_failure kk_utest__new_TestFailure(kk_reuse_t _at, int32_t _cpath, kk_box_t expected, kk_box_t actual, kk_string_t msg, kk_context_t* _ctx) {
  struct kk_utest_TestFailure* _con = kk_block_alloc_at_as(struct kk_utest_TestFailure, _at, 3 /* scan count */, _cpath, (kk_tag_t)(1), _ctx);
  _con->expected = expected;
  _con->actual = actual;
  _con->msg = msg;
  return kk_utest__base_TestFailure(_con, _ctx);
}
static inline struct kk_utest_TestFailure* kk_utest__as_TestFailure(kk_utest__test_failure x, kk_context_t* _ctx) {
  return kk_datatype_as_assert(struct kk_utest_TestFailure*, x, (kk_tag_t)(1), _ctx);
}
static inline bool kk_utest__is_TestFailure(kk_utest__test_failure x, kk_context_t* _ctx) {
  return (true);
}
static inline kk_utest__test_failure kk_utest__test_failure_dup(kk_utest__test_failure _x, kk_context_t* _ctx) {
  return kk_datatype_ptr_dup(_x, _ctx);
}
static inline void kk_utest__test_failure_drop(kk_utest__test_failure _x, kk_context_t* _ctx) {
  kk_datatype_ptr_drop(_x, _ctx);
}
static inline kk_box_t kk_utest__test_failure_box(kk_utest__test_failure _x, kk_context_t* _ctx) {
  return kk_datatype_ptr_box(_x);
}
static inline kk_utest__test_failure kk_utest__test_failure_unbox(kk_box_t _x, kk_borrow_t _borrow, kk_context_t* _ctx) {
  return kk_datatype_ptr_unbox(_x);
}

// type utest/test-suite
struct kk_utest__test_suite_s {
  kk_block_t _block;
};
typedef kk_datatype_ptr_t kk_utest__test_suite;
struct kk_utest__Hnd_test_suite {
  struct kk_utest__test_suite_s _base;
  kk_integer_t _cfc;
  kk_std_core_hnd__clause1 _fun_test_suite_fail;
};
static inline kk_utest__test_suite kk_utest__base_Hnd_test_suite(struct kk_utest__Hnd_test_suite* _x, kk_context_t* _ctx) {
  return kk_datatype_from_base(&_x->_base, _ctx);
}
static inline kk_utest__test_suite kk_utest__new_Hnd_test_suite(kk_reuse_t _at, int32_t _cpath, kk_integer_t _cfc, kk_std_core_hnd__clause1 _fun_test_suite_fail, kk_context_t* _ctx) {
  struct kk_utest__Hnd_test_suite* _con = kk_block_alloc_at_as(struct kk_utest__Hnd_test_suite, _at, 2 /* scan count */, _cpath, (kk_tag_t)(1), _ctx);
  _con->_cfc = _cfc;
  _con->_fun_test_suite_fail = _fun_test_suite_fail;
  return kk_utest__base_Hnd_test_suite(_con, _ctx);
}
static inline struct kk_utest__Hnd_test_suite* kk_utest__as_Hnd_test_suite(kk_utest__test_suite x, kk_context_t* _ctx) {
  return kk_datatype_as_assert(struct kk_utest__Hnd_test_suite*, x, (kk_tag_t)(1), _ctx);
}
static inline bool kk_utest__is_Hnd_test_suite(kk_utest__test_suite x, kk_context_t* _ctx) {
  return (true);
}
static inline kk_utest__test_suite kk_utest__test_suite_dup(kk_utest__test_suite _x, kk_context_t* _ctx) {
  return kk_datatype_ptr_dup(_x, _ctx);
}
static inline void kk_utest__test_suite_drop(kk_utest__test_suite _x, kk_context_t* _ctx) {
  kk_datatype_ptr_drop(_x, _ctx);
}
static inline kk_box_t kk_utest__test_suite_box(kk_utest__test_suite _x, kk_context_t* _ctx) {
  return kk_datatype_ptr_box(_x);
}
static inline kk_utest__test_suite kk_utest__test_suite_unbox(kk_box_t _x, kk_borrow_t _borrow, kk_context_t* _ctx) {
  return kk_datatype_ptr_unbox(_x);
}

// value declarations
 
// Automatically generated. Retrieves the `@cfc` constructor field of the `:test` type.

static inline kk_integer_t kk_utest_test_fs__cfc(kk_utest__test test_0, kk_context_t* _ctx) { /* forall<e,a> (test : test<e,a>) -> int */ 
  {
    struct kk_utest__Hnd_test* _con_x233 = kk_utest__as_Hnd_test(test_0, _ctx);
    kk_integer_t _x = _con_x233->_cfc;
    return kk_integer_dup(_x, _ctx);
  }
}
 
// Automatically generated. Retrieves the `@fun-test-fail` constructor field of the `:test` type.

static inline kk_std_core_hnd__clause2 kk_utest_test_fs__fun_test_fail(kk_utest__test test_0, kk_context_t* _ctx) { /* forall<e,a> (test : test<e,a>) -> hnd/clause2<string,string,(),test,e,a> */ 
  {
    struct kk_utest__Hnd_test* _con_x234 = kk_utest__as_Hnd_test(test_0, _ctx);
    kk_std_core_hnd__clause2 _x = _con_x234->_fun_test_fail;
    return kk_std_core_hnd__clause2_dup(_x, _ctx);
  }
}
 
// Automatically generated. Retrieves the `@cfc` constructor field of the `:test-case` type.

static inline kk_integer_t kk_utest_test_case_fs__cfc(kk_utest__test_case _this, kk_context_t* _ctx) { /* forall<e,a> (test-case<e,a>) -> int */ 
  {
    struct kk_utest__Hnd_test_case* _con_x235 = kk_utest__as_Hnd_test_case(_this, _ctx);
    kk_integer_t _x = _con_x235->_cfc;
    return kk_integer_dup(_x, _ctx);
  }
}
 
// Automatically generated. Retrieves the `@fun-test-case-fail` constructor field of the `:test-case` type.

static inline kk_std_core_hnd__clause2 kk_utest_test_case_fs__fun_test_case_fail(kk_utest__test_case _this, kk_context_t* _ctx) { /* forall<e,a> (test-case<e,a>) -> hnd/clause2<string,string,(),test-case,e,a> */ 
  {
    struct kk_utest__Hnd_test_case* _con_x236 = kk_utest__as_Hnd_test_case(_this, _ctx);
    kk_std_core_hnd__clause2 _x = _con_x236->_fun_test_case_fail;
    return kk_std_core_hnd__clause2_dup(_x, _ctx);
  }
}
 
// Automatically generated. Retrieves the `expected` constructor field of the `:test-failure` type.

static inline kk_box_t kk_utest_test_failure_fs_expected(kk_utest__test_failure _this, kk_context_t* _ctx) { /* forall<a,b> (test-failure<a,b>) -> a */ 
  {
    struct kk_utest_TestFailure* _con_x237 = kk_utest__as_TestFailure(_this, _ctx);
    kk_box_t _x = _con_x237->expected;
    return kk_box_dup(_x, _ctx);
  }
}
 
// Automatically generated. Retrieves the `actual` constructor field of the `:test-failure` type.

static inline kk_box_t kk_utest_test_failure_fs_actual(kk_utest__test_failure _this, kk_context_t* _ctx) { /* forall<a,b> (test-failure<a,b>) -> b */ 
  {
    struct kk_utest_TestFailure* _con_x238 = kk_utest__as_TestFailure(_this, _ctx);
    kk_box_t _x = _con_x238->actual;
    return kk_box_dup(_x, _ctx);
  }
}
 
// Automatically generated. Retrieves the `msg` constructor field of the `:test-failure` type.

static inline kk_string_t kk_utest_test_failure_fs_msg(kk_utest__test_failure _this, kk_context_t* _ctx) { /* forall<a,b> (test-failure<a,b>) -> string */ 
  {
    struct kk_utest_TestFailure* _con_x239 = kk_utest__as_TestFailure(_this, _ctx);
    kk_string_t _x = _con_x239->msg;
    return kk_string_dup(_x, _ctx);
  }
}

kk_utest__test_failure kk_utest_test_failure_fs__copy(kk_utest__test_failure _this, kk_std_core_types__optional expected, kk_std_core_types__optional actual, kk_std_core_types__optional msg, kk_context_t* _ctx); /* forall<a,b> (test-failure<a,b>, expected : ? a, actual : ? b, msg : ? string) -> test-failure<a,b> */ 
 
// Automatically generated. Retrieves the `@cfc` constructor field of the `:test-suite` type.

static inline kk_integer_t kk_utest_test_suite_fs__cfc(kk_utest__test_suite _this, kk_context_t* _ctx) { /* forall<e,a> (test-suite<e,a>) -> int */ 
  {
    struct kk_utest__Hnd_test_suite* _con_x246 = kk_utest__as_Hnd_test_suite(_this, _ctx);
    kk_integer_t _x = _con_x246->_cfc;
    return kk_integer_dup(_x, _ctx);
  }
}
 
// Automatically generated. Retrieves the `@fun-test-suite-fail` constructor field of the `:test-suite` type.

static inline kk_std_core_hnd__clause1 kk_utest_test_suite_fs__fun_test_suite_fail(kk_utest__test_suite _this, kk_context_t* _ctx) { /* forall<e,a> (test-suite<e,a>) -> hnd/clause1<(string, string, string),(),test-suite,e,a> */ 
  {
    struct kk_utest__Hnd_test_suite* _con_x247 = kk_utest__as_Hnd_test_suite(_this, _ctx);
    kk_std_core_hnd__clause1 _x = _con_x247->_fun_test_suite_fail;
    return kk_std_core_hnd__clause1_dup(_x, _ctx);
  }
}

extern kk_std_core_hnd__htag kk_utest__tag_test;

kk_box_t kk_utest__handle_test(kk_utest__test hnd, kk_function_t ret, kk_function_t action, kk_context_t* _ctx); /* forall<a,e,b> (hnd : test<e,b>, ret : (res : a) -> e b, action : () -> <test|e> a) -> e b */ 
 
// select `test-fail` operation out of effect `:test`

static inline kk_std_core_hnd__clause2 kk_utest__select_test_fail(kk_utest__test hnd, kk_context_t* _ctx) { /* forall<e,a> (hnd : test<e,a>) -> hnd/clause2<string,string,(),test,e,a> */ 
  {
    struct kk_utest__Hnd_test* _con_x251 = kk_utest__as_Hnd_test(hnd, _ctx);
    kk_std_core_hnd__clause2 _fun_test_fail = _con_x251->_fun_test_fail;
    return kk_std_core_hnd__clause2_dup(_fun_test_fail, _ctx);
  }
}
 
// Call the `fun test-fail` operation of the effect `:test`

static inline kk_unit_t kk_utest_test_fail(kk_string_t expected, kk_string_t actual, kk_context_t* _ctx) { /* (expected : string, actual : string) -> test () */ 
  kk_std_core_hnd__ev evx_10038 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<utest/test>*/;
  kk_box_t _x_x252;
  {
    struct kk_std_core_hnd_Ev* _con_x253 = kk_std_core_hnd__as_Ev(evx_10038, _ctx);
    kk_box_t _box_x9 = _con_x253->hnd;
    int32_t m = _con_x253->marker;
    kk_utest__test h = kk_utest__test_unbox(_box_x9, KK_BORROWED, _ctx);
    kk_utest__test_dup(h, _ctx);
    {
      struct kk_utest__Hnd_test* _con_x254 = kk_utest__as_Hnd_test(h, _ctx);
      kk_integer_t _pat_0_0 = _con_x254->_cfc;
      kk_std_core_hnd__clause2 _fun_test_fail = _con_x254->_fun_test_fail;
      if kk_likely(kk_datatype_ptr_is_unique(h, _ctx)) {
        kk_integer_drop(_pat_0_0, _ctx);
        kk_datatype_ptr_free(h, _ctx);
      }
      else {
        kk_std_core_hnd__clause2_dup(_fun_test_fail, _ctx);
        kk_datatype_ptr_decref(h, _ctx);
      }
      {
        kk_function_t _fun_unbox_x14 = _fun_test_fail.clause;
        _x_x252 = kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_box_t, kk_box_t, kk_context_t*), _fun_unbox_x14, (_fun_unbox_x14, m, evx_10038, kk_string_box(expected), kk_string_box(actual), _ctx), _ctx); /*1016*/
      }
    }
  }
  kk_unit_unbox(_x_x252); return kk_Unit;
}

extern kk_std_core_hnd__htag kk_utest__tag_test_case;

kk_box_t kk_utest__handle_test_case(kk_utest__test_case hnd, kk_function_t ret, kk_function_t action, kk_context_t* _ctx); /* forall<a,e,b> (hnd : test-case<e,b>, ret : (res : a) -> e b, action : () -> <test-case|e> a) -> e b */ 
 
// select `test-case-fail` operation out of effect `:test-case`

static inline kk_std_core_hnd__clause2 kk_utest__select_test_case_fail(kk_utest__test_case hnd, kk_context_t* _ctx) { /* forall<e,a> (hnd : test-case<e,a>) -> hnd/clause2<string,string,(),test-case,e,a> */ 
  {
    struct kk_utest__Hnd_test_case* _con_x258 = kk_utest__as_Hnd_test_case(hnd, _ctx);
    kk_std_core_hnd__clause2 _fun_test_case_fail = _con_x258->_fun_test_case_fail;
    return kk_std_core_hnd__clause2_dup(_fun_test_case_fail, _ctx);
  }
}
 
// Call the `fun test-case-fail` operation of the effect `:test-case`

static inline kk_unit_t kk_utest_test_case_fail(kk_string_t expected, kk_string_t actual, kk_context_t* _ctx) { /* (expected : string, actual : string) -> test-case () */ 
  kk_std_core_hnd__ev evx_10043 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<utest/test-case>*/;
  kk_box_t _x_x259;
  {
    struct kk_std_core_hnd_Ev* _con_x260 = kk_std_core_hnd__as_Ev(evx_10043, _ctx);
    kk_box_t _box_x27 = _con_x260->hnd;
    int32_t m = _con_x260->marker;
    kk_utest__test_case h = kk_utest__test_case_unbox(_box_x27, KK_BORROWED, _ctx);
    kk_utest__test_case_dup(h, _ctx);
    {
      struct kk_utest__Hnd_test_case* _con_x261 = kk_utest__as_Hnd_test_case(h, _ctx);
      kk_integer_t _pat_0_0 = _con_x261->_cfc;
      kk_std_core_hnd__clause2 _fun_test_case_fail = _con_x261->_fun_test_case_fail;
      if kk_likely(kk_datatype_ptr_is_unique(h, _ctx)) {
        kk_integer_drop(_pat_0_0, _ctx);
        kk_datatype_ptr_free(h, _ctx);
      }
      else {
        kk_std_core_hnd__clause2_dup(_fun_test_case_fail, _ctx);
        kk_datatype_ptr_decref(h, _ctx);
      }
      {
        kk_function_t _fun_unbox_x32 = _fun_test_case_fail.clause;
        _x_x259 = kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_box_t, kk_box_t, kk_context_t*), _fun_unbox_x32, (_fun_unbox_x32, m, evx_10043, kk_string_box(expected), kk_string_box(actual), _ctx), _ctx); /*1016*/
      }
    }
  }
  kk_unit_unbox(_x_x259); return kk_Unit;
}

extern kk_std_core_hnd__htag kk_utest__tag_test_suite;

kk_box_t kk_utest__handle_test_suite(kk_utest__test_suite hnd, kk_function_t ret, kk_function_t action, kk_context_t* _ctx); /* forall<a,e,b> (hnd : test-suite<e,b>, ret : (res : a) -> e b, action : () -> <test-suite|e> a) -> e b */ 
 
// select `test-suite-fail` operation out of effect `:test-suite`

static inline kk_std_core_hnd__clause1 kk_utest__select_test_suite_fail(kk_utest__test_suite hnd, kk_context_t* _ctx) { /* forall<e,a> (hnd : test-suite<e,a>) -> hnd/clause1<(string, string, string),(),test-suite,e,a> */ 
  {
    struct kk_utest__Hnd_test_suite* _con_x265 = kk_utest__as_Hnd_test_suite(hnd, _ctx);
    kk_std_core_hnd__clause1 _fun_test_suite_fail = _con_x265->_fun_test_suite_fail;
    return kk_std_core_hnd__clause1_dup(_fun_test_suite_fail, _ctx);
  }
}
 
// Call the `fun test-suite-fail` operation of the effect `:test-suite`


// lift anonymous function
struct kk_utest_test_suite_fail_fun267__t {
  struct kk_function_s _base;
};
extern kk_std_core_hnd__clause1 kk_utest_test_suite_fail_fun267(kk_function_t _fself, kk_box_t _b_x50, kk_context_t* _ctx);
static inline kk_function_t kk_utest_new_test_suite_fail_fun267(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_utest_test_suite_fail_fun267, _ctx)
  return kk_function_dup(_fself,kk_context());
}


static inline kk_unit_t kk_utest_test_suite_fail(kk_string_t suite_name, kk_string_t expected, kk_string_t actual, kk_context_t* _ctx) { /* (suite-name : string, expected : string, actual : string) -> test-suite () */ 
  kk_std_core_hnd__ev _b_x45_51 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<utest/test-suite>*/;
  kk_box_t _x_x266 = kk_std_core_hnd__perform3(_b_x45_51, kk_utest_new_test_suite_fail_fun267(_ctx), kk_string_box(suite_name), kk_string_box(expected), kk_string_box(actual), _ctx); /*1003*/
  kk_unit_unbox(_x_x266); return kk_Unit;
}

kk_unit_t kk_utest_assert_eq(kk_box_t expected, kk_box_t actual, kk_function_t _implicit_fs__lp__eq__eq__rp_, kk_function_t _implicit_fs_show, kk_context_t* _ctx); /* forall<a> (expected : a, actual : a, ?(==) : (a, a) -> bool, ?show : (a) -> string) -> test () */ 

kk_unit_t kk_utest_test(kk_string_t test_name, kk_function_t tests, kk_context_t* _ctx); /* (test-name : string, tests : () -> test ()) -> test-case () */ 

kk_unit_t kk_utest_suite(kk_string_t suite_name, kk_function_t test_cases, kk_context_t* _ctx); /* (suite-name : string, test-cases : () -> test-case ()) -> test-suite () */ 

kk_unit_t kk_utest_run_utest(kk_function_t test_suites, kk_context_t* _ctx); /* (test-suites : () -> test-suite ()) -> console/console () */ 

void kk_utest__init(kk_context_t* _ctx);


void kk_utest__done(kk_context_t* _ctx);

#endif // header
