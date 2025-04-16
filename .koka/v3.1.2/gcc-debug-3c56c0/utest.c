// Koka generated module: utest, koka version: 3.1.2, platform: 64-bit
#include "utest.h"

kk_utest__test_failure kk_utest_test_failure_fs__copy(kk_utest__test_failure _this, kk_std_core_types__optional expected, kk_std_core_types__optional actual, kk_std_core_types__optional msg, kk_context_t* _ctx) { /* forall<a,b> (test-failure<a,b>, expected : ? a, actual : ? b, msg : ? string) -> test-failure<a,b> */ 
  kk_box_t _x_x240;
  if (kk_std_core_types__is_Optional(expected, _ctx)) {
    kk_box_t _uniq_expected_325 = expected._cons._Optional.value;
    kk_box_dup(_uniq_expected_325, _ctx);
    kk_std_core_types__optional_drop(expected, _ctx);
    _x_x240 = _uniq_expected_325; /*370*/
  }
  else {
    kk_std_core_types__optional_drop(expected, _ctx);
    {
      struct kk_utest_TestFailure* _con_x241 = kk_utest__as_TestFailure(_this, _ctx);
      kk_box_t _x = _con_x241->expected;
      kk_box_dup(_x, _ctx);
      _x_x240 = _x; /*370*/
    }
  }
  kk_box_t _x_x242;
  if (kk_std_core_types__is_Optional(actual, _ctx)) {
    kk_box_t _uniq_actual_338 = actual._cons._Optional.value;
    kk_box_dup(_uniq_actual_338, _ctx);
    kk_std_core_types__optional_drop(actual, _ctx);
    _x_x242 = _uniq_actual_338; /*371*/
  }
  else {
    kk_std_core_types__optional_drop(actual, _ctx);
    {
      struct kk_utest_TestFailure* _con_x243 = kk_utest__as_TestFailure(_this, _ctx);
      kk_box_t _x_0 = _con_x243->actual;
      kk_box_dup(_x_0, _ctx);
      _x_x242 = _x_0; /*371*/
    }
  }
  kk_string_t _x_x244;
  if (kk_std_core_types__is_Optional(msg, _ctx)) {
    kk_box_t _box_x0 = msg._cons._Optional.value;
    kk_string_t _uniq_msg_351 = kk_string_unbox(_box_x0);
    kk_string_dup(_uniq_msg_351, _ctx);
    kk_std_core_types__optional_drop(msg, _ctx);
    kk_datatype_ptr_dropn(_this, (KK_I32(3)), _ctx);
    _x_x244 = _uniq_msg_351; /*string*/
  }
  else {
    kk_std_core_types__optional_drop(msg, _ctx);
    {
      struct kk_utest_TestFailure* _con_x245 = kk_utest__as_TestFailure(_this, _ctx);
      kk_box_t _pat_0_2 = _con_x245->expected;
      kk_box_t _pat_1_3 = _con_x245->actual;
      kk_string_t _x_1 = _con_x245->msg;
      if kk_likely(kk_datatype_ptr_is_unique(_this, _ctx)) {
        kk_box_drop(_pat_1_3, _ctx);
        kk_box_drop(_pat_0_2, _ctx);
        kk_datatype_ptr_free(_this, _ctx);
      }
      else {
        kk_string_dup(_x_1, _ctx);
        kk_datatype_ptr_decref(_this, _ctx);
      }
      _x_x244 = _x_1; /*string*/
    }
  }
  return kk_utest__new_TestFailure(kk_reuse_null, 0, _x_x240, _x_x242, _x_x244, _ctx);
}
 
// runtime tag for the effect `:test`

kk_std_core_hnd__htag kk_utest__tag_test;
 
// handler for the effect `:test`

kk_box_t kk_utest__handle_test(kk_utest__test hnd, kk_function_t ret, kk_function_t action, kk_context_t* _ctx) { /* forall<a,e,b> (hnd : test<e,b>, ret : (res : a) -> e b, action : () -> <test|e> a) -> e b */ 
  kk_std_core_hnd__htag _x_x250 = kk_std_core_hnd__htag_dup(kk_utest__tag_test, _ctx); /*hnd/htag<utest/test>*/
  return kk_std_core_hnd__hhandle(_x_x250, kk_utest__test_box(hnd, _ctx), ret, action, _ctx);
}
 
// runtime tag for the effect `:test-case`

kk_std_core_hnd__htag kk_utest__tag_test_case;
 
// handler for the effect `:test-case`

kk_box_t kk_utest__handle_test_case(kk_utest__test_case hnd, kk_function_t ret, kk_function_t action, kk_context_t* _ctx) { /* forall<a,e,b> (hnd : test-case<e,b>, ret : (res : a) -> e b, action : () -> <test-case|e> a) -> e b */ 
  kk_std_core_hnd__htag _x_x257 = kk_std_core_hnd__htag_dup(kk_utest__tag_test_case, _ctx); /*hnd/htag<utest/test-case>*/
  return kk_std_core_hnd__hhandle(_x_x257, kk_utest__test_case_box(hnd, _ctx), ret, action, _ctx);
}
 
// runtime tag for the effect `:test-suite`

kk_std_core_hnd__htag kk_utest__tag_test_suite;
 
// handler for the effect `:test-suite`

kk_box_t kk_utest__handle_test_suite(kk_utest__test_suite hnd, kk_function_t ret, kk_function_t action, kk_context_t* _ctx) { /* forall<a,e,b> (hnd : test-suite<e,b>, ret : (res : a) -> e b, action : () -> <test-suite|e> a) -> e b */ 
  kk_std_core_hnd__htag _x_x264 = kk_std_core_hnd__htag_dup(kk_utest__tag_test_suite, _ctx); /*hnd/htag<utest/test-suite>*/
  return kk_std_core_hnd__hhandle(_x_x264, kk_utest__test_suite_box(hnd, _ctx), ret, action, _ctx);
}
extern kk_std_core_hnd__clause1 kk_utest_test_suite_fail_fun267(kk_function_t _fself, kk_box_t _b_x50, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_utest__test_suite _brw_x227 = kk_utest__test_suite_unbox(_b_x50, KK_OWNED, _ctx); /*utest/test-suite<733,734>*/;
  kk_std_core_hnd__clause1 _brw_x228 = kk_utest__select_test_suite_fail(_brw_x227, _ctx); /*hnd/clause1<(string, string, string),(),utest/test-suite,733,734>*/;
  kk_utest__test_suite_drop(_brw_x227, _ctx);
  return _brw_x228;
}


