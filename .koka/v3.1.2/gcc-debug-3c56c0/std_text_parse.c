// Koka generated module: std/text/parse, koka version: 3.1.2, platform: 64-bit
#include "std_text_parse.h"
 
// runtime tag for the effect `:parse`

kk_std_core_hnd__htag kk_std_text_parse__tag_parse;
 
// handler for the effect `:parse`

kk_box_t kk_std_text_parse__handle_parse(kk_std_text_parse__parse hnd, kk_function_t ret, kk_function_t action, kk_context_t* _ctx) { /* forall<a,e,b> (hnd : parse<e,b>, ret : (res : a) -> e b, action : () -> <parse|e> a) -> e b */ 
  kk_std_core_hnd__htag _x_x833 = kk_std_core_hnd__htag_dup(kk_std_text_parse__tag_parse, _ctx); /*hnd/htag<std/text/parse/parse>*/
  return kk_std_core_hnd__hhandle(_x_x833, kk_std_text_parse__parse_box(hnd, _ctx), ret, action, _ctx);
}
extern kk_box_t kk_std_text_parse_satisfy_fun838(kk_function_t _fself, kk_box_t _b_x21, kk_context_t* _ctx) {
  struct kk_std_text_parse_satisfy_fun838__t* _self = kk_function_as(struct kk_std_text_parse_satisfy_fun838__t*, _fself, _ctx);
  kk_function_t pred = _self->pred; /* (sslice/sslice) -> maybe<(605, sslice/sslice)> */
  kk_drop_match(_self, {kk_function_dup(pred, _ctx);}, {}, _ctx)
  kk_std_core_types__maybe _x_x839;
  kk_std_core_sslice__sslice _x_x840 = kk_std_core_sslice__sslice_unbox(_b_x21, KK_OWNED, _ctx); /*sslice/sslice*/
  _x_x839 = kk_function_call(kk_std_core_types__maybe, (kk_function_t, kk_std_core_sslice__sslice, kk_context_t*), pred, (pred, _x_x840, _ctx), _ctx); /*maybe<(605, sslice/sslice)>*/
  return kk_std_core_types__maybe_box(_x_x839, _ctx);
}

kk_std_core_types__either kk_std_text_parse_either(kk_std_text_parse__parse_error perr, kk_context_t* _ctx) { /* forall<a> (perr : parse-error<a>) -> either<string,a> */ 
  if (kk_std_text_parse__is_ParseOk(perr, _ctx)) {
    struct kk_std_text_parse_ParseOk* _con_x852 = kk_std_text_parse__as_ParseOk(perr, _ctx);
    kk_std_core_sslice__sslice _pat_0 = _con_x852->rest;
    kk_box_t x = _con_x852->result;
    if kk_likely(kk_datatype_ptr_is_unique(perr, _ctx)) {
      kk_std_core_sslice__sslice_drop(_pat_0, _ctx);
      kk_datatype_ptr_free(perr, _ctx);
    }
    else {
      kk_box_dup(x, _ctx);
      kk_datatype_ptr_decref(perr, _ctx);
    }
    return kk_std_core_types__new_Right(x, _ctx);
  }
  {
    struct kk_std_text_parse_ParseError* _con_x853 = kk_std_text_parse__as_ParseError(perr, _ctx);
    kk_std_core_sslice__sslice _pat_5 = _con_x853->rest;
    kk_string_t msg = _con_x853->msg;
    if kk_likely(kk_datatype_ptr_is_unique(perr, _ctx)) {
      kk_std_core_sslice__sslice_drop(_pat_5, _ctx);
      kk_datatype_ptr_free(perr, _ctx);
    }
    else {
      kk_string_dup(msg, _ctx);
      kk_datatype_ptr_decref(perr, _ctx);
    }
    return kk_std_core_types__new_Left(kk_string_box(msg), _ctx);
  }
}

kk_std_core_types__maybe kk_std_text_parse_maybe(kk_std_text_parse__parse_error perr, kk_context_t* _ctx) { /* forall<a> (perr : parse-error<a>) -> maybe<a> */ 
  if (kk_std_text_parse__is_ParseOk(perr, _ctx)) {
    struct kk_std_text_parse_ParseOk* _con_x854 = kk_std_text_parse__as_ParseOk(perr, _ctx);
    kk_std_core_sslice__sslice _pat_0_0 = _con_x854->rest;
    kk_box_t x_0 = _con_x854->result;
    if kk_likely(kk_datatype_ptr_is_unique(perr, _ctx)) {
      kk_std_core_sslice__sslice_drop(_pat_0_0, _ctx);
      kk_datatype_ptr_free(perr, _ctx);
    }
    else {
      kk_box_dup(x_0, _ctx);
      kk_datatype_ptr_decref(perr, _ctx);
    }
    return kk_std_core_types__new_Just(x_0, _ctx);
  }
  {
    struct kk_std_text_parse_ParseError* _con_x855 = kk_std_text_parse__as_ParseError(perr, _ctx);
    kk_std_core_sslice__sslice _pat_5 = _con_x855->rest;
    kk_string_t msg = _con_x855->msg;
    if kk_likely(kk_datatype_ptr_is_unique(perr, _ctx)) {
      kk_string_drop(msg, _ctx);
      kk_std_core_sslice__sslice_drop(_pat_5, _ctx);
      kk_datatype_ptr_free(perr, _ctx);
    }
    else {
      kk_datatype_ptr_decref(perr, _ctx);
    }
    return kk_std_core_types__new_Nothing(_ctx);
  }
}
 
// monadic lift

kk_std_text_parse__parse_error kk_std_text_parse__mlift_parse_10168(kk_std_text_parse__parse_error err1, kk_std_text_parse__parse_error _y_x10076, kk_context_t* _ctx) { /* forall<h,a,e> (err1 : parse-error<a>, parse-error<a>) -> <local<h>|e> parse-error<a> */ 
  if (kk_std_text_parse__is_ParseOk(_y_x10076, _ctx)) {
    struct kk_std_text_parse_ParseOk* _con_x856 = kk_std_text_parse__as_ParseOk(_y_x10076, _ctx);
    kk_std_core_sslice__sslice rest2 = _con_x856->rest;
    kk_box_t x2 = _con_x856->result;
    kk_std_text_parse__parse_error_drop(err1, _ctx);
    kk_reuse_t _ru_x805 = kk_reuse_null; /*@reuse*/;
    if kk_likely(kk_datatype_ptr_is_unique(_y_x10076, _ctx)) {
      _ru_x805 = (kk_datatype_ptr_reuse(_y_x10076, _ctx));
    }
    else {
      kk_std_core_sslice__sslice_dup(rest2, _ctx);
      kk_box_dup(x2, _ctx);
      kk_datatype_ptr_decref(_y_x10076, _ctx);
    }
    return kk_std_text_parse__new_ParseOk(_ru_x805, 0, x2, rest2, _ctx);
  }
  {
    kk_std_text_parse__parse_error_drop(_y_x10076, _ctx);
    return err1;
  }
}
 
// monadic lift


