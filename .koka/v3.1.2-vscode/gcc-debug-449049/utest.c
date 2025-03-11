// Koka generated module: utest, koka version: 3.1.2, platform: 64-bit
#include "utest.h"

kk_utest__test_failure kk_utest_test_failure_fs__copy(kk_utest__test_failure _this, kk_std_core_types__optional expected, kk_std_core_types__optional actual, kk_std_core_types__optional msg, kk_context_t* _ctx) { /* forall<a,b> (test-failure<a,b>, expected : ? a, actual : ? b, msg : ? string) -> test-failure<a,b> */ 
  kk_box_t _x_x246;
  if (kk_std_core_types__is_Optional(expected, _ctx)) {
    kk_box_t _uniq_expected_329 = expected._cons._Optional.value;
    kk_box_dup(_uniq_expected_329, _ctx);
    kk_std_core_types__optional_drop(expected, _ctx);
    _x_x246 = _uniq_expected_329; /*374*/
  }
  else {
    kk_std_core_types__optional_drop(expected, _ctx);
    {
      struct kk_utest_TestFailure* _con_x247 = kk_utest__as_TestFailure(_this, _ctx);
      kk_box_t _x = _con_x247->expected;
      kk_box_dup(_x, _ctx);
      _x_x246 = _x; /*374*/
    }
  }
  kk_box_t _x_x248;
  if (kk_std_core_types__is_Optional(actual, _ctx)) {
    kk_box_t _uniq_actual_342 = actual._cons._Optional.value;
    kk_box_dup(_uniq_actual_342, _ctx);
    kk_std_core_types__optional_drop(actual, _ctx);
    _x_x248 = _uniq_actual_342; /*375*/
  }
  else {
    kk_std_core_types__optional_drop(actual, _ctx);
    {
      struct kk_utest_TestFailure* _con_x249 = kk_utest__as_TestFailure(_this, _ctx);
      kk_box_t _x_0 = _con_x249->actual;
      kk_box_dup(_x_0, _ctx);
      _x_x248 = _x_0; /*375*/
    }
  }
  kk_string_t _x_x250;
  if (kk_std_core_types__is_Optional(msg, _ctx)) {
    kk_box_t _box_x0 = msg._cons._Optional.value;
    kk_string_t _uniq_msg_355 = kk_string_unbox(_box_x0);
    kk_string_dup(_uniq_msg_355, _ctx);
    kk_std_core_types__optional_drop(msg, _ctx);
    kk_datatype_ptr_dropn(_this, (KK_I32(3)), _ctx);
    _x_x250 = _uniq_msg_355; /*string*/
  }
  else {
    kk_std_core_types__optional_drop(msg, _ctx);
    {
      struct kk_utest_TestFailure* _con_x251 = kk_utest__as_TestFailure(_this, _ctx);
      kk_box_t _pat_0_2 = _con_x251->expected;
      kk_box_t _pat_1_3 = _con_x251->actual;
      kk_string_t _x_1 = _con_x251->msg;
      if kk_likely(kk_datatype_ptr_is_unique(_this, _ctx)) {
        kk_box_drop(_pat_1_3, _ctx);
        kk_box_drop(_pat_0_2, _ctx);
        kk_datatype_ptr_free(_this, _ctx);
      }
      else {
        kk_string_dup(_x_1, _ctx);
        kk_datatype_ptr_decref(_this, _ctx);
      }
      _x_x250 = _x_1; /*string*/
    }
  }
  return kk_utest__new_TestFailure(kk_reuse_null, 0, _x_x246, _x_x248, _x_x250, _ctx);
}
 
// runtime tag for the effect `:test`

kk_std_core_hnd__htag kk_utest__tag_test;
 
// handler for the effect `:test`

kk_box_t kk_utest__handle_test(kk_utest__test hnd, kk_function_t ret, kk_function_t action, kk_context_t* _ctx) { /* forall<a,e,b> (hnd : test<e,b>, ret : (res : a) -> e b, action : () -> <test|e> a) -> e b */ 
  kk_std_core_hnd__htag _x_x256 = kk_std_core_hnd__htag_dup(kk_utest__tag_test, _ctx); /*hnd/htag<utest/test>*/
  return kk_std_core_hnd__hhandle(_x_x256, kk_utest__test_box(hnd, _ctx), ret, action, _ctx);
}
 
// runtime tag for the effect `:test-case`

kk_std_core_hnd__htag kk_utest__tag_test_case;
 
// handler for the effect `:test-case`

kk_box_t kk_utest__handle_test_case(kk_utest__test_case hnd, kk_function_t ret, kk_function_t action, kk_context_t* _ctx) { /* forall<a,e,b> (hnd : test-case<e,b>, ret : (res : a) -> e b, action : () -> <test-case|e> a) -> e b */ 
  kk_std_core_hnd__htag _x_x263 = kk_std_core_hnd__htag_dup(kk_utest__tag_test_case, _ctx); /*hnd/htag<utest/test-case>*/
  return kk_std_core_hnd__hhandle(_x_x263, kk_utest__test_case_box(hnd, _ctx), ret, action, _ctx);
}
extern kk_std_core_hnd__clause1 kk_utest_test_case_fail_fun266(kk_function_t _fself, kk_box_t _b_x32, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_utest__test_case _brw_x234 = kk_utest__test_case_unbox(_b_x32, KK_OWNED, _ctx); /*utest/test-case<616,617>*/;
  kk_std_core_hnd__clause1 _brw_x235 = kk_utest__select_test_case_fail(_brw_x234, _ctx); /*hnd/clause1<(string, string, string),(),utest/test-case,616,617>*/;
  kk_utest__test_case_drop(_brw_x234, _ctx);
  return _brw_x235;
}
 
// runtime tag for the effect `:test-suite`

kk_std_core_hnd__htag kk_utest__tag_test_suite;
 
// handler for the effect `:test-suite`

kk_box_t kk_utest__handle_test_suite(kk_utest__test_suite hnd, kk_function_t ret, kk_function_t action, kk_context_t* _ctx) { /* forall<a,e,b> (hnd : test-suite<e,b>, ret : (res : a) -> e b, action : () -> <test-suite|e> a) -> e b */ 
  kk_std_core_hnd__htag _x_x269 = kk_std_core_hnd__htag_dup(kk_utest__tag_test_suite, _ctx); /*hnd/htag<utest/test-suite>*/
  return kk_std_core_hnd__hhandle(_x_x269, kk_utest__test_suite_box(hnd, _ctx), ret, action, _ctx);
}
extern kk_std_core_hnd__clause1 kk_utest_test_suite_fail_fun272(kk_function_t _fself, kk_box_t _b_x51, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_utest__test_suite _brw_x232 = kk_utest__test_suite_unbox(_b_x51, KK_OWNED, _ctx); /*utest/test-suite<741,742>*/;
  kk_std_core_hnd__clause1 _brw_x233 = kk_utest__select_test_suite_fail(_brw_x232, _ctx); /*hnd/clause1<(string, string, string),(),utest/test-suite,741,742>*/;
  kk_utest__test_suite_drop(_brw_x232, _ctx);
  return _brw_x233;
}