// lift anonymous function
struct kk_utest_assert_eq_fun269__t {
  struct kk_function_s _base;
};
static kk_box_t kk_utest_assert_eq_fun269(kk_function_t _fself, kk_box_t _b_x60, kk_box_t _b_x61, kk_box_t _b_x62, kk_context_t* _ctx);
static kk_function_t kk_utest_new_assert_eq_fun269(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_utest_assert_eq_fun269, _ctx)
  return kk_function_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_utest_assert_eq_fun271__t {
  struct kk_function_s _base;
  kk_box_t _b_x62;
};
static bool kk_utest_assert_eq_fun271(kk_function_t _fself, kk_box_t _b_x66, kk_box_t _b_x67, kk_context_t* _ctx);
static kk_function_t kk_utest_new_assert_eq_fun271(kk_box_t _b_x62, kk_context_t* _ctx) {
  struct kk_utest_assert_eq_fun271__t* _self = kk_function_alloc_as(struct kk_utest_assert_eq_fun271__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_utest_assert_eq_fun271, kk_context());
  _self->_b_x62 = _b_x62;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static bool kk_utest_assert_eq_fun271(kk_function_t _fself, kk_box_t _b_x66, kk_box_t _b_x67, kk_context_t* _ctx) {
  struct kk_utest_assert_eq_fun271__t* _self = kk_function_as(struct kk_utest_assert_eq_fun271__t*, _fself, _ctx);
  kk_box_t _b_x62 = _self->_b_x62; /* 1002 */
  kk_drop_match(_self, {kk_box_dup(_b_x62, _ctx);}, {}, _ctx)
  kk_box_t _x_x272;
  kk_function_t _x_x273 = kk_function_unbox(_b_x62, _ctx); /*(63, 64) -> 65*/
  _x_x272 = kk_function_call(kk_box_t, (kk_function_t, kk_box_t, kk_box_t, kk_context_t*), _x_x273, (_x_x273, _b_x66, _b_x67, _ctx), _ctx); /*65*/
  return kk_bool_unbox(_x_x272);
}
static kk_box_t kk_utest_assert_eq_fun269(kk_function_t _fself, kk_box_t _b_x60, kk_box_t _b_x61, kk_box_t _b_x62, kk_context_t* _ctx) {
  kk_unused(_fself);
  bool _x_x270;
  kk_box_t x_97 = _b_x60; /*903*/;
  kk_box_t y_98 = _b_x61; /*903*/;
  kk_function_t _implicit_fs__lp__at_x_0_99_eq__eq__rp_ = kk_utest_new_assert_eq_fun271(_b_x62, _ctx); /*(903, 903) -> bool*/;
  bool b_10002 = kk_function_call(bool, (kk_function_t, kk_box_t, kk_box_t, kk_context_t*), _implicit_fs__lp__at_x_0_99_eq__eq__rp_, (_implicit_fs__lp__at_x_0_99_eq__eq__rp_, x_97, y_98, _ctx), _ctx); /*bool*/;
  if (b_10002) {
    _x_x270 = false; /*bool*/
  }
  else {
    _x_x270 = true; /*bool*/
  }
  return kk_bool_box(_x_x270);
}


// lift anonymous function
struct kk_utest_assert_eq_fun276__t {
  struct kk_function_s _base;
  kk_function_t _implicit_fs__lp__eq__eq__rp_;
};
static kk_box_t kk_utest_assert_eq_fun276(kk_function_t _fself, kk_box_t _b_x71, kk_box_t _b_x72, kk_context_t* _ctx);
static kk_function_t kk_utest_new_assert_eq_fun276(kk_function_t _implicit_fs__lp__eq__eq__rp_, kk_context_t* _ctx) {
  struct kk_utest_assert_eq_fun276__t* _self = kk_function_alloc_as(struct kk_utest_assert_eq_fun276__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_utest_assert_eq_fun276, kk_context());
  _self->_implicit_fs__lp__eq__eq__rp_ = _implicit_fs__lp__eq__eq__rp_;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_utest_assert_eq_fun276(kk_function_t _fself, kk_box_t _b_x71, kk_box_t _b_x72, kk_context_t* _ctx) {
  struct kk_utest_assert_eq_fun276__t* _self = kk_function_as(struct kk_utest_assert_eq_fun276__t*, _fself, _ctx);
  kk_function_t _implicit_fs__lp__eq__eq__rp_ = _self->_implicit_fs__lp__eq__eq__rp_; /* (903, 903) -> bool */
  kk_drop_match(_self, {kk_function_dup(_implicit_fs__lp__eq__eq__rp_, _ctx);}, {}, _ctx)
  bool _x_x277 = kk_function_call(bool, (kk_function_t, kk_box_t, kk_box_t, kk_context_t*), _implicit_fs__lp__eq__eq__rp_, (_implicit_fs__lp__eq__eq__rp_, _b_x71, _b_x72, _ctx), _ctx); /*bool*/
  return kk_bool_box(_x_x277);
}


// lift anonymous function
struct kk_utest_assert_eq_fun280__t {
  struct kk_function_s _base;
  kk_function_t _implicit_fs_show;
};
static kk_box_t kk_utest_assert_eq_fun280(kk_function_t _fself, kk_box_t _b_x75, kk_context_t* _ctx);
static kk_function_t kk_utest_new_assert_eq_fun280(kk_function_t _implicit_fs_show, kk_context_t* _ctx) {
  struct kk_utest_assert_eq_fun280__t* _self = kk_function_alloc_as(struct kk_utest_assert_eq_fun280__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_utest_assert_eq_fun280, kk_context());
  _self->_implicit_fs_show = _implicit_fs_show;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_utest_assert_eq_fun280(kk_function_t _fself, kk_box_t _b_x75, kk_context_t* _ctx) {
  struct kk_utest_assert_eq_fun280__t* _self = kk_function_as(struct kk_utest_assert_eq_fun280__t*, _fself, _ctx);
  kk_function_t _implicit_fs_show = _self->_implicit_fs_show; /* (903) -> string */
  kk_drop_match(_self, {kk_function_dup(_implicit_fs_show, _ctx);}, {}, _ctx)
  kk_string_t _x_x281 = kk_function_call(kk_string_t, (kk_function_t, kk_box_t, kk_context_t*), _implicit_fs_show, (_implicit_fs_show, _b_x75, _ctx), _ctx); /*string*/
  return kk_string_box(_x_x281);
}


// lift anonymous function
struct kk_utest_assert_eq_fun283__t {
  struct kk_function_s _base;
  kk_function_t _implicit_fs_show;
};
static kk_box_t kk_utest_assert_eq_fun283(kk_function_t _fself, kk_box_t _b_x80, kk_context_t* _ctx);
static kk_function_t kk_utest_new_assert_eq_fun283(kk_function_t _implicit_fs_show, kk_context_t* _ctx) {
  struct kk_utest_assert_eq_fun283__t* _self = kk_function_alloc_as(struct kk_utest_assert_eq_fun283__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_utest_assert_eq_fun283, kk_context());
  _self->_implicit_fs_show = _implicit_fs_show;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_utest_assert_eq_fun283(kk_function_t _fself, kk_box_t _b_x80, kk_context_t* _ctx) {
  struct kk_utest_assert_eq_fun283__t* _self = kk_function_as(struct kk_utest_assert_eq_fun283__t*, _fself, _ctx);
  kk_function_t _implicit_fs_show = _self->_implicit_fs_show; /* (903) -> string */
  kk_drop_match(_self, {kk_function_dup(_implicit_fs_show, _ctx);}, {}, _ctx)
  kk_string_t _x_x284 = kk_function_call(kk_string_t, (kk_function_t, kk_box_t, kk_context_t*), _implicit_fs_show, (_implicit_fs_show, _b_x80, _ctx), _ctx); /*string*/
  return kk_string_box(_x_x284);
}

kk_unit_t kk_utest_assert_eq(kk_box_t expected, kk_box_t actual, kk_function_t _implicit_fs__lp__eq__eq__rp_, kk_function_t _implicit_fs_show, kk_context_t* _ctx) { /* forall<a> (expected : a, actual : a, ?(==) : (a, a) -> bool, ?show : (a) -> string) -> test () */ 
  bool _match_x226;
  kk_box_t _x_x268;
  kk_box_t _x_x274 = kk_box_dup(expected, _ctx); /*903*/
  kk_box_t _x_x275 = kk_box_dup(actual, _ctx); /*903*/
  _x_x268 = kk_std_core_hnd__open_none3(kk_utest_new_assert_eq_fun269(_ctx), _x_x274, _x_x275, kk_function_box(kk_utest_new_assert_eq_fun276(_implicit_fs__lp__eq__eq__rp_, _ctx), _ctx), _ctx); /*1003*/
  _match_x226 = kk_bool_unbox(_x_x268); /*bool*/
  if (_match_x226) {
    kk_string_t expected_0_10003;
    kk_box_t _x_x278;
    kk_function_t _x_x279;
    kk_function_dup(_implicit_fs_show, _ctx);
    _x_x279 = kk_utest_new_assert_eq_fun280(_implicit_fs_show, _ctx); /*(1000) -> 1002 1001*/
    _x_x278 = kk_std_core_hnd__open_none1(_x_x279, expected, _ctx); /*1001*/
    expected_0_10003 = kk_string_unbox(_x_x278); /*string*/
    kk_string_t actual_0_10004;
    kk_box_t _x_x282 = kk_std_core_hnd__open_none1(kk_utest_new_assert_eq_fun283(_implicit_fs_show, _ctx), actual, _ctx); /*1001*/
    actual_0_10004 = kk_string_unbox(_x_x282); /*string*/
    kk_std_core_hnd__ev evx_10048 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<utest/test>*/;
    kk_box_t _x_x285;
    {
      struct kk_std_core_hnd_Ev* _con_x286 = kk_std_core_hnd__as_Ev(evx_10048, _ctx);
      kk_box_t _box_x83 = _con_x286->hnd;
      int32_t m = _con_x286->marker;
      kk_utest__test h = kk_utest__test_unbox(_box_x83, KK_BORROWED, _ctx);
      kk_utest__test_dup(h, _ctx);
      {
        struct kk_utest__Hnd_test* _con_x287 = kk_utest__as_Hnd_test(h, _ctx);
        kk_integer_t _pat_0_1 = _con_x287->_cfc;
        kk_std_core_hnd__clause2 _fun_test_fail = _con_x287->_fun_test_fail;
        if kk_likely(kk_datatype_ptr_is_unique(h, _ctx)) {
          kk_integer_drop(_pat_0_1, _ctx);
          kk_datatype_ptr_free(h, _ctx);
        }
        else {
          kk_std_core_hnd__clause2_dup(_fun_test_fail, _ctx);
          kk_datatype_ptr_decref(h, _ctx);
        }
        {
          kk_function_t _fun_unbox_x88 = _fun_test_fail.clause;
          _x_x285 = kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_box_t, kk_box_t, kk_context_t*), _fun_unbox_x88, (_fun_unbox_x88, m, evx_10048, kk_string_box(expected_0_10003), kk_string_box(actual_0_10004), _ctx), _ctx); /*1016*/
        }
      }
    }
    kk_unit_unbox(_x_x285); return kk_Unit;
  }
  {
    kk_function_drop(_implicit_fs_show, _ctx);
    kk_box_drop(expected, _ctx);
    kk_box_drop(actual, _ctx);
    kk_Unit; return kk_Unit;
  }
}


// lift anonymous function
struct kk_utest_test_fun289__t {
  struct kk_function_s _base;
};
static kk_unit_t kk_utest_test_fun289(kk_function_t _fself, int32_t m, kk_std_core_hnd__ev ev, kk_string_t x1, kk_string_t x2, kk_context_t* _ctx);
static kk_function_t kk_utest_new_test_fun289(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_utest_test_fun289, _ctx)
  return kk_function_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_utest_test_fun291__t {
  struct kk_function_s _base;
};
static kk_box_t kk_utest_test_fun291(kk_function_t _fself, kk_box_t _b_x104, kk_box_t _b_x105, kk_context_t* _ctx);
static kk_function_t kk_utest_new_test_fun291(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_utest_test_fun291, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_utest_test_fun291(kk_function_t _fself, kk_box_t _b_x104, kk_box_t _b_x105, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_unit_t _x_x292 = kk_Unit;
  kk_string_t _x_x293 = kk_string_unbox(_b_x104); /*string*/
  kk_string_t _x_x294 = kk_string_unbox(_b_x105); /*string*/
  kk_utest_test_case_fail(_x_x293, _x_x294, _ctx);
  return kk_unit_box(_x_x292);
}
static kk_unit_t kk_utest_test_fun289(kk_function_t _fself, int32_t m, kk_std_core_hnd__ev ev, kk_string_t x1, kk_string_t x2, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_box_t _x_x290 = kk_std_core_hnd_under2(ev, kk_utest_new_test_fun291(_ctx), kk_string_box(x1), kk_string_box(x2), _ctx); /*3007*/
  kk_unit_unbox(_x_x290); return kk_Unit;
}


// lift anonymous function
struct kk_utest_test_fun297__t {
  struct kk_function_s _base;
  kk_function_t _b_x106_120;
};
static kk_box_t kk_utest_test_fun297(kk_function_t _fself, int32_t _b_x107, kk_std_core_hnd__ev _b_x108, kk_box_t _b_x109, kk_box_t _b_x110, kk_context_t* _ctx);
static kk_function_t kk_utest_new_test_fun297(kk_function_t _b_x106_120, kk_context_t* _ctx) {
  struct kk_utest_test_fun297__t* _self = kk_function_alloc_as(struct kk_utest_test_fun297__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_utest_test_fun297, kk_context());
  _self->_b_x106_120 = _b_x106_120;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_utest_test_fun297(kk_function_t _fself, int32_t _b_x107, kk_std_core_hnd__ev _b_x108, kk_box_t _b_x109, kk_box_t _b_x110, kk_context_t* _ctx) {
  struct kk_utest_test_fun297__t* _self = kk_function_as(struct kk_utest_test_fun297__t*, _fself, _ctx);
  kk_function_t _b_x106_120 = _self->_b_x106_120; /* (m : hnd/marker<utest/test-case,()>, ev : hnd/ev<utest/test>, x1 : string, x2 : string) -> utest/test-case () */
  kk_drop_match(_self, {kk_function_dup(_b_x106_120, _ctx);}, {}, _ctx)
  kk_unit_t _x_x298 = kk_Unit;
  kk_string_t _x_x299 = kk_string_unbox(_b_x109); /*string*/
  kk_string_t _x_x300 = kk_string_unbox(_b_x110); /*string*/
  kk_function_call(kk_unit_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_string_t, kk_string_t, kk_context_t*), _b_x106_120, (_b_x106_120, _b_x107, _b_x108, _x_x299, _x_x300, _ctx), _ctx);
  return kk_unit_box(_x_x298);
}


// lift anonymous function
struct kk_utest_test_fun301__t {
  struct kk_function_s _base;
};
static kk_box_t kk_utest_test_fun301(kk_function_t _fself, kk_box_t _b_x116, kk_context_t* _ctx);
static kk_function_t kk_utest_new_test_fun301(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_utest_test_fun301, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_utest_test_fun301(kk_function_t _fself, kk_box_t _b_x116, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_unit_t _x_127 = kk_Unit;
  kk_unit_unbox(_b_x116);
  return kk_unit_box(_x_127);
}


// lift anonymous function
struct kk_utest_test_fun302__t {
  struct kk_function_s _base;
  kk_function_t tests;
};
static kk_box_t kk_utest_test_fun302(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_utest_new_test_fun302(kk_function_t tests, kk_context_t* _ctx) {
  struct kk_utest_test_fun302__t* _self = kk_function_alloc_as(struct kk_utest_test_fun302__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_utest_test_fun302, kk_context());
  _self->tests = tests;
  return kk_datatype_from_base(&_self->_base, kk_context());
}



// lift anonymous function
struct kk_utest_test_fun303__t {
  struct kk_function_s _base;
  kk_function_t _b_x112_126;
};
static kk_box_t kk_utest_test_fun303(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_utest_new_test_fun303(kk_function_t _b_x112_126, kk_context_t* _ctx) {
  struct kk_utest_test_fun303__t* _self = kk_function_alloc_as(struct kk_utest_test_fun303__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_utest_test_fun303, kk_context());
  _self->_b_x112_126 = _b_x112_126;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_utest_test_fun303(kk_function_t _fself, kk_context_t* _ctx) {
  struct kk_utest_test_fun303__t* _self = kk_function_as(struct kk_utest_test_fun303__t*, _fself, _ctx);
  kk_function_t _b_x112_126 = _self->_b_x112_126; /* () -> utest/test () */
  kk_drop_match(_self, {kk_function_dup(_b_x112_126, _ctx);}, {}, _ctx)
  kk_unit_t _x_x304 = kk_Unit;
  kk_function_call(kk_unit_t, (kk_function_t, kk_context_t*), _b_x112_126, (_b_x112_126, _ctx), _ctx);
  return kk_unit_box(_x_x304);
}
static kk_box_t kk_utest_test_fun302(kk_function_t _fself, kk_context_t* _ctx) {
  struct kk_utest_test_fun302__t* _self = kk_function_as(struct kk_utest_test_fun302__t*, _fself, _ctx);
  kk_function_t tests = _self->tests; /* () -> utest/test () */
  kk_drop_match(_self, {kk_function_dup(tests, _ctx);}, {}, _ctx)
  kk_ssize_t _b_x111_125 = (KK_IZ(0)); /*hnd/ev-index*/;
  kk_function_t _b_x112_126 = tests; /*() -> utest/test ()*/;
  return kk_std_core_hnd__open_at0(_b_x111_125, kk_utest_new_test_fun303(_b_x112_126, _ctx), _ctx);
}

kk_unit_t kk_utest_test(kk_string_t test_name, kk_function_t tests, kk_context_t* _ctx) { /* (test-name : string, tests : () -> test ()) -> test-case () */ 
  kk_string_drop(test_name, _ctx);
  kk_box_t _x_x288;
  kk_function_t _b_x106_120 = kk_utest_new_test_fun289(_ctx); /*(m : hnd/marker<utest/test-case,()>, ev : hnd/ev<utest/test>, x1 : string, x2 : string) -> utest/test-case ()*/;
  kk_utest__test _x_x295;
  kk_std_core_hnd__clause2 _x_x296 = kk_std_core_hnd__new_Clause2(kk_utest_new_test_fun297(_b_x106_120, _ctx), _ctx); /*hnd/clause2<1021,1022,1023,1024,1025,1026>*/
  _x_x295 = kk_utest__new_Hnd_test(kk_reuse_null, 0, kk_integer_from_small(1), _x_x296, _ctx); /*utest/test<7,8>*/
  _x_x288 = kk_utest__handle_test(_x_x295, kk_utest_new_test_fun301(_ctx), kk_utest_new_test_fun302(tests, _ctx), _ctx); /*466*/
  kk_unit_unbox(_x_x288); return kk_Unit;
}


// lift anonymous function
struct kk_utest_suite_fun306__t {
  struct kk_function_s _base;
  kk_string_t suite_name;
};
static kk_unit_t kk_utest_suite_fun306(kk_function_t _fself, int32_t m, kk_std_core_hnd__ev ev, kk_string_t x1, kk_string_t x2, kk_context_t* _ctx);
static kk_function_t kk_utest_new_suite_fun306(kk_string_t suite_name, kk_context_t* _ctx) {
  struct kk_utest_suite_fun306__t* _self = kk_function_alloc_as(struct kk_utest_suite_fun306__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_utest_suite_fun306, kk_context());
  _self->suite_name = suite_name;
  return kk_datatype_from_base(&_self->_base, kk_context());
}



// lift anonymous function
struct kk_utest_suite_fun308__t {
  struct kk_function_s _base;
  kk_string_t suite_name;
};
static kk_box_t kk_utest_suite_fun308(kk_function_t _fself, kk_box_t _b_x138, kk_box_t _b_x139, kk_context_t* _ctx);
static kk_function_t kk_utest_new_suite_fun308(kk_string_t suite_name, kk_context_t* _ctx) {
  struct kk_utest_suite_fun308__t* _self = kk_function_alloc_as(struct kk_utest_suite_fun308__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_utest_suite_fun308, kk_context());
  _self->suite_name = suite_name;
  return kk_datatype_from_base(&_self->_base, kk_context());
}



// lift anonymous function
struct kk_utest_suite_fun309__t {
  struct kk_function_s _base;
};
static kk_std_core_hnd__clause1 kk_utest_suite_fun309(kk_function_t _fself, kk_utest__test_suite hnd, kk_context_t* _ctx);
static kk_function_t kk_utest_new_suite_fun309(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_utest_suite_fun309, _ctx)
  return kk_function_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_utest_suite_fun312__t {
  struct kk_function_s _base;
};
static kk_std_core_hnd__clause1 kk_utest_suite_fun312(kk_function_t _fself, kk_utest__test_suite _x1_x311, kk_context_t* _ctx);
static kk_function_t kk_utest_new_suite_fun312(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_utest_suite_fun312, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_std_core_hnd__clause1 kk_utest_suite_fun312(kk_function_t _fself, kk_utest__test_suite _x1_x311, kk_context_t* _ctx) {
  kk_unused(_fself);
  return kk_utest__select_test_suite_fail(_x1_x311, _ctx);
}
static kk_std_core_hnd__clause1 kk_utest_suite_fun309(kk_function_t _fself, kk_utest__test_suite hnd, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core_hnd__clause1 _brw_x225;
  kk_function_t _x_x310 = kk_utest_new_suite_fun312(_ctx); /*(hnd : utest/test-suite<733,734>) -> hnd/clause1<(string, string, string),(),utest/test-suite,733,734>*/
  _brw_x225 = kk_function_call(kk_std_core_hnd__clause1, (kk_function_t, kk_utest__test_suite, kk_context_t*), _x_x310, (_x_x310, hnd, _ctx), _ctx); /*hnd/clause1<(string, string, string),(),utest/test-suite,733,734>*/
  kk_utest__test_suite_drop(hnd, _ctx);
  return _brw_x225;
}


// lift anonymous function
struct kk_utest_suite_fun313__t {
  struct kk_function_s _base;
  kk_function_t _b_x129_160;
};
static kk_std_core_hnd__clause1 kk_utest_suite_fun313(kk_function_t _fself, kk_box_t _b_x133, kk_context_t* _ctx);
static kk_function_t kk_utest_new_suite_fun313(kk_function_t _b_x129_160, kk_context_t* _ctx) {
  struct kk_utest_suite_fun313__t* _self = kk_function_alloc_as(struct kk_utest_suite_fun313__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_utest_suite_fun313, kk_context());
  _self->_b_x129_160 = _b_x129_160;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_std_core_hnd__clause1 kk_utest_suite_fun313(kk_function_t _fself, kk_box_t _b_x133, kk_context_t* _ctx) {
  struct kk_utest_suite_fun313__t* _self = kk_function_as(struct kk_utest_suite_fun313__t*, _fself, _ctx);
  kk_function_t _b_x129_160 = _self->_b_x129_160; /* (hnd : utest/test-suite<733,734>) -> hnd/clause1<(string, string, string),(),utest/test-suite,733,734> */
  kk_drop_match(_self, {kk_function_dup(_b_x129_160, _ctx);}, {}, _ctx)
  kk_utest__test_suite _x_x314 = kk_utest__test_suite_unbox(_b_x133, KK_OWNED, _ctx); /*utest/test-suite<733,734>*/
  return kk_function_call(kk_std_core_hnd__clause1, (kk_function_t, kk_utest__test_suite, kk_context_t*), _b_x129_160, (_b_x129_160, _x_x314, _ctx), _ctx);
}
static kk_box_t kk_utest_suite_fun308(kk_function_t _fself, kk_box_t _b_x138, kk_box_t _b_x139, kk_context_t* _ctx) {
  struct kk_utest_suite_fun308__t* _self = kk_function_as(struct kk_utest_suite_fun308__t*, _fself, _ctx);
  kk_string_t suite_name = _self->suite_name; /* string */
  kk_drop_match(_self, {kk_string_dup(suite_name, _ctx);}, {}, _ctx)
  kk_string_t expected_166 = kk_string_unbox(_b_x138); /*string*/;
  kk_string_t actual_167 = kk_string_unbox(_b_x139); /*string*/;
  kk_std_core_hnd__ev _b_x128_159 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<utest/test-suite>*/;
  kk_function_t _b_x129_160 = kk_utest_new_suite_fun309(_ctx); /*(hnd : utest/test-suite<733,734>) -> hnd/clause1<(string, string, string),(),utest/test-suite,733,734>*/;
  kk_string_t _b_x130_161 = suite_name; /*string*/;
  kk_string_t _b_x131_162 = expected_166; /*string*/;
  kk_string_t _b_x132_163 = actual_167; /*string*/;
  return kk_std_core_hnd__perform3(_b_x128_159, kk_utest_new_suite_fun313(_b_x129_160, _ctx), kk_string_box(_b_x130_161), kk_string_box(_b_x131_162), kk_string_box(_b_x132_163), _ctx);
}
static kk_unit_t kk_utest_suite_fun306(kk_function_t _fself, int32_t m, kk_std_core_hnd__ev ev, kk_string_t x1, kk_string_t x2, kk_context_t* _ctx) {
  struct kk_utest_suite_fun306__t* _self = kk_function_as(struct kk_utest_suite_fun306__t*, _fself, _ctx);
  kk_string_t suite_name = _self->suite_name; /* string */
  kk_drop_match(_self, {kk_string_dup(suite_name, _ctx);}, {}, _ctx)
  kk_box_t _x_x307 = kk_std_core_hnd_under2(ev, kk_utest_new_suite_fun308(suite_name, _ctx), kk_string_box(x1), kk_string_box(x2), _ctx); /*3007*/
  kk_unit_unbox(_x_x307); return kk_Unit;
}


// lift anonymous function
struct kk_utest_suite_fun317__t {
  struct kk_function_s _base;
  kk_function_t _b_x140_154;
};
static kk_box_t kk_utest_suite_fun317(kk_function_t _fself, int32_t _b_x141, kk_std_core_hnd__ev _b_x142, kk_box_t _b_x143, kk_box_t _b_x144, kk_context_t* _ctx);
static kk_function_t kk_utest_new_suite_fun317(kk_function_t _b_x140_154, kk_context_t* _ctx) {
  struct kk_utest_suite_fun317__t* _self = kk_function_alloc_as(struct kk_utest_suite_fun317__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_utest_suite_fun317, kk_context());
  _self->_b_x140_154 = _b_x140_154;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_utest_suite_fun317(kk_function_t _fself, int32_t _b_x141, kk_std_core_hnd__ev _b_x142, kk_box_t _b_x143, kk_box_t _b_x144, kk_context_t* _ctx) {
  struct kk_utest_suite_fun317__t* _self = kk_function_as(struct kk_utest_suite_fun317__t*, _fself, _ctx);
  kk_function_t _b_x140_154 = _self->_b_x140_154; /* (m : hnd/marker<utest/test-suite,()>, ev : hnd/ev<utest/test-case>, x1 : string, x2 : string) -> utest/test-suite () */
  kk_drop_match(_self, {kk_function_dup(_b_x140_154, _ctx);}, {}, _ctx)
  kk_unit_t _x_x318 = kk_Unit;
  kk_string_t _x_x319 = kk_string_unbox(_b_x143); /*string*/
  kk_string_t _x_x320 = kk_string_unbox(_b_x144); /*string*/
  kk_function_call(kk_unit_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_string_t, kk_string_t, kk_context_t*), _b_x140_154, (_b_x140_154, _b_x141, _b_x142, _x_x319, _x_x320, _ctx), _ctx);
  return kk_unit_box(_x_x318);
}


// lift anonymous function
struct kk_utest_suite_fun321__t {
  struct kk_function_s _base;
};
static kk_box_t kk_utest_suite_fun321(kk_function_t _fself, kk_box_t _b_x150, kk_context_t* _ctx);
static kk_function_t kk_utest_new_suite_fun321(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_utest_suite_fun321, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_utest_suite_fun321(kk_function_t _fself, kk_box_t _b_x150, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_unit_t _x_168 = kk_Unit;
  kk_unit_unbox(_b_x150);
  return kk_unit_box(_x_168);
}


// lift anonymous function
struct kk_utest_suite_fun322__t {
  struct kk_function_s _base;
  kk_function_t test_cases;
};
static kk_box_t kk_utest_suite_fun322(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_utest_new_suite_fun322(kk_function_t test_cases, kk_context_t* _ctx) {
  struct kk_utest_suite_fun322__t* _self = kk_function_alloc_as(struct kk_utest_suite_fun322__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_utest_suite_fun322, kk_context());
  _self->test_cases = test_cases;
  return kk_datatype_from_base(&_self->_base, kk_context());
}



// lift anonymous function
struct kk_utest_suite_fun323__t {
  struct kk_function_s _base;
  kk_function_t _b_x146_165;
};
static kk_box_t kk_utest_suite_fun323(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_utest_new_suite_fun323(kk_function_t _b_x146_165, kk_context_t* _ctx) {
  struct kk_utest_suite_fun323__t* _self = kk_function_alloc_as(struct kk_utest_suite_fun323__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_utest_suite_fun323, kk_context());
  _self->_b_x146_165 = _b_x146_165;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_utest_suite_fun323(kk_function_t _fself, kk_context_t* _ctx) {
  struct kk_utest_suite_fun323__t* _self = kk_function_as(struct kk_utest_suite_fun323__t*, _fself, _ctx);
  kk_function_t _b_x146_165 = _self->_b_x146_165; /* () -> utest/test-case () */
  kk_drop_match(_self, {kk_function_dup(_b_x146_165, _ctx);}, {}, _ctx)
  kk_unit_t _x_x324 = kk_Unit;
  kk_function_call(kk_unit_t, (kk_function_t, kk_context_t*), _b_x146_165, (_b_x146_165, _ctx), _ctx);
  return kk_unit_box(_x_x324);
}
static kk_box_t kk_utest_suite_fun322(kk_function_t _fself, kk_context_t* _ctx) {
  struct kk_utest_suite_fun322__t* _self = kk_function_as(struct kk_utest_suite_fun322__t*, _fself, _ctx);
  kk_function_t test_cases = _self->test_cases; /* () -> utest/test-case () */
  kk_drop_match(_self, {kk_function_dup(test_cases, _ctx);}, {}, _ctx)
  kk_ssize_t _b_x145_164 = (KK_IZ(0)); /*hnd/ev-index*/;
  kk_function_t _b_x146_165 = test_cases; /*() -> utest/test-case ()*/;
  return kk_std_core_hnd__open_at0(_b_x145_164, kk_utest_new_suite_fun323(_b_x146_165, _ctx), _ctx);
}

kk_unit_t kk_utest_suite(kk_string_t suite_name, kk_function_t test_cases, kk_context_t* _ctx) { /* (suite-name : string, test-cases : () -> test-case ()) -> test-suite () */ 
  kk_box_t _x_x305;
  kk_function_t _b_x140_154 = kk_utest_new_suite_fun306(suite_name, _ctx); /*(m : hnd/marker<utest/test-suite,()>, ev : hnd/ev<utest/test-case>, x1 : string, x2 : string) -> utest/test-suite ()*/;
  kk_utest__test_case _x_x315;
  kk_std_core_hnd__clause2 _x_x316 = kk_std_core_hnd__new_Clause2(kk_utest_new_suite_fun317(_b_x140_154, _ctx), _ctx); /*hnd/clause2<1021,1022,1023,1024,1025,1026>*/
  _x_x315 = kk_utest__new_Hnd_test_case(kk_reuse_null, 0, kk_integer_from_small(1), _x_x316, _ctx); /*utest/test-case<16,17>*/
  _x_x305 = kk_utest__handle_test_case(_x_x315, kk_utest_new_suite_fun321(_ctx), kk_utest_new_suite_fun322(test_cases, _ctx), _ctx); /*587*/
  kk_unit_unbox(_x_x305); return kk_Unit;
}


// lift anonymous function
struct kk_utest_run_utest_fun329__t {
  struct kk_function_s _base;
  kk_ref_t loc;
};
static kk_box_t kk_utest_run_utest_fun329(kk_function_t _fself, int32_t _b_x183, kk_std_core_hnd__ev _b_x184, kk_box_t _b_x185, kk_context_t* _ctx);
static kk_function_t kk_utest_new_run_utest_fun329(kk_ref_t loc, kk_context_t* _ctx) {
  struct kk_utest_run_utest_fun329__t* _self = kk_function_alloc_as(struct kk_utest_run_utest_fun329__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_utest_run_utest_fun329, kk_context());
  _self->loc = loc;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_utest_run_utest_fun329(kk_function_t _fself, int32_t _b_x183, kk_std_core_hnd__ev _b_x184, kk_box_t _b_x185, kk_context_t* _ctx) {
  struct kk_utest_run_utest_fun329__t* _self = kk_function_as(struct kk_utest_run_utest_fun329__t*, _fself, _ctx);
  kk_ref_t loc = _self->loc; /* local-var<1669,list<(string, string, string)>> */
  kk_drop_match(_self, {kk_ref_dup(loc, _ctx);}, {}, _ctx)
  int32_t ___wildcard_x633__14_220 = _b_x183; /*hnd/marker<<local<1669>,console/console>,()>*/;
  kk_std_core_hnd__ev ___wildcard_x633__17_221 = _b_x184; /*hnd/ev<utest/test-suite>*/;
  kk_datatype_ptr_dropn(___wildcard_x633__17_221, (KK_I32(3)), _ctx);
  kk_std_core_types__tuple3 x_222 = kk_std_core_types__tuple3_unbox(_b_x185, KK_OWNED, _ctx); /*(string, string, string)*/;
  kk_unit_t _x_x330 = kk_Unit;
  {
    kk_box_t _box_x171 = x_222.fst;
    kk_box_t _box_x172 = x_222.snd;
    kk_box_t _box_x173 = x_222.thd;
    kk_string_t x1 = kk_string_unbox(_box_x171);
    kk_string_t x2 = kk_string_unbox(_box_x172);
    kk_string_t x3 = kk_string_unbox(_box_x173);
    kk_string_dup(x1, _ctx);
    kk_string_dup(x2, _ctx);
    kk_string_dup(x3, _ctx);
    kk_std_core_types__tuple3_drop(x_222, _ctx);
    kk_std_core_types__list _b_x181_195;
    kk_std_core_types__list _x_x331;
    kk_box_t _x_x332;
    kk_ref_t _x_x333 = kk_ref_dup(loc, _ctx); /*local-var<1669,list<(string, string, string)>>*/
    _x_x332 = kk_ref_get(_x_x333,kk_context()); /*1000*/
    _x_x331 = kk_std_core_types__list_unbox(_x_x332, KK_OWNED, _ctx); /*list<(string, string, string)>*/
    kk_std_core_types__list _x_x334;
    kk_box_t _x_x335;
    kk_std_core_types__tuple3 _x_x336 = kk_std_core_types__new_Tuple3(kk_string_box(x1), kk_string_box(x2), kk_string_box(x3), _ctx); /*(3335, 3336, 3337)*/
    _x_x335 = kk_std_core_types__tuple3_box(_x_x336, _ctx); /*3317*/
    _x_x334 = kk_std_core_types__new_Cons(kk_reuse_null, 0, _x_x335, kk_std_core_types__new_Nil(_ctx), _ctx); /*list<3317>*/
    _b_x181_195 = kk_std_core_list_append(_x_x331, _x_x334, _ctx); /*list<(string, string, string)>*/
    kk_unit_t _brw_x224 = kk_Unit;
    kk_ref_set_borrow(loc,(kk_std_core_types__list_box(_b_x181_195, _ctx)),kk_context());
    kk_ref_drop(loc, _ctx);
    _brw_x224;
  }
  return kk_unit_box(_x_x330);
}


// lift anonymous function
struct kk_utest_run_utest_fun337__t {
  struct kk_function_s _base;
};
static kk_box_t kk_utest_run_utest_fun337(kk_function_t _fself, kk_box_t _b_x189, kk_context_t* _ctx);
static kk_function_t kk_utest_new_run_utest_fun337(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_utest_run_utest_fun337, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_utest_run_utest_fun337(kk_function_t _fself, kk_box_t _b_x189, kk_context_t* _ctx) {
  kk_unused(_fself);
  return _b_x189;
}


// lift anonymous function
struct kk_utest_run_utest_fun338__t {
  struct kk_function_s _base;
  kk_function_t test_suites;
};
static kk_box_t kk_utest_run_utest_fun338(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_utest_new_run_utest_fun338(kk_function_t test_suites, kk_context_t* _ctx) {
  struct kk_utest_run_utest_fun338__t* _self = kk_function_alloc_as(struct kk_utest_run_utest_fun338__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_utest_run_utest_fun338, kk_context());
  _self->test_suites = test_suites;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_utest_run_utest_fun338(kk_function_t _fself, kk_context_t* _ctx) {
  struct kk_utest_run_utest_fun338__t* _self = kk_function_as(struct kk_utest_run_utest_fun338__t*, _fself, _ctx);
  kk_function_t test_suites = _self->test_suites; /* () -> utest/test-suite () */
  kk_drop_match(_self, {kk_function_dup(test_suites, _ctx);}, {}, _ctx)
  kk_unit_t _x_x339 = kk_Unit;
  kk_function_call(kk_unit_t, (kk_function_t, kk_context_t*), test_suites, (test_suites, _ctx), _ctx);
  return kk_unit_box(_x_x339);
}


// lift anonymous function
struct kk_utest_run_utest_fun348__t {
  struct kk_function_s _base;
};
static kk_box_t kk_utest_run_utest_fun348(kk_function_t _fself, kk_box_t _b_x211, kk_context_t* _ctx);
static kk_function_t kk_utest_new_run_utest_fun348(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_utest_run_utest_fun348, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_utest_run_utest_fun348(kk_function_t _fself, kk_box_t _b_x211, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_unit_t _x_x349 = kk_Unit;
  kk_std_core_types__tuple3 _match_x223 = kk_std_core_types__tuple3_unbox(_b_x211, KK_OWNED, _ctx); /*(string, string, string)*/;
  {
    kk_box_t _box_x206 = _match_x223.fst;
    kk_box_t _box_x207 = _match_x223.snd;
    kk_box_t _box_x208 = _match_x223.thd;
    kk_string_t suite_name_0 = kk_string_unbox(_box_x206);
    kk_string_t expected_0 = kk_string_unbox(_box_x207);
    kk_string_t actual_0 = kk_string_unbox(_box_x208);
    kk_string_dup(actual_0, _ctx);
    kk_string_dup(expected_0, _ctx);
    kk_string_dup(suite_name_0, _ctx);
    kk_std_core_types__tuple3_drop(_match_x223, _ctx);
    kk_string_t s_0_10012;
    kk_string_t _x_x350;
    kk_define_string_literal(, _s_x351, 10, "failed at ", _ctx)
    _x_x350 = kk_string_dup(_s_x351, _ctx); /*string*/
    kk_string_t _x_x352 = kk_std_core_show_string_fs_show(suite_name_0, _ctx); /*string*/
    s_0_10012 = kk_std_core_types__lp__plus__plus__rp_(_x_x350, _x_x352, _ctx); /*string*/
    kk_unit_t ___1 = kk_Unit;
    kk_std_core_console_printsln(s_0_10012, _ctx);
    kk_string_t s_1_10013;
    kk_string_t _x_x353;
    kk_define_string_literal(, _s_x354, 9, "expected ", _ctx)
    _x_x353 = kk_string_dup(_s_x354, _ctx); /*string*/
    kk_string_t _x_x355;
    kk_string_t _x_x356;
    kk_string_t _x_x357;
    kk_define_string_literal(, _s_x358, 10, ", but got ", _ctx)
    _x_x357 = kk_string_dup(_s_x358, _ctx); /*string*/
    _x_x356 = kk_std_core_types__lp__plus__plus__rp_(_x_x357, actual_0, _ctx); /*string*/
    _x_x355 = kk_std_core_types__lp__plus__plus__rp_(expected_0, _x_x356, _ctx); /*string*/
    s_1_10013 = kk_std_core_types__lp__plus__plus__rp_(_x_x353, _x_x355, _ctx); /*string*/
    kk_std_core_console_printsln(s_1_10013, _ctx);
  }
  return kk_unit_box(_x_x349);
}

kk_unit_t kk_utest_run_utest(kk_function_t test_suites, kk_context_t* _ctx) { /* (test-suites : () -> test-suite ()) -> console/console () */ 
  kk_ref_t loc = kk_ref_alloc((kk_std_core_types__list_box(kk_std_core_types__new_Nil(_ctx), _ctx)),kk_context()); /*local-var<1669,list<(string, string, string)>>*/;
  kk_unit_t __ = kk_Unit;
  kk_box_t _x_x325;
  kk_utest__test_suite _x_x326;
  kk_std_core_hnd__clause1 _x_x327;
  kk_function_t _x_x328;
  kk_ref_dup(loc, _ctx);
  _x_x328 = kk_utest_new_run_utest_fun329(loc, _ctx); /*(hnd/marker<1018,1019>, hnd/ev<1017>, 1015) -> 1018 1016*/
  _x_x327 = kk_std_core_hnd__new_Clause1(_x_x328, _ctx); /*hnd/clause1<1015,1016,1017,1018,1019>*/
  _x_x326 = kk_utest__new_Hnd_test_suite(kk_reuse_null, 0, kk_integer_from_small(1), _x_x327, _ctx); /*utest/test-suite<33,34>*/
  _x_x325 = kk_utest__handle_test_suite(_x_x326, kk_utest_new_run_utest_fun337(_ctx), kk_utest_new_run_utest_fun338(test_suites, _ctx), _ctx); /*708*/
  kk_unit_unbox(_x_x325);
  kk_unit_t ___0 = kk_Unit;
  kk_string_t _x_x340;
  kk_define_string_literal(, _s_x341, 16, "Running test...\n", _ctx)
  _x_x340 = kk_string_dup(_s_x341, _ctx); /*string*/
  kk_std_core_console_printsln(_x_x340, _ctx);
  kk_std_core_types__list xs_10011;
  kk_box_t _x_x342;
  kk_ref_t _x_x343 = kk_ref_dup(loc, _ctx); /*local-var<1669,list<(string, string, string)>>*/
  _x_x342 = kk_ref_get(_x_x343,kk_context()); /*1000*/
  xs_10011 = kk_std_core_types__list_unbox(_x_x342, KK_OWNED, _ctx); /*list<(string, string, string)>*/
  kk_unit_t res = kk_Unit;
  if (kk_std_core_types__is_Nil(xs_10011, _ctx)) {
    kk_string_t _x_x344;
    kk_define_string_literal(, _s_x345, 20, "All Test Has Passed!", _ctx)
    _x_x344 = kk_string_dup(_s_x345, _ctx); /*string*/
    kk_std_core_console_printsln(_x_x344, _ctx);
  }
  else {
    kk_std_core_types__list_drop(xs_10011, _ctx);
    kk_std_core_types__list _b_x209_212;
    kk_box_t _x_x346;
    kk_ref_t _x_x347 = kk_ref_dup(loc, _ctx); /*local-var<1669,list<(string, string, string)>>*/
    _x_x346 = kk_ref_get(_x_x347,kk_context()); /*1000*/
    _b_x209_212 = kk_std_core_types__list_unbox(_x_x346, KK_OWNED, _ctx); /*list<(string, string, string)>*/
    kk_std_core_types__list ___2 = kk_std_core_list_map(_b_x209_212, kk_utest_new_run_utest_fun348(_ctx), _ctx); /*list<()>*/;
    kk_std_core_types__list_drop(___2, _ctx);
  }
  kk_box_t _x_x359 = kk_std_core_hnd_prompt_local_var(loc, kk_unit_box(res), _ctx); /*3670*/
  kk_unit_unbox(_x_x359); return kk_Unit;
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
    kk_string_t _x_x248;
    kk_define_string_literal(, _s_x249, 10, "test@utest", _ctx)
    _x_x248 = kk_string_dup(_s_x249, _ctx); /*string*/
    kk_utest__tag_test = kk_std_core_hnd__new_Htag(_x_x248, _ctx); /*hnd/htag<utest/test>*/
  }
  {
    kk_string_t _x_x255;
    kk_define_string_literal(, _s_x256, 15, "test-case@utest", _ctx)
    _x_x255 = kk_string_dup(_s_x256, _ctx); /*string*/
    kk_utest__tag_test_case = kk_std_core_hnd__new_Htag(_x_x255, _ctx); /*hnd/htag<utest/test-case>*/
  }
  {
    kk_string_t _x_x262;
    kk_define_string_literal(, _s_x263, 16, "test-suite@utest", _ctx)
    _x_x262 = kk_string_dup(_s_x263, _ctx); /*string*/
    kk_utest__tag_test_suite = kk_std_core_hnd__new_Htag(_x_x262, _ctx); /*hnd/htag<utest/test-suite>*/
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