// lift anonymous function
struct kk_std_text_parse__mlift_parse_10169_fun858__t {
  struct kk_function_s _base;
  kk_std_text_parse__parse_error err1;
};
static kk_box_t kk_std_text_parse__mlift_parse_10169_fun858(kk_function_t _fself, kk_box_t _b_x45, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse__new_mlift_parse_10169_fun858(kk_std_text_parse__parse_error err1, kk_context_t* _ctx) {
  struct kk_std_text_parse__mlift_parse_10169_fun858__t* _self = kk_function_alloc_as(struct kk_std_text_parse__mlift_parse_10169_fun858__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_text_parse__mlift_parse_10169_fun858, kk_context());
  _self->err1 = err1;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_text_parse__mlift_parse_10169_fun858(kk_function_t _fself, kk_box_t _b_x45, kk_context_t* _ctx) {
  struct kk_std_text_parse__mlift_parse_10169_fun858__t* _self = kk_function_as(struct kk_std_text_parse__mlift_parse_10169_fun858__t*, _fself, _ctx);
  kk_std_text_parse__parse_error err1 = _self->err1; /* std/text/parse/parse-error<1563> */
  kk_drop_match(_self, {kk_std_text_parse__parse_error_dup(err1, _ctx);}, {}, _ctx)
  kk_std_text_parse__parse_error _x_x859;
  kk_std_text_parse__parse_error _y_x10076_47 = kk_std_text_parse__parse_error_unbox(_b_x45, KK_OWNED, _ctx); /*std/text/parse/parse-error<1563>*/;
  if (kk_std_text_parse__is_ParseOk(_y_x10076_47, _ctx)) {
    struct kk_std_text_parse_ParseOk* _con_x860 = kk_std_text_parse__as_ParseOk(_y_x10076_47, _ctx);
    kk_std_core_sslice__sslice rest2 = _con_x860->rest;
    kk_box_t x2 = _con_x860->result;
    kk_std_text_parse__parse_error_drop(err1, _ctx);
    kk_reuse_t _ru_x806 = kk_reuse_null; /*@reuse*/;
    if kk_likely(kk_datatype_ptr_is_unique(_y_x10076_47, _ctx)) {
      _ru_x806 = (kk_datatype_ptr_reuse(_y_x10076_47, _ctx));
    }
    else {
      kk_std_core_sslice__sslice_dup(rest2, _ctx);
      kk_box_dup(x2, _ctx);
      kk_datatype_ptr_decref(_y_x10076_47, _ctx);
    }
    _x_x859 = kk_std_text_parse__new_ParseOk(_ru_x806, 0, x2, rest2, _ctx); /*std/text/parse/parse-error<33>*/
  }
  else {
    kk_std_text_parse__parse_error_drop(_y_x10076_47, _ctx);
    _x_x859 = err1; /*std/text/parse/parse-error<33>*/
  }
  return kk_std_text_parse__parse_error_box(_x_x859, _ctx);
}

kk_std_text_parse__parse_error kk_std_text_parse__mlift_parse_10169(kk_std_text_parse__parse_error err1, kk_function_t resume, kk_unit_t wild__, kk_context_t* _ctx) { /* forall<h,a,e> (err1 : parse-error<a>, resume : (bool) -> <local<h>|e> parse-error<a>, wild_ : ()) -> <local<h>|e> parse-error<a> */ 
  kk_std_text_parse__parse_error x_10201 = kk_function_call(kk_std_text_parse__parse_error, (kk_function_t, bool, kk_context_t*), resume, (resume, false, _ctx), _ctx); /*std/text/parse/parse-error<1563>*/;
  if (kk_yielding(kk_context())) {
    kk_std_text_parse__parse_error_drop(x_10201, _ctx);
    kk_box_t _x_x857 = kk_std_core_hnd_yield_extend(kk_std_text_parse__new_mlift_parse_10169_fun858(err1, _ctx), _ctx); /*2978*/
    return kk_std_text_parse__parse_error_unbox(_x_x857, KK_OWNED, _ctx);
  }
  {
    kk_std_text_parse__parse_error _y_x10076_48 = x_10201; /*std/text/parse/parse-error<1563>*/;
    if (kk_std_text_parse__is_ParseOk(_y_x10076_48, _ctx)) {
      struct kk_std_text_parse_ParseOk* _con_x861 = kk_std_text_parse__as_ParseOk(_y_x10076_48, _ctx);
      kk_std_core_sslice__sslice rest2 = _con_x861->rest;
      kk_box_t x2 = _con_x861->result;
      kk_std_text_parse__parse_error_drop(err1, _ctx);
      kk_reuse_t _ru_x807 = kk_reuse_null; /*@reuse*/;
      if kk_likely(kk_datatype_ptr_is_unique(_y_x10076_48, _ctx)) {
        _ru_x807 = (kk_datatype_ptr_reuse(_y_x10076_48, _ctx));
      }
      else {
        kk_std_core_sslice__sslice_dup(rest2, _ctx);
        kk_box_dup(x2, _ctx);
        kk_datatype_ptr_decref(_y_x10076_48, _ctx);
      }
      return kk_std_text_parse__new_ParseOk(_ru_x807, 0, x2, rest2, _ctx);
    }
    {
      kk_std_text_parse__parse_error_drop(_y_x10076_48, _ctx);
      return err1;
    }
  }
}
 
// monadic lift


// lift anonymous function
struct kk_std_text_parse__mlift_parse_10170_fun864__t {
  struct kk_function_s _base;
  kk_std_text_parse__parse_error _y_x10074;
  kk_function_t resume;
};
static kk_box_t kk_std_text_parse__mlift_parse_10170_fun864(kk_function_t _fself, kk_box_t _b_x54, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse__new_mlift_parse_10170_fun864(kk_std_text_parse__parse_error _y_x10074, kk_function_t resume, kk_context_t* _ctx) {
  struct kk_std_text_parse__mlift_parse_10170_fun864__t* _self = kk_function_alloc_as(struct kk_std_text_parse__mlift_parse_10170_fun864__t, 3, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_text_parse__mlift_parse_10170_fun864, kk_context());
  _self->_y_x10074 = _y_x10074;
  _self->resume = resume;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_text_parse__mlift_parse_10170_fun864(kk_function_t _fself, kk_box_t _b_x54, kk_context_t* _ctx) {
  struct kk_std_text_parse__mlift_parse_10170_fun864__t* _self = kk_function_as(struct kk_std_text_parse__mlift_parse_10170_fun864__t*, _fself, _ctx);
  kk_std_text_parse__parse_error _y_x10074 = _self->_y_x10074; /* std/text/parse/parse-error<1563> */
  kk_function_t resume = _self->resume; /* (bool) -> <local<1557>|1564> std/text/parse/parse-error<1563> */
  kk_drop_match(_self, {kk_std_text_parse__parse_error_dup(_y_x10074, _ctx);kk_function_dup(resume, _ctx);}, {}, _ctx)
  kk_unit_t wild___56 = kk_Unit;
  kk_unit_unbox(_b_x54);
  kk_std_text_parse__parse_error _x_x865 = kk_std_text_parse__mlift_parse_10169(_y_x10074, resume, wild___56, _ctx); /*std/text/parse/parse-error<1563>*/
  return kk_std_text_parse__parse_error_box(_x_x865, _ctx);
}

kk_std_text_parse__parse_error kk_std_text_parse__mlift_parse_10170(kk_ref_t input, kk_function_t resume, kk_std_core_sslice__sslice save, kk_std_text_parse__parse_error _y_x10074, kk_context_t* _ctx) { /* forall<h,a,e> (input : local-var<h,sslice/sslice>, resume : (bool) -> <local<h>|e> parse-error<a>, save : sslice/sslice, parse-error<a>) -> <local<h>|e> parse-error<a> */ 
  if (kk_std_text_parse__is_ParseOk(_y_x10074, _ctx)) {
    struct kk_std_text_parse_ParseOk* _con_x862 = kk_std_text_parse__as_ParseOk(_y_x10074, _ctx);
    kk_std_core_sslice__sslice rest1 = _con_x862->rest;
    kk_box_t x1 = _con_x862->result;
    kk_std_core_sslice__sslice_drop(save, _ctx);
    kk_function_drop(resume, _ctx);
    kk_ref_drop(input, _ctx);
    kk_reuse_t _ru_x808 = kk_reuse_null; /*@reuse*/;
    if kk_likely(kk_datatype_ptr_is_unique(_y_x10074, _ctx)) {
      _ru_x808 = (kk_datatype_ptr_reuse(_y_x10074, _ctx));
    }
    else {
      kk_std_core_sslice__sslice_dup(rest1, _ctx);
      kk_box_dup(x1, _ctx);
      kk_datatype_ptr_decref(_y_x10074, _ctx);
    }
    return kk_std_text_parse__new_ParseOk(_ru_x808, 0, x1, rest1, _ctx);
  }
  {
    kk_unit_t x_10205 = kk_Unit;
    kk_unit_t _brw_x795 = kk_Unit;
    kk_ref_set_borrow(input,(kk_std_core_sslice__sslice_box(save, _ctx)),kk_context());
    kk_ref_drop(input, _ctx);
    _brw_x795;
    if (kk_yielding(kk_context())) {
      kk_box_t _x_x863 = kk_std_core_hnd_yield_extend(kk_std_text_parse__new_mlift_parse_10170_fun864(_y_x10074, resume, _ctx), _ctx); /*2978*/
      return kk_std_text_parse__parse_error_unbox(_x_x863, KK_OWNED, _ctx);
    }
    {
      return kk_std_text_parse__mlift_parse_10169(_y_x10074, resume, x_10205, _ctx);
    }
  }
}
 
// monadic lift


// lift anonymous function
struct kk_std_text_parse__mlift_parse_10171_fun868__t {
  struct kk_function_s _base;
  kk_ref_t input;
  kk_function_t resume;
  kk_std_core_sslice__sslice save;
};
static kk_box_t kk_std_text_parse__mlift_parse_10171_fun868(kk_function_t _fself, kk_box_t _b_x58, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse__new_mlift_parse_10171_fun868(kk_ref_t input, kk_function_t resume, kk_std_core_sslice__sslice save, kk_context_t* _ctx) {
  struct kk_std_text_parse__mlift_parse_10171_fun868__t* _self = kk_function_alloc_as(struct kk_std_text_parse__mlift_parse_10171_fun868__t, 6, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_text_parse__mlift_parse_10171_fun868, kk_context());
  _self->input = input;
  _self->resume = resume;
  _self->save = save;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_text_parse__mlift_parse_10171_fun868(kk_function_t _fself, kk_box_t _b_x58, kk_context_t* _ctx) {
  struct kk_std_text_parse__mlift_parse_10171_fun868__t* _self = kk_function_as(struct kk_std_text_parse__mlift_parse_10171_fun868__t*, _fself, _ctx);
  kk_ref_t input = _self->input; /* local-var<1557,sslice/sslice> */
  kk_function_t resume = _self->resume; /* (bool) -> <local<1557>|1564> std/text/parse/parse-error<1563> */
  kk_std_core_sslice__sslice save = _self->save; /* sslice/sslice */
  kk_drop_match(_self, {kk_ref_dup(input, _ctx);kk_function_dup(resume, _ctx);kk_std_core_sslice__sslice_dup(save, _ctx);}, {}, _ctx)
  kk_std_text_parse__parse_error _y_x10074_60 = kk_std_text_parse__parse_error_unbox(_b_x58, KK_OWNED, _ctx); /*std/text/parse/parse-error<1563>*/;
  kk_std_text_parse__parse_error _x_x869 = kk_std_text_parse__mlift_parse_10170(input, resume, save, _y_x10074_60, _ctx); /*std/text/parse/parse-error<1563>*/
  return kk_std_text_parse__parse_error_box(_x_x869, _ctx);
}

kk_std_text_parse__parse_error kk_std_text_parse__mlift_parse_10171(kk_ref_t input, kk_function_t resume, kk_std_core_sslice__sslice save, kk_context_t* _ctx) { /* forall<h,a,e> (input : local-var<h,sslice/sslice>, resume : (bool) -> <local<h>|e> parse-error<a>, save : sslice/sslice) -> <local<h>|e> parse-error<a> */ 
  kk_std_text_parse__parse_error x_10207;
  kk_function_t _x_x866 = kk_function_dup(resume, _ctx); /*(bool) -> <local<1557>|1564> std/text/parse/parse-error<1563>*/
  x_10207 = kk_function_call(kk_std_text_parse__parse_error, (kk_function_t, bool, kk_context_t*), _x_x866, (_x_x866, true, _ctx), _ctx); /*std/text/parse/parse-error<1563>*/
  if (kk_yielding(kk_context())) {
    kk_std_text_parse__parse_error_drop(x_10207, _ctx);
    kk_box_t _x_x867 = kk_std_core_hnd_yield_extend(kk_std_text_parse__new_mlift_parse_10171_fun868(input, resume, save, _ctx), _ctx); /*2978*/
    return kk_std_text_parse__parse_error_unbox(_x_x867, KK_OWNED, _ctx);
  }
  {
    return kk_std_text_parse__mlift_parse_10170(input, resume, save, x_10207, _ctx);
  }
}
 
// monadic lift


// lift anonymous function
struct kk_std_text_parse__mlift_parse_10173_fun871__t {
  struct kk_function_s _base;
  kk_box_t x;
};
static kk_box_t kk_std_text_parse__mlift_parse_10173_fun871(kk_function_t _fself, kk_box_t _b_x68, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse__new_mlift_parse_10173_fun871(kk_box_t x, kk_context_t* _ctx) {
  struct kk_std_text_parse__mlift_parse_10173_fun871__t* _self = kk_function_alloc_as(struct kk_std_text_parse__mlift_parse_10173_fun871__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_text_parse__mlift_parse_10173_fun871, kk_context());
  _self->x = x;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_text_parse__mlift_parse_10173_fun871(kk_function_t _fself, kk_box_t _b_x68, kk_context_t* _ctx) {
  struct kk_std_text_parse__mlift_parse_10173_fun871__t* _self = kk_function_as(struct kk_std_text_parse__mlift_parse_10173_fun871__t*, _fself, _ctx);
  kk_box_t x = _self->x; /* 1521 */
  kk_drop_match(_self, {kk_box_dup(x, _ctx);}, {}, _ctx)
  kk_unit_t wild___0_70 = kk_Unit;
  kk_unit_unbox(_b_x68);
  kk_std_core_types__maybe _x_x872 = kk_std_core_types__new_Just(x, _ctx); /*maybe<91>*/
  return kk_std_core_types__maybe_box(_x_x872, _ctx);
}

kk_std_core_types__maybe kk_std_text_parse__mlift_parse_10173(kk_ref_t input, kk_function_t pred, kk_std_core_sslice__sslice inp, kk_context_t* _ctx) { /* forall<a,h,e> (input : local-var<h,sslice/sslice>, pred : (sslice/sslice) -> maybe<(a, sslice/sslice)>, inp : sslice/sslice) -> <local<h>|e> maybe<a> */ 
  kk_std_core_types__maybe _match_x790 = kk_function_call(kk_std_core_types__maybe, (kk_function_t, kk_std_core_sslice__sslice, kk_context_t*), pred, (pred, inp, _ctx), _ctx); /*maybe<(1521, sslice/sslice)>*/;
  if (kk_std_core_types__is_Just(_match_x790, _ctx)) {
    kk_box_t _box_x61 = _match_x790._cons.Just.value;
    kk_std_core_types__tuple2 _pat_9 = kk_std_core_types__tuple2_unbox(_box_x61, KK_BORROWED, _ctx);
    kk_box_t _box_x62 = _pat_9.snd;
    kk_std_core_sslice__sslice cap = kk_std_core_sslice__sslice_unbox(_box_x62, KK_BORROWED, _ctx);
    kk_box_t x = _pat_9.fst;
    kk_std_core_sslice__sslice_dup(cap, _ctx);
    kk_box_dup(x, _ctx);
    kk_std_core_types__maybe_drop(_match_x790, _ctx);
    kk_unit_t x_0_10209 = kk_Unit;
    kk_unit_t _brw_x792 = kk_Unit;
    kk_ref_set_borrow(input,(kk_std_core_sslice__sslice_box(cap, _ctx)),kk_context());
    kk_ref_drop(input, _ctx);
    _brw_x792;
    if (kk_yielding(kk_context())) {
      kk_box_t _x_x870 = kk_std_core_hnd_yield_extend(kk_std_text_parse__new_mlift_parse_10173_fun871(x, _ctx), _ctx); /*2978*/
      return kk_std_core_types__maybe_unbox(_x_x870, KK_OWNED, _ctx);
    }
    {
      return kk_std_core_types__new_Just(x, _ctx);
    }
  }
  {
    kk_ref_drop(input, _ctx);
    return kk_std_core_types__new_Nothing(_ctx);
  }
}


// lift anonymous function
struct kk_std_text_parse_parse_fun875__t {
  struct kk_function_s _base;
  kk_ref_t loc;
};
static kk_box_t kk_std_text_parse_parse_fun875(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_parse_fun875(kk_ref_t loc, kk_context_t* _ctx) {
  struct kk_std_text_parse_parse_fun875__t* _self = kk_function_alloc_as(struct kk_std_text_parse_parse_fun875__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_text_parse_parse_fun875, kk_context());
  _self->loc = loc;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_text_parse_parse_fun875(kk_function_t _fself, kk_context_t* _ctx) {
  struct kk_std_text_parse_parse_fun875__t* _self = kk_function_as(struct kk_std_text_parse_parse_fun875__t*, _fself, _ctx);
  kk_ref_t loc = _self->loc; /* local-var<1557,sslice/sslice> */
  kk_drop_match(_self, {kk_ref_dup(loc, _ctx);}, {}, _ctx)
  return kk_ref_get(loc,kk_context());
}


// lift anonymous function
struct kk_std_text_parse_parse_fun878__t {
  struct kk_function_s _base;
  kk_ref_t loc;
};
static kk_box_t kk_std_text_parse_parse_fun878(kk_function_t _fself, int32_t _b_x84, kk_std_core_hnd__ev _b_x85, kk_box_t _b_x86, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_parse_fun878(kk_ref_t loc, kk_context_t* _ctx) {
  struct kk_std_text_parse_parse_fun878__t* _self = kk_function_alloc_as(struct kk_std_text_parse_parse_fun878__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_text_parse_parse_fun878, kk_context());
  _self->loc = loc;
  return kk_datatype_from_base(&_self->_base, kk_context());
}



// lift anonymous function
struct kk_std_text_parse_parse_fun879__t {
  struct kk_function_s _base;
  kk_box_t _b_x86;
  kk_ref_t loc;
};
static kk_box_t kk_std_text_parse_parse_fun879(kk_function_t _fself, kk_function_t _b_x81, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_parse_fun879(kk_box_t _b_x86, kk_ref_t loc, kk_context_t* _ctx) {
  struct kk_std_text_parse_parse_fun879__t* _self = kk_function_alloc_as(struct kk_std_text_parse_parse_fun879__t, 3, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_text_parse_parse_fun879, kk_context());
  _self->_b_x86 = _b_x86;
  _self->loc = loc;
  return kk_datatype_from_base(&_self->_base, kk_context());
}



// lift anonymous function
struct kk_std_text_parse_parse_fun883__t {
  struct kk_function_s _base;
  kk_box_t _b_x86;
};
static kk_box_t kk_std_text_parse_parse_fun883(kk_function_t _fself, kk_box_t _b_x78, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_parse_fun883(kk_box_t _b_x86, kk_context_t* _ctx) {
  struct kk_std_text_parse_parse_fun883__t* _self = kk_function_alloc_as(struct kk_std_text_parse_parse_fun883__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_text_parse_parse_fun883, kk_context());
  _self->_b_x86 = _b_x86;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_text_parse_parse_fun883(kk_function_t _fself, kk_box_t _b_x78, kk_context_t* _ctx) {
  struct kk_std_text_parse_parse_fun883__t* _self = kk_function_as(struct kk_std_text_parse_parse_fun883__t*, _fself, _ctx);
  kk_box_t _b_x86 = _self->_b_x86; /* 45 */
  kk_drop_match(_self, {kk_box_dup(_b_x86, _ctx);}, {}, _ctx)
  kk_std_text_parse__parse_error _x_x884;
  kk_string_t _x_x885 = kk_string_unbox(_b_x86); /*string*/
  kk_std_core_sslice__sslice _x_x886 = kk_std_core_sslice__sslice_unbox(_b_x78, KK_OWNED, _ctx); /*sslice/sslice*/
  _x_x884 = kk_std_text_parse__new_ParseError(kk_reuse_null, 0, _x_x885, _x_x886, _ctx); /*std/text/parse/parse-error<33>*/
  return kk_std_text_parse__parse_error_box(_x_x884, _ctx);
}
static kk_box_t kk_std_text_parse_parse_fun879(kk_function_t _fself, kk_function_t _b_x81, kk_context_t* _ctx) {
  struct kk_std_text_parse_parse_fun879__t* _self = kk_function_as(struct kk_std_text_parse_parse_fun879__t*, _fself, _ctx);
  kk_box_t _b_x86 = _self->_b_x86; /* 45 */
  kk_ref_t loc = _self->loc; /* local-var<1557,sslice/sslice> */
  kk_drop_match(_self, {kk_box_dup(_b_x86, _ctx);kk_ref_dup(loc, _ctx);}, {}, _ctx)
  kk_function_drop(_b_x81, _ctx);
  kk_std_core_sslice__sslice x_0_10216;
  kk_box_t _x_x880 = kk_ref_get(loc,kk_context()); /*2657*/
  x_0_10216 = kk_std_core_sslice__sslice_unbox(_x_x880, KK_OWNED, _ctx); /*sslice/sslice*/
  kk_std_text_parse__parse_error _x_x881;
  if (kk_yielding(kk_context())) {
    kk_std_core_sslice__sslice_drop(x_0_10216, _ctx);
    kk_box_t _x_x882 = kk_std_core_hnd_yield_extend(kk_std_text_parse_new_parse_fun883(_b_x86, _ctx), _ctx); /*2978*/
    _x_x881 = kk_std_text_parse__parse_error_unbox(_x_x882, KK_OWNED, _ctx); /*std/text/parse/parse-error<1563>*/
  }
  else {
    kk_string_t _x_x887 = kk_string_unbox(_b_x86); /*string*/
    _x_x881 = kk_std_text_parse__new_ParseError(kk_reuse_null, 0, _x_x887, x_0_10216, _ctx); /*std/text/parse/parse-error<1563>*/
  }
  return kk_std_text_parse__parse_error_box(_x_x881, _ctx);
}
static kk_box_t kk_std_text_parse_parse_fun878(kk_function_t _fself, int32_t _b_x84, kk_std_core_hnd__ev _b_x85, kk_box_t _b_x86, kk_context_t* _ctx) {
  struct kk_std_text_parse_parse_fun878__t* _self = kk_function_as(struct kk_std_text_parse_parse_fun878__t*, _fself, _ctx);
  kk_ref_t loc = _self->loc; /* local-var<1557,sslice/sslice> */
  kk_drop_match(_self, {kk_ref_dup(loc, _ctx);}, {}, _ctx)
  kk_datatype_ptr_dropn(_b_x85, (KK_I32(3)), _ctx);
  return kk_std_core_hnd_yield_to_final(_b_x84, kk_std_text_parse_new_parse_fun879(_b_x86, loc, _ctx), _ctx);
}


// lift anonymous function
struct kk_std_text_parse_parse_fun890__t {
  struct kk_function_s _base;
  kk_ref_t loc;
};
static kk_box_t kk_std_text_parse_parse_fun890(kk_function_t _fself, int32_t _b_x103, kk_std_core_hnd__ev _b_x104, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_parse_fun890(kk_ref_t loc, kk_context_t* _ctx) {
  struct kk_std_text_parse_parse_fun890__t* _self = kk_function_alloc_as(struct kk_std_text_parse_parse_fun890__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_text_parse_parse_fun890, kk_context());
  _self->loc = loc;
  return kk_datatype_from_base(&_self->_base, kk_context());
}



// lift anonymous function
struct kk_std_text_parse_parse_fun891__t {
  struct kk_function_s _base;
  kk_ref_t loc;
};
static kk_box_t kk_std_text_parse_parse_fun891(kk_function_t _fself, kk_function_t _b_x100, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_parse_fun891(kk_ref_t loc, kk_context_t* _ctx) {
  struct kk_std_text_parse_parse_fun891__t* _self = kk_function_alloc_as(struct kk_std_text_parse_parse_fun891__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_text_parse_parse_fun891, kk_context());
  _self->loc = loc;
  return kk_datatype_from_base(&_self->_base, kk_context());
}



// lift anonymous function
struct kk_std_text_parse_parse_fun892__t {
  struct kk_function_s _base;
  kk_ref_t loc;
};
static kk_box_t kk_std_text_parse_parse_fun892(kk_function_t _fself, kk_box_t _b_x94, kk_function_t _b_x95, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_parse_fun892(kk_ref_t loc, kk_context_t* _ctx) {
  struct kk_std_text_parse_parse_fun892__t* _self = kk_function_alloc_as(struct kk_std_text_parse_parse_fun892__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_text_parse_parse_fun892, kk_context());
  _self->loc = loc;
  return kk_datatype_from_base(&_self->_base, kk_context());
}



// lift anonymous function
struct kk_std_text_parse_parse_fun893__t {
  struct kk_function_s _base;
  kk_function_t _b_x95;
};
static kk_std_text_parse__parse_error kk_std_text_parse_parse_fun893(kk_function_t _fself, bool _b_x96, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_parse_fun893(kk_function_t _b_x95, kk_context_t* _ctx) {
  struct kk_std_text_parse_parse_fun893__t* _self = kk_function_alloc_as(struct kk_std_text_parse_parse_fun893__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_text_parse_parse_fun893, kk_context());
  _self->_b_x95 = _b_x95;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_std_text_parse__parse_error kk_std_text_parse_parse_fun893(kk_function_t _fself, bool _b_x96, kk_context_t* _ctx) {
  struct kk_std_text_parse_parse_fun893__t* _self = kk_function_as(struct kk_std_text_parse_parse_fun893__t*, _fself, _ctx);
  kk_function_t _b_x95 = _self->_b_x95; /* (5566) -> 5567 5568 */
  kk_drop_match(_self, {kk_function_dup(_b_x95, _ctx);}, {}, _ctx)
  kk_box_t _x_x894 = kk_function_call(kk_box_t, (kk_function_t, kk_box_t, kk_context_t*), _b_x95, (_b_x95, kk_bool_box(_b_x96), _ctx), _ctx); /*5568*/
  return kk_std_text_parse__parse_error_unbox(_x_x894, KK_OWNED, _ctx);
}


// lift anonymous function
struct kk_std_text_parse_parse_fun899__t {
  struct kk_function_s _base;
  kk_ref_t loc;
  kk_function_t r_157;
};
static kk_box_t kk_std_text_parse_parse_fun899(kk_function_t _fself, kk_box_t _b_x90, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_parse_fun899(kk_ref_t loc, kk_function_t r_157, kk_context_t* _ctx) {
  struct kk_std_text_parse_parse_fun899__t* _self = kk_function_alloc_as(struct kk_std_text_parse_parse_fun899__t, 3, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_text_parse_parse_fun899, kk_context());
  _self->loc = loc;
  _self->r_157 = r_157;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_text_parse_parse_fun899(kk_function_t _fself, kk_box_t _b_x90, kk_context_t* _ctx) {
  struct kk_std_text_parse_parse_fun899__t* _self = kk_function_as(struct kk_std_text_parse_parse_fun899__t*, _fself, _ctx);
  kk_ref_t loc = _self->loc; /* local-var<1557,sslice/sslice> */
  kk_function_t r_157 = _self->r_157; /* (bool) -> <local<1557>|1564> std/text/parse/parse-error<1563> */
  kk_drop_match(_self, {kk_ref_dup(loc, _ctx);kk_function_dup(r_157, _ctx);}, {}, _ctx)
  kk_std_text_parse__parse_error _x_x900;
  kk_std_core_sslice__sslice _x_x901 = kk_std_core_sslice__sslice_unbox(_b_x90, KK_OWNED, _ctx); /*sslice/sslice*/
  _x_x900 = kk_std_text_parse__mlift_parse_10171(loc, r_157, _x_x901, _ctx); /*std/text/parse/parse-error<1563>*/
  return kk_std_text_parse__parse_error_box(_x_x900, _ctx);
}
static kk_box_t kk_std_text_parse_parse_fun892(kk_function_t _fself, kk_box_t _b_x94, kk_function_t _b_x95, kk_context_t* _ctx) {
  struct kk_std_text_parse_parse_fun892__t* _self = kk_function_as(struct kk_std_text_parse_parse_fun892__t*, _fself, _ctx);
  kk_ref_t loc = _self->loc; /* local-var<1557,sslice/sslice> */
  kk_drop_match(_self, {kk_ref_dup(loc, _ctx);}, {}, _ctx)
  kk_box_drop(_b_x94, _ctx);
  kk_function_t r_157 = kk_std_text_parse_new_parse_fun893(_b_x95, _ctx); /*(bool) -> <local<1557>|1564> std/text/parse/parse-error<1563>*/;
  kk_std_core_sslice__sslice x_1_10221;
  kk_box_t _x_x895;
  kk_ref_t _x_x896 = kk_ref_dup(loc, _ctx); /*local-var<1557,sslice/sslice>*/
  _x_x895 = kk_ref_get(_x_x896,kk_context()); /*2735*/
  x_1_10221 = kk_std_core_sslice__sslice_unbox(_x_x895, KK_OWNED, _ctx); /*sslice/sslice*/
  kk_std_text_parse__parse_error _x_x897;
  if (kk_yielding(kk_context())) {
    kk_std_core_sslice__sslice_drop(x_1_10221, _ctx);
    kk_box_t _x_x898 = kk_std_core_hnd_yield_extend(kk_std_text_parse_new_parse_fun899(loc, r_157, _ctx), _ctx); /*2978*/
    _x_x897 = kk_std_text_parse__parse_error_unbox(_x_x898, KK_OWNED, _ctx); /*std/text/parse/parse-error<1563>*/
  }
  else {
    _x_x897 = kk_std_text_parse__mlift_parse_10171(loc, r_157, x_1_10221, _ctx); /*std/text/parse/parse-error<1563>*/
  }
  return kk_std_text_parse__parse_error_box(_x_x897, _ctx);
}
static kk_box_t kk_std_text_parse_parse_fun891(kk_function_t _fself, kk_function_t _b_x100, kk_context_t* _ctx) {
  struct kk_std_text_parse_parse_fun891__t* _self = kk_function_as(struct kk_std_text_parse_parse_fun891__t*, _fself, _ctx);
  kk_ref_t loc = _self->loc; /* local-var<1557,sslice/sslice> */
  kk_drop_match(_self, {kk_ref_dup(loc, _ctx);}, {}, _ctx)
  return kk_std_core_hnd_protect(kk_unit_box(kk_Unit), kk_std_text_parse_new_parse_fun892(loc, _ctx), _b_x100, _ctx);
}
static kk_box_t kk_std_text_parse_parse_fun890(kk_function_t _fself, int32_t _b_x103, kk_std_core_hnd__ev _b_x104, kk_context_t* _ctx) {
  struct kk_std_text_parse_parse_fun890__t* _self = kk_function_as(struct kk_std_text_parse_parse_fun890__t*, _fself, _ctx);
  kk_ref_t loc = _self->loc; /* local-var<1557,sslice/sslice> */
  kk_drop_match(_self, {kk_ref_dup(loc, _ctx);}, {}, _ctx)
  kk_datatype_ptr_dropn(_b_x104, (KK_I32(3)), _ctx);
  return kk_std_core_hnd_yield_to(_b_x103, kk_std_text_parse_new_parse_fun891(loc, _ctx), _ctx);
}


// lift anonymous function
struct kk_std_text_parse_parse_fun904__t {
  struct kk_function_s _base;
  kk_ref_t loc;
};
static kk_box_t kk_std_text_parse_parse_fun904(kk_function_t _fself, kk_box_t _b_x110, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_parse_fun904(kk_ref_t loc, kk_context_t* _ctx) {
  struct kk_std_text_parse_parse_fun904__t* _self = kk_function_alloc_as(struct kk_std_text_parse_parse_fun904__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_text_parse_parse_fun904, kk_context());
  _self->loc = loc;
  return kk_datatype_from_base(&_self->_base, kk_context());
}



// lift anonymous function
struct kk_std_text_parse_parse_fun905__t {
  struct kk_function_s _base;
  kk_box_t _b_x110;
};
static kk_std_core_types__maybe kk_std_text_parse_parse_fun905(kk_function_t _fself, kk_std_core_sslice__sslice _b_x113, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_parse_fun905(kk_box_t _b_x110, kk_context_t* _ctx) {
  struct kk_std_text_parse_parse_fun905__t* _self = kk_function_alloc_as(struct kk_std_text_parse_parse_fun905__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_text_parse_parse_fun905, kk_context());
  _self->_b_x110 = _b_x110;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_std_core_types__maybe kk_std_text_parse_parse_fun905(kk_function_t _fself, kk_std_core_sslice__sslice _b_x113, kk_context_t* _ctx) {
  struct kk_std_text_parse_parse_fun905__t* _self = kk_function_as(struct kk_std_text_parse_parse_fun905__t*, _fself, _ctx);
  kk_box_t _b_x110 = _self->_b_x110; /* 5721 */
  kk_drop_match(_self, {kk_box_dup(_b_x110, _ctx);}, {}, _ctx)
  kk_box_t _x_x906;
  kk_function_t _x_x907 = kk_function_unbox(_b_x110, _ctx); /*(111) -> 112*/
  _x_x906 = kk_function_call(kk_box_t, (kk_function_t, kk_box_t, kk_context_t*), _x_x907, (_x_x907, kk_std_core_sslice__sslice_box(_b_x113, _ctx), _ctx), _ctx); /*112*/
  return kk_std_core_types__maybe_unbox(_x_x906, KK_OWNED, _ctx);
}


// lift anonymous function
struct kk_std_text_parse_parse_fun912__t {
  struct kk_function_s _base;
  kk_ref_t loc;
  kk_function_t pred_153;
};
static kk_box_t kk_std_text_parse_parse_fun912(kk_function_t _fself, kk_box_t _b_x108, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_parse_fun912(kk_ref_t loc, kk_function_t pred_153, kk_context_t* _ctx) {
  struct kk_std_text_parse_parse_fun912__t* _self = kk_function_alloc_as(struct kk_std_text_parse_parse_fun912__t, 3, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_text_parse_parse_fun912, kk_context());
  _self->loc = loc;
  _self->pred_153 = pred_153;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_text_parse_parse_fun912(kk_function_t _fself, kk_box_t _b_x108, kk_context_t* _ctx) {
  struct kk_std_text_parse_parse_fun912__t* _self = kk_function_as(struct kk_std_text_parse_parse_fun912__t*, _fself, _ctx);
  kk_ref_t loc = _self->loc; /* local-var<1557,sslice/sslice> */
  kk_function_t pred_153 = _self->pred_153; /* (sslice/sslice) -> maybe<(1521, sslice/sslice)> */
  kk_drop_match(_self, {kk_ref_dup(loc, _ctx);kk_function_dup(pred_153, _ctx);}, {}, _ctx)
  kk_std_core_types__maybe _x_x913;
  kk_std_core_sslice__sslice _x_x914 = kk_std_core_sslice__sslice_unbox(_b_x108, KK_OWNED, _ctx); /*sslice/sslice*/
  _x_x913 = kk_std_text_parse__mlift_parse_10173(loc, pred_153, _x_x914, _ctx); /*maybe<1521>*/
  return kk_std_core_types__maybe_box(_x_x913, _ctx);
}
static kk_box_t kk_std_text_parse_parse_fun904(kk_function_t _fself, kk_box_t _b_x110, kk_context_t* _ctx) {
  struct kk_std_text_parse_parse_fun904__t* _self = kk_function_as(struct kk_std_text_parse_parse_fun904__t*, _fself, _ctx);
  kk_ref_t loc = _self->loc; /* local-var<1557,sslice/sslice> */
  kk_drop_match(_self, {kk_ref_dup(loc, _ctx);}, {}, _ctx)
  kk_function_t pred_153 = kk_std_text_parse_new_parse_fun905(_b_x110, _ctx); /*(sslice/sslice) -> maybe<(1521, sslice/sslice)>*/;
  kk_std_core_sslice__sslice x_2_10223;
  kk_box_t _x_x908;
  kk_ref_t _x_x909 = kk_ref_dup(loc, _ctx); /*local-var<1557,sslice/sslice>*/
  _x_x908 = kk_ref_get(_x_x909,kk_context()); /*2811*/
  x_2_10223 = kk_std_core_sslice__sslice_unbox(_x_x908, KK_OWNED, _ctx); /*sslice/sslice*/
  kk_std_core_types__maybe _x_x910;
  if (kk_yielding(kk_context())) {
    kk_std_core_sslice__sslice_drop(x_2_10223, _ctx);
    kk_box_t _x_x911 = kk_std_core_hnd_yield_extend(kk_std_text_parse_new_parse_fun912(loc, pred_153, _ctx), _ctx); /*2978*/
    _x_x910 = kk_std_core_types__maybe_unbox(_x_x911, KK_OWNED, _ctx); /*maybe<1521>*/
  }
  else {
    _x_x910 = kk_std_text_parse__mlift_parse_10173(loc, pred_153, x_2_10223, _ctx); /*maybe<1521>*/
  }
  return kk_std_core_types__maybe_box(_x_x910, _ctx);
}


// lift anonymous function
struct kk_std_text_parse_parse_fun917__t {
  struct kk_function_s _base;
  kk_ref_t loc;
};
static kk_box_t kk_std_text_parse_parse_fun917(kk_function_t _fself, kk_box_t _b_x121, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_parse_fun917(kk_ref_t loc, kk_context_t* _ctx) {
  struct kk_std_text_parse_parse_fun917__t* _self = kk_function_alloc_as(struct kk_std_text_parse_parse_fun917__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_text_parse_parse_fun917, kk_context());
  _self->loc = loc;
  return kk_datatype_from_base(&_self->_base, kk_context());
}



// lift anonymous function
struct kk_std_text_parse_parse_fun921__t {
  struct kk_function_s _base;
  kk_box_t _b_x121;
};
static kk_box_t kk_std_text_parse_parse_fun921(kk_function_t _fself, kk_box_t _b_x117, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_parse_fun921(kk_box_t _b_x121, kk_context_t* _ctx) {
  struct kk_std_text_parse_parse_fun921__t* _self = kk_function_alloc_as(struct kk_std_text_parse_parse_fun921__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_text_parse_parse_fun921, kk_context());
  _self->_b_x121 = _b_x121;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_text_parse_parse_fun921(kk_function_t _fself, kk_box_t _b_x117, kk_context_t* _ctx) {
  struct kk_std_text_parse_parse_fun921__t* _self = kk_function_as(struct kk_std_text_parse_parse_fun921__t*, _fself, _ctx);
  kk_box_t _b_x121 = _self->_b_x121; /* 510 */
  kk_drop_match(_self, {kk_box_dup(_b_x121, _ctx);}, {}, _ctx)
  kk_std_text_parse__parse_error _x_x922;
  kk_std_core_sslice__sslice _x_x923 = kk_std_core_sslice__sslice_unbox(_b_x117, KK_OWNED, _ctx); /*sslice/sslice*/
  _x_x922 = kk_std_text_parse__new_ParseOk(kk_reuse_null, 0, _b_x121, _x_x923, _ctx); /*std/text/parse/parse-error<33>*/
  return kk_std_text_parse__parse_error_box(_x_x922, _ctx);
}
static kk_box_t kk_std_text_parse_parse_fun917(kk_function_t _fself, kk_box_t _b_x121, kk_context_t* _ctx) {
  struct kk_std_text_parse_parse_fun917__t* _self = kk_function_as(struct kk_std_text_parse_parse_fun917__t*, _fself, _ctx);
  kk_ref_t loc = _self->loc; /* local-var<1557,sslice/sslice> */
  kk_drop_match(_self, {kk_ref_dup(loc, _ctx);}, {}, _ctx)
  kk_std_core_sslice__sslice x_3_10225;
  kk_box_t _x_x918 = kk_ref_get(loc,kk_context()); /*2836*/
  x_3_10225 = kk_std_core_sslice__sslice_unbox(_x_x918, KK_OWNED, _ctx); /*sslice/sslice*/
  kk_std_text_parse__parse_error _x_x919;
  if (kk_yielding(kk_context())) {
    kk_std_core_sslice__sslice_drop(x_3_10225, _ctx);
    kk_box_t _x_x920 = kk_std_core_hnd_yield_extend(kk_std_text_parse_new_parse_fun921(_b_x121, _ctx), _ctx); /*2978*/
    _x_x919 = kk_std_text_parse__parse_error_unbox(_x_x920, KK_OWNED, _ctx); /*std/text/parse/parse-error<1563>*/
  }
  else {
    _x_x919 = kk_std_text_parse__new_ParseOk(kk_reuse_null, 0, _b_x121, x_3_10225, _ctx); /*std/text/parse/parse-error<1563>*/
  }
  return kk_std_text_parse__parse_error_box(_x_x919, _ctx);
}

kk_std_text_parse__parse_error kk_std_text_parse_parse(kk_std_core_sslice__sslice input0, kk_function_t p, kk_context_t* _ctx) { /* forall<a,e> (input0 : sslice/sslice, p : () -> <parse|e> a) -> e parse-error<a> */ 
  kk_ref_t loc = kk_ref_alloc((kk_std_core_sslice__sslice_box(input0, _ctx)),kk_context()); /*local-var<1557,sslice/sslice>*/;
  kk_std_text_parse__parse _b_x118_122;
  kk_std_core_hnd__clause0 _x_x873;
  kk_function_t _x_x874;
  kk_ref_dup(loc, _ctx);
  _x_x874 = kk_std_text_parse_new_parse_fun875(loc, _ctx); /*() -> 6231 2614*/
  _x_x873 = kk_std_core_hnd_clause_tail0(_x_x874, _ctx); /*hnd/clause0<6234,6233,6231,6232>*/
  kk_std_core_hnd__clause1 _x_x876;
  kk_function_t _x_x877;
  kk_ref_dup(loc, _ctx);
  _x_x877 = kk_std_text_parse_new_parse_fun878(loc, _ctx); /*(hnd/marker<48,49>, hnd/ev<47>, 45) -> 48 3225*/
  _x_x876 = kk_std_core_hnd__new_Clause1(_x_x877, _ctx); /*hnd/clause1<45,46,47,48,49>*/
  kk_std_core_hnd__clause0 _x_x888;
  kk_function_t _x_x889;
  kk_ref_dup(loc, _ctx);
  _x_x889 = kk_std_text_parse_new_parse_fun890(loc, _ctx); /*(hnd/marker<37,38>, hnd/ev<36>) -> 37 3283*/
  _x_x888 = kk_std_core_hnd__new_Clause0(_x_x889, _ctx); /*hnd/clause0<35,36,37,38>*/
  kk_std_core_hnd__clause1 _x_x902;
  kk_function_t _x_x903;
  kk_ref_dup(loc, _ctx);
  _x_x903 = kk_std_text_parse_new_parse_fun904(loc, _ctx); /*(5721) -> 5718 5722*/
  _x_x902 = kk_std_core_hnd_clause_tail1(_x_x903, _ctx); /*hnd/clause1<5721,5722,5720,5718,5719>*/
  _b_x118_122 = kk_std_text_parse__new_Hnd_parse(kk_reuse_null, 0, kk_integer_from_small(3), _x_x873, _x_x876, _x_x888, _x_x902, _ctx); /*std/text/parse/parse<<local<1557>|1564>,std/text/parse/parse-error<1563>>*/
  kk_std_text_parse__parse_error res;
  kk_box_t _x_x915;
  kk_function_t _x_x916;
  kk_ref_dup(loc, _ctx);
  _x_x916 = kk_std_text_parse_new_parse_fun917(loc, _ctx); /*(510) -> 511 512*/
  _x_x915 = kk_std_text_parse__handle_parse(_b_x118_122, _x_x916, p, _ctx); /*512*/
  res = kk_std_text_parse__parse_error_unbox(_x_x915, KK_OWNED, _ctx); /*std/text/parse/parse-error<1563>*/
  kk_box_t _x_x924 = kk_std_core_hnd_prompt_local_var(loc, kk_std_text_parse__parse_error_box(res, _ctx), _ctx); /*9564*/
  return kk_std_text_parse__parse_error_unbox(_x_x924, KK_OWNED, _ctx);
}

kk_std_core_types__maybe kk_std_text_parse_starts_with(kk_string_t s, kk_function_t p, kk_context_t* _ctx) { /* forall<a> (s : string, p : () -> parse a) -> maybe<(a, sslice/sslice)> */ 
  kk_std_text_parse__parse_error _match_x785;
  kk_std_core_sslice__sslice _x_x925;
  kk_string_t _x_x926 = kk_string_dup(s, _ctx); /*string*/
  kk_integer_t _x_x927 = kk_string_len_int(s,kk_context()); /*int*/
  _x_x925 = kk_std_core_sslice__new_Sslice(_x_x926, kk_integer_from_small(0), _x_x927, _ctx); /*sslice/sslice*/
  _match_x785 = kk_std_text_parse_parse(_x_x925, p, _ctx); /*std/text/parse/parse-error<1563>*/
  if (kk_std_text_parse__is_ParseOk(_match_x785, _ctx)) {
    struct kk_std_text_parse_ParseOk* _con_x928 = kk_std_text_parse__as_ParseOk(_match_x785, _ctx);
    kk_std_core_sslice__sslice rest = _con_x928->rest;
    kk_box_t x = _con_x928->result;
    if kk_likely(kk_datatype_ptr_is_unique(_match_x785, _ctx)) {
      kk_datatype_ptr_free(_match_x785, _ctx);
    }
    else {
      kk_std_core_sslice__sslice_dup(rest, _ctx);
      kk_box_dup(x, _ctx);
      kk_datatype_ptr_decref(_match_x785, _ctx);
    }
    kk_box_t _x_x929;
    kk_std_core_types__tuple2 _x_x930 = kk_std_core_types__new_Tuple2(x, kk_std_core_sslice__sslice_box(rest, _ctx), _ctx); /*(129, 130)*/
    _x_x929 = kk_std_core_types__tuple2_box(_x_x930, _ctx); /*91*/
    return kk_std_core_types__new_Just(_x_x929, _ctx);
  }
  {
    kk_std_text_parse__parse_error_drop(_match_x785, _ctx);
    return kk_std_core_types__new_Nothing(_ctx);
  }
}


// lift anonymous function
struct kk_std_text_parse__lp__at_x_fun933__t_bar__bar__rp_ {
  struct kk_function_s _base;
};
static kk_box_t kk_std_text_parse__lp__at_x_fun933_bar__bar__rp_(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse__lp__at_new_x_fun933_bar__bar__rp_(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_text_parse__lp__at_x_fun933_bar__bar__rp_, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_text_parse__lp__at_x_fun933_bar__bar__rp_(kk_function_t _fself, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core_hnd__ev ev_10233 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<std/text/parse/parse>*/;
  {
    struct kk_std_core_hnd_Ev* _con_x934 = kk_std_core_hnd__as_Ev(ev_10233, _ctx);
    kk_box_t _box_x167 = _con_x934->hnd;
    int32_t m = _con_x934->marker;
    kk_std_text_parse__parse h = kk_std_text_parse__parse_unbox(_box_x167, KK_BORROWED, _ctx);
    kk_std_text_parse__parse_dup(h, _ctx);
    {
      struct kk_std_text_parse__Hnd_parse* _con_x935 = kk_std_text_parse__as_Hnd_parse(h, _ctx);
      kk_integer_t _pat_0 = _con_x935->_cfc;
      kk_std_core_hnd__clause0 _pat_1_1 = _con_x935->_fun_current_input;
      kk_std_core_hnd__clause1 _pat_2 = _con_x935->_ctl_fail;
      kk_std_core_hnd__clause0 _ctl_pick = _con_x935->_ctl_pick;
      kk_std_core_hnd__clause1 _pat_3 = _con_x935->_fun_satisfy;
      if kk_likely(kk_datatype_ptr_is_unique(h, _ctx)) {
        kk_std_core_hnd__clause1_drop(_pat_3, _ctx);
        kk_std_core_hnd__clause1_drop(_pat_2, _ctx);
        kk_std_core_hnd__clause0_drop(_pat_1_1, _ctx);
        kk_integer_drop(_pat_0, _ctx);
        kk_datatype_ptr_free(h, _ctx);
      }
      else {
        kk_std_core_hnd__clause0_dup(_ctl_pick, _ctx);
        kk_datatype_ptr_decref(h, _ctx);
      }
      {
        kk_function_t _fun_unbox_x170 = _ctl_pick.clause;
        return kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_context_t*), _fun_unbox_x170, (_fun_unbox_x170, m, ev_10233, _ctx), _ctx);
      }
    }
  }
}


// lift anonymous function
struct kk_std_text_parse__lp__at_x_fun936__t_bar__bar__rp_ {
  struct kk_function_s _base;
  kk_function_t p1;
  kk_function_t p2;
};
static kk_box_t kk_std_text_parse__lp__at_x_fun936_bar__bar__rp_(kk_function_t _fself, kk_box_t _b_x178, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse__lp__at_new_x_fun936_bar__bar__rp_(kk_function_t p1, kk_function_t p2, kk_context_t* _ctx) {
  struct kk_std_text_parse__lp__at_x_fun936__t_bar__bar__rp_* _self = kk_function_alloc_as(struct kk_std_text_parse__lp__at_x_fun936__t_bar__bar__rp_, 3, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_text_parse__lp__at_x_fun936_bar__bar__rp_, kk_context());
  _self->p1 = p1;
  _self->p2 = p2;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_text_parse__lp__at_x_fun936_bar__bar__rp_(kk_function_t _fself, kk_box_t _b_x178, kk_context_t* _ctx) {
  struct kk_std_text_parse__lp__at_x_fun936__t_bar__bar__rp_* _self = kk_function_as(struct kk_std_text_parse__lp__at_x_fun936__t_bar__bar__rp_*, _fself, _ctx);
  kk_function_t p1 = _self->p1; /* std/text/parse/parser<1636,1635> */
  kk_function_t p2 = _self->p2; /* std/text/parse/parser<1636,1635> */
  kk_drop_match(_self, {kk_function_dup(p1, _ctx);kk_function_dup(p2, _ctx);}, {}, _ctx)
  bool _match_x784 = kk_bool_unbox(_b_x178); /*bool*/;
  if (_match_x784) {
    kk_function_drop(p2, _ctx);
    return kk_function_call(kk_box_t, (kk_function_t, kk_context_t*), p1, (p1, _ctx), _ctx);
  }
  {
    kk_function_drop(p1, _ctx);
    return kk_function_call(kk_box_t, (kk_function_t, kk_context_t*), p2, (p2, _ctx), _ctx);
  }
}

kk_box_t kk_std_text_parse__lp__bar__bar__rp_(kk_function_t p1, kk_function_t p2, kk_context_t* _ctx) { /* forall<a,e> (p1 : parser<e,a>, p2 : parser<e,a>) -> <parse|e> a */ 
  kk_ssize_t _b_x173_175;
  kk_std_core_hnd__htag _x_x931 = kk_std_core_hnd__htag_dup(kk_std_text_parse__tag_parse, _ctx); /*hnd/htag<std/text/parse/parse>*/
  _b_x173_175 = kk_std_core_hnd__evv_index(_x_x931, _ctx); /*hnd/ev-index*/
  bool x_10230;
  kk_box_t _x_x932 = kk_std_core_hnd__open_at0(_b_x173_175, kk_std_text_parse__lp__at_new_x_fun933_bar__bar__rp_(_ctx), _ctx); /*9025*/
  x_10230 = kk_bool_unbox(_x_x932); /*bool*/
  if (kk_yielding(kk_context())) {
    return kk_std_core_hnd_yield_extend(kk_std_text_parse__lp__at_new_x_fun936_bar__bar__rp_(p1, p2, _ctx), _ctx);
  }
  if (x_10230) {
    kk_function_drop(p2, _ctx);
    return kk_function_call(kk_box_t, (kk_function_t, kk_context_t*), p1, (p1, _ctx), _ctx);
  }
  {
    kk_function_drop(p1, _ctx);
    return kk_function_call(kk_box_t, (kk_function_t, kk_context_t*), p2, (p2, _ctx), _ctx);
  }
}
extern kk_box_t kk_std_text_parse_optional_fun937(kk_function_t _fself, kk_context_t* _ctx) {
  struct kk_std_text_parse_optional_fun937__t* _self = kk_function_as(struct kk_std_text_parse_optional_fun937__t*, _fself, _ctx);
  kk_box_t kkloc_default = _self->kkloc_default; /* 1661 */
  kk_drop_match(_self, {kk_box_dup(kkloc_default, _ctx);}, {}, _ctx)
  return kkloc_default;
}
 
// monadic lift

kk_box_t kk_std_text_parse__mlift_choose_10176(kk_function_t p_0, kk_std_core_types__list pp, bool _y_x10096, kk_context_t* _ctx) { /* forall<a,e> (p@0 : parser<e,a>, pp : list<parser<e,a>>, bool) -> <parse|e> a */ 
  if (_y_x10096) {
    kk_std_core_types__list_drop(pp, _ctx);
    return kk_function_call(kk_box_t, (kk_function_t, kk_context_t*), p_0, (p_0, _ctx), _ctx);
  }
  {
    kk_function_drop(p_0, _ctx);
    return kk_std_text_parse_choose(pp, _ctx);
  }
}


// lift anonymous function
struct kk_std_text_parse_choose_fun939__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_text_parse_choose_fun939(kk_function_t _fself, kk_box_t _b_x192, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_choose_fun939(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_text_parse_choose_fun939, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_text_parse_choose_fun939(kk_function_t _fself, kk_box_t _b_x192, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core_hnd__ev ev_10238 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<std/text/parse/parse>*/;
  {
    struct kk_std_core_hnd_Ev* _con_x940 = kk_std_core_hnd__as_Ev(ev_10238, _ctx);
    kk_box_t _box_x181 = _con_x940->hnd;
    int32_t m = _con_x940->marker;
    kk_std_text_parse__parse h = kk_std_text_parse__parse_unbox(_box_x181, KK_BORROWED, _ctx);
    kk_std_text_parse__parse_dup(h, _ctx);
    {
      struct kk_std_text_parse__Hnd_parse* _con_x941 = kk_std_text_parse__as_Hnd_parse(h, _ctx);
      kk_integer_t _pat_0_1 = _con_x941->_cfc;
      kk_std_core_hnd__clause0 _pat_1_0 = _con_x941->_fun_current_input;
      kk_std_core_hnd__clause1 _ctl_fail = _con_x941->_ctl_fail;
      kk_std_core_hnd__clause0 _pat_2_0 = _con_x941->_ctl_pick;
      kk_std_core_hnd__clause1 _pat_3_0 = _con_x941->_fun_satisfy;
      if kk_likely(kk_datatype_ptr_is_unique(h, _ctx)) {
        kk_std_core_hnd__clause1_drop(_pat_3_0, _ctx);
        kk_std_core_hnd__clause0_drop(_pat_2_0, _ctx);
        kk_std_core_hnd__clause0_drop(_pat_1_0, _ctx);
        kk_integer_drop(_pat_0_1, _ctx);
        kk_datatype_ptr_free(h, _ctx);
      }
      else {
        kk_std_core_hnd__clause1_dup(_ctl_fail, _ctx);
        kk_datatype_ptr_decref(h, _ctx);
      }
      {
        kk_function_t _fun_unbox_x185 = _ctl_fail.clause;
        return kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x185, (_fun_unbox_x185, m, ev_10238, _b_x192, _ctx), _ctx);
      }
    }
  }
}


// lift anonymous function
struct kk_std_text_parse_choose_fun950__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_text_parse_choose_fun950(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_choose_fun950(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_text_parse_choose_fun950, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_text_parse_choose_fun950(kk_function_t _fself, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core_hnd__ev ev_0_10244 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<std/text/parse/parse>*/;
  {
    struct kk_std_core_hnd_Ev* _con_x951 = kk_std_core_hnd__as_Ev(ev_0_10244, _ctx);
    kk_box_t _box_x199 = _con_x951->hnd;
    int32_t m_0 = _con_x951->marker;
    kk_std_text_parse__parse h_0 = kk_std_text_parse__parse_unbox(_box_x199, KK_BORROWED, _ctx);
    kk_std_text_parse__parse_dup(h_0, _ctx);
    {
      struct kk_std_text_parse__Hnd_parse* _con_x952 = kk_std_text_parse__as_Hnd_parse(h_0, _ctx);
      kk_integer_t _pat_0_2 = _con_x952->_cfc;
      kk_std_core_hnd__clause0 _pat_1_2 = _con_x952->_fun_current_input;
      kk_std_core_hnd__clause1 _pat_2_2 = _con_x952->_ctl_fail;
      kk_std_core_hnd__clause0 _ctl_pick = _con_x952->_ctl_pick;
      kk_std_core_hnd__clause1 _pat_3_1 = _con_x952->_fun_satisfy;
      if kk_likely(kk_datatype_ptr_is_unique(h_0, _ctx)) {
        kk_std_core_hnd__clause1_drop(_pat_3_1, _ctx);
        kk_std_core_hnd__clause1_drop(_pat_2_2, _ctx);
        kk_std_core_hnd__clause0_drop(_pat_1_2, _ctx);
        kk_integer_drop(_pat_0_2, _ctx);
        kk_datatype_ptr_free(h_0, _ctx);
      }
      else {
        kk_std_core_hnd__clause0_dup(_ctl_pick, _ctx);
        kk_datatype_ptr_decref(h_0, _ctx);
      }
      {
        kk_function_t _fun_unbox_x202 = _ctl_pick.clause;
        return kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_context_t*), _fun_unbox_x202, (_fun_unbox_x202, m_0, ev_0_10244, _ctx), _ctx);
      }
    }
  }
}


// lift anonymous function
struct kk_std_text_parse_choose_fun953__t {
  struct kk_function_s _base;
  kk_function_t p_0_0;
  kk_std_core_types__list pp_0;
};
static kk_box_t kk_std_text_parse_choose_fun953(kk_function_t _fself, kk_box_t _b_x210, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_choose_fun953(kk_function_t p_0_0, kk_std_core_types__list pp_0, kk_context_t* _ctx) {
  struct kk_std_text_parse_choose_fun953__t* _self = kk_function_alloc_as(struct kk_std_text_parse_choose_fun953__t, 3, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_text_parse_choose_fun953, kk_context());
  _self->p_0_0 = p_0_0;
  _self->pp_0 = pp_0;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_text_parse_choose_fun953(kk_function_t _fself, kk_box_t _b_x210, kk_context_t* _ctx) {
  struct kk_std_text_parse_choose_fun953__t* _self = kk_function_as(struct kk_std_text_parse_choose_fun953__t*, _fself, _ctx);
  kk_function_t p_0_0 = _self->p_0_0; /* std/text/parse/parser<1711,1710> */
  kk_std_core_types__list pp_0 = _self->pp_0; /* list<std/text/parse/parser<1711,1710>> */
  kk_drop_match(_self, {kk_function_dup(p_0_0, _ctx);kk_std_core_types__list_dup(pp_0, _ctx);}, {}, _ctx)
  bool _x_x954 = kk_bool_unbox(_b_x210); /*bool*/
  return kk_std_text_parse__mlift_choose_10176(p_0_0, pp_0, _x_x954, _ctx);
}

kk_box_t kk_std_text_parse_choose(kk_std_core_types__list ps, kk_context_t* _ctx) { /* forall<a,e> (ps : list<parser<e,a>>) -> <parse|e> a */ 
  kk__tailcall: ;
  if (kk_std_core_types__is_Nil(ps, _ctx)) {
    kk_ssize_t _b_x189_211;
    kk_std_core_hnd__htag _x_x938 = kk_std_core_hnd__htag_dup(kk_std_text_parse__tag_parse, _ctx); /*hnd/htag<std/text/parse/parse>*/
    _b_x189_211 = kk_std_core_hnd__evv_index(_x_x938, _ctx); /*hnd/ev-index*/
    kk_box_t _x_x942;
    kk_string_t _x_x943;
    kk_define_string_literal(, _s_x944, 23, "no further alternatives", _ctx)
    _x_x943 = kk_string_dup(_s_x944, _ctx); /*string*/
    _x_x942 = kk_string_box(_x_x943); /*9123*/
    return kk_std_core_hnd__open_at1(_b_x189_211, kk_std_text_parse_new_choose_fun939(_ctx), _x_x942, _ctx);
  }
  {
    struct kk_std_core_types_Cons* _con_x945 = kk_std_core_types__as_Cons(ps, _ctx);
    kk_std_core_types__list _pat_1_0_0 = _con_x945->tail;
    if (kk_std_core_types__is_Nil(_pat_1_0_0, _ctx)) {
      kk_box_t _fun_unbox_x194 = _con_x945->head;
      if kk_likely(kk_datatype_ptr_is_unique(ps, _ctx)) {
        kk_datatype_ptr_free(ps, _ctx);
      }
      else {
        kk_box_dup(_fun_unbox_x194, _ctx);
        kk_datatype_ptr_decref(ps, _ctx);
      }
      kk_function_t _x_x946 = kk_function_unbox(_fun_unbox_x194, _ctx); /*() -> <std/text/parse/parse|1711> 195*/
      return kk_function_call(kk_box_t, (kk_function_t, kk_context_t*), _x_x946, (_x_x946, _ctx), _ctx);
    }
  }
  {
    struct kk_std_core_types_Cons* _con_x947 = kk_std_core_types__as_Cons(ps, _ctx);
    kk_box_t _fun_unbox_x197 = _con_x947->head;
    kk_std_core_types__list pp_0 = _con_x947->tail;
    if kk_likely(kk_datatype_ptr_is_unique(ps, _ctx)) {
      kk_datatype_ptr_free(ps, _ctx);
    }
    else {
      kk_box_dup(_fun_unbox_x197, _ctx);
      kk_std_core_types__list_dup(pp_0, _ctx);
      kk_datatype_ptr_decref(ps, _ctx);
    }
    kk_function_t p_0_0 = kk_function_unbox(_fun_unbox_x197, _ctx); /*std/text/parse/parser<1711,1710>*/;
    kk_ssize_t _b_x205_207;
    kk_std_core_hnd__htag _x_x948 = kk_std_core_hnd__htag_dup(kk_std_text_parse__tag_parse, _ctx); /*hnd/htag<std/text/parse/parse>*/
    _b_x205_207 = kk_std_core_hnd__evv_index(_x_x948, _ctx); /*hnd/ev-index*/
    bool x_0_10241;
    kk_box_t _x_x949 = kk_std_core_hnd__open_at0(_b_x205_207, kk_std_text_parse_new_choose_fun950(_ctx), _ctx); /*9025*/
    x_0_10241 = kk_bool_unbox(_x_x949); /*bool*/
    if (kk_yielding(kk_context())) {
      return kk_std_core_hnd_yield_extend(kk_std_text_parse_new_choose_fun953(p_0_0, pp_0, _ctx), _ctx);
    }
    if (x_0_10241) {
      kk_std_core_types__list_drop(pp_0, _ctx);
      return kk_function_call(kk_box_t, (kk_function_t, kk_context_t*), p_0_0, (p_0_0, _ctx), _ctx);
    }
    {
      kk_function_drop(p_0_0, _ctx);
      { // tailcall
        ps = pp_0;
        goto kk__tailcall;
      }
    }
  }
}
 
// monadic lift

kk_box_t kk_std_text_parse__mlift_satisfy_fail_10177(kk_string_t msg, kk_std_core_types__maybe _y_x10101, kk_context_t* _ctx) { /* forall<a> (msg : string, maybe<a>) -> parse a */ 
  if (kk_std_core_types__is_Nothing(_y_x10101, _ctx)) {
    kk_std_core_hnd__ev ev_10246 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<std/text/parse/parse>*/;
    {
      struct kk_std_core_hnd_Ev* _con_x955 = kk_std_core_hnd__as_Ev(ev_10246, _ctx);
      kk_box_t _box_x217 = _con_x955->hnd;
      int32_t m = _con_x955->marker;
      kk_std_text_parse__parse h = kk_std_text_parse__parse_unbox(_box_x217, KK_BORROWED, _ctx);
      kk_std_text_parse__parse_dup(h, _ctx);
      {
        struct kk_std_text_parse__Hnd_parse* _con_x956 = kk_std_text_parse__as_Hnd_parse(h, _ctx);
        kk_integer_t _pat_0_1 = _con_x956->_cfc;
        kk_std_core_hnd__clause0 _pat_1_0 = _con_x956->_fun_current_input;
        kk_std_core_hnd__clause1 _ctl_fail = _con_x956->_ctl_fail;
        kk_std_core_hnd__clause0 _pat_2_0 = _con_x956->_ctl_pick;
        kk_std_core_hnd__clause1 _pat_3 = _con_x956->_fun_satisfy;
        if kk_likely(kk_datatype_ptr_is_unique(h, _ctx)) {
          kk_std_core_hnd__clause1_drop(_pat_3, _ctx);
          kk_std_core_hnd__clause0_drop(_pat_2_0, _ctx);
          kk_std_core_hnd__clause0_drop(_pat_1_0, _ctx);
          kk_integer_drop(_pat_0_1, _ctx);
          kk_datatype_ptr_free(h, _ctx);
        }
        else {
          kk_std_core_hnd__clause1_dup(_ctl_fail, _ctx);
          kk_datatype_ptr_decref(h, _ctx);
        }
        {
          kk_function_t _fun_unbox_x221 = _ctl_fail.clause;
          return kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x221, (_fun_unbox_x221, m, ev_10246, kk_string_box(msg), _ctx), _ctx);
        }
      }
    }
  }
  {
    kk_box_t x_0 = _y_x10101._cons.Just.value;
    kk_string_drop(msg, _ctx);
    return x_0;
  }
}


// lift anonymous function
struct kk_std_text_parse_satisfy_fail_fun960__t {
  struct kk_function_s _base;
  kk_function_t pred;
};
static kk_box_t kk_std_text_parse_satisfy_fail_fun960(kk_function_t _fself, kk_box_t _b_x238, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_satisfy_fail_fun960(kk_function_t pred, kk_context_t* _ctx) {
  struct kk_std_text_parse_satisfy_fail_fun960__t* _self = kk_function_alloc_as(struct kk_std_text_parse_satisfy_fail_fun960__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_text_parse_satisfy_fail_fun960, kk_context());
  _self->pred = pred;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_text_parse_satisfy_fail_fun960(kk_function_t _fself, kk_box_t _b_x238, kk_context_t* _ctx) {
  struct kk_std_text_parse_satisfy_fail_fun960__t* _self = kk_function_as(struct kk_std_text_parse_satisfy_fail_fun960__t*, _fself, _ctx);
  kk_function_t pred = _self->pred; /* (sslice/sslice) -> maybe<(1746, sslice/sslice)> */
  kk_drop_match(_self, {kk_function_dup(pred, _ctx);}, {}, _ctx)
  kk_std_core_types__maybe _x_x961;
  kk_std_core_sslice__sslice _x_x962 = kk_std_core_sslice__sslice_unbox(_b_x238, KK_OWNED, _ctx); /*sslice/sslice*/
  _x_x961 = kk_function_call(kk_std_core_types__maybe, (kk_function_t, kk_std_core_sslice__sslice, kk_context_t*), pred, (pred, _x_x962, _ctx), _ctx); /*maybe<(1746, sslice/sslice)>*/
  return kk_std_core_types__maybe_box(_x_x961, _ctx);
}


// lift anonymous function
struct kk_std_text_parse_satisfy_fail_fun963__t {
  struct kk_function_s _base;
  kk_string_t msg;
};
static kk_box_t kk_std_text_parse_satisfy_fail_fun963(kk_function_t _fself, kk_box_t _b_x240, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_satisfy_fail_fun963(kk_string_t msg, kk_context_t* _ctx) {
  struct kk_std_text_parse_satisfy_fail_fun963__t* _self = kk_function_alloc_as(struct kk_std_text_parse_satisfy_fail_fun963__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_text_parse_satisfy_fail_fun963, kk_context());
  _self->msg = msg;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_text_parse_satisfy_fail_fun963(kk_function_t _fself, kk_box_t _b_x240, kk_context_t* _ctx) {
  struct kk_std_text_parse_satisfy_fail_fun963__t* _self = kk_function_as(struct kk_std_text_parse_satisfy_fail_fun963__t*, _fself, _ctx);
  kk_string_t msg = _self->msg; /* string */
  kk_drop_match(_self, {kk_string_dup(msg, _ctx);}, {}, _ctx)
  kk_std_core_types__maybe _x_x964 = kk_std_core_types__maybe_unbox(_b_x240, KK_OWNED, _ctx); /*maybe<1746>*/
  return kk_std_text_parse__mlift_satisfy_fail_10177(msg, _x_x964, _ctx);
}

kk_box_t kk_std_text_parse_satisfy_fail(kk_string_t msg, kk_function_t pred, kk_context_t* _ctx) { /* forall<a> (msg : string, pred : (sslice/sslice) -> maybe<(a, sslice/sslice)>) -> parse a */ 
  kk_std_core_hnd__ev ev_10252 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<std/text/parse/parse>*/;
  kk_std_core_types__maybe x_10249;
  kk_box_t _x_x957;
  {
    struct kk_std_core_hnd_Ev* _con_x958 = kk_std_core_hnd__as_Ev(ev_10252, _ctx);
    kk_box_t _box_x225 = _con_x958->hnd;
    int32_t m = _con_x958->marker;
    kk_std_text_parse__parse h = kk_std_text_parse__parse_unbox(_box_x225, KK_BORROWED, _ctx);
    kk_std_text_parse__parse_dup(h, _ctx);
    {
      struct kk_std_text_parse__Hnd_parse* _con_x959 = kk_std_text_parse__as_Hnd_parse(h, _ctx);
      kk_integer_t _pat_0 = _con_x959->_cfc;
      kk_std_core_hnd__clause0 _pat_1_1 = _con_x959->_fun_current_input;
      kk_std_core_hnd__clause1 _pat_2 = _con_x959->_ctl_fail;
      kk_std_core_hnd__clause0 _pat_3 = _con_x959->_ctl_pick;
      kk_std_core_hnd__clause1 _fun_satisfy = _con_x959->_fun_satisfy;
      if kk_likely(kk_datatype_ptr_is_unique(h, _ctx)) {
        kk_std_core_hnd__clause0_drop(_pat_3, _ctx);
        kk_std_core_hnd__clause1_drop(_pat_2, _ctx);
        kk_std_core_hnd__clause0_drop(_pat_1_1, _ctx);
        kk_integer_drop(_pat_0, _ctx);
        kk_datatype_ptr_free(h, _ctx);
      }
      else {
        kk_std_core_hnd__clause1_dup(_fun_satisfy, _ctx);
        kk_datatype_ptr_decref(h, _ctx);
      }
      {
        kk_function_t _fun_unbox_x232 = _fun_satisfy.clause;
        _x_x957 = kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x232, (_fun_unbox_x232, m, ev_10252, kk_function_box(kk_std_text_parse_new_satisfy_fail_fun960(pred, _ctx), _ctx), _ctx), _ctx); /*46*/
      }
    }
  }
  x_10249 = kk_std_core_types__maybe_unbox(_x_x957, KK_OWNED, _ctx); /*maybe<1746>*/
  if (kk_yielding(kk_context())) {
    kk_std_core_types__maybe_drop(x_10249, _ctx);
    return kk_std_core_hnd_yield_extend(kk_std_text_parse_new_satisfy_fail_fun963(msg, _ctx), _ctx);
  }
  if (kk_std_core_types__is_Nothing(x_10249, _ctx)) {
    kk_std_core_hnd__ev ev_0_10255 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<std/text/parse/parse>*/;
    {
      struct kk_std_core_hnd_Ev* _con_x965 = kk_std_core_hnd__as_Ev(ev_0_10255, _ctx);
      kk_box_t _box_x241 = _con_x965->hnd;
      int32_t m_0 = _con_x965->marker;
      kk_std_text_parse__parse h_0 = kk_std_text_parse__parse_unbox(_box_x241, KK_BORROWED, _ctx);
      kk_std_text_parse__parse_dup(h_0, _ctx);
      {
        struct kk_std_text_parse__Hnd_parse* _con_x966 = kk_std_text_parse__as_Hnd_parse(h_0, _ctx);
        kk_integer_t _pat_0_2 = _con_x966->_cfc;
        kk_std_core_hnd__clause0 _pat_1_2 = _con_x966->_fun_current_input;
        kk_std_core_hnd__clause1 _ctl_fail = _con_x966->_ctl_fail;
        kk_std_core_hnd__clause0 _pat_2_1 = _con_x966->_ctl_pick;
        kk_std_core_hnd__clause1 _pat_3_1 = _con_x966->_fun_satisfy;
        if kk_likely(kk_datatype_ptr_is_unique(h_0, _ctx)) {
          kk_std_core_hnd__clause1_drop(_pat_3_1, _ctx);
          kk_std_core_hnd__clause0_drop(_pat_2_1, _ctx);
          kk_std_core_hnd__clause0_drop(_pat_1_2, _ctx);
          kk_integer_drop(_pat_0_2, _ctx);
          kk_datatype_ptr_free(h_0, _ctx);
        }
        else {
          kk_std_core_hnd__clause1_dup(_ctl_fail, _ctx);
          kk_datatype_ptr_decref(h_0, _ctx);
        }
        {
          kk_function_t _fun_unbox_x245 = _ctl_fail.clause;
          return kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x245, (_fun_unbox_x245, m_0, ev_0_10255, kk_string_box(msg), _ctx), _ctx);
        }
      }
    }
  }
  {
    kk_box_t x_2 = x_10249._cons.Just.value;
    kk_string_drop(msg, _ctx);
    return x_2;
  }
}
 
// monadic lift

kk_unit_t kk_std_text_parse__mlift_eof_10178(kk_std_core_types__maybe _y_x10104, kk_context_t* _ctx) { /* (maybe<()>) -> parse () */ 
  if (kk_std_core_types__is_Nothing(_y_x10104, _ctx)) {
    kk_std_core_hnd__ev ev_10258 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<std/text/parse/parse>*/;
    kk_box_t _x_x967;
    {
      struct kk_std_core_hnd_Ev* _con_x968 = kk_std_core_hnd__as_Ev(ev_10258, _ctx);
      kk_box_t _box_x251 = _con_x968->hnd;
      int32_t m = _con_x968->marker;
      kk_std_text_parse__parse h = kk_std_text_parse__parse_unbox(_box_x251, KK_BORROWED, _ctx);
      kk_std_text_parse__parse_dup(h, _ctx);
      {
        struct kk_std_text_parse__Hnd_parse* _con_x969 = kk_std_text_parse__as_Hnd_parse(h, _ctx);
        kk_integer_t _pat_0_0 = _con_x969->_cfc;
        kk_std_core_hnd__clause0 _pat_1_0 = _con_x969->_fun_current_input;
        kk_std_core_hnd__clause1 _ctl_fail = _con_x969->_ctl_fail;
        kk_std_core_hnd__clause0 _pat_2_0 = _con_x969->_ctl_pick;
        kk_std_core_hnd__clause1 _pat_3 = _con_x969->_fun_satisfy;
        if kk_likely(kk_datatype_ptr_is_unique(h, _ctx)) {
          kk_std_core_hnd__clause1_drop(_pat_3, _ctx);
          kk_std_core_hnd__clause0_drop(_pat_2_0, _ctx);
          kk_std_core_hnd__clause0_drop(_pat_1_0, _ctx);
          kk_integer_drop(_pat_0_0, _ctx);
          kk_datatype_ptr_free(h, _ctx);
        }
        else {
          kk_std_core_hnd__clause1_dup(_ctl_fail, _ctx);
          kk_datatype_ptr_decref(h, _ctx);
        }
        {
          kk_function_t _fun_unbox_x255 = _ctl_fail.clause;
          kk_box_t _x_x970;
          kk_string_t _x_x971;
          kk_define_string_literal(, _s_x972, 22, "expecting end-of-input", _ctx)
          _x_x971 = kk_string_dup(_s_x972, _ctx); /*string*/
          _x_x970 = kk_string_box(_x_x971); /*45*/
          _x_x967 = kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x255, (_fun_unbox_x255, m, ev_10258, _x_x970, _ctx), _ctx); /*46*/
        }
      }
    }
    kk_unit_unbox(_x_x967); return kk_Unit;
  }
  {
    kk_box_t _box_x259 = _y_x10104._cons.Just.value;
    kk_unit_t _pat_3_0 = kk_unit_unbox(_box_x259);
    kk_std_core_types__maybe_drop(_y_x10104, _ctx);
    kk_Unit; return kk_Unit;
  }
}


// lift anonymous function
struct kk_std_text_parse_eof_fun976__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_text_parse_eof_fun976(kk_function_t _fself, kk_box_t _b_x273, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_eof_fun976(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_text_parse_eof_fun976, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_text_parse_eof_fun976(kk_function_t _fself, kk_box_t _b_x273, kk_context_t* _ctx) {
  kk_unused(_fself);
  bool b_10039;
  kk_integer_t _brw_x779;
  kk_std_core_sslice__sslice _match_x778;
  kk_box_t _x_x977 = kk_box_dup(_b_x273, _ctx); /*271*/
  _match_x778 = kk_std_core_sslice__sslice_unbox(_x_x977, KK_OWNED, _ctx); /*sslice/sslice*/
  {
    kk_integer_t _x = _match_x778.len;
    kk_integer_dup(_x, _ctx);
    kk_std_core_sslice__sslice_drop(_match_x778, _ctx);
    _brw_x779 = _x; /*int*/
  }
  bool _brw_x780 = kk_integer_gt_borrow(_brw_x779,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  kk_integer_drop(_brw_x779, _ctx);
  b_10039 = _brw_x780; /*bool*/
  kk_std_core_types__maybe _x_x978;
  if (b_10039) {
    kk_box_drop(_b_x273, _ctx);
    _x_x978 = kk_std_core_types__new_Nothing(_ctx); /*forall<a> maybe<a>*/
  }
  else {
    kk_box_t _x_x979;
    kk_std_core_types__tuple2 _x_x980 = kk_std_core_types__new_Tuple2(kk_unit_box(kk_Unit), _b_x273, _ctx); /*(129, 130)*/
    _x_x979 = kk_std_core_types__tuple2_box(_x_x980, _ctx); /*91*/
    _x_x978 = kk_std_core_types__new_Just(_x_x979, _ctx); /*forall<a> maybe<a>*/
  }
  return kk_std_core_types__maybe_box(_x_x978, _ctx);
}


// lift anonymous function
struct kk_std_text_parse_eof_fun982__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_text_parse_eof_fun982(kk_function_t _fself, kk_box_t _b_x282, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_eof_fun982(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_text_parse_eof_fun982, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_text_parse_eof_fun982(kk_function_t _fself, kk_box_t _b_x282, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_unit_t _x_x983 = kk_Unit;
  kk_std_core_types__maybe _x_x984 = kk_std_core_types__maybe_unbox(_b_x282, KK_OWNED, _ctx); /*maybe<()>*/
  kk_std_text_parse__mlift_eof_10178(_x_x984, _ctx);
  return kk_unit_box(_x_x983);
}

kk_unit_t kk_std_text_parse_eof(kk_context_t* _ctx) { /* () -> parse () */ 
  kk_std_core_hnd__ev ev_10264 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<std/text/parse/parse>*/;
  kk_std_core_types__maybe x_10261;
  kk_box_t _x_x973;
  {
    struct kk_std_core_hnd_Ev* _con_x974 = kk_std_core_hnd__as_Ev(ev_10264, _ctx);
    kk_box_t _box_x260 = _con_x974->hnd;
    int32_t m = _con_x974->marker;
    kk_std_text_parse__parse h = kk_std_text_parse__parse_unbox(_box_x260, KK_BORROWED, _ctx);
    kk_std_text_parse__parse_dup(h, _ctx);
    {
      struct kk_std_text_parse__Hnd_parse* _con_x975 = kk_std_text_parse__as_Hnd_parse(h, _ctx);
      kk_integer_t _pat_0 = _con_x975->_cfc;
      kk_std_core_hnd__clause0 _pat_1_1 = _con_x975->_fun_current_input;
      kk_std_core_hnd__clause1 _pat_2 = _con_x975->_ctl_fail;
      kk_std_core_hnd__clause0 _pat_3 = _con_x975->_ctl_pick;
      kk_std_core_hnd__clause1 _fun_satisfy = _con_x975->_fun_satisfy;
      if kk_likely(kk_datatype_ptr_is_unique(h, _ctx)) {
        kk_std_core_hnd__clause0_drop(_pat_3, _ctx);
        kk_std_core_hnd__clause1_drop(_pat_2, _ctx);
        kk_std_core_hnd__clause0_drop(_pat_1_1, _ctx);
        kk_integer_drop(_pat_0, _ctx);
        kk_datatype_ptr_free(h, _ctx);
      }
      else {
        kk_std_core_hnd__clause1_dup(_fun_satisfy, _ctx);
        kk_datatype_ptr_decref(h, _ctx);
      }
      {
        kk_function_t _fun_unbox_x267 = _fun_satisfy.clause;
        _x_x973 = kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x267, (_fun_unbox_x267, m, ev_10264, kk_function_box(kk_std_text_parse_new_eof_fun976(_ctx), _ctx), _ctx), _ctx); /*46*/
      }
    }
  }
  x_10261 = kk_std_core_types__maybe_unbox(_x_x973, KK_OWNED, _ctx); /*maybe<()>*/
  if (kk_yielding(kk_context())) {
    kk_std_core_types__maybe_drop(x_10261, _ctx);
    kk_box_t _x_x981 = kk_std_core_hnd_yield_extend(kk_std_text_parse_new_eof_fun982(_ctx), _ctx); /*2978*/
    kk_unit_unbox(_x_x981); return kk_Unit;
  }
  if (kk_std_core_types__is_Nothing(x_10261, _ctx)) {
    kk_std_core_hnd__ev ev_0_10267 = kk_evv_at(((KK_IZ(0))),kk_context()); /*hnd/ev<std/text/parse/parse>*/;
    kk_box_t _x_x985;
    {
      struct kk_std_core_hnd_Ev* _con_x986 = kk_std_core_hnd__as_Ev(ev_0_10267, _ctx);
      kk_box_t _box_x283 = _con_x986->hnd;
      int32_t m_0 = _con_x986->marker;
      kk_std_text_parse__parse h_0 = kk_std_text_parse__parse_unbox(_box_x283, KK_BORROWED, _ctx);
      kk_std_text_parse__parse_dup(h_0, _ctx);
      {
        struct kk_std_text_parse__Hnd_parse* _con_x987 = kk_std_text_parse__as_Hnd_parse(h_0, _ctx);
        kk_integer_t _pat_0_3 = _con_x987->_cfc;
        kk_std_core_hnd__clause0 _pat_1_3 = _con_x987->_fun_current_input;
        kk_std_core_hnd__clause1 _ctl_fail = _con_x987->_ctl_fail;
        kk_std_core_hnd__clause0 _pat_2_1 = _con_x987->_ctl_pick;
        kk_std_core_hnd__clause1 _pat_3_1 = _con_x987->_fun_satisfy;
        if kk_likely(kk_datatype_ptr_is_unique(h_0, _ctx)) {
          kk_std_core_hnd__clause1_drop(_pat_3_1, _ctx);
          kk_std_core_hnd__clause0_drop(_pat_2_1, _ctx);
          kk_std_core_hnd__clause0_drop(_pat_1_3, _ctx);
          kk_integer_drop(_pat_0_3, _ctx);
          kk_datatype_ptr_free(h_0, _ctx);
        }
        else {
          kk_std_core_hnd__clause1_dup(_ctl_fail, _ctx);
          kk_datatype_ptr_decref(h_0, _ctx);
        }
        {
          kk_function_t _fun_unbox_x287 = _ctl_fail.clause;
          kk_box_t _x_x988;
          kk_string_t _x_x989;
          kk_define_string_literal(, _s_x990, 22, "expecting end-of-input", _ctx)
          _x_x989 = kk_string_dup(_s_x990, _ctx); /*string*/
          _x_x988 = kk_string_box(_x_x989); /*45*/
          _x_x985 = kk_function_call(kk_box_t, (kk_function_t, int32_t, kk_std_core_hnd__ev, kk_box_t, kk_context_t*), _fun_unbox_x287, (_fun_unbox_x287, m_0, ev_0_10267, _x_x988, _ctx), _ctx); /*46*/
        }
      }
    }
    kk_unit_unbox(_x_x985); return kk_Unit;
  }
  {
    kk_box_t _box_x291 = x_10261._cons.Just.value;
    kk_unit_t _pat_3_0_0 = kk_unit_unbox(_box_x291);
    kk_std_core_types__maybe_drop(x_10261, _ctx);
    kk_Unit; return kk_Unit;
  }
}
 
// monadic lift


// lift anonymous function
struct kk_std_text_parse__mlift_parse_eof_10180_fun993__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_text_parse__mlift_parse_eof_10180_fun993(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse__new_mlift_parse_eof_10180_fun993(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_text_parse__mlift_parse_eof_10180_fun993, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_text_parse__mlift_parse_eof_10180_fun993(kk_function_t _fself, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_unit_t _x_x994 = kk_Unit;
  kk_std_text_parse_eof(_ctx);
  return kk_unit_box(_x_x994);
}


// lift anonymous function
struct kk_std_text_parse__mlift_parse_eof_10180_fun995__t {
  struct kk_function_s _base;
  kk_box_t x;
};
static kk_box_t kk_std_text_parse__mlift_parse_eof_10180_fun995(kk_function_t _fself, kk_box_t _b_x298, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse__new_mlift_parse_eof_10180_fun995(kk_box_t x, kk_context_t* _ctx) {
  struct kk_std_text_parse__mlift_parse_eof_10180_fun995__t* _self = kk_function_alloc_as(struct kk_std_text_parse__mlift_parse_eof_10180_fun995__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_text_parse__mlift_parse_eof_10180_fun995, kk_context());
  _self->x = x;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_text_parse__mlift_parse_eof_10180_fun995(kk_function_t _fself, kk_box_t _b_x298, kk_context_t* _ctx) {
  struct kk_std_text_parse__mlift_parse_eof_10180_fun995__t* _self = kk_function_as(struct kk_std_text_parse__mlift_parse_eof_10180_fun995__t*, _fself, _ctx);
  kk_box_t x = _self->x; /* 1826 */
  kk_drop_match(_self, {kk_box_dup(x, _ctx);}, {}, _ctx)
  kk_box_drop(_b_x298, _ctx);
  return x;
}

kk_box_t kk_std_text_parse__mlift_parse_eof_10180(kk_box_t x, kk_context_t* _ctx) { /* forall<a,e> (x : a) -> <parse|e> a */ 
  kk_ssize_t _b_x293_295;
  kk_std_core_hnd__htag _x_x991 = kk_std_core_hnd__htag_dup(kk_std_text_parse__tag_parse, _ctx); /*hnd/htag<std/text/parse/parse>*/
  _b_x293_295 = kk_std_core_hnd__evv_index(_x_x991, _ctx); /*hnd/ev-index*/
  kk_unit_t x_0_10270 = kk_Unit;
  kk_box_t _x_x992 = kk_std_core_hnd__open_at0(_b_x293_295, kk_std_text_parse__new_mlift_parse_eof_10180_fun993(_ctx), _ctx); /*9025*/
  kk_unit_unbox(_x_x992);
  if (kk_yielding(kk_context())) {
    return kk_std_core_hnd_yield_extend(kk_std_text_parse__new_mlift_parse_eof_10180_fun995(x, _ctx), _ctx);
  }
  {
    return x;
  }
}


// lift anonymous function
struct kk_std_text_parse_parse_eof_fun996__t {
  struct kk_function_s _base;
  kk_function_t p;
};
static kk_box_t kk_std_text_parse_parse_eof_fun996(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_parse_eof_fun996(kk_function_t p, kk_context_t* _ctx) {
  struct kk_std_text_parse_parse_eof_fun996__t* _self = kk_function_alloc_as(struct kk_std_text_parse_parse_eof_fun996__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_text_parse_parse_eof_fun996, kk_context());
  _self->p = p;
  return kk_datatype_from_base(&_self->_base, kk_context());
}



// lift anonymous function
struct kk_std_text_parse_parse_eof_fun998__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_text_parse_parse_eof_fun998(kk_function_t _fself, kk_box_t _x1_x997, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_parse_eof_fun998(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_text_parse_parse_eof_fun998, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_text_parse_parse_eof_fun998(kk_function_t _fself, kk_box_t _x1_x997, kk_context_t* _ctx) {
  kk_unused(_fself);
  return kk_std_text_parse__mlift_parse_eof_10180(_x1_x997, _ctx);
}
static kk_box_t kk_std_text_parse_parse_eof_fun996(kk_function_t _fself, kk_context_t* _ctx) {
  struct kk_std_text_parse_parse_eof_fun996__t* _self = kk_function_as(struct kk_std_text_parse_parse_eof_fun996__t*, _fself, _ctx);
  kk_function_t p = _self->p; /* () -> <std/text/parse/parse|1827> 1826 */
  kk_drop_match(_self, {kk_function_dup(p, _ctx);}, {}, _ctx)
  kk_box_t x_10274 = kk_function_call(kk_box_t, (kk_function_t, kk_context_t*), p, (p, _ctx), _ctx); /*1826*/;
  if (kk_yielding(kk_context())) {
    kk_box_drop(x_10274, _ctx);
    return kk_std_core_hnd_yield_extend(kk_std_text_parse_new_parse_eof_fun998(_ctx), _ctx);
  }
  {
    return kk_std_text_parse__mlift_parse_eof_10180(x_10274, _ctx);
  }
}

kk_std_text_parse__parse_error kk_std_text_parse_parse_eof(kk_std_core_sslice__sslice input, kk_function_t p, kk_context_t* _ctx) { /* forall<a,e> (input : sslice/sslice, p : () -> <parse|e> a) -> e parse-error<a> */ 
  return kk_std_text_parse_parse(input, kk_std_text_parse_new_parse_eof_fun996(p, _ctx), _ctx);
}


// lift anonymous function
struct kk_std_text_parse_char_is_fun1000__t {
  struct kk_function_s _base;
  kk_function_t pred;
};
static kk_std_core_types__maybe kk_std_text_parse_char_is_fun1000(kk_function_t _fself, kk_std_core_sslice__sslice slice, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_char_is_fun1000(kk_function_t pred, kk_context_t* _ctx) {
  struct kk_std_text_parse_char_is_fun1000__t* _self = kk_function_alloc_as(struct kk_std_text_parse_char_is_fun1000__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_text_parse_char_is_fun1000, kk_context());
  _self->pred = pred;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_std_core_types__maybe kk_std_text_parse_char_is_fun1000(kk_function_t _fself, kk_std_core_sslice__sslice slice, kk_context_t* _ctx) {
  struct kk_std_text_parse_char_is_fun1000__t* _self = kk_function_as(struct kk_std_text_parse_char_is_fun1000__t*, _fself, _ctx);
  kk_function_t pred = _self->pred; /* (char) -> bool */
  kk_drop_match(_self, {kk_function_dup(pred, _ctx);}, {}, _ctx)
  kk_std_core_types__maybe _match_x774 = kk_std_core_sslice_next(slice, _ctx); /*maybe<(char, sslice/sslice)>*/;
  if (kk_std_core_types__is_Just(_match_x774, _ctx)) {
    kk_box_t _box_x301 = _match_x774._cons.Just.value;
    kk_std_core_types__tuple2 _pat_0 = kk_std_core_types__tuple2_unbox(_box_x301, KK_BORROWED, _ctx);
    if (kk_std_core_types__is_Tuple2(_pat_0, _ctx)) {
      kk_box_t _box_x302 = _pat_0.fst;
      kk_box_t _box_x303 = _pat_0.snd;
      kk_char_t c = kk_char_unbox(_box_x302, KK_BORROWED, _ctx);
      kk_function_t _x_x1001 = kk_function_dup(pred, _ctx); /*(char) -> bool*/
      if (kk_function_call(bool, (kk_function_t, kk_char_t, kk_context_t*), _x_x1001, (_x_x1001, c, _ctx), _ctx)) {
        kk_std_core_sslice__sslice rest = kk_std_core_sslice__sslice_unbox(_box_x303, KK_BORROWED, _ctx);
        kk_function_drop(pred, _ctx);
        kk_std_core_sslice__sslice_dup(rest, _ctx);
        kk_std_core_types__maybe_drop(_match_x774, _ctx);
        kk_box_t _x_x1002;
        kk_std_core_types__tuple2 _x_x1003 = kk_std_core_types__new_Tuple2(kk_char_box(c, _ctx), kk_std_core_sslice__sslice_box(rest, _ctx), _ctx); /*(129, 130)*/
        _x_x1002 = kk_std_core_types__tuple2_box(_x_x1003, _ctx); /*91*/
        return kk_std_core_types__new_Just(_x_x1002, _ctx);
      }
    }
  }
  {
    kk_function_drop(pred, _ctx);
    kk_std_core_types__maybe_drop(_match_x774, _ctx);
    return kk_std_core_types__new_Nothing(_ctx);
  }
}

kk_char_t kk_std_text_parse_char_is(kk_string_t msg, kk_function_t pred, kk_context_t* _ctx) { /* (msg : string, pred : (char) -> bool) -> parse char */ 
  kk_box_t _x_x999 = kk_std_text_parse_satisfy_fail(msg, kk_std_text_parse_new_char_is_fun1000(pred, _ctx), _ctx); /*1746*/
  return kk_char_unbox(_x_x999, KK_OWNED, _ctx);
}

kk_std_core_types__tuple2 kk_std_text_parse_next_while0(kk_std_core_sslice__sslice slice, kk_function_t pred, kk_std_core_types__list acc, kk_context_t* _ctx) { /* (slice : sslice/sslice, pred : (char) -> bool, acc : list<char>) -> (list<char>, sslice/sslice) */ 
  kk__tailcall: ;
  kk_std_core_types__maybe _match_x773;
  kk_std_core_sslice__sslice _x_x1004 = kk_std_core_sslice__sslice_dup(slice, _ctx); /*sslice/sslice*/
  _match_x773 = kk_std_core_sslice_next(_x_x1004, _ctx); /*maybe<(char, sslice/sslice)>*/
  if (kk_std_core_types__is_Just(_match_x773, _ctx)) {
    kk_box_t _box_x314 = _match_x773._cons.Just.value;
    kk_std_core_types__tuple2 _pat_0 = kk_std_core_types__tuple2_unbox(_box_x314, KK_BORROWED, _ctx);
    if (kk_std_core_types__is_Tuple2(_pat_0, _ctx)) {
      kk_box_t _box_x315 = _pat_0.fst;
      kk_box_t _box_x316 = _pat_0.snd;
      kk_char_t c = kk_char_unbox(_box_x315, KK_BORROWED, _ctx);
      kk_function_t _x_x1005 = kk_function_dup(pred, _ctx); /*(char) -> bool*/
      if (kk_function_call(bool, (kk_function_t, kk_char_t, kk_context_t*), _x_x1005, (_x_x1005, c, _ctx), _ctx)) {
        kk_std_core_sslice__sslice rest = kk_std_core_sslice__sslice_unbox(_box_x316, KK_BORROWED, _ctx);
        kk_std_core_sslice__sslice_drop(slice, _ctx);
        kk_std_core_sslice__sslice_dup(rest, _ctx);
        kk_std_core_types__maybe_drop(_match_x773, _ctx);
        { // tailcall
          kk_std_core_types__list _x_x1006 = kk_std_core_types__new_Cons(kk_reuse_null, 0, kk_char_box(c, _ctx), acc, _ctx); /*list<82>*/
          slice = rest;
          acc = _x_x1006;
          goto kk__tailcall;
        }
      }
    }
  }
  {
    kk_function_drop(pred, _ctx);
    kk_std_core_types__maybe_drop(_match_x773, _ctx);
    kk_std_core_types__list _b_x319_323 = kk_std_core_list__lift_reverse_append_4948(kk_std_core_types__new_Nil(_ctx), acc, _ctx); /*list<char>*/;
    return kk_std_core_types__new_Tuple2(kk_std_core_types__list_box(_b_x319_323, _ctx), kk_std_core_sslice__sslice_box(slice, _ctx), _ctx);
  }
}


// lift anonymous function
struct kk_std_text_parse_chars_are_fun1008__t {
  struct kk_function_s _base;
  kk_function_t pred;
};
static kk_std_core_types__maybe kk_std_text_parse_chars_are_fun1008(kk_function_t _fself, kk_std_core_sslice__sslice slice, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_chars_are_fun1008(kk_function_t pred, kk_context_t* _ctx) {
  struct kk_std_text_parse_chars_are_fun1008__t* _self = kk_function_alloc_as(struct kk_std_text_parse_chars_are_fun1008__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_text_parse_chars_are_fun1008, kk_context());
  _self->pred = pred;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_std_core_types__maybe kk_std_text_parse_chars_are_fun1008(kk_function_t _fself, kk_std_core_sslice__sslice slice, kk_context_t* _ctx) {
  struct kk_std_text_parse_chars_are_fun1008__t* _self = kk_function_as(struct kk_std_text_parse_chars_are_fun1008__t*, _fself, _ctx);
  kk_function_t pred = _self->pred; /* (char) -> bool */
  kk_drop_match(_self, {kk_function_dup(pred, _ctx);}, {}, _ctx)
  kk_std_core_types__tuple2 _match_x772 = kk_std_text_parse_next_while0(slice, pred, kk_std_core_types__new_Nil(_ctx), _ctx); /*(list<char>, sslice/sslice)*/;
  {
    kk_box_t _box_x325 = _match_x772.fst;
    kk_box_t _box_x326 = _match_x772.snd;
    kk_std_core_types__list _pat_0 = kk_std_core_types__list_unbox(_box_x325, KK_BORROWED, _ctx);
    kk_std_core_sslice__sslice _pat_1 = kk_std_core_sslice__sslice_unbox(_box_x326, KK_BORROWED, _ctx);
    if (kk_std_core_types__is_Nil(_pat_0, _ctx)) {
      kk_std_core_types__tuple2_drop(_match_x772, _ctx);
      return kk_std_core_types__new_Nothing(_ctx);
    }
  }
  {
    kk_box_t _box_x327 = _match_x772.fst;
    kk_box_t _box_x328 = _match_x772.snd;
    kk_std_core_sslice__sslice rest = kk_std_core_sslice__sslice_unbox(_box_x328, KK_BORROWED, _ctx);
    kk_std_core_types__list xs = kk_std_core_types__list_unbox(_box_x327, KK_BORROWED, _ctx);
    kk_std_core_sslice__sslice_dup(rest, _ctx);
    kk_std_core_types__list_dup(xs, _ctx);
    kk_std_core_types__tuple2_drop(_match_x772, _ctx);
    kk_box_t _x_x1009;
    kk_std_core_types__tuple2 _x_x1010 = kk_std_core_types__new_Tuple2(kk_std_core_types__list_box(xs, _ctx), kk_std_core_sslice__sslice_box(rest, _ctx), _ctx); /*(129, 130)*/
    _x_x1009 = kk_std_core_types__tuple2_box(_x_x1010, _ctx); /*91*/
    return kk_std_core_types__new_Just(_x_x1009, _ctx);
  }
}

kk_std_core_types__list kk_std_text_parse_chars_are(kk_string_t msg, kk_function_t pred, kk_context_t* _ctx) { /* (msg : string, pred : (char) -> bool) -> parse list<char> */ 
  kk_box_t _x_x1007 = kk_std_text_parse_satisfy_fail(msg, kk_std_text_parse_new_chars_are_fun1008(pred, _ctx), _ctx); /*1746*/
  return kk_std_core_types__list_unbox(_x_x1007, KK_OWNED, _ctx);
}

kk_std_core_types__maybe kk_std_text_parse_next_match(kk_std_core_sslice__sslice slice, kk_std_core_types__list cs, kk_context_t* _ctx) { /* (slice : sslice/sslice, cs : list<char>) -> maybe<sslice/sslice> */ 
  kk__tailcall: ;
  if (kk_std_core_types__is_Nil(cs, _ctx)) {
    return kk_std_core_types__new_Just(kk_std_core_sslice__sslice_box(slice, _ctx), _ctx);
  }
  {
    struct kk_std_core_types_Cons* _con_x1011 = kk_std_core_types__as_Cons(cs, _ctx);
    kk_box_t _box_x340 = _con_x1011->head;
    kk_std_core_types__list cc = _con_x1011->tail;
    kk_char_t c = kk_char_unbox(_box_x340, KK_BORROWED, _ctx);
    if kk_likely(kk_datatype_ptr_is_unique(cs, _ctx)) {
      kk_datatype_ptr_free(cs, _ctx);
    }
    else {
      kk_std_core_types__list_dup(cc, _ctx);
      kk_datatype_ptr_decref(cs, _ctx);
    }
    kk_std_core_types__maybe _match_x771 = kk_std_core_sslice_next(slice, _ctx); /*maybe<(char, sslice/sslice)>*/;
    if (kk_std_core_types__is_Just(_match_x771, _ctx)) {
      kk_box_t _box_x341 = _match_x771._cons.Just.value;
      kk_std_core_types__tuple2 _pat_2 = kk_std_core_types__tuple2_unbox(_box_x341, KK_BORROWED, _ctx);
      if (kk_std_core_types__is_Tuple2(_pat_2, _ctx)) {
        kk_box_t _box_x342 = _pat_2.fst;
        kk_box_t _box_x343 = _pat_2.snd;
        kk_char_t d = kk_char_unbox(_box_x342, KK_BORROWED, _ctx);
        if (c == d) {
          kk_std_core_sslice__sslice rest = kk_std_core_sslice__sslice_unbox(_box_x343, KK_BORROWED, _ctx);
          kk_std_core_sslice__sslice_dup(rest, _ctx);
          kk_std_core_types__maybe_drop(_match_x771, _ctx);
          { // tailcall
            slice = rest;
            cs = cc;
            goto kk__tailcall;
          }
        }
      }
    }
    {
      kk_std_core_types__list_drop(cc, _ctx);
      kk_std_core_types__maybe_drop(_match_x771, _ctx);
      return kk_std_core_types__new_Nothing(_ctx);
    }
  }
}


// lift anonymous function
struct kk_std_text_parse_pstring_fun1014__t {
  struct kk_function_s _base;
  kk_string_t s;
};
static kk_std_core_types__maybe kk_std_text_parse_pstring_fun1014(kk_function_t _fself, kk_std_core_sslice__sslice slice, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_pstring_fun1014(kk_string_t s, kk_context_t* _ctx) {
  struct kk_std_text_parse_pstring_fun1014__t* _self = kk_function_alloc_as(struct kk_std_text_parse_pstring_fun1014__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_text_parse_pstring_fun1014, kk_context());
  _self->s = s;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_std_core_types__maybe kk_std_text_parse_pstring_fun1014(kk_function_t _fself, kk_std_core_sslice__sslice slice, kk_context_t* _ctx) {
  struct kk_std_text_parse_pstring_fun1014__t* _self = kk_function_as(struct kk_std_text_parse_pstring_fun1014__t*, _fself, _ctx);
  kk_string_t s = _self->s; /* string */
  kk_drop_match(_self, {kk_string_dup(s, _ctx);}, {}, _ctx)
  kk_std_core_types__maybe _match_x770;
  kk_std_core_types__list _x_x1015;
  kk_string_t _x_x1016 = kk_string_dup(s, _ctx); /*string*/
  _x_x1015 = kk_std_core_string_list(_x_x1016, _ctx); /*list<char>*/
  _match_x770 = kk_std_text_parse_next_match(slice, _x_x1015, _ctx); /*maybe<sslice/sslice>*/
  if (kk_std_core_types__is_Just(_match_x770, _ctx)) {
    kk_box_t _box_x345 = _match_x770._cons.Just.value;
    kk_std_core_sslice__sslice rest = kk_std_core_sslice__sslice_unbox(_box_x345, KK_BORROWED, _ctx);
    kk_std_core_sslice__sslice_dup(rest, _ctx);
    kk_std_core_types__maybe_drop(_match_x770, _ctx);
    kk_box_t _x_x1017;
    kk_std_core_types__tuple2 _x_x1018 = kk_std_core_types__new_Tuple2(kk_string_box(s), kk_std_core_sslice__sslice_box(rest, _ctx), _ctx); /*(129, 130)*/
    _x_x1017 = kk_std_core_types__tuple2_box(_x_x1018, _ctx); /*91*/
    return kk_std_core_types__new_Just(_x_x1017, _ctx);
  }
  {
    kk_string_drop(s, _ctx);
    return kk_std_core_types__new_Nothing(_ctx);
  }
}

kk_string_t kk_std_text_parse_pstring(kk_string_t s, kk_context_t* _ctx) { /* (s : string) -> parse string */ 
  kk_box_t _x_x1012;
  kk_string_t _x_x1013 = kk_string_dup(s, _ctx); /*string*/
  _x_x1012 = kk_std_text_parse_satisfy_fail(_x_x1013, kk_std_text_parse_new_pstring_fun1014(s, _ctx), _ctx); /*1746*/
  return kk_string_unbox(_x_x1012);
}


// lift anonymous function
struct kk_std_text_parse_char_fun1026__t {
  struct kk_function_s _base;
  kk_char_t c;
};
static kk_std_core_types__maybe kk_std_text_parse_char_fun1026(kk_function_t _fself, kk_std_core_sslice__sslice slice, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_char_fun1026(kk_char_t c, kk_context_t* _ctx) {
  struct kk_std_text_parse_char_fun1026__t* _self = kk_function_alloc_as(struct kk_std_text_parse_char_fun1026__t, 1, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_text_parse_char_fun1026, kk_context());
  _self->c = c;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_std_core_types__maybe kk_std_text_parse_char_fun1026(kk_function_t _fself, kk_std_core_sslice__sslice slice, kk_context_t* _ctx) {
  struct kk_std_text_parse_char_fun1026__t* _self = kk_function_as(struct kk_std_text_parse_char_fun1026__t*, _fself, _ctx);
  kk_char_t c = _self->c; /* char */
  kk_drop_match(_self, {kk_skip_dup(c, _ctx);}, {}, _ctx)
  kk_std_core_types__maybe _match_x769 = kk_std_core_sslice_next(slice, _ctx); /*maybe<(char, sslice/sslice)>*/;
  if (kk_std_core_types__is_Just(_match_x769, _ctx)) {
    kk_box_t _box_x356 = _match_x769._cons.Just.value;
    kk_std_core_types__tuple2 _pat_0 = kk_std_core_types__tuple2_unbox(_box_x356, KK_BORROWED, _ctx);
    if (kk_std_core_types__is_Tuple2(_pat_0, _ctx)) {
      kk_box_t _box_x357 = _pat_0.fst;
      kk_box_t _box_x358 = _pat_0.snd;
      kk_char_t c_0 = kk_char_unbox(_box_x357, KK_BORROWED, _ctx);
      if (c == c_0) {
        kk_std_core_sslice__sslice rest = kk_std_core_sslice__sslice_unbox(_box_x358, KK_BORROWED, _ctx);
        kk_std_core_sslice__sslice_dup(rest, _ctx);
        kk_std_core_types__maybe_drop(_match_x769, _ctx);
        kk_box_t _x_x1027;
        kk_std_core_types__tuple2 _x_x1028 = kk_std_core_types__new_Tuple2(kk_char_box(c_0, _ctx), kk_std_core_sslice__sslice_box(rest, _ctx), _ctx); /*(129, 130)*/
        _x_x1027 = kk_std_core_types__tuple2_box(_x_x1028, _ctx); /*91*/
        return kk_std_core_types__new_Just(_x_x1027, _ctx);
      }
    }
  }
  {
    kk_std_core_types__maybe_drop(_match_x769, _ctx);
    return kk_std_core_types__new_Nothing(_ctx);
  }
}

kk_char_t kk_std_text_parse_char(kk_char_t c, kk_context_t* _ctx) { /* (c : char) -> parse char */ 
  kk_string_t msg_10010;
  kk_string_t _x_x1019;
  kk_define_string_literal(, _s_x1020, 1, "\'", _ctx)
  _x_x1019 = kk_string_dup(_s_x1020, _ctx); /*string*/
  kk_string_t _x_x1021;
  kk_string_t _x_x1022 = kk_std_core_show_show_char(c, _ctx); /*string*/
  kk_string_t _x_x1023;
  kk_define_string_literal(, _s_x1024, 1, "\'", _ctx)
  _x_x1023 = kk_string_dup(_s_x1024, _ctx); /*string*/
  _x_x1021 = kk_std_core_types__lp__plus__plus__rp_(_x_x1022, _x_x1023, _ctx); /*string*/
  msg_10010 = kk_std_core_types__lp__plus__plus__rp_(_x_x1019, _x_x1021, _ctx); /*string*/
  kk_box_t _x_x1025 = kk_std_text_parse_satisfy_fail(msg_10010, kk_std_text_parse_new_char_fun1026(c, _ctx), _ctx); /*1746*/
  return kk_char_unbox(_x_x1025, KK_OWNED, _ctx);
}


// lift anonymous function
struct kk_std_text_parse_no_digit_fun1032__t {
  struct kk_function_s _base;
};
static kk_std_core_types__maybe kk_std_text_parse_no_digit_fun1032(kk_function_t _fself, kk_std_core_sslice__sslice slice, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_no_digit_fun1032(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_text_parse_no_digit_fun1032, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_std_core_types__maybe kk_std_text_parse_no_digit_fun1032(kk_function_t _fself, kk_std_core_sslice__sslice slice, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core_types__maybe _match_x767 = kk_std_core_sslice_next(slice, _ctx); /*maybe<(char, sslice/sslice)>*/;
  if (kk_std_core_types__is_Just(_match_x767, _ctx)) {
    kk_box_t _box_x369 = _match_x767._cons.Just.value;
    kk_std_core_types__tuple2 _pat_0 = kk_std_core_types__tuple2_unbox(_box_x369, KK_BORROWED, _ctx);
    if (kk_std_core_types__is_Tuple2(_pat_0, _ctx)) {
      kk_box_t _box_x370 = _pat_0.fst;
      kk_box_t _box_x371 = _pat_0.snd;
      kk_char_t c = kk_char_unbox(_box_x370, KK_BORROWED, _ctx);
      bool b_10014;
      bool _match_x768 = (c >= ('0')); /*bool*/;
      if (_match_x768) {
        b_10014 = (c <= ('9')); /*bool*/
      }
      else {
        b_10014 = false; /*bool*/
      }
      bool _x_x1033;
      if (b_10014) {
        _x_x1033 = false; /*bool*/
      }
      else {
        _x_x1033 = true; /*bool*/
      }
      if (_x_x1033) {
        kk_std_core_sslice__sslice rest = kk_std_core_sslice__sslice_unbox(_box_x371, KK_BORROWED, _ctx);
        kk_std_core_sslice__sslice_dup(rest, _ctx);
        kk_std_core_types__maybe_drop(_match_x767, _ctx);
        kk_box_t _x_x1034;
        kk_std_core_types__tuple2 _x_x1035 = kk_std_core_types__new_Tuple2(kk_char_box(c, _ctx), kk_std_core_sslice__sslice_box(rest, _ctx), _ctx); /*(129, 130)*/
        _x_x1034 = kk_std_core_types__tuple2_box(_x_x1035, _ctx); /*91*/
        return kk_std_core_types__new_Just(_x_x1034, _ctx);
      }
    }
  }
  {
    kk_std_core_types__maybe_drop(_match_x767, _ctx);
    return kk_std_core_types__new_Nothing(_ctx);
  }
}

kk_char_t kk_std_text_parse_no_digit(kk_context_t* _ctx) { /* () -> parse char */ 
  kk_box_t _x_x1029;
  kk_string_t _x_x1030;
  kk_define_string_literal(, _s_x1031, 11, "not a digit", _ctx)
  _x_x1030 = kk_string_dup(_s_x1031, _ctx); /*string*/
  _x_x1029 = kk_std_text_parse_satisfy_fail(_x_x1030, kk_std_text_parse_new_no_digit_fun1032(_ctx), _ctx); /*1746*/
  return kk_char_unbox(_x_x1029, KK_OWNED, _ctx);
}
 
// monadic lift


// lift anonymous function
struct kk_std_text_parse__mlift_digit_10181_fun1038__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_text_parse__mlift_digit_10181_fun1038(kk_function_t _fself, kk_box_t _b_x385, kk_box_t _b_x386, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse__new_mlift_digit_10181_fun1038(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_text_parse__mlift_digit_10181_fun1038, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_text_parse__mlift_digit_10181_fun1038(kk_function_t _fself, kk_box_t _b_x385, kk_box_t _b_x386, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_char_t _x_x1039;
  kk_char_t c_1_390 = kk_char_unbox(_b_x385, KK_OWNED, _ctx); /*char*/;
  kk_char_t d_391 = kk_char_unbox(_b_x386, KK_OWNED, _ctx); /*char*/;
  kk_integer_t x_10002 = kk_integer_from_int(c_1_390,kk_context()); /*int*/;
  kk_integer_t y_10003 = kk_integer_from_int(d_391,kk_context()); /*int*/;
  kk_integer_t _x_x1040 = kk_integer_sub(x_10002,y_10003,kk_context()); /*int*/
  _x_x1039 = kk_integer_clamp32(_x_x1040,kk_context()); /*char*/
  return kk_char_box(_x_x1039, _ctx);
}

kk_integer_t kk_std_text_parse__mlift_digit_10181(kk_char_t c_0_0, kk_context_t* _ctx) { /* (c@0@0 : char) -> parse int */ 
  kk_char_t _x_x1036;
  kk_box_t _x_x1037 = kk_std_core_hnd__open_none2(kk_std_text_parse__new_mlift_digit_10181_fun1038(_ctx), kk_char_box(c_0_0, _ctx), kk_char_box('0', _ctx), _ctx); /*8647*/
  _x_x1036 = kk_char_unbox(_x_x1037, KK_OWNED, _ctx); /*char*/
  return kk_integer_from_int(_x_x1036,kk_context());
}


// lift anonymous function
struct kk_std_text_parse_digit_fun1044__t {
  struct kk_function_s _base;
};
static kk_std_core_types__maybe kk_std_text_parse_digit_fun1044(kk_function_t _fself, kk_std_core_sslice__sslice slice, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_digit_fun1044(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_text_parse_digit_fun1044, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_std_core_types__maybe kk_std_text_parse_digit_fun1044(kk_function_t _fself, kk_std_core_sslice__sslice slice, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core_types__maybe _match_x765 = kk_std_core_sslice_next(slice, _ctx); /*maybe<(char, sslice/sslice)>*/;
  if (kk_std_core_types__is_Just(_match_x765, _ctx)) {
    kk_box_t _box_x392 = _match_x765._cons.Just.value;
    kk_std_core_types__tuple2 _pat_0_0 = kk_std_core_types__tuple2_unbox(_box_x392, KK_BORROWED, _ctx);
    if (kk_std_core_types__is_Tuple2(_pat_0_0, _ctx)) {
      kk_box_t _box_x393 = _pat_0_0.fst;
      kk_box_t _box_x394 = _pat_0_0.snd;
      kk_char_t c = kk_char_unbox(_box_x393, KK_BORROWED, _ctx);
      bool _match_x766 = (c >= ('0')); /*bool*/;
      bool _x_x1045;
      if (_match_x766) {
        _x_x1045 = (c <= ('9')); /*bool*/
      }
      else {
        _x_x1045 = false; /*bool*/
      }
      if (_x_x1045) {
        kk_std_core_sslice__sslice rest = kk_std_core_sslice__sslice_unbox(_box_x394, KK_BORROWED, _ctx);
        kk_std_core_sslice__sslice_dup(rest, _ctx);
        kk_std_core_types__maybe_drop(_match_x765, _ctx);
        kk_box_t _x_x1046;
        kk_std_core_types__tuple2 _x_x1047 = kk_std_core_types__new_Tuple2(kk_char_box(c, _ctx), kk_std_core_sslice__sslice_box(rest, _ctx), _ctx); /*(129, 130)*/
        _x_x1046 = kk_std_core_types__tuple2_box(_x_x1047, _ctx); /*91*/
        return kk_std_core_types__new_Just(_x_x1046, _ctx);
      }
    }
  }
  {
    kk_std_core_types__maybe_drop(_match_x765, _ctx);
    return kk_std_core_types__new_Nothing(_ctx);
  }
}


// lift anonymous function
struct kk_std_text_parse_digit_fun1049__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_text_parse_digit_fun1049(kk_function_t _fself, kk_box_t _b_x406, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_digit_fun1049(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_text_parse_digit_fun1049, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_text_parse_digit_fun1049(kk_function_t _fself, kk_box_t _b_x406, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_integer_t _x_x1050;
  kk_char_t _x_x1051 = kk_char_unbox(_b_x406, KK_OWNED, _ctx); /*char*/
  _x_x1050 = kk_std_text_parse__mlift_digit_10181(_x_x1051, _ctx); /*int*/
  return kk_integer_box(_x_x1050, _ctx);
}


// lift anonymous function
struct kk_std_text_parse_digit_fun1054__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_text_parse_digit_fun1054(kk_function_t _fself, kk_box_t _b_x410, kk_box_t _b_x411, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_digit_fun1054(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_text_parse_digit_fun1054, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_text_parse_digit_fun1054(kk_function_t _fself, kk_box_t _b_x410, kk_box_t _b_x411, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_char_t _x_x1055;
  kk_char_t c_1_416 = kk_char_unbox(_b_x410, KK_OWNED, _ctx); /*char*/;
  kk_char_t d_417 = kk_char_unbox(_b_x411, KK_OWNED, _ctx); /*char*/;
  kk_integer_t x_10002 = kk_integer_from_int(c_1_416,kk_context()); /*int*/;
  kk_integer_t y_10003 = kk_integer_from_int(d_417,kk_context()); /*int*/;
  kk_integer_t _x_x1056 = kk_integer_sub(x_10002,y_10003,kk_context()); /*int*/
  _x_x1055 = kk_integer_clamp32(_x_x1056,kk_context()); /*char*/
  return kk_char_box(_x_x1055, _ctx);
}

kk_integer_t kk_std_text_parse_digit(kk_context_t* _ctx) { /* () -> parse int */ 
  kk_char_t x_10276;
  kk_box_t _x_x1041;
  kk_string_t _x_x1042;
  kk_define_string_literal(, _s_x1043, 5, "digit", _ctx)
  _x_x1042 = kk_string_dup(_s_x1043, _ctx); /*string*/
  _x_x1041 = kk_std_text_parse_satisfy_fail(_x_x1042, kk_std_text_parse_new_digit_fun1044(_ctx), _ctx); /*1746*/
  x_10276 = kk_char_unbox(_x_x1041, KK_OWNED, _ctx); /*char*/
  if (kk_yielding(kk_context())) {
    kk_box_t _x_x1048 = kk_std_core_hnd_yield_extend(kk_std_text_parse_new_digit_fun1049(_ctx), _ctx); /*2978*/
    return kk_integer_unbox(_x_x1048, _ctx);
  }
  {
    kk_char_t _x_x1052;
    kk_box_t _x_x1053 = kk_std_core_hnd__open_none2(kk_std_text_parse_new_digit_fun1054(_ctx), kk_char_box(x_10276, _ctx), kk_char_box('0', _ctx), _ctx); /*8647*/
    _x_x1052 = kk_char_unbox(_x_x1053, KK_OWNED, _ctx); /*char*/
    return kk_integer_from_int(_x_x1052,kk_context());
  }
}


// lift anonymous function
struct kk_std_text_parse_alpha_fun1060__t {
  struct kk_function_s _base;
};
static kk_std_core_types__maybe kk_std_text_parse_alpha_fun1060(kk_function_t _fself, kk_std_core_sslice__sslice slice, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_alpha_fun1060(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_text_parse_alpha_fun1060, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_std_core_types__maybe kk_std_text_parse_alpha_fun1060(kk_function_t _fself, kk_std_core_sslice__sslice slice, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core_types__maybe _match_x763 = kk_std_core_sslice_next(slice, _ctx); /*maybe<(char, sslice/sslice)>*/;
  if (kk_std_core_types__is_Just(_match_x763, _ctx)) {
    kk_box_t _box_x418 = _match_x763._cons.Just.value;
    kk_std_core_types__tuple2 _pat_0 = kk_std_core_types__tuple2_unbox(_box_x418, KK_BORROWED, _ctx);
    if (kk_std_core_types__is_Tuple2(_pat_0, _ctx)) {
      kk_box_t _box_x419 = _pat_0.fst;
      kk_box_t _box_x420 = _pat_0.snd;
      kk_char_t c = kk_char_unbox(_box_x419, KK_BORROWED, _ctx);
      if (kk_std_core_char_is_alpha(c, _ctx)) {
        kk_std_core_sslice__sslice rest = kk_std_core_sslice__sslice_unbox(_box_x420, KK_BORROWED, _ctx);
        kk_std_core_sslice__sslice_dup(rest, _ctx);
        kk_std_core_types__maybe_drop(_match_x763, _ctx);
        kk_box_t _x_x1061;
        kk_std_core_types__tuple2 _x_x1062 = kk_std_core_types__new_Tuple2(kk_char_box(c, _ctx), kk_std_core_sslice__sslice_box(rest, _ctx), _ctx); /*(129, 130)*/
        _x_x1061 = kk_std_core_types__tuple2_box(_x_x1062, _ctx); /*91*/
        return kk_std_core_types__new_Just(_x_x1061, _ctx);
      }
    }
  }
  {
    kk_std_core_types__maybe_drop(_match_x763, _ctx);
    return kk_std_core_types__new_Nothing(_ctx);
  }
}

kk_char_t kk_std_text_parse_alpha(kk_context_t* _ctx) { /* () -> parse char */ 
  kk_box_t _x_x1057;
  kk_string_t _x_x1058;
  kk_define_string_literal(, _s_x1059, 5, "alpha", _ctx)
  _x_x1058 = kk_string_dup(_s_x1059, _ctx); /*string*/
  _x_x1057 = kk_std_text_parse_satisfy_fail(_x_x1058, kk_std_text_parse_new_alpha_fun1060(_ctx), _ctx); /*1746*/
  return kk_char_unbox(_x_x1057, KK_OWNED, _ctx);
}


// lift anonymous function
struct kk_std_text_parse_alpha_num_fun1066__t {
  struct kk_function_s _base;
};
static kk_std_core_types__maybe kk_std_text_parse_alpha_num_fun1066(kk_function_t _fself, kk_std_core_sslice__sslice slice, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_alpha_num_fun1066(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_text_parse_alpha_num_fun1066, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_std_core_types__maybe kk_std_text_parse_alpha_num_fun1066(kk_function_t _fself, kk_std_core_sslice__sslice slice, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core_types__maybe _match_x762 = kk_std_core_sslice_next(slice, _ctx); /*maybe<(char, sslice/sslice)>*/;
  if (kk_std_core_types__is_Just(_match_x762, _ctx)) {
    kk_box_t _box_x431 = _match_x762._cons.Just.value;
    kk_std_core_types__tuple2 _pat_0 = kk_std_core_types__tuple2_unbox(_box_x431, KK_BORROWED, _ctx);
    if (kk_std_core_types__is_Tuple2(_pat_0, _ctx)) {
      kk_box_t _box_x432 = _pat_0.fst;
      kk_box_t _box_x433 = _pat_0.snd;
      kk_char_t c = kk_char_unbox(_box_x432, KK_BORROWED, _ctx);
      if (kk_std_core_char_is_alpha_num(c, _ctx)) {
        kk_std_core_sslice__sslice rest = kk_std_core_sslice__sslice_unbox(_box_x433, KK_BORROWED, _ctx);
        kk_std_core_sslice__sslice_dup(rest, _ctx);
        kk_std_core_types__maybe_drop(_match_x762, _ctx);
        kk_box_t _x_x1067;
        kk_std_core_types__tuple2 _x_x1068 = kk_std_core_types__new_Tuple2(kk_char_box(c, _ctx), kk_std_core_sslice__sslice_box(rest, _ctx), _ctx); /*(129, 130)*/
        _x_x1067 = kk_std_core_types__tuple2_box(_x_x1068, _ctx); /*91*/
        return kk_std_core_types__new_Just(_x_x1067, _ctx);
      }
    }
  }
  {
    kk_std_core_types__maybe_drop(_match_x762, _ctx);
    return kk_std_core_types__new_Nothing(_ctx);
  }
}

kk_char_t kk_std_text_parse_alpha_num(kk_context_t* _ctx) { /* () -> parse char */ 
  kk_box_t _x_x1063;
  kk_string_t _x_x1064;
  kk_define_string_literal(, _s_x1065, 9, "alpha-num", _ctx)
  _x_x1064 = kk_string_dup(_s_x1065, _ctx); /*string*/
  _x_x1063 = kk_std_text_parse_satisfy_fail(_x_x1064, kk_std_text_parse_new_alpha_num_fun1066(_ctx), _ctx); /*1746*/
  return kk_char_unbox(_x_x1063, KK_OWNED, _ctx);
}


// lift anonymous function
struct kk_std_text_parse_white_fun1072__t {
  struct kk_function_s _base;
};
static kk_std_core_types__maybe kk_std_text_parse_white_fun1072(kk_function_t _fself, kk_std_core_sslice__sslice slice, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_white_fun1072(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_text_parse_white_fun1072, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_std_core_types__maybe kk_std_text_parse_white_fun1072(kk_function_t _fself, kk_std_core_sslice__sslice slice, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core_types__maybe _match_x761 = kk_std_core_sslice_next(slice, _ctx); /*maybe<(char, sslice/sslice)>*/;
  if (kk_std_core_types__is_Just(_match_x761, _ctx)) {
    kk_box_t _box_x444 = _match_x761._cons.Just.value;
    kk_std_core_types__tuple2 _pat_0 = kk_std_core_types__tuple2_unbox(_box_x444, KK_BORROWED, _ctx);
    if (kk_std_core_types__is_Tuple2(_pat_0, _ctx)) {
      kk_box_t _box_x445 = _pat_0.fst;
      kk_box_t _box_x446 = _pat_0.snd;
      kk_char_t c = kk_char_unbox(_box_x445, KK_BORROWED, _ctx);
      if (kk_std_core_char_is_white(c, _ctx)) {
        kk_std_core_sslice__sslice rest = kk_std_core_sslice__sslice_unbox(_box_x446, KK_BORROWED, _ctx);
        kk_std_core_sslice__sslice_dup(rest, _ctx);
        kk_std_core_types__maybe_drop(_match_x761, _ctx);
        kk_box_t _x_x1073;
        kk_std_core_types__tuple2 _x_x1074 = kk_std_core_types__new_Tuple2(kk_char_box(c, _ctx), kk_std_core_sslice__sslice_box(rest, _ctx), _ctx); /*(129, 130)*/
        _x_x1073 = kk_std_core_types__tuple2_box(_x_x1074, _ctx); /*91*/
        return kk_std_core_types__new_Just(_x_x1073, _ctx);
      }
    }
  }
  {
    kk_std_core_types__maybe_drop(_match_x761, _ctx);
    return kk_std_core_types__new_Nothing(_ctx);
  }
}

kk_char_t kk_std_text_parse_white(kk_context_t* _ctx) { /* () -> parse char */ 
  kk_box_t _x_x1069;
  kk_string_t _x_x1070 = kk_string_empty(); /*string*/
  _x_x1069 = kk_std_text_parse_satisfy_fail(_x_x1070, kk_std_text_parse_new_white_fun1072(_ctx), _ctx); /*1746*/
  return kk_char_unbox(_x_x1069, KK_OWNED, _ctx);
}


// lift anonymous function
struct kk_std_text_parse_whitespace_fun1078__t {
  struct kk_function_s _base;
};
static kk_std_core_types__maybe kk_std_text_parse_whitespace_fun1078(kk_function_t _fself, kk_std_core_sslice__sslice slice, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_whitespace_fun1078(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_text_parse_whitespace_fun1078, _ctx)
  return kk_function_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_std_text_parse_whitespace_fun1080__t {
  struct kk_function_s _base;
};
static bool kk_std_text_parse_whitespace_fun1080(kk_function_t _fself, kk_char_t _x1_x1079, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_whitespace_fun1080(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_text_parse_whitespace_fun1080, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static bool kk_std_text_parse_whitespace_fun1080(kk_function_t _fself, kk_char_t _x1_x1079, kk_context_t* _ctx) {
  kk_unused(_fself);
  return kk_std_core_char_is_white(_x1_x1079, _ctx);
}
static kk_std_core_types__maybe kk_std_text_parse_whitespace_fun1078(kk_function_t _fself, kk_std_core_sslice__sslice slice, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core_types__tuple2 _match_x760 = kk_std_text_parse_next_while0(slice, kk_std_text_parse_new_whitespace_fun1080(_ctx), kk_std_core_types__new_Nil(_ctx), _ctx); /*(list<char>, sslice/sslice)*/;
  {
    kk_box_t _box_x457 = _match_x760.fst;
    kk_box_t _box_x458 = _match_x760.snd;
    kk_std_core_types__list _pat_0_0 = kk_std_core_types__list_unbox(_box_x457, KK_BORROWED, _ctx);
    kk_std_core_sslice__sslice _pat_1_0 = kk_std_core_sslice__sslice_unbox(_box_x458, KK_BORROWED, _ctx);
    if (kk_std_core_types__is_Nil(_pat_0_0, _ctx)) {
      kk_std_core_types__tuple2_drop(_match_x760, _ctx);
      return kk_std_core_types__new_Nothing(_ctx);
    }
  }
  {
    kk_box_t _box_x459 = _match_x760.fst;
    kk_box_t _box_x460 = _match_x760.snd;
    kk_std_core_sslice__sslice rest = kk_std_core_sslice__sslice_unbox(_box_x460, KK_BORROWED, _ctx);
    kk_std_core_types__list xs = kk_std_core_types__list_unbox(_box_x459, KK_BORROWED, _ctx);
    kk_std_core_sslice__sslice_dup(rest, _ctx);
    kk_std_core_types__list_dup(xs, _ctx);
    kk_std_core_types__tuple2_drop(_match_x760, _ctx);
    kk_box_t _x_x1081;
    kk_std_core_types__tuple2 _x_x1082 = kk_std_core_types__new_Tuple2(kk_std_core_types__list_box(xs, _ctx), kk_std_core_sslice__sslice_box(rest, _ctx), _ctx); /*(129, 130)*/
    _x_x1081 = kk_std_core_types__tuple2_box(_x_x1082, _ctx); /*91*/
    return kk_std_core_types__new_Just(_x_x1081, _ctx);
  }
}


// lift anonymous function
struct kk_std_text_parse_whitespace_fun1084__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_text_parse_whitespace_fun1084(kk_function_t _fself, kk_box_t _b_x472, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_whitespace_fun1084(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_text_parse_whitespace_fun1084, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_text_parse_whitespace_fun1084(kk_function_t _fself, kk_box_t _b_x472, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_string_t _x_x1085;
  kk_std_core_types__list _x_x1086 = kk_std_core_types__list_unbox(_b_x472, KK_OWNED, _ctx); /*list<char>*/
  _x_x1085 = kk_std_core_string_listchar_fs_string(_x_x1086, _ctx); /*string*/
  return kk_string_box(_x_x1085);
}

kk_string_t kk_std_text_parse_whitespace(kk_context_t* _ctx) { /* () -> parse string */ 
  kk_std_core_types__list x_10279;
  kk_box_t _x_x1075;
  kk_string_t _x_x1076 = kk_string_empty(); /*string*/
  _x_x1075 = kk_std_text_parse_satisfy_fail(_x_x1076, kk_std_text_parse_new_whitespace_fun1078(_ctx), _ctx); /*1746*/
  x_10279 = kk_std_core_types__list_unbox(_x_x1075, KK_OWNED, _ctx); /*list<char>*/
  if (kk_yielding(kk_context())) {
    kk_std_core_types__list_drop(x_10279, _ctx);
    kk_box_t _x_x1083 = kk_std_core_hnd_yield_extend(kk_std_text_parse_new_whitespace_fun1084(_ctx), _ctx); /*2978*/
    return kk_string_unbox(_x_x1083);
  }
  {
    return kk_std_core_string_listchar_fs_string(x_10279, _ctx);
  }
}


// lift anonymous function
struct kk_std_text_parse_whitespace0_fun1088__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_text_parse_whitespace0_fun1088(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_whitespace0_fun1088(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_text_parse_whitespace0_fun1088, _ctx)
  return kk_function_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_std_text_parse_whitespace0_fun1092__t {
  struct kk_function_s _base;
};
static kk_std_core_types__maybe kk_std_text_parse_whitespace0_fun1092(kk_function_t _fself, kk_std_core_sslice__sslice slice, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_whitespace0_fun1092(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_text_parse_whitespace0_fun1092, _ctx)
  return kk_function_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_std_text_parse_whitespace0_fun1094__t {
  struct kk_function_s _base;
};
static bool kk_std_text_parse_whitespace0_fun1094(kk_function_t _fself, kk_char_t _x1_x1093, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_whitespace0_fun1094(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_text_parse_whitespace0_fun1094, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static bool kk_std_text_parse_whitespace0_fun1094(kk_function_t _fself, kk_char_t _x1_x1093, kk_context_t* _ctx) {
  kk_unused(_fself);
  return kk_std_core_char_is_white(_x1_x1093, _ctx);
}
static kk_std_core_types__maybe kk_std_text_parse_whitespace0_fun1092(kk_function_t _fself, kk_std_core_sslice__sslice slice, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core_types__tuple2 _match_x758 = kk_std_text_parse_next_while0(slice, kk_std_text_parse_new_whitespace0_fun1094(_ctx), kk_std_core_types__new_Nil(_ctx), _ctx); /*(list<char>, sslice/sslice)*/;
  {
    kk_box_t _box_x474 = _match_x758.fst;
    kk_box_t _box_x475 = _match_x758.snd;
    kk_std_core_types__list _pat_0_0 = kk_std_core_types__list_unbox(_box_x474, KK_BORROWED, _ctx);
    kk_std_core_sslice__sslice _pat_1_0 = kk_std_core_sslice__sslice_unbox(_box_x475, KK_BORROWED, _ctx);
    if (kk_std_core_types__is_Nil(_pat_0_0, _ctx)) {
      kk_std_core_types__tuple2_drop(_match_x758, _ctx);
      return kk_std_core_types__new_Nothing(_ctx);
    }
  }
  {
    kk_box_t _box_x476 = _match_x758.fst;
    kk_box_t _box_x477 = _match_x758.snd;
    kk_std_core_sslice__sslice rest = kk_std_core_sslice__sslice_unbox(_box_x477, KK_BORROWED, _ctx);
    kk_std_core_types__list xs = kk_std_core_types__list_unbox(_box_x476, KK_BORROWED, _ctx);
    kk_std_core_sslice__sslice_dup(rest, _ctx);
    kk_std_core_types__list_dup(xs, _ctx);
    kk_std_core_types__tuple2_drop(_match_x758, _ctx);
    kk_box_t _x_x1095;
    kk_std_core_types__tuple2 _x_x1096 = kk_std_core_types__new_Tuple2(kk_std_core_types__list_box(xs, _ctx), kk_std_core_sslice__sslice_box(rest, _ctx), _ctx); /*(129, 130)*/
    _x_x1095 = kk_std_core_types__tuple2_box(_x_x1096, _ctx); /*91*/
    return kk_std_core_types__new_Just(_x_x1095, _ctx);
  }
}


// lift anonymous function
struct kk_std_text_parse_whitespace0_fun1099__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_text_parse_whitespace0_fun1099(kk_function_t _fself, kk_box_t _b_x489, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_whitespace0_fun1099(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_text_parse_whitespace0_fun1099, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_text_parse_whitespace0_fun1099(kk_function_t _fself, kk_box_t _b_x489, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_string_t _x_x1100;
  kk_std_core_types__list _x_x1101 = kk_std_core_types__list_unbox(_b_x489, KK_OWNED, _ctx); /*list<char>*/
  _x_x1100 = kk_std_core_string_listchar_fs_string(_x_x1101, _ctx); /*string*/
  return kk_string_box(_x_x1100);
}
static kk_box_t kk_std_text_parse_whitespace0_fun1088(kk_function_t _fself, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core_types__list x_10281;
  kk_box_t _x_x1089;
  kk_string_t _x_x1090 = kk_string_empty(); /*string*/
  _x_x1089 = kk_std_text_parse_satisfy_fail(_x_x1090, kk_std_text_parse_new_whitespace0_fun1092(_ctx), _ctx); /*1746*/
  x_10281 = kk_std_core_types__list_unbox(_x_x1089, KK_OWNED, _ctx); /*list<char>*/
  kk_string_t _x_x1097;
  if (kk_yielding(kk_context())) {
    kk_std_core_types__list_drop(x_10281, _ctx);
    kk_box_t _x_x1098 = kk_std_core_hnd_yield_extend(kk_std_text_parse_new_whitespace0_fun1099(_ctx), _ctx); /*2978*/
    _x_x1097 = kk_string_unbox(_x_x1098); /*string*/
  }
  else {
    _x_x1097 = kk_std_core_string_listchar_fs_string(x_10281, _ctx); /*string*/
  }
  return kk_string_box(_x_x1097);
}


// lift anonymous function
struct kk_std_text_parse_whitespace0_fun1102__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_text_parse_whitespace0_fun1102(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_whitespace0_fun1102(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_text_parse_whitespace0_fun1102, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_text_parse_whitespace0_fun1102(kk_function_t _fself, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_string_t _x_x1103 = kk_string_empty(); /*string*/
  return kk_string_box(_x_x1103);
}

kk_string_t kk_std_text_parse_whitespace0(kk_context_t* _ctx) { /* () -> parse string */ 
  kk_box_t _x_x1087 = kk_std_text_parse__lp__bar__bar__rp_(kk_std_text_parse_new_whitespace0_fun1088(_ctx), kk_std_text_parse_new_whitespace0_fun1102(_ctx), _ctx); /*1635*/
  return kk_string_unbox(_x_x1087);
}


// lift anonymous function
struct kk_std_text_parse_digits_fun1108__t {
  struct kk_function_s _base;
};
static kk_std_core_types__maybe kk_std_text_parse_digits_fun1108(kk_function_t _fself, kk_std_core_sslice__sslice slice, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_digits_fun1108(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_text_parse_digits_fun1108, _ctx)
  return kk_function_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_std_text_parse_digits_fun1110__t {
  struct kk_function_s _base;
};
static bool kk_std_text_parse_digits_fun1110(kk_function_t _fself, kk_char_t _x1_x1109, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_digits_fun1110(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_text_parse_digits_fun1110, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static bool kk_std_text_parse_digits_fun1110(kk_function_t _fself, kk_char_t _x1_x1109, kk_context_t* _ctx) {
  kk_unused(_fself);
  return kk_std_core_char_is_digit(_x1_x1109, _ctx);
}
static kk_std_core_types__maybe kk_std_text_parse_digits_fun1108(kk_function_t _fself, kk_std_core_sslice__sslice slice, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core_types__tuple2 _match_x756 = kk_std_text_parse_next_while0(slice, kk_std_text_parse_new_digits_fun1110(_ctx), kk_std_core_types__new_Nil(_ctx), _ctx); /*(list<char>, sslice/sslice)*/;
  {
    kk_box_t _box_x495 = _match_x756.fst;
    kk_box_t _box_x496 = _match_x756.snd;
    kk_std_core_types__list _pat_0_0 = kk_std_core_types__list_unbox(_box_x495, KK_BORROWED, _ctx);
    kk_std_core_sslice__sslice _pat_1_0 = kk_std_core_sslice__sslice_unbox(_box_x496, KK_BORROWED, _ctx);
    if (kk_std_core_types__is_Nil(_pat_0_0, _ctx)) {
      kk_std_core_types__tuple2_drop(_match_x756, _ctx);
      return kk_std_core_types__new_Nothing(_ctx);
    }
  }
  {
    kk_box_t _box_x497 = _match_x756.fst;
    kk_box_t _box_x498 = _match_x756.snd;
    kk_std_core_sslice__sslice rest = kk_std_core_sslice__sslice_unbox(_box_x498, KK_BORROWED, _ctx);
    kk_std_core_types__list xs = kk_std_core_types__list_unbox(_box_x497, KK_BORROWED, _ctx);
    kk_std_core_sslice__sslice_dup(rest, _ctx);
    kk_std_core_types__list_dup(xs, _ctx);
    kk_std_core_types__tuple2_drop(_match_x756, _ctx);
    kk_box_t _x_x1111;
    kk_std_core_types__tuple2 _x_x1112 = kk_std_core_types__new_Tuple2(kk_std_core_types__list_box(xs, _ctx), kk_std_core_sslice__sslice_box(rest, _ctx), _ctx); /*(129, 130)*/
    _x_x1111 = kk_std_core_types__tuple2_box(_x_x1112, _ctx); /*91*/
    return kk_std_core_types__new_Just(_x_x1111, _ctx);
  }
}


// lift anonymous function
struct kk_std_text_parse_digits_fun1114__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_text_parse_digits_fun1114(kk_function_t _fself, kk_box_t _b_x510, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_digits_fun1114(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_text_parse_digits_fun1114, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_text_parse_digits_fun1114(kk_function_t _fself, kk_box_t _b_x510, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_string_t _x_x1115;
  kk_std_core_types__list _x_x1116 = kk_std_core_types__list_unbox(_b_x510, KK_OWNED, _ctx); /*list<char>*/
  _x_x1115 = kk_std_core_string_listchar_fs_string(_x_x1116, _ctx); /*string*/
  return kk_string_box(_x_x1115);
}

kk_string_t kk_std_text_parse_digits(kk_context_t* _ctx) { /* () -> parse string */ 
  kk_std_core_types__list x_10283;
  kk_box_t _x_x1105;
  kk_string_t _x_x1106;
  kk_define_string_literal(, _s_x1107, 5, "digit", _ctx)
  _x_x1106 = kk_string_dup(_s_x1107, _ctx); /*string*/
  _x_x1105 = kk_std_text_parse_satisfy_fail(_x_x1106, kk_std_text_parse_new_digits_fun1108(_ctx), _ctx); /*1746*/
  x_10283 = kk_std_core_types__list_unbox(_x_x1105, KK_OWNED, _ctx); /*list<char>*/
  if (kk_yielding(kk_context())) {
    kk_std_core_types__list_drop(x_10283, _ctx);
    kk_box_t _x_x1113 = kk_std_core_hnd_yield_extend(kk_std_text_parse_new_digits_fun1114(_ctx), _ctx); /*2978*/
    return kk_string_unbox(_x_x1113);
  }
  {
    return kk_std_core_string_listchar_fs_string(x_10283, _ctx);
  }
}


// lift anonymous function
struct kk_std_text_parse_digits0_fun1118__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_text_parse_digits0_fun1118(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_digits0_fun1118(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_text_parse_digits0_fun1118, _ctx)
  return kk_function_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_std_text_parse_digits0_fun1122__t {
  struct kk_function_s _base;
};
static kk_std_core_types__maybe kk_std_text_parse_digits0_fun1122(kk_function_t _fself, kk_std_core_sslice__sslice slice, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_digits0_fun1122(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_text_parse_digits0_fun1122, _ctx)
  return kk_function_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_std_text_parse_digits0_fun1124__t {
  struct kk_function_s _base;
};
static bool kk_std_text_parse_digits0_fun1124(kk_function_t _fself, kk_char_t _x1_x1123, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_digits0_fun1124(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_text_parse_digits0_fun1124, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static bool kk_std_text_parse_digits0_fun1124(kk_function_t _fself, kk_char_t _x1_x1123, kk_context_t* _ctx) {
  kk_unused(_fself);
  return kk_std_core_char_is_digit(_x1_x1123, _ctx);
}
static kk_std_core_types__maybe kk_std_text_parse_digits0_fun1122(kk_function_t _fself, kk_std_core_sslice__sslice slice, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core_types__tuple2 _match_x754 = kk_std_text_parse_next_while0(slice, kk_std_text_parse_new_digits0_fun1124(_ctx), kk_std_core_types__new_Nil(_ctx), _ctx); /*(list<char>, sslice/sslice)*/;
  {
    kk_box_t _box_x512 = _match_x754.fst;
    kk_box_t _box_x513 = _match_x754.snd;
    kk_std_core_types__list _pat_0_0 = kk_std_core_types__list_unbox(_box_x512, KK_BORROWED, _ctx);
    kk_std_core_sslice__sslice _pat_1_0 = kk_std_core_sslice__sslice_unbox(_box_x513, KK_BORROWED, _ctx);
    if (kk_std_core_types__is_Nil(_pat_0_0, _ctx)) {
      kk_std_core_types__tuple2_drop(_match_x754, _ctx);
      return kk_std_core_types__new_Nothing(_ctx);
    }
  }
  {
    kk_box_t _box_x514 = _match_x754.fst;
    kk_box_t _box_x515 = _match_x754.snd;
    kk_std_core_sslice__sslice rest = kk_std_core_sslice__sslice_unbox(_box_x515, KK_BORROWED, _ctx);
    kk_std_core_types__list xs = kk_std_core_types__list_unbox(_box_x514, KK_BORROWED, _ctx);
    kk_std_core_sslice__sslice_dup(rest, _ctx);
    kk_std_core_types__list_dup(xs, _ctx);
    kk_std_core_types__tuple2_drop(_match_x754, _ctx);
    kk_box_t _x_x1125;
    kk_std_core_types__tuple2 _x_x1126 = kk_std_core_types__new_Tuple2(kk_std_core_types__list_box(xs, _ctx), kk_std_core_sslice__sslice_box(rest, _ctx), _ctx); /*(129, 130)*/
    _x_x1125 = kk_std_core_types__tuple2_box(_x_x1126, _ctx); /*91*/
    return kk_std_core_types__new_Just(_x_x1125, _ctx);
  }
}


// lift anonymous function
struct kk_std_text_parse_digits0_fun1129__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_text_parse_digits0_fun1129(kk_function_t _fself, kk_box_t _b_x527, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_digits0_fun1129(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_text_parse_digits0_fun1129, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_text_parse_digits0_fun1129(kk_function_t _fself, kk_box_t _b_x527, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_string_t _x_x1130;
  kk_std_core_types__list _x_x1131 = kk_std_core_types__list_unbox(_b_x527, KK_OWNED, _ctx); /*list<char>*/
  _x_x1130 = kk_std_core_string_listchar_fs_string(_x_x1131, _ctx); /*string*/
  return kk_string_box(_x_x1130);
}
static kk_box_t kk_std_text_parse_digits0_fun1118(kk_function_t _fself, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core_types__list x_10285;
  kk_box_t _x_x1119;
  kk_string_t _x_x1120;
  kk_define_string_literal(, _s_x1121, 5, "digit", _ctx)
  _x_x1120 = kk_string_dup(_s_x1121, _ctx); /*string*/
  _x_x1119 = kk_std_text_parse_satisfy_fail(_x_x1120, kk_std_text_parse_new_digits0_fun1122(_ctx), _ctx); /*1746*/
  x_10285 = kk_std_core_types__list_unbox(_x_x1119, KK_OWNED, _ctx); /*list<char>*/
  kk_string_t _x_x1127;
  if (kk_yielding(kk_context())) {
    kk_std_core_types__list_drop(x_10285, _ctx);
    kk_box_t _x_x1128 = kk_std_core_hnd_yield_extend(kk_std_text_parse_new_digits0_fun1129(_ctx), _ctx); /*2978*/
    _x_x1127 = kk_string_unbox(_x_x1128); /*string*/
  }
  else {
    _x_x1127 = kk_std_core_string_listchar_fs_string(x_10285, _ctx); /*string*/
  }
  return kk_string_box(_x_x1127);
}


// lift anonymous function
struct kk_std_text_parse_digits0_fun1132__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_text_parse_digits0_fun1132(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_digits0_fun1132(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_text_parse_digits0_fun1132, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_text_parse_digits0_fun1132(kk_function_t _fself, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_string_t _x_x1133;
  kk_define_string_literal(, _s_x1134, 1, "0", _ctx)
  _x_x1133 = kk_string_dup(_s_x1134, _ctx); /*string*/
  return kk_string_box(_x_x1133);
}

kk_string_t kk_std_text_parse_digits0(kk_context_t* _ctx) { /* () -> parse string */ 
  kk_box_t _x_x1117 = kk_std_text_parse__lp__bar__bar__rp_(kk_std_text_parse_new_digits0_fun1118(_ctx), kk_std_text_parse_new_digits0_fun1132(_ctx), _ctx); /*1635*/
  return kk_string_unbox(_x_x1117);
}
 
// monadic lift


// lift anonymous function
struct kk_std_text_parse__mlift_pnat_10182_fun1136__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_text_parse__mlift_pnat_10182_fun1136(kk_function_t _fself, kk_box_t _b_x537, kk_box_t _b_x538, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse__new_mlift_pnat_10182_fun1136(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_text_parse__mlift_pnat_10182_fun1136, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_text_parse__mlift_pnat_10182_fun1136(kk_function_t _fself, kk_box_t _b_x537, kk_box_t _b_x538, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core_types__maybe _x_x1137;
  kk_string_t _x_x1138 = kk_string_unbox(_b_x537); /*string*/
  bool _x_x1139;
  kk_std_core_types__optional _match_x752 = kk_std_core_types__optional_unbox(_b_x538, KK_OWNED, _ctx); /*? bool*/;
  if (kk_std_core_types__is_Optional(_match_x752, _ctx)) {
    kk_box_t _box_x533 = _match_x752._cons._Optional.value;
    bool _uniq_hex_528 = kk_bool_unbox(_box_x533);
    kk_std_core_types__optional_drop(_match_x752, _ctx);
    _x_x1139 = _uniq_hex_528; /*bool*/
  }
  else {
    kk_std_core_types__optional_drop(_match_x752, _ctx);
    _x_x1139 = false; /*bool*/
  }
  _x_x1137 = kk_std_core_int_xparse(_x_x1138, _x_x1139, _ctx); /*maybe<int>*/
  return kk_std_core_types__maybe_box(_x_x1137, _ctx);
}


// lift anonymous function
struct kk_std_text_parse__mlift_pnat_10182_fun1141__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_text_parse__mlift_pnat_10182_fun1141(kk_function_t _fself, kk_box_t _b_x548, kk_box_t _b_x549, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse__new_mlift_pnat_10182_fun1141(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_text_parse__mlift_pnat_10182_fun1141, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_text_parse__mlift_pnat_10182_fun1141(kk_function_t _fself, kk_box_t _b_x548, kk_box_t _b_x549, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core_types__maybe m_553 = kk_std_core_types__maybe_unbox(_b_x548, KK_OWNED, _ctx); /*maybe<int>*/;
  kk_integer_t nothing_554 = kk_integer_unbox(_b_x549, _ctx); /*int*/;
  kk_integer_t _x_x1142;
  if (kk_std_core_types__is_Nothing(m_553, _ctx)) {
    _x_x1142 = nothing_554; /*int*/
  }
  else {
    kk_box_t _box_x544 = m_553._cons.Just.value;
    kk_integer_t x = kk_integer_unbox(_box_x544, _ctx);
    kk_integer_drop(nothing_554, _ctx);
    kk_integer_dup(x, _ctx);
    kk_std_core_types__maybe_drop(m_553, _ctx);
    _x_x1142 = x; /*int*/
  }
  return kk_integer_box(_x_x1142, _ctx);
}

kk_integer_t kk_std_text_parse__mlift_pnat_10182(kk_std_core_types__list _y_x10125, kk_context_t* _ctx) { /* (list<char>) -> parse int */ 
  kk_string_t _x_x1_0_10165 = kk_std_core_string_listchar_fs_string(_y_x10125, _ctx); /*string*/;
  kk_std_core_types__maybe _x_x1_10163;
  kk_box_t _x_x1135 = kk_std_core_hnd__open_none2(kk_std_text_parse__new_mlift_pnat_10182_fun1136(_ctx), kk_string_box(_x_x1_0_10165), kk_std_core_types__optional_box(kk_std_core_types__new_None(_ctx), _ctx), _ctx); /*8647*/
  _x_x1_10163 = kk_std_core_types__maybe_unbox(_x_x1135, KK_OWNED, _ctx); /*maybe<int>*/
  kk_box_t _x_x1140 = kk_std_core_hnd__open_none2(kk_std_text_parse__new_mlift_pnat_10182_fun1141(_ctx), kk_std_core_types__maybe_box(_x_x1_10163, _ctx), kk_integer_box(kk_integer_from_small(0), _ctx), _ctx); /*8647*/
  return kk_integer_unbox(_x_x1140, _ctx);
}


// lift anonymous function
struct kk_std_text_parse_pnat_fun1146__t {
  struct kk_function_s _base;
};
static kk_std_core_types__maybe kk_std_text_parse_pnat_fun1146(kk_function_t _fself, kk_std_core_sslice__sslice slice, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_pnat_fun1146(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_text_parse_pnat_fun1146, _ctx)
  return kk_function_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_std_text_parse_pnat_fun1148__t {
  struct kk_function_s _base;
};
static bool kk_std_text_parse_pnat_fun1148(kk_function_t _fself, kk_char_t _x1_x1147, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_pnat_fun1148(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_text_parse_pnat_fun1148, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static bool kk_std_text_parse_pnat_fun1148(kk_function_t _fself, kk_char_t _x1_x1147, kk_context_t* _ctx) {
  kk_unused(_fself);
  return kk_std_core_char_is_digit(_x1_x1147, _ctx);
}
static kk_std_core_types__maybe kk_std_text_parse_pnat_fun1146(kk_function_t _fself, kk_std_core_sslice__sslice slice, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core_types__tuple2 _match_x751 = kk_std_text_parse_next_while0(slice, kk_std_text_parse_new_pnat_fun1148(_ctx), kk_std_core_types__new_Nil(_ctx), _ctx); /*(list<char>, sslice/sslice)*/;
  {
    kk_box_t _box_x555 = _match_x751.fst;
    kk_box_t _box_x556 = _match_x751.snd;
    kk_std_core_types__list _pat_0_1 = kk_std_core_types__list_unbox(_box_x555, KK_BORROWED, _ctx);
    kk_std_core_sslice__sslice _pat_1_0 = kk_std_core_sslice__sslice_unbox(_box_x556, KK_BORROWED, _ctx);
    if (kk_std_core_types__is_Nil(_pat_0_1, _ctx)) {
      kk_std_core_types__tuple2_drop(_match_x751, _ctx);
      return kk_std_core_types__new_Nothing(_ctx);
    }
  }
  {
    kk_box_t _box_x557 = _match_x751.fst;
    kk_box_t _box_x558 = _match_x751.snd;
    kk_std_core_sslice__sslice rest = kk_std_core_sslice__sslice_unbox(_box_x558, KK_BORROWED, _ctx);
    kk_std_core_types__list xs = kk_std_core_types__list_unbox(_box_x557, KK_BORROWED, _ctx);
    kk_std_core_sslice__sslice_dup(rest, _ctx);
    kk_std_core_types__list_dup(xs, _ctx);
    kk_std_core_types__tuple2_drop(_match_x751, _ctx);
    kk_box_t _x_x1149;
    kk_std_core_types__tuple2 _x_x1150 = kk_std_core_types__new_Tuple2(kk_std_core_types__list_box(xs, _ctx), kk_std_core_sslice__sslice_box(rest, _ctx), _ctx); /*(129, 130)*/
    _x_x1149 = kk_std_core_types__tuple2_box(_x_x1150, _ctx); /*91*/
    return kk_std_core_types__new_Just(_x_x1149, _ctx);
  }
}


// lift anonymous function
struct kk_std_text_parse_pnat_fun1152__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_text_parse_pnat_fun1152(kk_function_t _fself, kk_box_t _b_x570, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_pnat_fun1152(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_text_parse_pnat_fun1152, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_text_parse_pnat_fun1152(kk_function_t _fself, kk_box_t _b_x570, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_integer_t _x_x1153;
  kk_std_core_types__list _x_x1154 = kk_std_core_types__list_unbox(_b_x570, KK_OWNED, _ctx); /*list<char>*/
  _x_x1153 = kk_std_text_parse__mlift_pnat_10182(_x_x1154, _ctx); /*int*/
  return kk_integer_box(_x_x1153, _ctx);
}


// lift anonymous function
struct kk_std_text_parse_pnat_fun1156__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_text_parse_pnat_fun1156(kk_function_t _fself, kk_box_t _b_x575, kk_box_t _b_x576, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_pnat_fun1156(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_text_parse_pnat_fun1156, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_text_parse_pnat_fun1156(kk_function_t _fself, kk_box_t _b_x575, kk_box_t _b_x576, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core_types__maybe _x_x1157;
  kk_string_t _x_x1158 = kk_string_unbox(_b_x575); /*string*/
  bool _x_x1159;
  kk_std_core_types__optional _match_x750 = kk_std_core_types__optional_unbox(_b_x576, KK_OWNED, _ctx); /*? bool*/;
  if (kk_std_core_types__is_Optional(_match_x750, _ctx)) {
    kk_box_t _box_x571 = _match_x750._cons._Optional.value;
    bool _uniq_hex_528 = kk_bool_unbox(_box_x571);
    kk_std_core_types__optional_drop(_match_x750, _ctx);
    _x_x1159 = _uniq_hex_528; /*bool*/
  }
  else {
    kk_std_core_types__optional_drop(_match_x750, _ctx);
    _x_x1159 = false; /*bool*/
  }
  _x_x1157 = kk_std_core_int_xparse(_x_x1158, _x_x1159, _ctx); /*maybe<int>*/
  return kk_std_core_types__maybe_box(_x_x1157, _ctx);
}


// lift anonymous function
struct kk_std_text_parse_pnat_fun1161__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_text_parse_pnat_fun1161(kk_function_t _fself, kk_box_t _b_x586, kk_box_t _b_x587, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_pnat_fun1161(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_text_parse_pnat_fun1161, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_text_parse_pnat_fun1161(kk_function_t _fself, kk_box_t _b_x586, kk_box_t _b_x587, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core_types__maybe m_592 = kk_std_core_types__maybe_unbox(_b_x586, KK_OWNED, _ctx); /*maybe<int>*/;
  kk_integer_t nothing_593 = kk_integer_unbox(_b_x587, _ctx); /*int*/;
  kk_integer_t _x_x1162;
  if (kk_std_core_types__is_Nothing(m_592, _ctx)) {
    _x_x1162 = nothing_593; /*int*/
  }
  else {
    kk_box_t _box_x582 = m_592._cons.Just.value;
    kk_integer_t x_0 = kk_integer_unbox(_box_x582, _ctx);
    kk_integer_drop(nothing_593, _ctx);
    kk_integer_dup(x_0, _ctx);
    kk_std_core_types__maybe_drop(m_592, _ctx);
    _x_x1162 = x_0; /*int*/
  }
  return kk_integer_box(_x_x1162, _ctx);
}

kk_integer_t kk_std_text_parse_pnat(kk_context_t* _ctx) { /* () -> parse int */ 
  kk_std_core_types__list x_10287;
  kk_box_t _x_x1143;
  kk_string_t _x_x1144;
  kk_define_string_literal(, _s_x1145, 5, "digit", _ctx)
  _x_x1144 = kk_string_dup(_s_x1145, _ctx); /*string*/
  _x_x1143 = kk_std_text_parse_satisfy_fail(_x_x1144, kk_std_text_parse_new_pnat_fun1146(_ctx), _ctx); /*1746*/
  x_10287 = kk_std_core_types__list_unbox(_x_x1143, KK_OWNED, _ctx); /*list<char>*/
  if (kk_yielding(kk_context())) {
    kk_std_core_types__list_drop(x_10287, _ctx);
    kk_box_t _x_x1151 = kk_std_core_hnd_yield_extend(kk_std_text_parse_new_pnat_fun1152(_ctx), _ctx); /*2978*/
    return kk_integer_unbox(_x_x1151, _ctx);
  }
  {
    kk_string_t _x_x1_0_10165 = kk_std_core_string_listchar_fs_string(x_10287, _ctx); /*string*/;
    kk_std_core_types__maybe _x_x1_10163;
    kk_box_t _x_x1155 = kk_std_core_hnd__open_none2(kk_std_text_parse_new_pnat_fun1156(_ctx), kk_string_box(_x_x1_0_10165), kk_std_core_types__optional_box(kk_std_core_types__new_None(_ctx), _ctx), _ctx); /*8647*/
    _x_x1_10163 = kk_std_core_types__maybe_unbox(_x_x1155, KK_OWNED, _ctx); /*maybe<int>*/
    kk_box_t _x_x1160 = kk_std_core_hnd__open_none2(kk_std_text_parse_new_pnat_fun1161(_ctx), kk_std_core_types__maybe_box(_x_x1_10163, _ctx), kk_integer_box(kk_integer_from_small(0), _ctx), _ctx); /*8647*/
    return kk_integer_unbox(_x_x1160, _ctx);
  }
}


// lift anonymous function
struct kk_std_text_parse_none_of_fun1166__t {
  struct kk_function_s _base;
  kk_string_t chars;
};
static kk_std_core_types__maybe kk_std_text_parse_none_of_fun1166(kk_function_t _fself, kk_std_core_sslice__sslice slice, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_none_of_fun1166(kk_string_t chars, kk_context_t* _ctx) {
  struct kk_std_text_parse_none_of_fun1166__t* _self = kk_function_alloc_as(struct kk_std_text_parse_none_of_fun1166__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_text_parse_none_of_fun1166, kk_context());
  _self->chars = chars;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_std_core_types__maybe kk_std_text_parse_none_of_fun1166(kk_function_t _fself, kk_std_core_sslice__sslice slice, kk_context_t* _ctx) {
  struct kk_std_text_parse_none_of_fun1166__t* _self = kk_function_as(struct kk_std_text_parse_none_of_fun1166__t*, _fself, _ctx);
  kk_string_t chars = _self->chars; /* string */
  kk_drop_match(_self, {kk_string_dup(chars, _ctx);}, {}, _ctx)
  kk_std_core_types__maybe _match_x748 = kk_std_core_sslice_next(slice, _ctx); /*maybe<(char, sslice/sslice)>*/;
  if (kk_std_core_types__is_Just(_match_x748, _ctx)) {
    kk_box_t _box_x594 = _match_x748._cons.Just.value;
    kk_std_core_types__tuple2 _pat_0 = kk_std_core_types__tuple2_unbox(_box_x594, KK_BORROWED, _ctx);
    if (kk_std_core_types__is_Tuple2(_pat_0, _ctx)) {
      kk_box_t _box_x595 = _pat_0.fst;
      kk_box_t _box_x596 = _pat_0.snd;
      kk_char_t c = kk_char_unbox(_box_x595, KK_BORROWED, _ctx);
      bool b_10040;
      kk_string_t _x_x1167 = kk_string_dup(chars, _ctx); /*string*/
      kk_string_t _x_x1168 = kk_std_core_string_char_fs_string(c, _ctx); /*string*/
      b_10040 = kk_string_contains(_x_x1167,_x_x1168,kk_context()); /*bool*/
      bool _x_x1169;
      if (b_10040) {
        _x_x1169 = false; /*bool*/
      }
      else {
        _x_x1169 = true; /*bool*/
      }
      if (_x_x1169) {
        kk_std_core_sslice__sslice rest = kk_std_core_sslice__sslice_unbox(_box_x596, KK_BORROWED, _ctx);
        kk_string_drop(chars, _ctx);
        kk_std_core_sslice__sslice_dup(rest, _ctx);
        kk_std_core_types__maybe_drop(_match_x748, _ctx);
        kk_box_t _x_x1170;
        kk_std_core_types__tuple2 _x_x1171 = kk_std_core_types__new_Tuple2(kk_char_box(c, _ctx), kk_std_core_sslice__sslice_box(rest, _ctx), _ctx); /*(129, 130)*/
        _x_x1170 = kk_std_core_types__tuple2_box(_x_x1171, _ctx); /*91*/
        return kk_std_core_types__new_Just(_x_x1170, _ctx);
      }
    }
  }
  {
    kk_string_drop(chars, _ctx);
    kk_std_core_types__maybe_drop(_match_x748, _ctx);
    return kk_std_core_types__new_Nothing(_ctx);
  }
}

kk_char_t kk_std_text_parse_none_of(kk_string_t chars, kk_context_t* _ctx) { /* (chars : string) -> parse char */ 
  kk_box_t _x_x1163;
  kk_string_t _x_x1164 = kk_string_empty(); /*string*/
  _x_x1163 = kk_std_text_parse_satisfy_fail(_x_x1164, kk_std_text_parse_new_none_of_fun1166(chars, _ctx), _ctx); /*1746*/
  return kk_char_unbox(_x_x1163, KK_OWNED, _ctx);
}


// lift anonymous function
struct kk_std_text_parse_none_of_many1_fun1175__t {
  struct kk_function_s _base;
  kk_string_t chars;
};
static kk_std_core_types__maybe kk_std_text_parse_none_of_many1_fun1175(kk_function_t _fself, kk_std_core_sslice__sslice slice, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_none_of_many1_fun1175(kk_string_t chars, kk_context_t* _ctx) {
  struct kk_std_text_parse_none_of_many1_fun1175__t* _self = kk_function_alloc_as(struct kk_std_text_parse_none_of_many1_fun1175__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_text_parse_none_of_many1_fun1175, kk_context());
  _self->chars = chars;
  return kk_datatype_from_base(&_self->_base, kk_context());
}



// lift anonymous function
struct kk_std_text_parse_none_of_many1_fun1176__t {
  struct kk_function_s _base;
  kk_string_t chars;
};
static bool kk_std_text_parse_none_of_many1_fun1176(kk_function_t _fself, kk_char_t c, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_none_of_many1_fun1176(kk_string_t chars, kk_context_t* _ctx) {
  struct kk_std_text_parse_none_of_many1_fun1176__t* _self = kk_function_alloc_as(struct kk_std_text_parse_none_of_many1_fun1176__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_text_parse_none_of_many1_fun1176, kk_context());
  _self->chars = chars;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static bool kk_std_text_parse_none_of_many1_fun1176(kk_function_t _fself, kk_char_t c, kk_context_t* _ctx) {
  struct kk_std_text_parse_none_of_many1_fun1176__t* _self = kk_function_as(struct kk_std_text_parse_none_of_many1_fun1176__t*, _fself, _ctx);
  kk_string_t chars = _self->chars; /* string */
  kk_drop_match(_self, {kk_string_dup(chars, _ctx);}, {}, _ctx)
  bool b_10043;
  kk_string_t _x_x1177 = kk_std_core_string_char_fs_string(c, _ctx); /*string*/
  b_10043 = kk_string_contains(chars,_x_x1177,kk_context()); /*bool*/
  if (b_10043) {
    return false;
  }
  {
    return true;
  }
}
static kk_std_core_types__maybe kk_std_text_parse_none_of_many1_fun1175(kk_function_t _fself, kk_std_core_sslice__sslice slice, kk_context_t* _ctx) {
  struct kk_std_text_parse_none_of_many1_fun1175__t* _self = kk_function_as(struct kk_std_text_parse_none_of_many1_fun1175__t*, _fself, _ctx);
  kk_string_t chars = _self->chars; /* string */
  kk_drop_match(_self, {kk_string_dup(chars, _ctx);}, {}, _ctx)
  kk_std_core_types__tuple2 _match_x747 = kk_std_text_parse_next_while0(slice, kk_std_text_parse_new_none_of_many1_fun1176(chars, _ctx), kk_std_core_types__new_Nil(_ctx), _ctx); /*(list<char>, sslice/sslice)*/;
  {
    kk_box_t _box_x607 = _match_x747.fst;
    kk_box_t _box_x608 = _match_x747.snd;
    kk_std_core_types__list _pat_0_1 = kk_std_core_types__list_unbox(_box_x607, KK_BORROWED, _ctx);
    kk_std_core_sslice__sslice _pat_1_0 = kk_std_core_sslice__sslice_unbox(_box_x608, KK_BORROWED, _ctx);
    if (kk_std_core_types__is_Nil(_pat_0_1, _ctx)) {
      kk_std_core_types__tuple2_drop(_match_x747, _ctx);
      return kk_std_core_types__new_Nothing(_ctx);
    }
  }
  {
    kk_box_t _box_x609 = _match_x747.fst;
    kk_box_t _box_x610 = _match_x747.snd;
    kk_std_core_sslice__sslice rest = kk_std_core_sslice__sslice_unbox(_box_x610, KK_BORROWED, _ctx);
    kk_std_core_types__list xs = kk_std_core_types__list_unbox(_box_x609, KK_BORROWED, _ctx);
    kk_std_core_sslice__sslice_dup(rest, _ctx);
    kk_std_core_types__list_dup(xs, _ctx);
    kk_std_core_types__tuple2_drop(_match_x747, _ctx);
    kk_box_t _x_x1178;
    kk_std_core_types__tuple2 _x_x1179 = kk_std_core_types__new_Tuple2(kk_std_core_types__list_box(xs, _ctx), kk_std_core_sslice__sslice_box(rest, _ctx), _ctx); /*(129, 130)*/
    _x_x1178 = kk_std_core_types__tuple2_box(_x_x1179, _ctx); /*91*/
    return kk_std_core_types__new_Just(_x_x1178, _ctx);
  }
}


// lift anonymous function
struct kk_std_text_parse_none_of_many1_fun1181__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_text_parse_none_of_many1_fun1181(kk_function_t _fself, kk_box_t _b_x622, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_none_of_many1_fun1181(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_text_parse_none_of_many1_fun1181, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_text_parse_none_of_many1_fun1181(kk_function_t _fself, kk_box_t _b_x622, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_string_t _x_x1182;
  kk_std_core_types__list _x_x1183 = kk_std_core_types__list_unbox(_b_x622, KK_OWNED, _ctx); /*list<char>*/
  _x_x1182 = kk_std_core_string_listchar_fs_string(_x_x1183, _ctx); /*string*/
  return kk_string_box(_x_x1182);
}

kk_string_t kk_std_text_parse_none_of_many1(kk_string_t chars, kk_context_t* _ctx) { /* (chars : string) -> parse string */ 
  kk_std_core_types__list x_10290;
  kk_box_t _x_x1172;
  kk_string_t _x_x1173 = kk_string_empty(); /*string*/
  _x_x1172 = kk_std_text_parse_satisfy_fail(_x_x1173, kk_std_text_parse_new_none_of_many1_fun1175(chars, _ctx), _ctx); /*1746*/
  x_10290 = kk_std_core_types__list_unbox(_x_x1172, KK_OWNED, _ctx); /*list<char>*/
  if (kk_yielding(kk_context())) {
    kk_std_core_types__list_drop(x_10290, _ctx);
    kk_box_t _x_x1180 = kk_std_core_hnd_yield_extend(kk_std_text_parse_new_none_of_many1_fun1181(_ctx), _ctx); /*2978*/
    return kk_string_unbox(_x_x1180);
  }
  {
    return kk_std_core_string_listchar_fs_string(x_10290, _ctx);
  }
}


// lift anonymous function
struct kk_std_text_parse_one_of_fun1186__t {
  struct kk_function_s _base;
  kk_string_t chars;
};
static kk_std_core_types__maybe kk_std_text_parse_one_of_fun1186(kk_function_t _fself, kk_std_core_sslice__sslice slice, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_one_of_fun1186(kk_string_t chars, kk_context_t* _ctx) {
  struct kk_std_text_parse_one_of_fun1186__t* _self = kk_function_alloc_as(struct kk_std_text_parse_one_of_fun1186__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_text_parse_one_of_fun1186, kk_context());
  _self->chars = chars;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_std_core_types__maybe kk_std_text_parse_one_of_fun1186(kk_function_t _fself, kk_std_core_sslice__sslice slice, kk_context_t* _ctx) {
  struct kk_std_text_parse_one_of_fun1186__t* _self = kk_function_as(struct kk_std_text_parse_one_of_fun1186__t*, _fself, _ctx);
  kk_string_t chars = _self->chars; /* string */
  kk_drop_match(_self, {kk_string_dup(chars, _ctx);}, {}, _ctx)
  kk_std_core_types__maybe _match_x745 = kk_std_core_sslice_next(slice, _ctx); /*maybe<(char, sslice/sslice)>*/;
  if (kk_std_core_types__is_Just(_match_x745, _ctx)) {
    kk_box_t _box_x624 = _match_x745._cons.Just.value;
    kk_std_core_types__tuple2 _pat_0 = kk_std_core_types__tuple2_unbox(_box_x624, KK_BORROWED, _ctx);
    if (kk_std_core_types__is_Tuple2(_pat_0, _ctx)) {
      kk_box_t _box_x625 = _pat_0.fst;
      kk_box_t _box_x626 = _pat_0.snd;
      kk_char_t c = kk_char_unbox(_box_x625, KK_BORROWED, _ctx);
      kk_string_t _x_x1187 = kk_string_dup(chars, _ctx); /*string*/
      kk_string_t _x_x1188 = kk_std_core_string_char_fs_string(c, _ctx); /*string*/
      if (kk_string_contains(_x_x1187,_x_x1188,kk_context())) {
        kk_std_core_sslice__sslice rest = kk_std_core_sslice__sslice_unbox(_box_x626, KK_BORROWED, _ctx);
        kk_string_drop(chars, _ctx);
        kk_std_core_sslice__sslice_dup(rest, _ctx);
        kk_std_core_types__maybe_drop(_match_x745, _ctx);
        kk_box_t _x_x1189;
        kk_std_core_types__tuple2 _x_x1190 = kk_std_core_types__new_Tuple2(kk_char_box(c, _ctx), kk_std_core_sslice__sslice_box(rest, _ctx), _ctx); /*(129, 130)*/
        _x_x1189 = kk_std_core_types__tuple2_box(_x_x1190, _ctx); /*91*/
        return kk_std_core_types__new_Just(_x_x1189, _ctx);
      }
    }
  }
  {
    kk_string_drop(chars, _ctx);
    kk_std_core_types__maybe_drop(_match_x745, _ctx);
    return kk_std_core_types__new_Nothing(_ctx);
  }
}

kk_char_t kk_std_text_parse_one_of(kk_string_t chars, kk_context_t* _ctx) { /* (chars : string) -> parse char */ 
  kk_box_t _x_x1184;
  kk_string_t _x_x1185 = kk_string_dup(chars, _ctx); /*string*/
  _x_x1184 = kk_std_text_parse_satisfy_fail(_x_x1185, kk_std_text_parse_new_one_of_fun1186(chars, _ctx), _ctx); /*1746*/
  return kk_char_unbox(_x_x1184, KK_OWNED, _ctx);
}
 
// monadic lift

kk_std_core_types__list kk_std_text_parse__mlift_many_acc_10183(kk_std_core_types__list acc, kk_function_t p, kk_box_t x, kk_context_t* _ctx) { /* forall<a,e> (acc : list<a>, p : parser<e,a>, x : a) -> <parse|e> list<a> */ 
  kk_std_core_types__list _x_x1191 = kk_std_core_types__new_Cons(kk_reuse_null, 0, x, acc, _ctx); /*list<82>*/
  return kk_std_text_parse_many_acc(p, _x_x1191, _ctx);
}


// lift anonymous function
struct kk_std_text_parse_many_acc_fun1194__t {
  struct kk_function_s _base;
  kk_std_core_types__list acc_0;
  kk_function_t p_0;
};
static kk_box_t kk_std_text_parse_many_acc_fun1194(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_many_acc_fun1194(kk_std_core_types__list acc_0, kk_function_t p_0, kk_context_t* _ctx) {
  struct kk_std_text_parse_many_acc_fun1194__t* _self = kk_function_alloc_as(struct kk_std_text_parse_many_acc_fun1194__t, 3, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_text_parse_many_acc_fun1194, kk_context());
  _self->acc_0 = acc_0;
  _self->p_0 = p_0;
  return kk_datatype_from_base(&_self->_base, kk_context());
}



// lift anonymous function
struct kk_std_text_parse_many_acc_fun1198__t {
  struct kk_function_s _base;
  kk_std_core_types__list acc_0;
  kk_function_t p_0;
};
static kk_box_t kk_std_text_parse_many_acc_fun1198(kk_function_t _fself, kk_box_t _b_x638, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_many_acc_fun1198(kk_std_core_types__list acc_0, kk_function_t p_0, kk_context_t* _ctx) {
  struct kk_std_text_parse_many_acc_fun1198__t* _self = kk_function_alloc_as(struct kk_std_text_parse_many_acc_fun1198__t, 3, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_text_parse_many_acc_fun1198, kk_context());
  _self->acc_0 = acc_0;
  _self->p_0 = p_0;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_text_parse_many_acc_fun1198(kk_function_t _fself, kk_box_t _b_x638, kk_context_t* _ctx) {
  struct kk_std_text_parse_many_acc_fun1198__t* _self = kk_function_as(struct kk_std_text_parse_many_acc_fun1198__t*, _fself, _ctx);
  kk_std_core_types__list acc_0 = _self->acc_0; /* list<2462> */
  kk_function_t p_0 = _self->p_0; /* std/text/parse/parser<2463,2462> */
  kk_drop_match(_self, {kk_std_core_types__list_dup(acc_0, _ctx);kk_function_dup(p_0, _ctx);}, {}, _ctx)
  kk_box_t x_1_644 = _b_x638; /*2462*/;
  kk_std_core_types__list _x_x1199 = kk_std_text_parse__mlift_many_acc_10183(acc_0, p_0, x_1_644, _ctx); /*list<2462>*/
  return kk_std_core_types__list_box(_x_x1199, _ctx);
}
static kk_box_t kk_std_text_parse_many_acc_fun1194(kk_function_t _fself, kk_context_t* _ctx) {
  struct kk_std_text_parse_many_acc_fun1194__t* _self = kk_function_as(struct kk_std_text_parse_many_acc_fun1194__t*, _fself, _ctx);
  kk_std_core_types__list acc_0 = _self->acc_0; /* list<2462> */
  kk_function_t p_0 = _self->p_0; /* std/text/parse/parser<2463,2462> */
  kk_drop_match(_self, {kk_std_core_types__list_dup(acc_0, _ctx);kk_function_dup(p_0, _ctx);}, {}, _ctx)
  kk_box_t x_0_10292;
  kk_function_t _x_x1195 = kk_function_dup(p_0, _ctx); /*std/text/parse/parser<2463,2462>*/
  x_0_10292 = kk_function_call(kk_box_t, (kk_function_t, kk_context_t*), _x_x1195, (_x_x1195, _ctx), _ctx); /*2462*/
  kk_std_core_types__list _x_x1196;
  if (kk_yielding(kk_context())) {
    kk_box_drop(x_0_10292, _ctx);
    kk_box_t _x_x1197 = kk_std_core_hnd_yield_extend(kk_std_text_parse_new_many_acc_fun1198(acc_0, p_0, _ctx), _ctx); /*2978*/
    _x_x1196 = kk_std_core_types__list_unbox(_x_x1197, KK_OWNED, _ctx); /*list<2462>*/
  }
  else {
    _x_x1196 = kk_std_text_parse__mlift_many_acc_10183(acc_0, p_0, x_0_10292, _ctx); /*list<2462>*/
  }
  return kk_std_core_types__list_box(_x_x1196, _ctx);
}


// lift anonymous function
struct kk_std_text_parse_many_acc_fun1200__t {
  struct kk_function_s _base;
  kk_std_core_types__list acc_0;
};
static kk_box_t kk_std_text_parse_many_acc_fun1200(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_many_acc_fun1200(kk_std_core_types__list acc_0, kk_context_t* _ctx) {
  struct kk_std_text_parse_many_acc_fun1200__t* _self = kk_function_alloc_as(struct kk_std_text_parse_many_acc_fun1200__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_text_parse_many_acc_fun1200, kk_context());
  _self->acc_0 = acc_0;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_text_parse_many_acc_fun1200(kk_function_t _fself, kk_context_t* _ctx) {
  struct kk_std_text_parse_many_acc_fun1200__t* _self = kk_function_as(struct kk_std_text_parse_many_acc_fun1200__t*, _fself, _ctx);
  kk_std_core_types__list acc_0 = _self->acc_0; /* list<2462> */
  kk_drop_match(_self, {kk_std_core_types__list_dup(acc_0, _ctx);}, {}, _ctx)
  kk_std_core_types__list _x_x1201 = kk_std_core_list__lift_reverse_append_4948(kk_std_core_types__new_Nil(_ctx), acc_0, _ctx); /*list<950>*/
  return kk_std_core_types__list_box(_x_x1201, _ctx);
}

kk_std_core_types__list kk_std_text_parse_many_acc(kk_function_t p_0, kk_std_core_types__list acc_0, kk_context_t* _ctx) { /* forall<a,e> (p : parser<e,a>, acc : list<a>) -> <parse|e> list<a> */ 
  kk_box_t _x_x1192;
  kk_function_t _x_x1193;
  kk_std_core_types__list_dup(acc_0, _ctx);
  _x_x1193 = kk_std_text_parse_new_many_acc_fun1194(acc_0, p_0, _ctx); /*() -> <std/text/parse/parse|1636> 1635*/
  _x_x1192 = kk_std_text_parse__lp__bar__bar__rp_(_x_x1193, kk_std_text_parse_new_many_acc_fun1200(acc_0, _ctx), _ctx); /*1635*/
  return kk_std_core_types__list_unbox(_x_x1192, KK_OWNED, _ctx);
}
 
// monadic lift


// lift anonymous function
struct kk_std_text_parse__mlift_many1_10185_fun1203__t {
  struct kk_function_s _base;
  kk_box_t _y_x10133;
};
static kk_box_t kk_std_text_parse__mlift_many1_10185_fun1203(kk_function_t _fself, kk_box_t _b_x646, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse__new_mlift_many1_10185_fun1203(kk_box_t _y_x10133, kk_context_t* _ctx) {
  struct kk_std_text_parse__mlift_many1_10185_fun1203__t* _self = kk_function_alloc_as(struct kk_std_text_parse__mlift_many1_10185_fun1203__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_text_parse__mlift_many1_10185_fun1203, kk_context());
  _self->_y_x10133 = _y_x10133;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_text_parse__mlift_many1_10185_fun1203(kk_function_t _fself, kk_box_t _b_x646, kk_context_t* _ctx) {
  struct kk_std_text_parse__mlift_many1_10185_fun1203__t* _self = kk_function_as(struct kk_std_text_parse__mlift_many1_10185_fun1203__t*, _fself, _ctx);
  kk_box_t _y_x10133 = _self->_y_x10133; /* 2518 */
  kk_drop_match(_self, {kk_box_dup(_y_x10133, _ctx);}, {}, _ctx)
  kk_std_core_types__list _y_x10134_648 = kk_std_core_types__list_unbox(_b_x646, KK_OWNED, _ctx); /*list<2518>*/;
  kk_std_core_types__list _x_x1204 = kk_std_core_types__new_Cons(kk_reuse_null, 0, _y_x10133, _y_x10134_648, _ctx); /*list<82>*/
  return kk_std_core_types__list_box(_x_x1204, _ctx);
}

kk_std_core_types__list kk_std_text_parse__mlift_many1_10185(kk_function_t p, kk_box_t _y_x10133, kk_context_t* _ctx) { /* forall<a,e> (p : parser<e,a>, a) -> <parse|e> list<a> */ 
  kk_std_core_types__list x_10294 = kk_std_text_parse_many_acc(p, kk_std_core_types__new_Nil(_ctx), _ctx); /*list<2518>*/;
  if (kk_yielding(kk_context())) {
    kk_std_core_types__list_drop(x_10294, _ctx);
    kk_box_t _x_x1202 = kk_std_core_hnd_yield_extend(kk_std_text_parse__new_mlift_many1_10185_fun1203(_y_x10133, _ctx), _ctx); /*2978*/
    return kk_std_core_types__list_unbox(_x_x1202, KK_OWNED, _ctx);
  }
  {
    return kk_std_core_types__new_Cons(kk_reuse_null, 0, _y_x10133, x_10294, _ctx);
  }
}
 
// The `many1` combinator parses `p` at least once an then until it fails, returning a list of the results of `p`.
// The `many1` combinator is non-divergent only when `p` always consumes input or `fail`s.


// lift anonymous function
struct kk_std_text_parse_many1_fun1207__t {
  struct kk_function_s _base;
  kk_function_t p;
};
static kk_box_t kk_std_text_parse_many1_fun1207(kk_function_t _fself, kk_box_t _b_x650, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_many1_fun1207(kk_function_t p, kk_context_t* _ctx) {
  struct kk_std_text_parse_many1_fun1207__t* _self = kk_function_alloc_as(struct kk_std_text_parse_many1_fun1207__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_text_parse_many1_fun1207, kk_context());
  _self->p = p;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_text_parse_many1_fun1207(kk_function_t _fself, kk_box_t _b_x650, kk_context_t* _ctx) {
  struct kk_std_text_parse_many1_fun1207__t* _self = kk_function_as(struct kk_std_text_parse_many1_fun1207__t*, _fself, _ctx);
  kk_function_t p = _self->p; /* std/text/parse/parser<2519,2518> */
  kk_drop_match(_self, {kk_function_dup(p, _ctx);}, {}, _ctx)
  kk_box_t _y_x10133_655 = _b_x650; /*2518*/;
  kk_std_core_types__list _x_x1208 = kk_std_text_parse__mlift_many1_10185(p, _y_x10133_655, _ctx); /*list<2518>*/
  return kk_std_core_types__list_box(_x_x1208, _ctx);
}


// lift anonymous function
struct kk_std_text_parse_many1_fun1210__t {
  struct kk_function_s _base;
  kk_box_t x_10298;
};
static kk_box_t kk_std_text_parse_many1_fun1210(kk_function_t _fself, kk_box_t _b_x652, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_many1_fun1210(kk_box_t x_10298, kk_context_t* _ctx) {
  struct kk_std_text_parse_many1_fun1210__t* _self = kk_function_alloc_as(struct kk_std_text_parse_many1_fun1210__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_text_parse_many1_fun1210, kk_context());
  _self->x_10298 = x_10298;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_text_parse_many1_fun1210(kk_function_t _fself, kk_box_t _b_x652, kk_context_t* _ctx) {
  struct kk_std_text_parse_many1_fun1210__t* _self = kk_function_as(struct kk_std_text_parse_many1_fun1210__t*, _fself, _ctx);
  kk_box_t x_10298 = _self->x_10298; /* 2518 */
  kk_drop_match(_self, {kk_box_dup(x_10298, _ctx);}, {}, _ctx)
  kk_std_core_types__list _y_x10134_656 = kk_std_core_types__list_unbox(_b_x652, KK_OWNED, _ctx); /*list<2518>*/;
  kk_std_core_types__list _x_x1211 = kk_std_core_types__new_Cons(kk_reuse_null, 0, x_10298, _y_x10134_656, _ctx); /*list<82>*/
  return kk_std_core_types__list_box(_x_x1211, _ctx);
}

kk_std_core_types__list kk_std_text_parse_many1(kk_function_t p, kk_context_t* _ctx) { /* forall<a,e> (p : parser<e,a>) -> <parse|e> list<a> */ 
  kk_box_t x_10298;
  kk_function_t _x_x1205 = kk_function_dup(p, _ctx); /*std/text/parse/parser<2519,2518>*/
  x_10298 = kk_function_call(kk_box_t, (kk_function_t, kk_context_t*), _x_x1205, (_x_x1205, _ctx), _ctx); /*2518*/
  if (kk_yielding(kk_context())) {
    kk_box_drop(x_10298, _ctx);
    kk_box_t _x_x1206 = kk_std_core_hnd_yield_extend(kk_std_text_parse_new_many1_fun1207(p, _ctx), _ctx); /*2978*/
    return kk_std_core_types__list_unbox(_x_x1206, KK_OWNED, _ctx);
  }
  {
    kk_std_core_types__list x_0_10301 = kk_std_text_parse_many_acc(p, kk_std_core_types__new_Nil(_ctx), _ctx); /*list<2518>*/;
    if (kk_yielding(kk_context())) {
      kk_std_core_types__list_drop(x_0_10301, _ctx);
      kk_box_t _x_x1209 = kk_std_core_hnd_yield_extend(kk_std_text_parse_new_many1_fun1210(x_10298, _ctx), _ctx); /*2978*/
      return kk_std_core_types__list_unbox(_x_x1209, KK_OWNED, _ctx);
    }
    {
      return kk_std_core_types__new_Cons(kk_reuse_null, 0, x_10298, x_0_10301, _ctx);
    }
  }
}
 
// monadic lift

kk_std_core_types__list kk_std_text_parse__mlift_count_acc_10186(kk_std_core_types__list acc, kk_integer_t n, kk_function_t p, kk_box_t x, kk_context_t* _ctx) { /* forall<a,e> (acc : list<a>, n : int, p : parser<e,a>, x : a) -> <parse|e> list<a> */ 
  kk_integer_t _x_x1212 = kk_integer_add_small_const(n, -1, _ctx); /*int*/
  kk_std_core_types__list _x_x1213 = kk_std_core_types__new_Cons(kk_reuse_null, 0, x, acc, _ctx); /*list<82>*/
  return kk_std_text_parse_count_acc(_x_x1212, _x_x1213, p, _ctx);
}


// lift anonymous function
struct kk_std_text_parse_count_acc_fun1216__t {
  struct kk_function_s _base;
  kk_std_core_types__list acc_0;
  kk_integer_t n_0;
  kk_function_t p_0;
};
static kk_box_t kk_std_text_parse_count_acc_fun1216(kk_function_t _fself, kk_box_t _b_x658, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_count_acc_fun1216(kk_std_core_types__list acc_0, kk_integer_t n_0, kk_function_t p_0, kk_context_t* _ctx) {
  struct kk_std_text_parse_count_acc_fun1216__t* _self = kk_function_alloc_as(struct kk_std_text_parse_count_acc_fun1216__t, 4, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_text_parse_count_acc_fun1216, kk_context());
  _self->acc_0 = acc_0;
  _self->n_0 = n_0;
  _self->p_0 = p_0;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_text_parse_count_acc_fun1216(kk_function_t _fself, kk_box_t _b_x658, kk_context_t* _ctx) {
  struct kk_std_text_parse_count_acc_fun1216__t* _self = kk_function_as(struct kk_std_text_parse_count_acc_fun1216__t*, _fself, _ctx);
  kk_std_core_types__list acc_0 = _self->acc_0; /* list<2586> */
  kk_integer_t n_0 = _self->n_0; /* int */
  kk_function_t p_0 = _self->p_0; /* std/text/parse/parser<2587,2586> */
  kk_drop_match(_self, {kk_std_core_types__list_dup(acc_0, _ctx);kk_integer_dup(n_0, _ctx);kk_function_dup(p_0, _ctx);}, {}, _ctx)
  kk_box_t x_1_660 = _b_x658; /*2586*/;
  kk_std_core_types__list _x_x1217 = kk_std_text_parse__mlift_count_acc_10186(acc_0, n_0, p_0, x_1_660, _ctx); /*list<2586>*/
  return kk_std_core_types__list_box(_x_x1217, _ctx);
}

kk_std_core_types__list kk_std_text_parse_count_acc(kk_integer_t n_0, kk_std_core_types__list acc_0, kk_function_t p_0, kk_context_t* _ctx) { /* forall<a,e> (n : int, acc : list<a>, p : parser<e,a>) -> <parse|e> list<a> */ 
  kk__tailcall: ;
  bool _match_x739 = kk_integer_lte_borrow(n_0,(kk_integer_from_small(0)),kk_context()); /*bool*/;
  if (_match_x739) {
    kk_function_drop(p_0, _ctx);
    kk_integer_drop(n_0, _ctx);
    return kk_std_core_list__lift_reverse_append_4948(kk_std_core_types__new_Nil(_ctx), acc_0, _ctx);
  }
  {
    kk_box_t x_0_10306;
    kk_function_t _x_x1214 = kk_function_dup(p_0, _ctx); /*std/text/parse/parser<2587,2586>*/
    x_0_10306 = kk_function_call(kk_box_t, (kk_function_t, kk_context_t*), _x_x1214, (_x_x1214, _ctx), _ctx); /*2586*/
    if (kk_yielding(kk_context())) {
      kk_box_drop(x_0_10306, _ctx);
      kk_box_t _x_x1215 = kk_std_core_hnd_yield_extend(kk_std_text_parse_new_count_acc_fun1216(acc_0, n_0, p_0, _ctx), _ctx); /*2978*/
      return kk_std_core_types__list_unbox(_x_x1215, KK_OWNED, _ctx);
    }
    { // tailcall
      kk_integer_t _x_x1218 = kk_integer_add_small_const(n_0, -1, _ctx); /*int*/
      kk_std_core_types__list _x_x1219 = kk_std_core_types__new_Cons(kk_reuse_null, 0, x_0_10306, acc_0, _ctx); /*list<82>*/
      n_0 = _x_x1218;
      acc_0 = _x_x1219;
      goto kk__tailcall;
    }
  }
}
extern kk_box_t kk_std_text_parse_one_of_or_fun1221(kk_function_t _fself, kk_context_t* _ctx) {
  struct kk_std_text_parse_one_of_or_fun1221__t* _self = kk_function_as(struct kk_std_text_parse_one_of_or_fun1221__t*, _fself, _ctx);
  kk_string_t chars = _self->chars; /* string */
  kk_drop_match(_self, {kk_string_dup(chars, _ctx);}, {}, _ctx)
  kk_char_t _x_x1222 = kk_std_text_parse_one_of(chars, _ctx); /*char*/
  return kk_char_box(_x_x1222, _ctx);
}
extern kk_box_t kk_std_text_parse_one_of_or_fun1223(kk_function_t _fself, kk_context_t* _ctx) {
  struct kk_std_text_parse_one_of_or_fun1223__t* _self = kk_function_as(struct kk_std_text_parse_one_of_or_fun1223__t*, _fself, _ctx);
  kk_char_t kkloc_default = _self->kkloc_default; /* char */
  kk_drop_match(_self, {kk_skip_dup(kkloc_default, _ctx);}, {}, _ctx)
  return kk_char_box(kkloc_default, _ctx);
}


// lift anonymous function
struct kk_std_text_parse_sign_fun1225__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_text_parse_sign_fun1225(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_sign_fun1225(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_text_parse_sign_fun1225, _ctx)
  return kk_function_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_std_text_parse_sign_fun1228__t {
  struct kk_function_s _base;
};
static kk_std_core_types__maybe kk_std_text_parse_sign_fun1228(kk_function_t _fself, kk_std_core_sslice__sslice slice, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_sign_fun1228(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_text_parse_sign_fun1228, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_std_core_types__maybe kk_std_text_parse_sign_fun1228(kk_function_t _fself, kk_std_core_sslice__sslice slice, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core_types__maybe _match_x738 = kk_std_core_sslice_next(slice, _ctx); /*maybe<(char, sslice/sslice)>*/;
  if (kk_std_core_types__is_Just(_match_x738, _ctx)) {
    kk_box_t _box_x665 = _match_x738._cons.Just.value;
    kk_std_core_types__tuple2 _pat_0_0 = kk_std_core_types__tuple2_unbox(_box_x665, KK_BORROWED, _ctx);
    if (kk_std_core_types__is_Tuple2(_pat_0_0, _ctx)) {
      kk_box_t _box_x666 = _pat_0_0.fst;
      kk_box_t _box_x667 = _pat_0_0.snd;
      kk_char_t c = kk_char_unbox(_box_x666, KK_BORROWED, _ctx);
      kk_string_t _x_x1229;
      kk_define_string_literal(, _s_x1230, 2, "+-", _ctx)
      _x_x1229 = kk_string_dup(_s_x1230, _ctx); /*string*/
      kk_string_t _x_x1231 = kk_std_core_string_char_fs_string(c, _ctx); /*string*/
      if (kk_string_contains(_x_x1229,_x_x1231,kk_context())) {
        kk_std_core_sslice__sslice rest = kk_std_core_sslice__sslice_unbox(_box_x667, KK_BORROWED, _ctx);
        kk_std_core_sslice__sslice_dup(rest, _ctx);
        kk_std_core_types__maybe_drop(_match_x738, _ctx);
        kk_box_t _x_x1232;
        kk_std_core_types__tuple2 _x_x1233 = kk_std_core_types__new_Tuple2(kk_char_box(c, _ctx), kk_std_core_sslice__sslice_box(rest, _ctx), _ctx); /*(129, 130)*/
        _x_x1232 = kk_std_core_types__tuple2_box(_x_x1233, _ctx); /*91*/
        return kk_std_core_types__new_Just(_x_x1232, _ctx);
      }
    }
  }
  {
    kk_std_core_types__maybe_drop(_match_x738, _ctx);
    return kk_std_core_types__new_Nothing(_ctx);
  }
}
static kk_box_t kk_std_text_parse_sign_fun1225(kk_function_t _fself, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_string_t _x_x1226;
  kk_define_string_literal(, _s_x1227, 2, "+-", _ctx)
  _x_x1226 = kk_string_dup(_s_x1227, _ctx); /*string*/
  return kk_std_text_parse_satisfy_fail(_x_x1226, kk_std_text_parse_new_sign_fun1228(_ctx), _ctx);
}


// lift anonymous function
struct kk_std_text_parse_sign_fun1234__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_text_parse_sign_fun1234(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_sign_fun1234(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_text_parse_sign_fun1234, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_text_parse_sign_fun1234(kk_function_t _fself, kk_context_t* _ctx) {
  kk_unused(_fself);
  return kk_char_box('+', _ctx);
}


// lift anonymous function
struct kk_std_text_parse_sign_fun1236__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_text_parse_sign_fun1236(kk_function_t _fself, kk_box_t _b_x683, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_sign_fun1236(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_text_parse_sign_fun1236, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_text_parse_sign_fun1236(kk_function_t _fself, kk_box_t _b_x683, kk_context_t* _ctx) {
  kk_unused(_fself);
  bool _x_x1237;
  kk_char_t _x_x1238 = kk_char_unbox(_b_x683, KK_OWNED, _ctx); /*char*/
  _x_x1237 = kk_std_text_parse__mlift_sign_10187(_x_x1238, _ctx); /*bool*/
  return kk_bool_box(_x_x1237);
}

bool kk_std_text_parse_sign(kk_context_t* _ctx) { /* () -> parse bool */ 
  kk_char_t x_10309;
  kk_box_t _x_x1224 = kk_std_text_parse__lp__bar__bar__rp_(kk_std_text_parse_new_sign_fun1225(_ctx), kk_std_text_parse_new_sign_fun1234(_ctx), _ctx); /*1635*/
  x_10309 = kk_char_unbox(_x_x1224, KK_OWNED, _ctx); /*char*/
  if (kk_yielding(kk_context())) {
    kk_box_t _x_x1235 = kk_std_core_hnd_yield_extend(kk_std_text_parse_new_sign_fun1236(_ctx), _ctx); /*2978*/
    return kk_bool_unbox(_x_x1235);
  }
  {
    return (x_10309 == ('-'));
  }
}
 
// monadic lift


// lift anonymous function
struct kk_std_text_parse__mlift_pint_10189_fun1240__t {
  struct kk_function_s _base;
  bool neg;
};
static kk_box_t kk_std_text_parse__mlift_pint_10189_fun1240(kk_function_t _fself, kk_box_t _b_x686, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse__new_mlift_pint_10189_fun1240(bool neg, kk_context_t* _ctx) {
  struct kk_std_text_parse__mlift_pint_10189_fun1240__t* _self = kk_function_alloc_as(struct kk_std_text_parse__mlift_pint_10189_fun1240__t, 1, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_text_parse__mlift_pint_10189_fun1240, kk_context());
  _self->neg = neg;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_text_parse__mlift_pint_10189_fun1240(kk_function_t _fself, kk_box_t _b_x686, kk_context_t* _ctx) {
  struct kk_std_text_parse__mlift_pint_10189_fun1240__t* _self = kk_function_as(struct kk_std_text_parse__mlift_pint_10189_fun1240__t*, _fself, _ctx);
  bool neg = _self->neg; /* bool */
  kk_drop_match(_self, {kk_skip_dup(neg, _ctx);}, {}, _ctx)
  kk_integer_t _x_x1241;
  kk_integer_t i_688 = kk_integer_unbox(_b_x686, _ctx); /*int*/;
  if (neg) {
    _x_x1241 = kk_integer_neg(i_688,kk_context()); /*int*/
  }
  else {
    _x_x1241 = i_688; /*int*/
  }
  return kk_integer_box(_x_x1241, _ctx);
}

kk_integer_t kk_std_text_parse__mlift_pint_10189(kk_char_t c_0, kk_context_t* _ctx) { /* (c@0 : char) -> parse int */ 
  bool neg = (c_0 == ('-')); /*bool*/;
  kk_integer_t x_10312 = kk_std_text_parse_pnat(_ctx); /*int*/;
  if (kk_yielding(kk_context())) {
    kk_integer_drop(x_10312, _ctx);
    kk_box_t _x_x1239 = kk_std_core_hnd_yield_extend(kk_std_text_parse__new_mlift_pint_10189_fun1240(neg, _ctx), _ctx); /*2978*/
    return kk_integer_unbox(_x_x1239, _ctx);
  }
  {
    kk_integer_t i_689 = x_10312; /*int*/;
    if (neg) {
      return kk_integer_neg(i_689,kk_context());
    }
    {
      return i_689;
    }
  }
}


// lift anonymous function
struct kk_std_text_parse_pint_fun1243__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_text_parse_pint_fun1243(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_pint_fun1243(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_text_parse_pint_fun1243, _ctx)
  return kk_function_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_std_text_parse_pint_fun1246__t {
  struct kk_function_s _base;
};
static kk_std_core_types__maybe kk_std_text_parse_pint_fun1246(kk_function_t _fself, kk_std_core_sslice__sslice slice, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_pint_fun1246(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_text_parse_pint_fun1246, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_std_core_types__maybe kk_std_text_parse_pint_fun1246(kk_function_t _fself, kk_std_core_sslice__sslice slice, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core_types__maybe _match_x735 = kk_std_core_sslice_next(slice, _ctx); /*maybe<(char, sslice/sslice)>*/;
  if (kk_std_core_types__is_Just(_match_x735, _ctx)) {
    kk_box_t _box_x690 = _match_x735._cons.Just.value;
    kk_std_core_types__tuple2 _pat_0_0 = kk_std_core_types__tuple2_unbox(_box_x690, KK_BORROWED, _ctx);
    if (kk_std_core_types__is_Tuple2(_pat_0_0, _ctx)) {
      kk_box_t _box_x691 = _pat_0_0.fst;
      kk_box_t _box_x692 = _pat_0_0.snd;
      kk_char_t c = kk_char_unbox(_box_x691, KK_BORROWED, _ctx);
      kk_string_t _x_x1247;
      kk_define_string_literal(, _s_x1248, 2, "+-", _ctx)
      _x_x1247 = kk_string_dup(_s_x1248, _ctx); /*string*/
      kk_string_t _x_x1249 = kk_std_core_string_char_fs_string(c, _ctx); /*string*/
      if (kk_string_contains(_x_x1247,_x_x1249,kk_context())) {
        kk_std_core_sslice__sslice rest = kk_std_core_sslice__sslice_unbox(_box_x692, KK_BORROWED, _ctx);
        kk_std_core_sslice__sslice_dup(rest, _ctx);
        kk_std_core_types__maybe_drop(_match_x735, _ctx);
        kk_box_t _x_x1250;
        kk_std_core_types__tuple2 _x_x1251 = kk_std_core_types__new_Tuple2(kk_char_box(c, _ctx), kk_std_core_sslice__sslice_box(rest, _ctx), _ctx); /*(129, 130)*/
        _x_x1250 = kk_std_core_types__tuple2_box(_x_x1251, _ctx); /*91*/
        return kk_std_core_types__new_Just(_x_x1250, _ctx);
      }
    }
  }
  {
    kk_std_core_types__maybe_drop(_match_x735, _ctx);
    return kk_std_core_types__new_Nothing(_ctx);
  }
}
static kk_box_t kk_std_text_parse_pint_fun1243(kk_function_t _fself, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_string_t _x_x1244;
  kk_define_string_literal(, _s_x1245, 2, "+-", _ctx)
  _x_x1244 = kk_string_dup(_s_x1245, _ctx); /*string*/
  return kk_std_text_parse_satisfy_fail(_x_x1244, kk_std_text_parse_new_pint_fun1246(_ctx), _ctx);
}


// lift anonymous function
struct kk_std_text_parse_pint_fun1252__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_text_parse_pint_fun1252(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_pint_fun1252(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_text_parse_pint_fun1252, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_text_parse_pint_fun1252(kk_function_t _fself, kk_context_t* _ctx) {
  kk_unused(_fself);
  return kk_char_box('+', _ctx);
}


// lift anonymous function
struct kk_std_text_parse_pint_fun1254__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_text_parse_pint_fun1254(kk_function_t _fself, kk_box_t _b_x708, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_pint_fun1254(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_text_parse_pint_fun1254, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_text_parse_pint_fun1254(kk_function_t _fself, kk_box_t _b_x708, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_integer_t _x_x1255;
  kk_char_t _x_x1256 = kk_char_unbox(_b_x708, KK_OWNED, _ctx); /*char*/
  _x_x1255 = kk_std_text_parse__mlift_pint_10189(_x_x1256, _ctx); /*int*/
  return kk_integer_box(_x_x1255, _ctx);
}


// lift anonymous function
struct kk_std_text_parse_pint_fun1258__t {
  struct kk_function_s _base;
  bool neg;
};
static kk_box_t kk_std_text_parse_pint_fun1258(kk_function_t _fself, kk_box_t _b_x710, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_pint_fun1258(bool neg, kk_context_t* _ctx) {
  struct kk_std_text_parse_pint_fun1258__t* _self = kk_function_alloc_as(struct kk_std_text_parse_pint_fun1258__t, 1, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_text_parse_pint_fun1258, kk_context());
  _self->neg = neg;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_text_parse_pint_fun1258(kk_function_t _fself, kk_box_t _b_x710, kk_context_t* _ctx) {
  struct kk_std_text_parse_pint_fun1258__t* _self = kk_function_as(struct kk_std_text_parse_pint_fun1258__t*, _fself, _ctx);
  bool neg = _self->neg; /* bool */
  kk_drop_match(_self, {kk_skip_dup(neg, _ctx);}, {}, _ctx)
  kk_integer_t i_713 = kk_integer_unbox(_b_x710, _ctx); /*int*/;
  kk_integer_t _x_x1259;
  if (neg) {
    _x_x1259 = kk_integer_neg(i_713,kk_context()); /*int*/
  }
  else {
    _x_x1259 = i_713; /*int*/
  }
  return kk_integer_box(_x_x1259, _ctx);
}

kk_integer_t kk_std_text_parse_pint(kk_context_t* _ctx) { /* () -> parse int */ 
  kk_char_t x_10316;
  kk_box_t _x_x1242 = kk_std_text_parse__lp__bar__bar__rp_(kk_std_text_parse_new_pint_fun1243(_ctx), kk_std_text_parse_new_pint_fun1252(_ctx), _ctx); /*1635*/
  x_10316 = kk_char_unbox(_x_x1242, KK_OWNED, _ctx); /*char*/
  if (kk_yielding(kk_context())) {
    kk_box_t _x_x1253 = kk_std_core_hnd_yield_extend(kk_std_text_parse_new_pint_fun1254(_ctx), _ctx); /*2978*/
    return kk_integer_unbox(_x_x1253, _ctx);
  }
  {
    bool neg = (x_10316 == ('-')); /*bool*/;
    kk_integer_t x_0_10319 = kk_std_text_parse_pnat(_ctx); /*int*/;
    if (kk_yielding(kk_context())) {
      kk_integer_drop(x_0_10319, _ctx);
      kk_box_t _x_x1257 = kk_std_core_hnd_yield_extend(kk_std_text_parse_new_pint_fun1258(neg, _ctx), _ctx); /*2978*/
      return kk_integer_unbox(_x_x1257, _ctx);
    }
    if (neg) {
      return kk_integer_neg(x_0_10319,kk_context());
    }
    {
      return x_0_10319;
    }
  }
}


// lift anonymous function
struct kk_std_text_parse_hex_digits_fun1263__t {
  struct kk_function_s _base;
};
static kk_std_core_types__maybe kk_std_text_parse_hex_digits_fun1263(kk_function_t _fself, kk_std_core_sslice__sslice slice, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_hex_digits_fun1263(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_text_parse_hex_digits_fun1263, _ctx)
  return kk_function_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_std_text_parse_hex_digits_fun1265__t {
  struct kk_function_s _base;
};
static bool kk_std_text_parse_hex_digits_fun1265(kk_function_t _fself, kk_char_t _x1_x1264, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_hex_digits_fun1265(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_text_parse_hex_digits_fun1265, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static bool kk_std_text_parse_hex_digits_fun1265(kk_function_t _fself, kk_char_t _x1_x1264, kk_context_t* _ctx) {
  kk_unused(_fself);
  return kk_std_core_char_is_hex_digit(_x1_x1264, _ctx);
}
static kk_std_core_types__maybe kk_std_text_parse_hex_digits_fun1263(kk_function_t _fself, kk_std_core_sslice__sslice slice, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_core_types__tuple2 _match_x732 = kk_std_text_parse_next_while0(slice, kk_std_text_parse_new_hex_digits_fun1265(_ctx), kk_std_core_types__new_Nil(_ctx), _ctx); /*(list<char>, sslice/sslice)*/;
  {
    kk_box_t _box_x714 = _match_x732.fst;
    kk_box_t _box_x715 = _match_x732.snd;
    kk_std_core_types__list _pat_0_0 = kk_std_core_types__list_unbox(_box_x714, KK_BORROWED, _ctx);
    kk_std_core_sslice__sslice _pat_1_0 = kk_std_core_sslice__sslice_unbox(_box_x715, KK_BORROWED, _ctx);
    if (kk_std_core_types__is_Nil(_pat_0_0, _ctx)) {
      kk_std_core_types__tuple2_drop(_match_x732, _ctx);
      return kk_std_core_types__new_Nothing(_ctx);
    }
  }
  {
    kk_box_t _box_x716 = _match_x732.fst;
    kk_box_t _box_x717 = _match_x732.snd;
    kk_std_core_sslice__sslice rest = kk_std_core_sslice__sslice_unbox(_box_x717, KK_BORROWED, _ctx);
    kk_std_core_types__list xs = kk_std_core_types__list_unbox(_box_x716, KK_BORROWED, _ctx);
    kk_std_core_sslice__sslice_dup(rest, _ctx);
    kk_std_core_types__list_dup(xs, _ctx);
    kk_std_core_types__tuple2_drop(_match_x732, _ctx);
    kk_box_t _x_x1266;
    kk_std_core_types__tuple2 _x_x1267 = kk_std_core_types__new_Tuple2(kk_std_core_types__list_box(xs, _ctx), kk_std_core_sslice__sslice_box(rest, _ctx), _ctx); /*(129, 130)*/
    _x_x1266 = kk_std_core_types__tuple2_box(_x_x1267, _ctx); /*91*/
    return kk_std_core_types__new_Just(_x_x1266, _ctx);
  }
}


// lift anonymous function
struct kk_std_text_parse_hex_digits_fun1269__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_text_parse_hex_digits_fun1269(kk_function_t _fself, kk_box_t _b_x729, kk_context_t* _ctx);
static kk_function_t kk_std_text_parse_new_hex_digits_fun1269(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_text_parse_hex_digits_fun1269, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_text_parse_hex_digits_fun1269(kk_function_t _fself, kk_box_t _b_x729, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_string_t _x_x1270;
  kk_std_core_types__list _x_x1271 = kk_std_core_types__list_unbox(_b_x729, KK_OWNED, _ctx); /*list<char>*/
  _x_x1270 = kk_std_core_string_listchar_fs_string(_x_x1271, _ctx); /*string*/
  return kk_string_box(_x_x1270);
}

kk_string_t kk_std_text_parse_hex_digits(kk_context_t* _ctx) { /* () -> parse string */ 
  kk_std_core_types__list x_10324;
  kk_box_t _x_x1260;
  kk_string_t _x_x1261;
  kk_define_string_literal(, _s_x1262, 5, "digit", _ctx)
  _x_x1261 = kk_string_dup(_s_x1262, _ctx); /*string*/
  _x_x1260 = kk_std_text_parse_satisfy_fail(_x_x1261, kk_std_text_parse_new_hex_digits_fun1263(_ctx), _ctx); /*1746*/
  x_10324 = kk_std_core_types__list_unbox(_x_x1260, KK_OWNED, _ctx); /*list<char>*/
  if (kk_yielding(kk_context())) {
    kk_std_core_types__list_drop(x_10324, _ctx);
    kk_box_t _x_x1268 = kk_std_core_hnd_yield_extend(kk_std_text_parse_new_hex_digits_fun1269(_ctx), _ctx); /*2978*/
    return kk_string_unbox(_x_x1268);
  }
  {
    return kk_std_core_string_listchar_fs_string(x_10324, _ctx);
  }
}

// initialization
void kk_std_text_parse__init(kk_context_t* _ctx){
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
  kk_std_core_undiv__init(_ctx);
  #if defined(KK_CUSTOM_INIT)
    KK_CUSTOM_INIT (_ctx);
  #endif
  {
    kk_string_t _x_x831;
    kk_define_string_literal(, _s_x832, 11, "parse@parse", _ctx)
    _x_x831 = kk_string_dup(_s_x832, _ctx); /*string*/
    kk_std_text_parse__tag_parse = kk_std_core_hnd__new_Htag(_x_x831, _ctx); /*hnd/htag<std/text/parse/parse>*/
  }
}

// termination
void kk_std_text_parse__done(kk_context_t* _ctx){
  static bool _kk_done = false;
  if (_kk_done) return;
  _kk_done = true;
  #if defined(KK_CUSTOM_DONE)
    KK_CUSTOM_DONE (_ctx);
  #endif
  kk_std_core_hnd__htag_drop(kk_std_text_parse__tag_parse, _ctx);
  kk_std_core_undiv__done(_ctx);
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