// lift anonymous function
struct kk_utest_assert_eq_fun274__t {
  struct kk_function_s _base;
};
static kk_box_t kk_utest_assert_eq_fun274(kk_function_t _fself, kk_box_t _b_x61, kk_box_t _b_x62, kk_box_t _b_x63, kk_context_t* _ctx);
static kk_function_t kk_utest_new_assert_eq_fun274(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_utest_assert_eq_fun274, _ctx)
  return kk_function_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_utest_assert_eq_fun276__t {
  struct kk_function_s _base;
  kk_box_t _b_x63;
};
static bool kk_utest_assert_eq_fun276(kk_function_t _fself, kk_box_t _b_x67, kk_box_t _b_x68, kk_context_t* _ctx);
static kk_function_t kk_utest_new_assert_eq_fun276(kk_box_t _b_x63, kk_context_t* _ctx) {
  struct kk_utest_assert_eq_fun276__t* _self = kk_function_alloc_as(struct kk_utest_assert_eq_fun276__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_utest_assert_eq_fun276, kk_context());
  _self->_b_x63 = _b_x63;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static bool kk_utest_assert_eq_fun276(kk_function_t _fself, kk_box_t _b_x67, kk_box_t _b_x68, kk_context_t* _ctx) {
  struct kk_utest_assert_eq_fun276__t* _self = kk_function_as(struct kk_utest_assert_eq_fun276__t*, _fself, _ctx);
  kk_box_t _b_x63 = _self->_b_x63; /* 1002 */
  kk_drop_match(_self, {kk_box_dup(_b_x63, _ctx);}, {}, _ctx)
  kk_box_t _x_x277;
  kk_function_t _x_x278 = kk_function_unbox(_b_x63, _ctx); /*(64, 65) -> 66*/
  _x_x277 = kk_function_call(kk_box_t, (kk_function_t, kk_box_t, kk_box_t, kk_context_t*), _x_x278, (_x_x278, _b_x67, _b_x68, _ctx), _ctx); /*66*/
  return kk_bool_unbox(_x_x277);
}
static kk_box_t kk_utest_assert_eq_fun274(kk_function_t _fself, kk_box_t _b_x61, kk_box_t _b_x62, kk_box_t _b_x63, kk_context_t* _ctx) {
  kk_unused(_fself);
  bool _x_x275;
  kk_box_t x_98 = _b_x61; /*911*/;
  kk_box_t y_99 = _b_x62; /*911*/;
  kk_function_t _implicit_fs__lp__at_x_0_100_eq__eq__rp_ = kk_utest_new_assert_eq_fun276(_b_x63, _ctx); /*(911, 911) -> bool*/;
  bool b_10002 = kk_function_call(bool, (kk_function_t, kk_box_t, kk_box_t, kk_context_t*), _implicit_fs__lp__at_x_0_100_eq__eq__rp_, (_implicit_fs__lp__at_x_0_100_eq__eq__rp_, x_98, y_99, _ctx), _ctx); /*bool*/;
  if (b_10002) {
    _x_x275 = false; /*bool*/
  }
  else {
    _x_x275 = true; /*bool*/
  }
  return kk_bool_box(_x_x275);
}


// lift anonymous function
struct kk_utest_assert_eq_fun281__t {
  struct kk_function_s _base;
  kk_function_t _implicit_fs__lp__eq__eq__rp_;
};
static kk_box_t kk_utest_assert_eq_fun281(kk_function_t _fself, kk_box_t _b_x72, kk_box_t _b_x73, kk_context_t* _ctx);
static kk_function_t kk_utest_new_assert_eq_fun281(kk_function_t _implicit_fs__lp__eq__eq__rp_, kk_context_t* _ctx) {
  struct kk_utest_assert_eq_fun281__t* _self = kk_function_alloc_as(struct kk_utest_assert_eq_fun281__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_utest_assert_eq_fun281, kk_context());
  _self->_implicit_fs__lp__eq__eq__rp_ = _implicit_fs__lp__eq__eq__rp_;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_utest_assert_eq_fun281(kk_function_t _fself, kk_box_t _b_x72, kk_box_t _b_x73, kk_context_t* _ctx) {
  struct kk_utest_assert_eq_fun281__t* _self = kk_function_as(struct kk_utest_assert_eq_fun281__t*, _fself, _ctx);
  kk_function_t _implicit_fs__lp__eq__eq__rp_ = _self->_implicit_fs__lp__eq__eq__rp_; /* (911, 911) -> bool */
  kk_drop_match(_self, {kk_function_dup(_implicit_fs__lp__eq__eq__rp_, _ctx);}, {}, _ctx)
  bool _x_x282 = kk_function_call(bool, (kk_function_t, kk_box_t, kk_box_t, kk_context_t*), _implicit_fs__lp__eq__eq__rp_, (_implicit_fs__lp__eq__eq__rp_, _b_x72, _b_x73, _ctx), _ctx); /*bool*/
  return kk_bool_box(_x_x282);
}


// lift anonymous function
struct kk_utest_assert_eq_fun285__t {
  struct kk_function_s _base;
  kk_function_t _implicit_fs_show;
};
static kk_box_t kk_utest_assert_eq_fun285(kk_function_t _fself, kk_box_t _b_x76, kk_context_t* _ctx);
static kk_function_t kk_utest_new_assert_eq_fun285(kk_function_t _implicit_fs_show, kk_context_t* _ctx) {
  struct kk_utest_assert_eq_fun285__t* _self = kk_function_alloc_as(struct kk_utest_assert_eq_fun285__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_utest_assert_eq_fun285, kk_context());
  _self->_implicit_fs_show = _implicit_fs_show;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_utest_assert_eq_fun285(kk_function_t _fself, kk_box_t _b_x76, kk_context_t* _ctx) {
  struct kk_utest_assert_eq_fun285__t* _self = kk_function_as(struct kk_utest_assert_eq_fun285__t*, _fself, _ctx);
  kk_function_t _implicit_fs_show = _self->_implicit_fs_show; /* (911) -> string */
  kk_drop_match(_self, {kk_function_dup(_implicit_fs_show, _ctx);}, {}, _ctx)
  kk_string_t _x_x286 = kk_function_call(kk_string_t, (kk_function_t, kk_box_t, kk_context_t*), _implicit_fs_show, (_implicit_fs_show, _b_x76, _ctx), _ctx); /*string*/
  return kk_string_box(_x_x286);
}


// lift anonymous function
struct kk_utest_assert_eq_fun288__t {
  struct kk_function_s _base;
  kk_function_t _implicit_fs_show;
};
static kk_box_t kk_utest_assert_eq_fun288(kk_function_t _fself, kk_box_t _b_x81, kk_context_t* _ctx);
static kk_function_t kk_utest_new_assert_eq_fun288(kk_function_t _implicit_fs_show, kk_context_t* _ctx) {
  struct kk_utest_assert_eq_fun288__t* _self = kk_function_alloc_as(struct kk_utest_assert_eq_fun288__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_utest_assert_eq_fun288, kk_context());
  _self->_implicit_fs_show = _implicit_fs_show;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_utest_assert_eq_fun288(kk_function_t _fself, kk_box_t _b_x81, kk_context_t* _ctx) {
  struct kk_utest_assert_eq_fun288__t* _self = kk_function_as(struct kk_utest_assert_eq_fun288__t*, _fself, _ctx);
  kk_function_t _implicit_fs_show = _self->_implicit_fs_show; /* (911) -> string */
  kk_drop_match(_self, {kk_function_dup(_implicit_fs_show, _ctx);}, {}, _ctx)
  kk_string_t _x_x289 = kk_function_call(kk_string_t, (kk_function_t, kk_box_t, kk_context_t*), _implicit_fs_show, (_implicit_fs_show, _b_x81, _ctx), _ctx); /*string*/
  return kk_string_box(_x_x289);
}

kk_unit_t kk_utest_assert_eq(kk_box_t expected, kk_box_t actual, kk_function_t _implicit_fs__lp__eq__eq__rp_, kk_function_t _implicit_fs_show, kk_context_t* _ctx) { /* forall<a> (expected : a, actual : a, ?(==) : (a, a) -> bool, ?show : (a) -> string) -> test () */ 
  bool _match_x231;
  kk_box_t _x_x273;
  kk_box_t _x_x279 = kk_box_dup(expected, _ctx); /*911*/
  kk_box_t _x_x280 = kk_box_dup(actual, _ctx); /*911*/
  _x_x273 = kk_std_core_hnd__open_none3(kk_utest_new_assert_eq_fun274(_ctx), _x_x279, _x_x280, kk_function_box(kk_utest_new_assert_eq_fun281(_implicit_fs__lp__eq__eq__rp_, _ctx), _ctx), _ctx); /*1003*/
  _match_x231 = kk_bool_unbox(_x_x273); /*bool*/
  if (_match_x231) {
    kk_string_t expected_0_10003;
    kk_box_t _x_x283;
    kk_function_t _x_x284;
    kk_function_dup(_implicit_fs_show, _ctx);
    _x_x284 = kk_utest_new_assert_eq_fun285(_implicit_fs_show, _ctx); /*(1000) -> 1002 1001*/
    _x_x283 = kk_std_core_hnd__open_none1(_x_x284, expected, _ctx); /*1001*/
    expected_0_10003 = kk_string_unbox(_x_x283); /*string*/
    kk_string_t actual_0_10004;
    kk_box_t _x_x287 = kk_std_core_hnd__open_none1(kk_utest_new_assert_eq_fun288(_implicit_fs_show, _ctx), actual, _ctx); /*1001*/
    actual_0_10004 = kk_string_unbox(_x_x287); /*string*/
    kk_std_core_hnd__ev evx_10049 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<utest/test>*/;
    kk_box_t _x_x290;
    {
      struct kk_std_core_hnd_Ev* _con_x291 = kk_std_core_hnd__as_Ev(evx_10049, _ctx);
      kk_box_t _box_x84 = _con_x291->hnd;
      int32_t m = _con_x291->marker;
      kk_utest__test h = kk_utest__test_unbox(_box_x84, KK_BORROWED, _ctx);
      kk_utest__test_dup(h, _ctx);
      {
        struct kk_utest__Hnd_test* _con_x292 = kk_utest__as_Hnd_test(h, _ctx);
        kk_integer_t _pat_0_1 = _con_x292->_cfc;
        kk_std_core_hnd__clause2 _fun_test_fail = _con_x292->_fun_test_fail;
        if kk_likely(kk_datatype_ptr_is_unique(h, _ctx)) {
          kk_integer_drop(_pat_0_1, _ctx);
          kk_datatype_ptr_free(h, _ctx);
        }
        else {
          kk_std_core_hnd__clause2_dup(_fun_test_fail, _ctx);
          kk_datatype_ptr_decref(h, _ctx);
        }
        {
          kk_function_t _fun_unbox_x89 = _fun_test_fail.clause;
          _x_x290 = kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_box_t, kk_box_t, kk_context_t*), _fun_unbox_x89, (_fun_unbox_x89, m, evx_10049, kk_string_box(expected_0_10003), kk_string_box(actual_0_10004), _ctx), _ctx); /*1016*/
        }
      }
    }
    kk_unit_unbox(_x_x290); return kk_Unit;
  }
  {
    kk_function_drop(_implicit_fs_show, _ctx);
    kk_box_drop(expected, _ctx);
    kk_box_drop(actual, _ctx);
    kk_Unit; return kk_Unit;
  }
}


// lift anonymous function
struct kk_utest_test_fun294__t {
  struct kk_function_s _base;
  kk_string_t test_name;
};
static kk_unit_t kk_utest_test_fun294(kk_function_t _fself, int32_t m, kk_std_core_hnd__ev ev, kk_string_t x1, kk_string_t x2, kk_context_t* _ctx);
static kk_function_t kk_utest_new_test_fun294(kk_string_t test_name, kk_context_t* _ctx) {
  struct kk_utest_test_fun294__t* _self = kk_function_alloc_as(struct kk_utest_test_fun294__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_utest_test_fun294, kk_context());
  _self->test_name = test_name;
  return kk_datatype_from_base(&_self->_base, kk_context());
}



// lift anonymous function
struct kk_utest_test_fun296__t {
  struct kk_function_s _base;
  kk_string_t test_name;
};
static kk_box_t kk_utest_test_fun296(kk_function_t _fself, kk_box_t _b_x111, kk_box_t _b_x112, kk_context_t* _ctx);
static kk_function_t kk_utest_new_test_fun296(kk_string_t test_name, kk_context_t* _ctx) {
  struct kk_utest_test_fun296__t* _self = kk_function_alloc_as(struct kk_utest_test_fun296__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_utest_test_fun296, kk_context());
  _self->test_name = test_name;
  return kk_datatype_from_base(&_self->_base, kk_context());
}



// lift anonymous function
struct kk_utest_test_fun297__t {
  struct kk_function_s _base;
};
static kk_std_core_hnd__clause1 kk_utest_test_fun297(kk_function_t _fself, kk_utest__test_case hnd, kk_context_t* _ctx);
static kk_function_t kk_utest_new_test_fun297(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_utest_test_fun297, _ctx)
  return kk_function_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_utest_test_fun300__t {
  struct kk_function_s _base;
};
static kk_std_core_hnd__clause1 kk_utest_test_fun300(kk_function_t _fself, kk_utest__test_case _x1_x299, kk_context_t* _ctx);
static kk_function_t kk_utest_new_test_fun300(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_utest_test_fun300, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_std_core_hnd__clause1 kk_utest_test_fun300(kk_function_t _fself, kk_utest__test_case _x1_x299, kk_context_t* _ctx) {
  kk_unused(_fself);
  return kk_utest__select_test_case_fail(_x1_x299, _ctx);
}
static kk_std_core_hnd__clause1 kk_utest_test_fun297(kk_function_t _fself, kk_utest__test_case hnd, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core_hnd__clause1 _brw_x230;
  kk_function_t _x_x298 = kk_utest_new_test_fun300(_ctx); /*(hnd : utest/test-case<616,617>) -> hnd/clause1<(string, string, string),(),utest/test-case,616,617>*/
  _brw_x230 = kk_function_call(kk_std_core_hnd__clause1, (kk_function_t, kk_utest__test_case, kk_context_t*), _x_x298, (_x_x298, hnd, _ctx), _ctx); /*hnd/clause1<(string, string, string),(),utest/test-case,616,617>*/
  kk_utest__test_case_drop(hnd, _ctx);
  return _brw_x230;
}


// lift anonymous function
struct kk_utest_test_fun301__t {
  struct kk_function_s _base;
  kk_function_t _b_x102_133;
};
static kk_std_core_hnd__clause1 kk_utest_test_fun301(kk_function_t _fself, kk_box_t _b_x106, kk_context_t* _ctx);
static kk_function_t kk_utest_new_test_fun301(kk_function_t _b_x102_133, kk_context_t* _ctx) {
  struct kk_utest_test_fun301__t* _self = kk_function_alloc_as(struct kk_utest_test_fun301__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_utest_test_fun301, kk_context());
  _self->_b_x102_133 = _b_x102_133;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_std_core_hnd__clause1 kk_utest_test_fun301(kk_function_t _fself, kk_box_t _b_x106, kk_context_t* _ctx) {
  struct kk_utest_test_fun301__t* _self = kk_function_as(struct kk_utest_test_fun301__t*, _fself, _ctx);
  kk_function_t _b_x102_133 = _self->_b_x102_133; /* (hnd : utest/test-case<616,617>) -> hnd/clause1<(string, string, string),(),utest/test-case,616,617> */
  kk_drop_match(_self, {kk_function_dup(_b_x102_133, _ctx);}, {}, _ctx)
  kk_utest__test_case _x_x302 = kk_utest__test_case_unbox(_b_x106, KK_OWNED, _ctx); /*utest/test-case<616,617>*/
  return kk_function_call(kk_std_core_hnd__clause1, (kk_function_t, kk_utest__test_case, kk_context_t*), _b_x102_133, (_b_x102_133, _x_x302, _ctx), _ctx);
}
static kk_box_t kk_utest_test_fun296(kk_function_t _fself, kk_box_t _b_x111, kk_box_t _b_x112, kk_context_t* _ctx) {
  struct kk_utest_test_fun296__t* _self = kk_function_as(struct kk_utest_test_fun296__t*, _fself, _ctx);
  kk_string_t test_name = _self->test_name; /* string */
  kk_drop_match(_self, {kk_string_dup(test_name, _ctx);}, {}, _ctx)
  kk_string_t expected_139 = kk_string_unbox(_b_x111); /*string*/;
  kk_string_t actual_140 = kk_string_unbox(_b_x112); /*string*/;
  kk_std_core_hnd__ev _b_x101_132 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<utest/test-case>*/;
  kk_function_t _b_x102_133 = kk_utest_new_test_fun297(_ctx); /*(hnd : utest/test-case<616,617>) -> hnd/clause1<(string, string, string),(),utest/test-case,616,617>*/;
  kk_string_t _b_x103_134 = test_name; /*string*/;
  kk_string_t _b_x104_135 = expected_139; /*string*/;
  kk_string_t _b_x105_136 = actual_140; /*string*/;
  return kk_std_core_hnd__perform3(_b_x101_132, kk_utest_new_test_fun301(_b_x102_133, _ctx), kk_string_box(_b_x103_134), kk_string_box(_b_x104_135), kk_string_box(_b_x105_136), _ctx);
}
static kk_unit_t kk_utest_test_fun294(kk_function_t _fself, int32_t m, kk_std_core_hnd__ev ev, kk_string_t x1, kk_string_t x2, kk_context_t* _ctx) {
  struct kk_utest_test_fun294__t* _self = kk_function_as(struct kk_utest_test_fun294__t*, _fself, _ctx);
  kk_string_t test_name = _self->test_name; /* string */
  kk_drop_match(_self, {kk_string_dup(test_name, _ctx);}, {}, _ctx)
  kk_box_t _x_x295 = kk_std_core_hnd_under2(ev, kk_utest_new_test_fun296(test_name, _ctx), kk_string_box(x1), kk_string_box(x2), _ctx); /*3007*/
  kk_unit_unbox(_x_x295); return kk_Unit;
}


// lift anonymous function
struct kk_utest_test_fun305__t {
  struct kk_function_s _base;
  kk_function_t _b_x113_127;
};
static kk_box_t kk_utest_test_fun305(kk_function_t _fself, int32_t _b_x114, kk_std_core_hnd__ev _b_x115, kk_box_t _b_x116, kk_box_t _b_x117, kk_context_t* _ctx);
static kk_function_t kk_utest_new_test_fun305(kk_function_t _b_x113_127, kk_context_t* _ctx) {
  struct kk_utest_test_fun305__t* _self = kk_function_alloc_as(struct kk_utest_test_fun305__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_utest_test_fun305, kk_context());
  _self->_b_x113_127 = _b_x113_127;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_utest_test_fun305(kk_function_t _fself, int32_t _b_x114, kk_std_core_hnd__ev _b_x115, kk_box_t _b_x116, kk_box_t _b_x117, kk_context_t* _ctx) {
  struct kk_utest_test_fun305__t* _self = kk_function_as(struct kk_utest_test_fun305__t*, _fself, _ctx);
  kk_function_t _b_x113_127 = _self->_b_x113_127; /* (m : hnd/marker<utest/test-case,()>, ev : hnd/ev<utest/test>, x1 : string, x2 : string) -> utest/test-case () */
  kk_drop_match(_self, {kk_function_dup(_b_x113_127, _ctx);}, {}, _ctx)
  kk_unit_t _x_x306 = kk_Unit;
  kk_string_t _x_x307 = kk_string_unbox(_b_x116); /*string*/
  kk_string_t _x_x308 = kk_string_unbox(_b_x117); /*string*/
  kk_function_call(kk_unit_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_string_t, kk_string_t, kk_context_t*), _b_x113_127, (_b_x113_127, _b_x114, _b_x115, _x_x307, _x_x308, _ctx), _ctx);
  return kk_unit_box(_x_x306);
}


// lift anonymous function
struct kk_utest_test_fun309__t {
  struct kk_function_s _base;
};
static kk_box_t kk_utest_test_fun309(kk_function_t _fself, kk_box_t _b_x123, kk_context_t* _ctx);
static kk_function_t kk_utest_new_test_fun309(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_utest_test_fun309, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_utest_test_fun309(kk_function_t _fself, kk_box_t _b_x123, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_unit_t _x_141 = kk_Unit;
  kk_unit_unbox(_b_x123);
  return kk_unit_box(_x_141);
}


// lift anonymous function
struct kk_utest_test_fun310__t {
  struct kk_function_s _base;
  kk_function_t tests;
};
static kk_box_t kk_utest_test_fun310(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_utest_new_test_fun310(kk_function_t tests, kk_context_t* _ctx) {
  struct kk_utest_test_fun310__t* _self = kk_function_alloc_as(struct kk_utest_test_fun310__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_utest_test_fun310, kk_context());
  _self->tests = tests;
  return kk_datatype_from_base(&_self->_base, kk_context());
}



// lift anonymous function
struct kk_utest_test_fun311__t {
  struct kk_function_s _base;
  kk_function_t _b_x119_138;
};
static kk_box_t kk_utest_test_fun311(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_utest_new_test_fun311(kk_function_t _b_x119_138, kk_context_t* _ctx) {
  struct kk_utest_test_fun311__t* _self = kk_function_alloc_as(struct kk_utest_test_fun311__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_utest_test_fun311, kk_context());
  _self->_b_x119_138 = _b_x119_138;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_utest_test_fun311(kk_function_t _fself, kk_context_t* _ctx) {
  struct kk_utest_test_fun311__t* _self = kk_function_as(struct kk_utest_test_fun311__t*, _fself, _ctx);
  kk_function_t _b_x119_138 = _self->_b_x119_138; /* () -> utest/test () */
  kk_drop_match(_self, {kk_function_dup(_b_x119_138, _ctx);}, {}, _ctx)
  kk_unit_t _x_x312 = kk_Unit;
  kk_function_call(kk_unit_t, (kk_function_t, kk_context_t*), _b_x119_138, (_b_x119_138, _ctx), _ctx);
  return kk_unit_box(_x_x312);
}
static kk_box_t kk_utest_test_fun310(kk_function_t _fself, kk_context_t* _ctx) {
  struct kk_utest_test_fun310__t* _self = kk_function_as(struct kk_utest_test_fun310__t*, _fself, _ctx);
  kk_function_t tests = _self->tests; /* () -> utest/test () */
  kk_drop_match(_self, {kk_function_dup(tests, _ctx);}, {}, _ctx)
  kk_ssize_t _b_x118_137 = (KK_IZ(0)); /*hnd/ev-index*/;
  kk_function_t _b_x119_138 = tests; /*() -> utest/test ()*/;
  return kk_std_core_hnd__open_at0(_b_x118_137, kk_utest_new_test_fun311(_b_x119_138, _ctx), _ctx);
}

kk_unit_t kk_utest_test(kk_string_t test_name, kk_function_t tests, kk_context_t* _ctx) { /* (test-name : string, tests : () -> test ()) -> test-case () */ 
  kk_box_t _x_x293;
  kk_function_t _b_x113_127 = kk_utest_new_test_fun294(test_name, _ctx); /*(m : hnd/marker<utest/test-case,()>, ev : hnd/ev<utest/test>, x1 : string, x2 : string) -> utest/test-case ()*/;
  kk_utest__test _x_x303;
  kk_std_core_hnd__clause2 _x_x304 = kk_std_core_hnd__new_Clause2(kk_utest_new_test_fun305(_b_x113_127, _ctx), _ctx); /*hnd/clause2<1021,1022,1023,1024,1025,1026>*/
  _x_x303 = kk_utest__new_Hnd_test(kk_reuse_null, 0, kk_integer_from_small(1), _x_x304, _ctx); /*utest/test<7,8>*/
  _x_x293 = kk_utest__handle_test(_x_x303, kk_utest_new_test_fun309(_ctx), kk_utest_new_test_fun310(tests, _ctx), _ctx); /*470*/
  kk_unit_unbox(_x_x293); return kk_Unit;
}


// lift anonymous function
struct kk_utest_suite_fun314__t {
  struct kk_function_s _base;
  kk_string_t suite_name;
};
static kk_box_t kk_utest_suite_fun314(kk_function_t _fself, kk_box_t _b_x152, kk_context_t* _ctx);
static kk_function_t kk_utest_new_suite_fun314(kk_string_t suite_name, kk_context_t* _ctx) {
  struct kk_utest_suite_fun314__t* _self = kk_function_alloc_as(struct kk_utest_suite_fun314__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_utest_suite_fun314, kk_context());
  _self->suite_name = suite_name;
  return kk_datatype_from_base(&_self->_base, kk_context());
}



// lift anonymous function
struct kk_utest_suite_fun317__t {
  struct kk_function_s _base;
};
static kk_std_core_hnd__clause1 kk_utest_suite_fun317(kk_function_t _fself, kk_box_t _b_x150, kk_context_t* _ctx);
static kk_function_t kk_utest_new_suite_fun317(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_utest_suite_fun317, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_std_core_hnd__clause1 kk_utest_suite_fun317(kk_function_t _fself, kk_box_t _b_x150, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_utest__test_suite _brw_x228 = kk_utest__test_suite_unbox(_b_x150, KK_OWNED, _ctx); /*utest/test-suite<741,742>*/;
  kk_std_core_hnd__clause1 _brw_x229 = kk_utest__select_test_suite_fail(_brw_x228, _ctx); /*hnd/clause1<(string, string, string),(),utest/test-suite,741,742>*/;
  kk_utest__test_suite_drop(_brw_x228, _ctx);
  return _brw_x229;
}
static kk_box_t kk_utest_suite_fun314(kk_function_t _fself, kk_box_t _b_x152, kk_context_t* _ctx) {
  struct kk_utest_suite_fun314__t* _self = kk_function_as(struct kk_utest_suite_fun314__t*, _fself, _ctx);
  kk_string_t suite_name = _self->suite_name; /* string */
  kk_drop_match(_self, {kk_string_dup(suite_name, _ctx);}, {}, _ctx)
  kk_unit_t _x_x315 = kk_Unit;
  kk_std_core_types__tuple3 _pat_x750__20_171 = kk_std_core_types__tuple3_unbox(_b_x152, KK_OWNED, _ctx); /*(string, string, string)*/;
  {
    kk_box_t _box_x142 = _pat_x750__20_171.fst;
    kk_box_t _box_x143 = _pat_x750__20_171.snd;
    kk_box_t _box_x144 = _pat_x750__20_171.thd;
    kk_string_t x2 = kk_string_unbox(_box_x143);
    kk_string_t x3 = kk_string_unbox(_box_x144);
    kk_string_dup(x2, _ctx);
    kk_string_dup(x3, _ctx);
    kk_std_core_types__tuple3_drop(_pat_x750__20_171, _ctx);
    kk_std_core_hnd__ev _b_x145_163 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<utest/test-suite>*/;
    kk_box_t _x_x316 = kk_std_core_hnd__perform3(_b_x145_163, kk_utest_new_suite_fun317(_ctx), kk_string_box(suite_name), kk_string_box(x2), kk_string_box(x3), _ctx); /*1003*/
    kk_unit_unbox(_x_x316);
  }
  return kk_unit_box(_x_x315);
}


// lift anonymous function
struct kk_utest_suite_fun319__t {
  struct kk_function_s _base;
};
static kk_box_t kk_utest_suite_fun319(kk_function_t _fself, kk_box_t _b_x158, kk_context_t* _ctx);
static kk_function_t kk_utest_new_suite_fun319(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_utest_suite_fun319, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_utest_suite_fun319(kk_function_t _fself, kk_box_t _b_x158, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_unit_t _x_170 = kk_Unit;
  kk_unit_unbox(_b_x158);
  return kk_unit_box(_x_170);
}


// lift anonymous function
struct kk_utest_suite_fun320__t {
  struct kk_function_s _base;
  kk_function_t test_cases;
};
static kk_box_t kk_utest_suite_fun320(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_utest_new_suite_fun320(kk_function_t test_cases, kk_context_t* _ctx) {
  struct kk_utest_suite_fun320__t* _self = kk_function_alloc_as(struct kk_utest_suite_fun320__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_utest_suite_fun320, kk_context());
  _self->test_cases = test_cases;
  return kk_datatype_from_base(&_self->_base, kk_context());
}



// lift anonymous function
struct kk_utest_suite_fun321__t {
  struct kk_function_s _base;
  kk_function_t _b_x154_169;
};
static kk_box_t kk_utest_suite_fun321(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_utest_new_suite_fun321(kk_function_t _b_x154_169, kk_context_t* _ctx) {
  struct kk_utest_suite_fun321__t* _self = kk_function_alloc_as(struct kk_utest_suite_fun321__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_utest_suite_fun321, kk_context());
  _self->_b_x154_169 = _b_x154_169;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_utest_suite_fun321(kk_function_t _fself, kk_context_t* _ctx) {
  struct kk_utest_suite_fun321__t* _self = kk_function_as(struct kk_utest_suite_fun321__t*, _fself, _ctx);
  kk_function_t _b_x154_169 = _self->_b_x154_169; /* () -> utest/test-case () */
  kk_drop_match(_self, {kk_function_dup(_b_x154_169, _ctx);}, {}, _ctx)
  kk_unit_t _x_x322 = kk_Unit;
  kk_function_call(kk_unit_t, (kk_function_t, kk_context_t*), _b_x154_169, (_b_x154_169, _ctx), _ctx);
  return kk_unit_box(_x_x322);
}
static kk_box_t kk_utest_suite_fun320(kk_function_t _fself, kk_context_t* _ctx) {
  struct kk_utest_suite_fun320__t* _self = kk_function_as(struct kk_utest_suite_fun320__t*, _fself, _ctx);
  kk_function_t test_cases = _self->test_cases; /* () -> utest/test-case () */
  kk_drop_match(_self, {kk_function_dup(test_cases, _ctx);}, {}, _ctx)
  kk_ssize_t _b_x153_168 = (KK_IZ(0)); /*hnd/ev-index*/;
  kk_function_t _b_x154_169 = test_cases; /*() -> utest/test-case ()*/;
  return kk_std_core_hnd__open_at0(_b_x153_168, kk_utest_new_suite_fun321(_b_x154_169, _ctx), _ctx);
}

kk_unit_t kk_utest_suite(kk_string_t suite_name, kk_function_t test_cases, kk_context_t* _ctx) { /* (suite-name : string, test-cases : () -> test-case ()) -> test-suite () */ 
  kk_utest__test_case _b_x155_159;
  kk_std_core_hnd__clause1 _x_x313 = kk_std_core_hnd_clause_tail1(kk_utest_new_suite_fun314(suite_name, _ctx), _ctx); /*hnd/clause1<3009,3010,3008,3006,3007>*/
  _b_x155_159 = kk_utest__new_Hnd_test_case(kk_reuse_null, 0, kk_integer_from_small(1), _x_x313, _ctx); /*utest/test-case<utest/test-suite,()>*/
  kk_box_t _x_x318 = kk_utest__handle_test_case(_b_x155_159, kk_utest_new_suite_fun319(_ctx), kk_utest_new_suite_fun320(test_cases, _ctx), _ctx); /*591*/
  kk_unit_unbox(_x_x318); return kk_Unit;
}


// lift anonymous function
struct kk_utest_run_utest_fun327__t {
  struct kk_function_s _base;
  kk_ref_t loc;
};
static kk_box_t kk_utest_run_utest_fun327(kk_function_t _fself, int32_t _b_x186, kk_std_core_hnd__ev _b_x187, kk_box_t _b_x188, kk_context_t* _ctx);
static kk_function_t kk_utest_new_run_utest_fun327(kk_ref_t loc, kk_context_t* _ctx) {
  struct kk_utest_run_utest_fun327__t* _self = kk_function_alloc_as(struct kk_utest_run_utest_fun327__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_utest_run_utest_fun327, kk_context());
  _self->loc = loc;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_utest_run_utest_fun327(kk_function_t _fself, int32_t _b_x186, kk_std_core_hnd__ev _b_x187, kk_box_t _b_x188, kk_context_t* _ctx) {
  struct kk_utest_run_utest_fun327__t* _self = kk_function_as(struct kk_utest_run_utest_fun327__t*, _fself, _ctx);
  kk_ref_t loc = _self->loc; /* local-var<1685,list<(string, string, string)>> */
  kk_drop_match(_self, {kk_ref_dup(loc, _ctx);}, {}, _ctx)
  int32_t ___wildcard_x633__14_223 = _b_x186; /*hnd/marker<<local<1685>,console/console>,()>*/;
  kk_std_core_hnd__ev ___wildcard_x633__17_224 = _b_x187; /*hnd/ev<utest/test-suite>*/;
  kk_datatype_ptr_dropn(___wildcard_x633__17_224, (KK_I32(3)), _ctx);
  kk_std_core_types__tuple3 x_225 = kk_std_core_types__tuple3_unbox(_b_x188, KK_OWNED, _ctx); /*(string, string, string)*/;
  kk_unit_t _x_x328 = kk_Unit;
  {
    kk_box_t _box_x174 = x_225.fst;
    kk_box_t _box_x175 = x_225.snd;
    kk_box_t _box_x176 = x_225.thd;
    kk_string_t x1 = kk_string_unbox(_box_x174);
    kk_string_t x2 = kk_string_unbox(_box_x175);
    kk_string_t x3 = kk_string_unbox(_box_x176);
    kk_string_dup(x1, _ctx);
    kk_string_dup(x2, _ctx);
    kk_string_dup(x3, _ctx);
    kk_std_core_types__tuple3_drop(x_225, _ctx);
    kk_std_core_types__list _b_x184_198;
    kk_std_core_types__list _x_x329;
    kk_box_t _x_x330;
    kk_ref_t _x_x331 = kk_ref_dup(loc, _ctx); /*local-var<1685,list<(string, string, string)>>*/
    _x_x330 = kk_ref_get(_x_x331,kk_context()); /*1000*/
    _x_x329 = kk_std_core_types__list_unbox(_x_x330, KK_OWNED, _ctx); /*list<(string, string, string)>*/
    kk_std_core_types__list _x_x332;
    kk_box_t _x_x333;
    kk_std_core_types__tuple3 _x_x334 = kk_std_core_types__new_Tuple3(kk_string_box(x1), kk_string_box(x2), kk_string_box(x3), _ctx); /*(3347, 3348, 3349)*/
    _x_x333 = kk_std_core_types__tuple3_box(_x_x334, _ctx); /*1024*/
    _x_x332 = kk_std_core_types__new_Cons(kk_reuse_null, 0, _x_x333, kk_std_core_types__new_Nil(_ctx), _ctx); /*list<1024>*/
    _b_x184_198 = kk_std_core_list_append(_x_x329, _x_x332, _ctx); /*list<(string, string, string)>*/
    kk_unit_t _brw_x227 = kk_Unit;
    kk_ref_set_borrow(loc,(kk_std_core_types__list_box(_b_x184_198, _ctx)),kk_context());
    kk_ref_drop(loc, _ctx);
    _brw_x227;
  }
  return kk_unit_box(_x_x328);
}


// lift anonymous function
struct kk_utest_run_utest_fun335__t {
  struct kk_function_s _base;
};
static kk_box_t kk_utest_run_utest_fun335(kk_function_t _fself, kk_box_t _b_x192, kk_context_t* _ctx);
static kk_function_t kk_utest_new_run_utest_fun335(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_utest_run_utest_fun335, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_utest_run_utest_fun335(kk_function_t _fself, kk_box_t _b_x192, kk_context_t* _ctx) {
  kk_unused(_fself);
  return _b_x192;
}


// lift anonymous function
struct kk_utest_run_utest_fun336__t {
  struct kk_function_s _base;
  kk_function_t test_suites;
};
static kk_box_t kk_utest_run_utest_fun336(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_utest_new_run_utest_fun336(kk_function_t test_suites, kk_context_t* _ctx) {
  struct kk_utest_run_utest_fun336__t* _self = kk_function_alloc_as(struct kk_utest_run_utest_fun336__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_utest_run_utest_fun336, kk_context());
  _self->test_suites = test_suites;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_utest_run_utest_fun336(kk_function_t _fself, kk_context_t* _ctx) {
  struct kk_utest_run_utest_fun336__t* _self = kk_function_as(struct kk_utest_run_utest_fun336__t*, _fself, _ctx);
  kk_function_t test_suites = _self->test_suites; /* () -> utest/test-suite () */
  kk_drop_match(_self, {kk_function_dup(test_suites, _ctx);}, {}, _ctx)
  kk_unit_t _x_x337 = kk_Unit;
  kk_function_call(kk_unit_t, (kk_function_t, kk_context_t*), test_suites, (test_suites, _ctx), _ctx);
  return kk_unit_box(_x_x337);
}


// lift anonymous function
struct kk_utest_run_utest_fun348__t {
  struct kk_function_s _base;
};
static kk_box_t kk_utest_run_utest_fun348(kk_function_t _fself, kk_box_t _b_x214, kk_context_t* _ctx);
static kk_function_t kk_utest_new_run_utest_fun348(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_utest_run_utest_fun348, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_utest_run_utest_fun348(kk_function_t _fself, kk_box_t _b_x214, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_unit_t _x_x349 = kk_Unit;
  kk_std_core_types__tuple3 _match_x226 = kk_std_core_types__tuple3_unbox(_b_x214, KK_OWNED, _ctx); /*(string, string, string)*/;
  {
    kk_box_t _box_x209 = _match_x226.fst;
    kk_box_t _box_x210 = _match_x226.snd;
    kk_box_t _box_x211 = _match_x226.thd;
    kk_string_t suite_name_0 = kk_string_unbox(_box_x209);
    kk_string_t expected_0 = kk_string_unbox(_box_x210);
    kk_string_t actual_0 = kk_string_unbox(_box_x211);
    kk_string_dup(actual_0, _ctx);
    kk_string_dup(expected_0, _ctx);
    kk_string_dup(suite_name_0, _ctx);
    kk_std_core_types__tuple3_drop(_match_x226, _ctx);
    kk_string_t s_1_10016;
    kk_string_t _x_x350;
    kk_define_string_literal(, _s_x351, 10, "failed at ", _ctx)
    _x_x350 = kk_string_dup(_s_x351, _ctx); /*string*/
    s_1_10016 = kk_std_core_types__lp__plus__plus__rp_(_x_x350, suite_name_0, _ctx); /*string*/
    kk_unit_t ___2 = kk_Unit;
    kk_std_core_console_printsln(s_1_10016, _ctx);
    kk_string_t s_2_10017;
    kk_string_t _x_x352;
    kk_define_string_literal(, _s_x353, 10, "\texpected ", _ctx)
    _x_x352 = kk_string_dup(_s_x353, _ctx); /*string*/
    kk_string_t _x_x354;
    kk_string_t _x_x355;
    kk_string_t _x_x356;
    kk_define_string_literal(, _s_x357, 10, " ,but got ", _ctx)
    _x_x356 = kk_string_dup(_s_x357, _ctx); /*string*/
    _x_x355 = kk_std_core_types__lp__plus__plus__rp_(_x_x356, actual_0, _ctx); /*string*/
    _x_x354 = kk_std_core_types__lp__plus__plus__rp_(expected_0, _x_x355, _ctx); /*string*/
    s_2_10017 = kk_std_core_types__lp__plus__plus__rp_(_x_x352, _x_x354, _ctx); /*string*/
    kk_std_core_console_printsln(s_2_10017, _ctx);
  }
  return kk_unit_box(_x_x349);
}

kk_unit_t kk_utest_run_utest(kk_function_t test_suites, kk_context_t* _ctx) { /* (test-suites : () -> test-suite ()) -> console/console () */ 
  kk_ref_t loc = kk_ref_alloc((kk_std_core_types__list_box(kk_std_core_types__new_Nil(_ctx), _ctx)),kk_context()); /*local-var<1685,list<(string, string, string)>>*/;
  kk_unit_t __ = kk_Unit;
  kk_box_t _x_x323;
  kk_utest__test_suite _x_x324;
  kk_std_core_hnd__clause1 _x_x325;
  kk_function_t _x_x326;
  kk_ref_dup(loc, _ctx);
  _x_x326 = kk_utest_new_run_utest_fun327(loc, _ctx); /*(hnd/marker<1018,1019>, hnd/ev<1017>, 1015) -> 1018 1016*/
  _x_x325 = kk_std_core_hnd__new_Clause1(_x_x326, _ctx); /*hnd/clause1<1015,1016,1017,1018,1019>*/
  _x_x324 = kk_utest__new_Hnd_test_suite(kk_reuse_null, 0, kk_integer_from_small(1), _x_x325, _ctx); /*utest/test-suite<35,36>*/
  _x_x323 = kk_utest__handle_test_suite(_x_x324, kk_utest_new_run_utest_fun335(_ctx), kk_utest_new_run_utest_fun336(test_suites, _ctx), _ctx); /*716*/
  kk_unit_unbox(_x_x323);
  kk_unit_t ___0 = kk_Unit;
  kk_string_t _x_x338;
  kk_define_string_literal(, _s_x339, 15, "Running test...", _ctx)
  _x_x338 = kk_string_dup(_s_x339, _ctx); /*string*/
  kk_std_core_console_printsln(_x_x338, _ctx);
  kk_std_core_types__list xs_10014;
  kk_box_t _x_x340;
  kk_ref_t _x_x341 = kk_ref_dup(loc, _ctx); /*local-var<1685,list<(string, string, string)>>*/
  _x_x340 = kk_ref_get(_x_x341,kk_context()); /*1000*/
  xs_10014 = kk_std_core_types__list_unbox(_x_x340, KK_OWNED, _ctx); /*list<(string, string, string)>*/
  kk_unit_t res = kk_Unit;
  if (kk_std_core_types__is_Nil(xs_10014, _ctx)) {
    kk_string_t _x_x342;
    kk_define_string_literal(, _s_x343, 19, "All Test Has Passed", _ctx)
    _x_x342 = kk_string_dup(_s_x343, _ctx); /*string*/
    kk_std_core_console_printsln(_x_x342, _ctx);
  }
  else {
    kk_std_core_types__list_drop(xs_10014, _ctx);
    kk_unit_t ___1 = kk_Unit;
    kk_string_t _x_x344;
    kk_define_string_literal(, _s_x345, 12, "Test Failed!", _ctx)
    _x_x344 = kk_string_dup(_s_x345, _ctx); /*string*/
    kk_std_core_console_printsln(_x_x344, _ctx);
    kk_std_core_types__list _b_x212_215;
    kk_box_t _x_x346;
    kk_ref_t _x_x347 = kk_ref_dup(loc, _ctx); /*local-var<1685,list<(string, string, string)>>*/
    _x_x346 = kk_ref_get(_x_x347,kk_context()); /*1000*/
    _b_x212_215 = kk_std_core_types__list_unbox(_x_x346, KK_OWNED, _ctx); /*list<(string, string, string)>*/
    kk_std_core_types__list ___3 = kk_std_core_list_map(_b_x212_215, kk_utest_new_run_utest_fun348(_ctx), _ctx); /*list<()>*/;
    kk_std_core_types__list_drop(___3, _ctx);
  }
  kk_box_t _x_x358 = kk_std_core_hnd_prompt_local_var(loc, kk_unit_box(res), _ctx); /*3686*/
  kk_unit_unbox(_x_x358); return kk_Unit;
}

// initialization
void kk_utest__init(kk_context_t* _ctx){
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
  kk_std_core_maybe__init(_ctx);
  kk_std_core_either__init(_ctx);
  kk_std_core_tuple__init(_ctx);
  kk_std_core_show__init(_ctx);
  kk_std_core_debug__init(_ctx);
  kk_std_core_delayed__init(_ctx);
  kk_std_core_console__init(_ctx);
  kk_std_core__init(_ctx);
  kk_std_core_list__init(_ctx);
  #if defined(KK_CUSTOM_INIT)
    KK_CUSTOM_INIT (_ctx);
  #endif
  {
    kk_string_t _x_x254;
    kk_define_string_literal(, _s_x255, 10, "test@utest", _ctx)
    _x_x254 = kk_string_dup(_s_x255, _ctx); /*string*/
    kk_utest__tag_test = kk_std_core_hnd__new_Htag(_x_x254, _ctx); /*hnd/htag<utest/test>*/
  }
  {
    kk_string_t _x_x261;
    kk_define_string_literal(, _s_x262, 15, "test-case@utest", _ctx)
    _x_x261 = kk_string_dup(_s_x262, _ctx); /*string*/
    kk_utest__tag_test_case = kk_std_core_hnd__new_Htag(_x_x261, _ctx); /*hnd/htag<utest/test-case>*/
  }
  {
    kk_string_t _x_x267;
    kk_define_string_literal(, _s_x268, 16, "test-suite@utest", _ctx)
    _x_x267 = kk_string_dup(_s_x268, _ctx); /*string*/
    kk_utest__tag_test_suite = kk_std_core_hnd__new_Htag(_x_x267, _ctx); /*hnd/htag<utest/test-suite>*/
  }
}

// termination
void kk_utest__done(kk_context_t* _ctx){
  static bool _kk_done = false;
  if (_kk_done) return;
  _kk_done = true;
  #if defined(KK_CUSTOM_DONE)
    KK_CUSTOM_DONE (_ctx);
  #endif
  kk_std_core_hnd__htag_drop(kk_utest__tag_test_suite, _ctx);
  kk_std_core_hnd__htag_drop(kk_utest__tag_test_case, _ctx);
  kk_std_core_hnd__htag_drop(kk_utest__tag_test, _ctx);
  kk_std_core_list__done(_ctx);
  kk_std_core__done(_ctx);
  kk_std_core_console__done(_ctx);
  kk_std_core_delayed__done(_ctx);
  kk_std_core_debug__done(_ctx);
  kk_std_core_show__done(_ctx);
  kk_std_core_tuple__done(_ctx);
  kk_std_core_either__done(_ctx);
  kk_std_core_maybe__done(_ctx);
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
