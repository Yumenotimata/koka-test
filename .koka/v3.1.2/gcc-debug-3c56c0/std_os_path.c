// Koka generated module: std/os/path, koka version: 3.1.2, platform: 64-bit
#include "std_os_path.h"

kk_std_os_path__path kk_std_os_path_path_fs__copy(kk_std_os_path__path _this, kk_std_core_types__optional root, kk_std_core_types__optional parts, kk_context_t* _ctx) { /* (path, root : ? string, parts : ? (list<string>)) -> path */ 
  kk_string_t _x_x505;
  if (kk_std_core_types__is_Optional(root, _ctx)) {
    kk_box_t _box_x0 = root._cons._Optional.value;
    kk_string_t _uniq_root_108 = kk_string_unbox(_box_x0);
    kk_string_dup(_uniq_root_108, _ctx);
    kk_std_core_types__optional_drop(root, _ctx);
    _x_x505 = _uniq_root_108; /*string*/
  }
  else {
    kk_std_core_types__optional_drop(root, _ctx);
    {
      kk_string_t _x = _this.root;
      kk_string_dup(_x, _ctx);
      _x_x505 = _x; /*string*/
    }
  }
  kk_std_core_types__list _x_x506;
  if (kk_std_core_types__is_Optional(parts, _ctx)) {
    kk_box_t _box_x1 = parts._cons._Optional.value;
    kk_std_core_types__list _uniq_parts_115 = kk_std_core_types__list_unbox(_box_x1, KK_BORROWED, _ctx);
    kk_std_core_types__list_dup(_uniq_parts_115, _ctx);
    kk_std_core_types__optional_drop(parts, _ctx);
    kk_std_os_path__path_drop(_this, _ctx);
    _x_x506 = _uniq_parts_115; /*list<string>*/
  }
  else {
    kk_std_core_types__optional_drop(parts, _ctx);
    {
      kk_std_core_types__list _x_0 = _this.parts;
      kk_std_core_types__list_dup(_x_0, _ctx);
      kk_std_os_path__path_drop(_this, _ctx);
      _x_x506 = _x_0; /*list<string>*/
    }
  }
  return kk_std_os_path__new_Path(_x_x505, _x_x506, _ctx);
}
 
// Is a path empty?

bool kk_std_os_path_is_empty(kk_std_os_path__path p, kk_context_t* _ctx) { /* (p : path) -> bool */ 
  bool _match_x468;
  kk_string_t _x_x507;
  {
    kk_string_t _x = p.root;
    kk_string_dup(_x, _ctx);
    _x_x507 = _x; /*string*/
  }
  kk_string_t _x_x508 = kk_string_empty(); /*string*/
  _match_x468 = kk_string_is_eq(_x_x507,_x_x508,kk_context()); /*bool*/
  if (_match_x468) {
    kk_std_core_types__list _x_0 = p.parts;
    kk_std_core_types__list_dup(_x_0, _ctx);
    kk_std_os_path__path_drop(p, _ctx);
    if (kk_std_core_types__is_Nil(_x_0, _ctx)) {
      return true;
    }
    {
      kk_std_core_types__list_drop(_x_0, _ctx);
      return false;
    }
  }
  {
    kk_std_os_path__path_drop(p, _ctx);
    return false;
  }
}
 
// Convert a `:path` to a normalized `:string` path.
// If this results in an empty string, the current directory path `"."` is returned.
// `"c:/foo/test.txt".path.string -> "c:/foo/test.txt"`
// `"c:\\foo\\test.txt".path.string -> "c:/foo/test.txt"`
// `"/foo//./bar/../test.txt".path.string -> "/foo/test.txt"`

kk_string_t kk_std_os_path_string(kk_std_os_path__path p, kk_context_t* _ctx) { /* (p : path) -> string */ 
  kk_std_core_types__list xs_10007;
  kk_std_core_types__list _x_x510;
  {
    kk_std_core_types__list _x_0 = p.parts;
    kk_std_core_types__list_dup(_x_0, _ctx);
    _x_x510 = _x_0; /*list<string>*/
  }
  xs_10007 = kk_std_core_list__lift_reverse_append_4948(kk_std_core_types__new_Nil(_ctx), _x_x510, _ctx); /*list<string>*/
  kk_string_t s;
  kk_string_t _x_x511;
  {
    kk_string_t _x = p.root;
    kk_string_dup(_x, _ctx);
    kk_std_os_path__path_drop(p, _ctx);
    _x_x511 = _x; /*string*/
  }
  kk_string_t _x_x512;
  kk_string_t _x_x513;
  kk_define_string_literal(, _s_x514, 1, "/", _ctx)
  _x_x513 = kk_string_dup(_s_x514, _ctx); /*string*/
  _x_x512 = kk_std_core_list_joinsep(xs_10007, _x_x513, _ctx); /*string*/
  s = kk_std_core_types__lp__plus__plus__rp_(_x_x511, _x_x512, _ctx); /*string*/
  bool _match_x467;
  kk_string_t _x_x515 = kk_string_dup(s, _ctx); /*string*/
  kk_string_t _x_x516 = kk_string_empty(); /*string*/
  _match_x467 = kk_string_is_eq(_x_x515,_x_x516,kk_context()); /*bool*/
  if (_match_x467) {
    kk_string_drop(s, _ctx);
    kk_define_string_literal(, _s_x518, 1, ".", _ctx)
    return kk_string_dup(_s_x518, _ctx);
  }
  {
    return s;
  }
}
 
// Return the first path if it is not empty, otherwise return the second one.

kk_std_os_path__path kk_std_os_path__lp__bar__bar__rp_(kk_std_os_path__path p1, kk_std_os_path__path p2, kk_context_t* _ctx) { /* (p1 : path, p2 : path) -> path */ 
  bool _match_x466;
  kk_string_t _x_x519;
  {
    kk_string_t _x = p1.root;
    kk_string_dup(_x, _ctx);
    _x_x519 = _x; /*string*/
  }
  kk_string_t _x_x520 = kk_string_empty(); /*string*/
  _match_x466 = kk_string_is_eq(_x_x519,_x_x520,kk_context()); /*bool*/
  if (_match_x466) {
    kk_std_core_types__list _x_0 = p1.parts;
    kk_std_core_types__list_dup(_x_0, _ctx);
    if (kk_std_core_types__is_Nil(_x_0, _ctx)) {
      kk_std_os_path__path_drop(p1, _ctx);
      return p2;
    }
    {
      kk_std_os_path__path_drop(p2, _ctx);
      kk_std_core_types__list_drop(_x_0, _ctx);
      return p1;
    }
  }
  {
    kk_std_os_path__path_drop(p2, _ctx);
    return p1;
  }
}

kk_std_core_types__list kk_std_os_path_push_part(kk_string_t dir, kk_std_core_types__list dirs, kk_context_t* _ctx) { /* (dir : string, dirs : list<string>) -> list<string> */ 
  bool _match_x463;
  kk_string_t _x_x522 = kk_string_dup(dir, _ctx); /*string*/
  kk_string_t _x_x523;
  kk_define_string_literal(, _s_x524, 1, ".", _ctx)
  _x_x523 = kk_string_dup(_s_x524, _ctx); /*string*/
  _match_x463 = kk_string_is_eq(_x_x522,_x_x523,kk_context()); /*bool*/
  if (_match_x463) {
    kk_string_drop(dir, _ctx);
    return dirs;
  }
  {
    bool _match_x464;
    kk_string_t _x_x525 = kk_string_dup(dir, _ctx); /*string*/
    kk_string_t _x_x526 = kk_string_empty(); /*string*/
    _match_x464 = kk_string_is_eq(_x_x525,_x_x526,kk_context()); /*bool*/
    if (_match_x464) {
      kk_string_drop(dir, _ctx);
      return dirs;
    }
    {
      bool _match_x465;
      kk_string_t _x_x528 = kk_string_dup(dir, _ctx); /*string*/
      kk_string_t _x_x529;
      kk_define_string_literal(, _s_x530, 2, "..", _ctx)
      _x_x529 = kk_string_dup(_s_x530, _ctx); /*string*/
      _match_x465 = kk_string_is_eq(_x_x528,_x_x529,kk_context()); /*bool*/
      if (_match_x465) {
        if (kk_std_core_types__is_Cons(dirs, _ctx)) {
          struct kk_std_core_types_Cons* _con_x531 = kk_std_core_types__as_Cons(dirs, _ctx);
          kk_box_t _box_x2 = _con_x531->head;
          kk_string_drop(dir, _ctx);
          if (kk_std_core_types__is_Cons(dirs, _ctx)) {
            struct kk_std_core_types_Cons* _con_x532 = kk_std_core_types__as_Cons(dirs, _ctx);
            kk_box_t _box_x3 = _con_x532->head;
            kk_std_core_types__list xx = _con_x532->tail;
            if kk_likely(kk_datatype_ptr_is_unique(dirs, _ctx)) {
              kk_box_drop(_box_x3, _ctx);
              kk_datatype_ptr_free(dirs, _ctx);
            }
            else {
              kk_std_core_types__list_dup(xx, _ctx);
              kk_datatype_ptr_decref(dirs, _ctx);
            }
            return xx;
          }
          {
            return kk_std_core_types__new_Nil(_ctx);
          }
        }
        {
          return kk_std_core_types__new_Cons(kk_reuse_null, 0, kk_string_box(dir), dirs, _ctx);
        }
      }
      {
        return kk_std_core_types__new_Cons(kk_reuse_null, 0, kk_string_box(dir), dirs, _ctx);
      }
    }
  }
}

kk_std_core_types__list kk_std_os_path_push_parts(kk_std_core_types__list parts, kk_std_core_types__list dirs, kk_context_t* _ctx) { /* (parts : list<string>, dirs : list<string>) -> list<string> */ 
  kk__tailcall: ;
  if (kk_std_core_types__is_Cons(parts, _ctx)) {
    struct kk_std_core_types_Cons* _con_x533 = kk_std_core_types__as_Cons(parts, _ctx);
    kk_box_t _box_x12 = _con_x533->head;
    kk_std_core_types__list rest = _con_x533->tail;
    kk_string_t part = kk_string_unbox(_box_x12);
    if kk_likely(kk_datatype_ptr_is_unique(parts, _ctx)) {
      kk_datatype_ptr_free(parts, _ctx);
    }
    else {
      kk_string_dup(part, _ctx);
      kk_std_core_types__list_dup(rest, _ctx);
      kk_datatype_ptr_decref(parts, _ctx);
    }
    { // tailcall
      kk_std_core_types__list _x_x534 = kk_std_os_path_push_part(part, dirs, _ctx); /*list<string>*/
      parts = rest;
      dirs = _x_x534;
      goto kk__tailcall;
    }
  }
  {
    return dirs;
  }
}
 
// monadic lift


// lift anonymous function
struct kk_std_os_path__mlift_proot_10191_fun536__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_os_path__mlift_proot_10191_fun536(kk_function_t _fself, kk_box_t _b_x14, kk_context_t* _ctx);
static kk_function_t kk_std_os_path__new_mlift_proot_10191_fun536(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_path__mlift_proot_10191_fun536, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_os_path__mlift_proot_10191_fun536(kk_function_t _fself, kk_box_t _b_x14, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_unit_t _x_x537 = kk_Unit;
  kk_char_t _x_x538 = kk_char_unbox(_b_x14, KK_OWNED, _ctx); /*char*/
  kk_std_os_path__mlift_proot_10190(_x_x538, _ctx);
  return kk_unit_box(_x_x537);
}

kk_unit_t kk_std_os_path__mlift_proot_10191(kk_char_t wild__, kk_context_t* _ctx) { /* (wild_ : char) -> std/text/parse/parse () */ 
  kk_char_t x_10203 = kk_std_text_parse_char(':', _ctx); /*char*/;
  if (kk_yielding(kk_context())) {
    kk_box_t _x_x535 = kk_std_core_hnd_yield_extend(kk_std_os_path__new_mlift_proot_10191_fun536(_ctx), _ctx); /*2978*/
    kk_unit_unbox(_x_x535); return kk_Unit;
  }
  {
    kk_Unit; return kk_Unit;
  }
}
 
// monadic lift


// lift anonymous function
struct kk_std_os_path__mlift_proot_10193_fun539__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_os_path__mlift_proot_10193_fun539(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_std_os_path__new_mlift_proot_10193_fun539(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_path__mlift_proot_10193_fun539, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_os_path__mlift_proot_10193_fun539(kk_function_t _fself, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_char_t _x_x540;
  kk_string_t _x_x541;
  kk_define_string_literal(, _s_x542, 1, "/", _ctx)
  _x_x541 = kk_string_dup(_s_x542, _ctx); /*string*/
  _x_x540 = kk_std_text_parse_none_of(_x_x541, _ctx); /*char*/
  return kk_char_box(_x_x540, _ctx);
}


// lift anonymous function
struct kk_std_os_path__mlift_proot_10193_fun544__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_os_path__mlift_proot_10193_fun544(kk_function_t _fself, kk_box_t _b_x21, kk_context_t* _ctx);
static kk_function_t kk_std_os_path__new_mlift_proot_10193_fun544(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_path__mlift_proot_10193_fun544, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_os_path__mlift_proot_10193_fun544(kk_function_t _fself, kk_box_t _b_x21, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_unit_t _x_x545 = kk_Unit;
  kk_std_core_types__list _x_x546 = kk_std_core_types__list_unbox(_b_x21, KK_OWNED, _ctx); /*list<char>*/
  kk_std_os_path__mlift_proot_10192(_x_x546, _ctx);
  return kk_unit_box(_x_x545);
}

kk_unit_t kk_std_os_path__mlift_proot_10193(kk_char_t _y_x10141, kk_context_t* _ctx) { /* (char) -> std/text/parse/parse () */ 
  kk_std_core_types__list x_10205 = kk_std_text_parse_many_acc(kk_std_os_path__new_mlift_proot_10193_fun539(_ctx), kk_std_core_types__new_Nil(_ctx), _ctx); /*list<char>*/;
  kk_std_core_types__list_drop(x_10205, _ctx);
  if (kk_yielding(kk_context())) {
    kk_box_t _x_x543 = kk_std_core_hnd_yield_extend(kk_std_os_path__new_mlift_proot_10193_fun544(_ctx), _ctx); /*2978*/
    kk_unit_unbox(_x_x543); return kk_Unit;
  }
  {
    kk_Unit; return kk_Unit;
  }
}
 
// monadic lift


// lift anonymous function
struct kk_std_os_path__mlift_proot_10194_fun550__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_os_path__mlift_proot_10194_fun550(kk_function_t _fself, kk_box_t _b_x24, kk_context_t* _ctx);
static kk_function_t kk_std_os_path__new_mlift_proot_10194_fun550(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_path__mlift_proot_10194_fun550, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_os_path__mlift_proot_10194_fun550(kk_function_t _fself, kk_box_t _b_x24, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_unit_t _x_x551 = kk_Unit;
  kk_char_t _x_x552 = kk_char_unbox(_b_x24, KK_OWNED, _ctx); /*char*/
  kk_std_os_path__mlift_proot_10193(_x_x552, _ctx);
  return kk_unit_box(_x_x551);
}

kk_unit_t kk_std_os_path__mlift_proot_10194(kk_char_t wild___1, kk_context_t* _ctx) { /* (wild_@1 : char) -> std/text/parse/parse () */ 
  kk_char_t x_10207;
  kk_string_t _x_x547;
  kk_define_string_literal(, _s_x548, 1, "/", _ctx)
  _x_x547 = kk_string_dup(_s_x548, _ctx); /*string*/
  x_10207 = kk_std_text_parse_none_of(_x_x547, _ctx); /*char*/
  if (kk_yielding(kk_context())) {
    kk_box_t _x_x549 = kk_std_core_hnd_yield_extend(kk_std_os_path__new_mlift_proot_10194_fun550(_ctx), _ctx); /*2978*/
    kk_unit_unbox(_x_x549); return kk_Unit;
  }
  {
    kk_std_os_path__mlift_proot_10193(x_10207, _ctx); return kk_Unit;
  }
}
 
// monadic lift


// lift anonymous function
struct kk_std_os_path__mlift_proot_10195_fun554__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_os_path__mlift_proot_10195_fun554(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_std_os_path__new_mlift_proot_10195_fun554(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_path__mlift_proot_10195_fun554, _ctx)
  return kk_function_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_std_os_path__mlift_proot_10195_fun557__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_os_path__mlift_proot_10195_fun557(kk_function_t _fself, kk_box_t _b_x27, kk_context_t* _ctx);
static kk_function_t kk_std_os_path__new_mlift_proot_10195_fun557(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_path__mlift_proot_10195_fun557, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_os_path__mlift_proot_10195_fun557(kk_function_t _fself, kk_box_t _b_x27, kk_context_t* _ctx) {
  kk_unused(_fself);
  bool _x_x558;
  kk_char_t _x_x559 = kk_char_unbox(_b_x27, KK_OWNED, _ctx); /*char*/
  _x_x558 = kk_std_os_path__mlift_proot_10188(_x_x559, _ctx); /*bool*/
  return kk_bool_box(_x_x558);
}
static kk_box_t kk_std_os_path__mlift_proot_10195_fun554(kk_function_t _fself, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_char_t x_10209 = kk_std_text_parse_char('/', _ctx); /*char*/;
  bool _x_x555;
  if (kk_yielding(kk_context())) {
    kk_box_t _x_x556 = kk_std_core_hnd_yield_extend(kk_std_os_path__new_mlift_proot_10195_fun557(_ctx), _ctx); /*2978*/
    _x_x555 = kk_bool_unbox(_x_x556); /*bool*/
  }
  else {
    _x_x555 = false; /*bool*/
  }
  return kk_bool_box(_x_x555);
}


// lift anonymous function
struct kk_std_os_path__mlift_proot_10195_fun560__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_os_path__mlift_proot_10195_fun560(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_std_os_path__new_mlift_proot_10195_fun560(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_path__mlift_proot_10195_fun560, _ctx)
  return kk_function_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_std_os_path__mlift_proot_10195_fun563__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_os_path__mlift_proot_10195_fun563(kk_function_t _fself, kk_box_t _b_x29, kk_context_t* _ctx);
static kk_function_t kk_std_os_path__new_mlift_proot_10195_fun563(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_path__mlift_proot_10195_fun563, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_os_path__mlift_proot_10195_fun563(kk_function_t _fself, kk_box_t _b_x29, kk_context_t* _ctx) {
  kk_unused(_fself);
  bool _x_x564;
  kk_unit_t _x_x565 = kk_Unit;
  kk_unit_unbox(_b_x29);
  _x_x564 = kk_std_os_path__mlift_proot_10189(_x_x565, _ctx); /*bool*/
  return kk_bool_box(_x_x564);
}
static kk_box_t kk_std_os_path__mlift_proot_10195_fun560(kk_function_t _fself, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_unit_t x_0_10211 = kk_Unit;
  kk_std_text_parse_eof(_ctx);
  bool _x_x561;
  if (kk_yielding(kk_context())) {
    kk_box_t _x_x562 = kk_std_core_hnd_yield_extend(kk_std_os_path__new_mlift_proot_10195_fun563(_ctx), _ctx); /*2978*/
    _x_x561 = kk_bool_unbox(_x_x562); /*bool*/
  }
  else {
    _x_x561 = true; /*bool*/
  }
  return kk_bool_box(_x_x561);
}

bool kk_std_os_path__mlift_proot_10195(kk_unit_t wild___3, kk_context_t* _ctx) { /* (wild_@3 : ()) -> std/text/parse/parse bool */ 
  kk_box_t _x_x553 = kk_std_text_parse__lp__bar__bar__rp_(kk_std_os_path__new_mlift_proot_10195_fun554(_ctx), kk_std_os_path__new_mlift_proot_10195_fun560(_ctx), _ctx); /*1635*/
  return kk_bool_unbox(_x_x553);
}


// lift anonymous function
struct kk_std_os_path_proot_fun567__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_os_path_proot_fun567(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_std_os_path_new_proot_fun567(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_path_proot_fun567, _ctx)
  return kk_function_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_std_os_path_proot_fun570__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_os_path_proot_fun570(kk_function_t _fself, kk_box_t _b_x37, kk_context_t* _ctx);
static kk_function_t kk_std_os_path_new_proot_fun570(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_path_proot_fun570, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_os_path_proot_fun570(kk_function_t _fself, kk_box_t _b_x37, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_unit_t _x_x571 = kk_Unit;
  kk_char_t _x_x572 = kk_char_unbox(_b_x37, KK_OWNED, _ctx); /*char*/
  kk_std_os_path__mlift_proot_10191(_x_x572, _ctx);
  return kk_unit_box(_x_x571);
}
static kk_box_t kk_std_os_path_proot_fun567(kk_function_t _fself, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_char_t x_0_10216 = kk_std_text_parse_alpha(_ctx); /*char*/;
  kk_unit_t _x_x568 = kk_Unit;
  if (kk_yielding(kk_context())) {
    kk_box_t _x_x569 = kk_std_core_hnd_yield_extend(kk_std_os_path_new_proot_fun570(_ctx), _ctx); /*2978*/
    kk_unit_unbox(_x_x569);
  }
  else {
    kk_std_os_path__mlift_proot_10191(x_0_10216, _ctx);
  }
  return kk_unit_box(_x_x568);
}


// lift anonymous function
struct kk_std_os_path_proot_fun573__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_os_path_proot_fun573(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_std_os_path_new_proot_fun573(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_path_proot_fun573, _ctx)
  return kk_function_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_std_os_path_proot_fun576__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_os_path_proot_fun576(kk_function_t _fself, kk_box_t _b_x39, kk_context_t* _ctx);
static kk_function_t kk_std_os_path_new_proot_fun576(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_path_proot_fun576, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_os_path_proot_fun576(kk_function_t _fself, kk_box_t _b_x39, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_unit_t _x_x577 = kk_Unit;
  kk_char_t _x_x578 = kk_char_unbox(_b_x39, KK_OWNED, _ctx); /*char*/
  kk_std_os_path__mlift_proot_10194(_x_x578, _ctx);
  return kk_unit_box(_x_x577);
}
static kk_box_t kk_std_os_path_proot_fun573(kk_function_t _fself, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_char_t x_1_10218 = kk_std_text_parse_char('/', _ctx); /*char*/;
  kk_unit_t _x_x574 = kk_Unit;
  if (kk_yielding(kk_context())) {
    kk_box_t _x_x575 = kk_std_core_hnd_yield_extend(kk_std_os_path_new_proot_fun576(_ctx), _ctx); /*2978*/
    kk_unit_unbox(_x_x575);
  }
  else {
    kk_std_os_path__mlift_proot_10194(x_1_10218, _ctx);
  }
  return kk_unit_box(_x_x574);
}


// lift anonymous function
struct kk_std_os_path_proot_fun580__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_os_path_proot_fun580(kk_function_t _fself, kk_box_t _b_x47, kk_context_t* _ctx);
static kk_function_t kk_std_os_path_new_proot_fun580(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_path_proot_fun580, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_os_path_proot_fun580(kk_function_t _fself, kk_box_t _b_x47, kk_context_t* _ctx) {
  kk_unused(_fself);
  bool _x_x581;
  kk_unit_t _x_x582 = kk_Unit;
  kk_unit_unbox(_b_x47);
  _x_x581 = kk_std_os_path__mlift_proot_10195(_x_x582, _ctx); /*bool*/
  return kk_bool_box(_x_x581);
}


// lift anonymous function
struct kk_std_os_path_proot_fun583__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_os_path_proot_fun583(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_std_os_path_new_proot_fun583(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_path_proot_fun583, _ctx)
  return kk_function_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_std_os_path_proot_fun586__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_os_path_proot_fun586(kk_function_t _fself, kk_box_t _b_x49, kk_context_t* _ctx);
static kk_function_t kk_std_os_path_new_proot_fun586(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_path_proot_fun586, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_os_path_proot_fun586(kk_function_t _fself, kk_box_t _b_x49, kk_context_t* _ctx) {
  kk_unused(_fself);
  bool _x_x587;
  kk_char_t _x_x588 = kk_char_unbox(_b_x49, KK_OWNED, _ctx); /*char*/
  _x_x587 = kk_std_os_path__mlift_proot_10188(_x_x588, _ctx); /*bool*/
  return kk_bool_box(_x_x587);
}
static kk_box_t kk_std_os_path_proot_fun583(kk_function_t _fself, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_char_t x_2_10220 = kk_std_text_parse_char('/', _ctx); /*char*/;
  bool _x_x584;
  if (kk_yielding(kk_context())) {
    kk_box_t _x_x585 = kk_std_core_hnd_yield_extend(kk_std_os_path_new_proot_fun586(_ctx), _ctx); /*2978*/
    _x_x584 = kk_bool_unbox(_x_x585); /*bool*/
  }
  else {
    _x_x584 = false; /*bool*/
  }
  return kk_bool_box(_x_x584);
}


// lift anonymous function
struct kk_std_os_path_proot_fun589__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_os_path_proot_fun589(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_std_os_path_new_proot_fun589(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_path_proot_fun589, _ctx)
  return kk_function_dup(_fself,kk_context());
}



// lift anonymous function
struct kk_std_os_path_proot_fun592__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_os_path_proot_fun592(kk_function_t _fself, kk_box_t _b_x51, kk_context_t* _ctx);
static kk_function_t kk_std_os_path_new_proot_fun592(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_path_proot_fun592, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_os_path_proot_fun592(kk_function_t _fself, kk_box_t _b_x51, kk_context_t* _ctx) {
  kk_unused(_fself);
  bool _x_x593;
  kk_unit_t _x_x594 = kk_Unit;
  kk_unit_unbox(_b_x51);
  _x_x593 = kk_std_os_path__mlift_proot_10189(_x_x594, _ctx); /*bool*/
  return kk_bool_box(_x_x593);
}
static kk_box_t kk_std_os_path_proot_fun589(kk_function_t _fself, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_unit_t x_3_10222 = kk_Unit;
  kk_std_text_parse_eof(_ctx);
  bool _x_x590;
  if (kk_yielding(kk_context())) {
    kk_box_t _x_x591 = kk_std_core_hnd_yield_extend(kk_std_os_path_new_proot_fun592(_ctx), _ctx); /*2978*/
    _x_x590 = kk_bool_unbox(_x_x591); /*bool*/
  }
  else {
    _x_x590 = true; /*bool*/
  }
  return kk_bool_box(_x_x590);
}

bool kk_std_os_path_proot(kk_context_t* _ctx) { /* () -> std/text/parse/parse bool */ 
  kk_unit_t x_10213 = kk_Unit;
  kk_box_t _x_x566 = kk_std_text_parse__lp__bar__bar__rp_(kk_std_os_path_new_proot_fun567(_ctx), kk_std_os_path_new_proot_fun573(_ctx), _ctx); /*1635*/
  kk_unit_unbox(_x_x566);
  kk_box_t _x_x579;
  if (kk_yielding(kk_context())) {
    _x_x579 = kk_std_core_hnd_yield_extend(kk_std_os_path_new_proot_fun580(_ctx), _ctx); /*2978*/
  }
  else {
    _x_x579 = kk_std_text_parse__lp__bar__bar__rp_(kk_std_os_path_new_proot_fun583(_ctx), kk_std_os_path_new_proot_fun589(_ctx), _ctx); /*2978*/
  }
  return kk_bool_unbox(_x_x579);
}

kk_std_os_path__path kk_std_os_path_path_parts(kk_string_t root, kk_string_t s, kk_std_core_types__optional dirs, kk_context_t* _ctx) { /* (root : string, s : string, dirs : ? (list<string>)) -> path */ 
  kk_vector_t v_10013;
  kk_string_t _x_x598;
  kk_define_string_literal(, _s_x599, 1, "/", _ctx)
  _x_x598 = kk_string_dup(_s_x599, _ctx); /*string*/
  v_10013 = kk_string_splitv(s,_x_x598,kk_context()); /*vector<string>*/
  kk_std_core_types__list parts;
  kk_std_core_types__list _x_x600 = kk_std_core_vector_vlist(v_10013, kk_std_core_types__new_None(_ctx), _ctx); /*list<795>*/
  kk_std_core_types__list _x_x601;
  if (kk_std_core_types__is_Optional(dirs, _ctx)) {
    kk_box_t _box_x61 = dirs._cons._Optional.value;
    kk_std_core_types__list _uniq_dirs_567 = kk_std_core_types__list_unbox(_box_x61, KK_BORROWED, _ctx);
    kk_std_core_types__list_dup(_uniq_dirs_567, _ctx);
    kk_std_core_types__optional_drop(dirs, _ctx);
    _x_x601 = _uniq_dirs_567; /*list<string>*/
  }
  else {
    kk_std_core_types__optional_drop(dirs, _ctx);
    _x_x601 = kk_std_core_types__new_Nil(_ctx); /*list<string>*/
  }
  parts = kk_std_os_path_push_parts(_x_x600, _x_x601, _ctx); /*list<string>*/
  return kk_std_os_path__new_Path(root, parts, _ctx);
}
 
// Create a normalized `:path` from a path string.


// lift anonymous function
struct kk_std_os_path_path_fun612__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_os_path_path_fun612(kk_function_t _fself, kk_context_t* _ctx);
static kk_function_t kk_std_os_path_new_path_fun612(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_path_path_fun612, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_os_path_path_fun612(kk_function_t _fself, kk_context_t* _ctx) {
  kk_unused(_fself);
  bool _x_x613 = kk_std_os_path_proot(_ctx); /*bool*/
  return kk_bool_box(_x_x613);
}

kk_std_os_path__path kk_std_os_path_path(kk_string_t s, kk_context_t* _ctx) { /* (s : string) -> path */ 
  bool _match_x449;
  kk_string_t _x_x602 = kk_string_dup(s, _ctx); /*string*/
  kk_string_t _x_x603 = kk_string_empty(); /*string*/
  _match_x449 = kk_string_is_eq(_x_x602,_x_x603,kk_context()); /*bool*/
  if (_match_x449) {
    kk_string_drop(s, _ctx);
    kk_string_t _x_x605 = kk_string_empty(); /*string*/
    return kk_std_os_path__new_Path(_x_x605, kk_std_core_types__new_Nil(_ctx), _ctx);
  }
  {
    kk_string_t t;
    kk_string_t _x_x607;
    kk_define_string_literal(, _s_x608, 1, "\\", _ctx)
    _x_x607 = kk_string_dup(_s_x608, _ctx); /*string*/
    kk_string_t _x_x609;
    kk_define_string_literal(, _s_x610, 1, "/", _ctx)
    _x_x609 = kk_string_dup(_s_x610, _ctx); /*string*/
    t = kk_string_replace_all(s,_x_x607,_x_x609,kk_context()); /*string*/
    kk_std_core_types__maybe _match_x450;
    kk_string_t _x_x611 = kk_string_dup(t, _ctx); /*string*/
    _match_x450 = kk_std_text_parse_starts_with(_x_x611, kk_std_os_path_new_path_fun612(_ctx), _ctx); /*maybe<(1615, sslice/sslice)>*/
    if (kk_std_core_types__is_Nothing(_match_x450, _ctx)) {
      kk_vector_t v_10013;
      kk_string_t _x_x614;
      kk_define_string_literal(, _s_x615, 1, "/", _ctx)
      _x_x614 = kk_string_dup(_s_x615, _ctx); /*string*/
      v_10013 = kk_string_splitv(t,_x_x614,kk_context()); /*vector<string>*/
      kk_std_core_types__list parts;
      kk_std_core_types__list _x_x616 = kk_std_core_vector_vlist(v_10013, kk_std_core_types__new_None(_ctx), _ctx); /*list<795>*/
      kk_std_core_types__list _x_x617;
      kk_std_core_types__optional _match_x452 = kk_std_core_types__new_None(_ctx); /*forall<a> ? a*/;
      if (kk_std_core_types__is_Optional(_match_x452, _ctx)) {
        kk_box_t _box_x64 = _match_x452._cons._Optional.value;
        kk_std_core_types__list _uniq_dirs_567 = kk_std_core_types__list_unbox(_box_x64, KK_BORROWED, _ctx);
        kk_std_core_types__list_dup(_uniq_dirs_567, _ctx);
        kk_std_core_types__optional_drop(_match_x452, _ctx);
        _x_x617 = _uniq_dirs_567; /*list<string>*/
      }
      else {
        kk_std_core_types__optional_drop(_match_x452, _ctx);
        _x_x617 = kk_std_core_types__new_Nil(_ctx); /*list<string>*/
      }
      parts = kk_std_os_path_push_parts(_x_x616, _x_x617, _ctx); /*list<string>*/
      kk_string_t _x_x618 = kk_string_empty(); /*string*/
      return kk_std_os_path__new_Path(_x_x618, parts, _ctx);
    }
    {
      kk_box_t _box_x65 = _match_x450._cons.Just.value;
      kk_std_core_types__tuple2 _pat_3 = kk_std_core_types__tuple2_unbox(_box_x65, KK_BORROWED, _ctx);
      kk_box_t _box_x66 = _pat_3.fst;
      kk_box_t _box_x67 = _pat_3.snd;
      kk_std_core_sslice__sslice rest = kk_std_core_sslice__sslice_unbox(_box_x67, KK_BORROWED, _ctx);
      bool eof = kk_bool_unbox(_box_x66);
      kk_string_drop(t, _ctx);
      kk_std_core_sslice__sslice_dup(rest, _ctx);
      kk_std_core_types__maybe_drop(_match_x450, _ctx);
      kk_string_t root_0_10105;
      kk_string_t _x_x620;
      kk_std_core_sslice__sslice _x_x621;
      {
        kk_string_t s_1_0 = rest.str;
        kk_integer_t start = rest.start;
        kk_string_dup(s_1_0, _ctx);
        kk_integer_dup(start, _ctx);
        _x_x621 = kk_std_core_sslice__new_Sslice(s_1_0, kk_integer_from_small(0), start, _ctx); /*sslice/sslice*/
      }
      _x_x620 = kk_std_core_sslice_string(_x_x621, _ctx); /*string*/
      kk_string_t _x_x622;
      if (eof) {
        kk_define_string_literal(, _s_x623, 1, "/", _ctx)
        _x_x622 = kk_string_dup(_s_x623, _ctx); /*string*/
      }
      else {
        _x_x622 = kk_string_empty(); /*string*/
      }
      root_0_10105 = kk_std_core_types__lp__plus__plus__rp_(_x_x620, _x_x622, _ctx); /*string*/
      kk_string_t s_1_10106 = kk_std_core_sslice_string(rest, _ctx); /*string*/;
      kk_vector_t v_10013_0;
      kk_string_t _x_x625;
      kk_define_string_literal(, _s_x626, 1, "/", _ctx)
      _x_x625 = kk_string_dup(_s_x626, _ctx); /*string*/
      v_10013_0 = kk_string_splitv(s_1_10106,_x_x625,kk_context()); /*vector<string>*/
      kk_std_core_types__list parts_0;
      kk_std_core_types__list _x_x627 = kk_std_core_vector_vlist(v_10013_0, kk_std_core_types__new_None(_ctx), _ctx); /*list<795>*/
      kk_std_core_types__list _x_x628;
      kk_std_core_types__optional _match_x451 = kk_std_core_types__new_None(_ctx); /*forall<a> ? a*/;
      if (kk_std_core_types__is_Optional(_match_x451, _ctx)) {
        kk_box_t _box_x68 = _match_x451._cons._Optional.value;
        kk_std_core_types__list _uniq_dirs_567_0 = kk_std_core_types__list_unbox(_box_x68, KK_BORROWED, _ctx);
        kk_std_core_types__list_dup(_uniq_dirs_567_0, _ctx);
        kk_std_core_types__optional_drop(_match_x451, _ctx);
        _x_x628 = _uniq_dirs_567_0; /*list<string>*/
      }
      else {
        kk_std_core_types__optional_drop(_match_x451, _ctx);
        _x_x628 = kk_std_core_types__new_Nil(_ctx); /*list<string>*/
      }
      parts_0 = kk_std_os_path_push_parts(_x_x627, _x_x628, _ctx); /*list<string>*/
      return kk_std_os_path__new_Path(root_0_10105, parts_0, _ctx);
    }
  }
}
 
// Return the base name of a path (stem name + extension)
// `"/foo/bar.txt".path.basename === "bar.txt"`
// `"/foo".path.basename === "foo"`

kk_string_t kk_std_os_path_basename(kk_std_os_path__path p, kk_context_t* _ctx) { /* (p : path) -> string */ 
  {
    kk_std_core_types__list _x = p.parts;
    kk_std_core_types__list_dup(_x, _ctx);
    kk_std_os_path__path_drop(p, _ctx);
    if (kk_std_core_types__is_Cons(_x, _ctx)) {
      struct kk_std_core_types_Cons* _con_x629 = kk_std_core_types__as_Cons(_x, _ctx);
      kk_box_t _box_x71 = _con_x629->head;
      kk_std_core_types__list _pat_0_0 = _con_x629->tail;
      kk_string_t x_0 = kk_string_unbox(_box_x71);
      if kk_likely(kk_datatype_ptr_is_unique(_x, _ctx)) {
        kk_std_core_types__list_drop(_pat_0_0, _ctx);
        kk_datatype_ptr_free(_x, _ctx);
      }
      else {
        kk_string_dup(x_0, _ctx);
        kk_datatype_ptr_decref(_x, _ctx);
      }
      return x_0;
    }
    {
      return kk_string_empty();
    }
  }
}
 
// Return the directory part of a path (including the rootname)
// `"/foo/bar.txt".path.dirname === "/foo"`
// `"/foo".path.dirname === "/"`

kk_string_t kk_std_os_path_dirname(kk_std_os_path__path p, kk_context_t* _ctx) { /* (p : path) -> string */ 
  kk_std_core_types__list xs_10028;
  kk_std_core_types__list _x_x631;
  {
    kk_std_core_types__list _x_0 = p.parts;
    kk_std_core_types__list_dup(_x_0, _ctx);
    if (kk_std_core_types__is_Cons(_x_0, _ctx)) {
      struct kk_std_core_types_Cons* _con_x632 = kk_std_core_types__as_Cons(_x_0, _ctx);
      kk_box_t _box_x73 = _con_x632->head;
      kk_std_core_types__list xx = _con_x632->tail;
      if kk_likely(kk_datatype_ptr_is_unique(_x_0, _ctx)) {
        kk_box_drop(_box_x73, _ctx);
        kk_datatype_ptr_free(_x_0, _ctx);
      }
      else {
        kk_std_core_types__list_dup(xx, _ctx);
        kk_datatype_ptr_decref(_x_0, _ctx);
      }
      _x_x631 = xx; /*list<string>*/
    }
    else {
      _x_x631 = kk_std_core_types__new_Nil(_ctx); /*list<string>*/
    }
  }
  xs_10028 = kk_std_core_list__lift_reverse_append_4948(kk_std_core_types__new_Nil(_ctx), _x_x631, _ctx); /*list<string>*/
  kk_string_t _x_x633;
  {
    kk_string_t _x = p.root;
    kk_string_dup(_x, _ctx);
    kk_std_os_path__path_drop(p, _ctx);
    _x_x633 = _x; /*string*/
  }
  kk_string_t _x_x634;
  kk_string_t _x_x635;
  kk_define_string_literal(, _s_x636, 1, "/", _ctx)
  _x_x635 = kk_string_dup(_s_x636, _ctx); /*string*/
  _x_x634 = kk_std_core_list_joinsep(xs_10028, _x_x635, _ctx); /*string*/
  return kk_std_core_types__lp__plus__plus__rp_(_x_x633, _x_x634, _ctx);
}

kk_std_core_types__tuple2 kk_std_os_path_split_base(kk_string_t basename_0, kk_context_t* _ctx) { /* (basename : string) -> (string, string) */ 
  kk_std_core_types__maybe _match_x448;
  kk_string_t _x_x637 = kk_string_dup(basename_0, _ctx); /*string*/
  kk_string_t _x_x638;
  kk_define_string_literal(, _s_x639, 1, ".", _ctx)
  _x_x638 = kk_string_dup(_s_x639, _ctx); /*string*/
  _match_x448 = kk_std_core_sslice_find_last(_x_x637, _x_x638, _ctx); /*maybe<sslice/sslice>*/
  if (kk_std_core_types__is_Just(_match_x448, _ctx)) {
    kk_box_t _box_x74 = _match_x448._cons.Just.value;
    kk_std_core_sslice__sslice slice = kk_std_core_sslice__sslice_unbox(_box_x74, KK_BORROWED, _ctx);
    kk_string_drop(basename_0, _ctx);
    kk_std_core_sslice__sslice_dup(slice, _ctx);
    kk_std_core_types__maybe_drop(_match_x448, _ctx);
    kk_string_t _b_x75_79;
    kk_std_core_sslice__sslice _x_x640;
    {
      kk_string_t s = slice.str;
      kk_integer_t start = slice.start;
      kk_string_dup(s, _ctx);
      kk_integer_dup(start, _ctx);
      _x_x640 = kk_std_core_sslice__new_Sslice(s, kk_integer_from_small(0), start, _ctx); /*sslice/sslice*/
    }
    _b_x75_79 = kk_std_core_sslice_string(_x_x640, _ctx); /*string*/
    kk_string_t _b_x76_80;
    kk_std_core_sslice__sslice _x_x641 = kk_std_core_sslice_after(slice, _ctx); /*sslice/sslice*/
    _b_x76_80 = kk_std_core_sslice_string(_x_x641, _ctx); /*string*/
    return kk_std_core_types__new_Tuple2(kk_string_box(_b_x75_79), kk_string_box(_b_x76_80), _ctx);
  }
  {
    kk_box_t _x_x642;
    kk_string_t _x_x643 = kk_string_empty(); /*string*/
    _x_x642 = kk_string_box(_x_x643); /*1845*/
    return kk_std_core_types__new_Tuple2(kk_string_box(basename_0), _x_x642, _ctx);
  }
}
 
// Return the extension of path (without the preceding dot (`'.'`))
// `"/foo/bar.svg.txt".path.extname === "txt"`

kk_string_t kk_std_os_path_extname(kk_std_os_path__path p, kk_context_t* _ctx) { /* (p : path) -> string */ 
  kk_std_core_types__tuple2 tuple2_10034;
  kk_std_core_types__maybe _match_x447;
  kk_string_t _x_x645;
  {
    kk_std_core_types__list _x = p.parts;
    kk_std_core_types__list_dup(_x, _ctx);
    if (kk_std_core_types__is_Cons(_x, _ctx)) {
      struct kk_std_core_types_Cons* _con_x646 = kk_std_core_types__as_Cons(_x, _ctx);
      kk_box_t _box_x83 = _con_x646->head;
      kk_std_core_types__list _pat_0_0_0 = _con_x646->tail;
      kk_string_t x_0 = kk_string_unbox(_box_x83);
      if kk_likely(kk_datatype_ptr_is_unique(_x, _ctx)) {
        kk_std_core_types__list_drop(_pat_0_0_0, _ctx);
        kk_datatype_ptr_free(_x, _ctx);
      }
      else {
        kk_string_dup(x_0, _ctx);
        kk_datatype_ptr_decref(_x, _ctx);
      }
      _x_x645 = x_0; /*string*/
    }
    else {
      _x_x645 = kk_string_empty(); /*string*/
    }
  }
  kk_string_t _x_x648;
  kk_define_string_literal(, _s_x649, 1, ".", _ctx)
  _x_x648 = kk_string_dup(_s_x649, _ctx); /*string*/
  _match_x447 = kk_std_core_sslice_find_last(_x_x645, _x_x648, _ctx); /*maybe<sslice/sslice>*/
  if (kk_std_core_types__is_Just(_match_x447, _ctx)) {
    kk_box_t _box_x85 = _match_x447._cons.Just.value;
    kk_std_core_sslice__sslice slice = kk_std_core_sslice__sslice_unbox(_box_x85, KK_BORROWED, _ctx);
    kk_std_os_path__path_drop(p, _ctx);
    kk_std_core_sslice__sslice_dup(slice, _ctx);
    kk_std_core_types__maybe_drop(_match_x447, _ctx);
    kk_string_t _b_x86_92;
    kk_std_core_sslice__sslice _x_x650;
    {
      kk_string_t s = slice.str;
      kk_integer_t start = slice.start;
      kk_string_dup(s, _ctx);
      kk_integer_dup(start, _ctx);
      _x_x650 = kk_std_core_sslice__new_Sslice(s, kk_integer_from_small(0), start, _ctx); /*sslice/sslice*/
    }
    _b_x86_92 = kk_std_core_sslice_string(_x_x650, _ctx); /*string*/
    kk_string_t _b_x87_93;
    kk_std_core_sslice__sslice _x_x651 = kk_std_core_sslice_after(slice, _ctx); /*sslice/sslice*/
    _b_x87_93 = kk_std_core_sslice_string(_x_x651, _ctx); /*string*/
    tuple2_10034 = kk_std_core_types__new_Tuple2(kk_string_box(_b_x86_92), kk_string_box(_b_x87_93), _ctx); /*(string, string)*/
  }
  else {
    kk_box_t _x_x652;
    kk_string_t _x_x653;
    {
      kk_std_core_types__list _x_0 = p.parts;
      kk_std_core_types__list_dup(_x_0, _ctx);
      kk_std_os_path__path_drop(p, _ctx);
      if (kk_std_core_types__is_Cons(_x_0, _ctx)) {
        struct kk_std_core_types_Cons* _con_x654 = kk_std_core_types__as_Cons(_x_0, _ctx);
        kk_box_t _box_x88 = _con_x654->head;
        kk_std_core_types__list _pat_0_0_0_0 = _con_x654->tail;
        kk_string_t x_0_0 = kk_string_unbox(_box_x88);
        if kk_likely(kk_datatype_ptr_is_unique(_x_0, _ctx)) {
          kk_std_core_types__list_drop(_pat_0_0_0_0, _ctx);
          kk_datatype_ptr_free(_x_0, _ctx);
        }
        else {
          kk_string_dup(x_0_0, _ctx);
          kk_datatype_ptr_decref(_x_0, _ctx);
        }
        _x_x653 = x_0_0; /*string*/
      }
      else {
        _x_x653 = kk_string_empty(); /*string*/
      }
    }
    _x_x652 = kk_string_box(_x_x653); /*1844*/
    kk_box_t _x_x656;
    kk_string_t _x_x657 = kk_string_empty(); /*string*/
    _x_x656 = kk_string_box(_x_x657); /*1845*/
    tuple2_10034 = kk_std_core_types__new_Tuple2(_x_x652, _x_x656, _ctx); /*(string, string)*/
  }
  {
    kk_box_t _box_x96 = tuple2_10034.fst;
    kk_box_t _box_x97 = tuple2_10034.snd;
    kk_string_t _x_0_0 = kk_string_unbox(_box_x97);
    kk_string_dup(_x_0_0, _ctx);
    kk_std_core_types__tuple2_drop(tuple2_10034, _ctx);
    return _x_0_0;
  }
}
 
// Return the stem name of path.
// `"/foo/bar.svg.txt".path.extname === "foo.svg"`

kk_string_t kk_std_os_path_stemname(kk_std_os_path__path p, kk_context_t* _ctx) { /* (p : path) -> string */ 
  kk_std_core_types__tuple2 tuple2_10035;
  kk_std_core_types__maybe _match_x446;
  kk_string_t _x_x659;
  {
    kk_std_core_types__list _x = p.parts;
    kk_std_core_types__list_dup(_x, _ctx);
    if (kk_std_core_types__is_Cons(_x, _ctx)) {
      struct kk_std_core_types_Cons* _con_x660 = kk_std_core_types__as_Cons(_x, _ctx);
      kk_box_t _box_x98 = _con_x660->head;
      kk_std_core_types__list _pat_0_0_0 = _con_x660->tail;
      kk_string_t x_0 = kk_string_unbox(_box_x98);
      if kk_likely(kk_datatype_ptr_is_unique(_x, _ctx)) {
        kk_std_core_types__list_drop(_pat_0_0_0, _ctx);
        kk_datatype_ptr_free(_x, _ctx);
      }
      else {
        kk_string_dup(x_0, _ctx);
        kk_datatype_ptr_decref(_x, _ctx);
      }
      _x_x659 = x_0; /*string*/
    }
    else {
      _x_x659 = kk_string_empty(); /*string*/
    }
  }
  kk_string_t _x_x662;
  kk_define_string_literal(, _s_x663, 1, ".", _ctx)
  _x_x662 = kk_string_dup(_s_x663, _ctx); /*string*/
  _match_x446 = kk_std_core_sslice_find_last(_x_x659, _x_x662, _ctx); /*maybe<sslice/sslice>*/
  if (kk_std_core_types__is_Just(_match_x446, _ctx)) {
    kk_box_t _box_x100 = _match_x446._cons.Just.value;
    kk_std_core_sslice__sslice slice = kk_std_core_sslice__sslice_unbox(_box_x100, KK_BORROWED, _ctx);
    kk_std_os_path__path_drop(p, _ctx);
    kk_std_core_sslice__sslice_dup(slice, _ctx);
    kk_std_core_types__maybe_drop(_match_x446, _ctx);
    kk_string_t _b_x101_107;
    kk_std_core_sslice__sslice _x_x664;
    {
      kk_string_t s = slice.str;
      kk_integer_t start = slice.start;
      kk_string_dup(s, _ctx);
      kk_integer_dup(start, _ctx);
      _x_x664 = kk_std_core_sslice__new_Sslice(s, kk_integer_from_small(0), start, _ctx); /*sslice/sslice*/
    }
    _b_x101_107 = kk_std_core_sslice_string(_x_x664, _ctx); /*string*/
    kk_string_t _b_x102_108;
    kk_std_core_sslice__sslice _x_x665 = kk_std_core_sslice_after(slice, _ctx); /*sslice/sslice*/
    _b_x102_108 = kk_std_core_sslice_string(_x_x665, _ctx); /*string*/
    tuple2_10035 = kk_std_core_types__new_Tuple2(kk_string_box(_b_x101_107), kk_string_box(_b_x102_108), _ctx); /*(string, string)*/
  }
  else {
    kk_box_t _x_x666;
    kk_string_t _x_x667;
    {
      kk_std_core_types__list _x_0 = p.parts;
      kk_std_core_types__list_dup(_x_0, _ctx);
      kk_std_os_path__path_drop(p, _ctx);
      if (kk_std_core_types__is_Cons(_x_0, _ctx)) {
        struct kk_std_core_types_Cons* _con_x668 = kk_std_core_types__as_Cons(_x_0, _ctx);
        kk_box_t _box_x103 = _con_x668->head;
        kk_std_core_types__list _pat_0_0_0_0 = _con_x668->tail;
        kk_string_t x_0_0 = kk_string_unbox(_box_x103);
        if kk_likely(kk_datatype_ptr_is_unique(_x_0, _ctx)) {
          kk_std_core_types__list_drop(_pat_0_0_0_0, _ctx);
          kk_datatype_ptr_free(_x_0, _ctx);
        }
        else {
          kk_string_dup(x_0_0, _ctx);
          kk_datatype_ptr_decref(_x_0, _ctx);
        }
        _x_x667 = x_0_0; /*string*/
      }
      else {
        _x_x667 = kk_string_empty(); /*string*/
      }
    }
    _x_x666 = kk_string_box(_x_x667); /*1844*/
    kk_box_t _x_x670;
    kk_string_t _x_x671 = kk_string_empty(); /*string*/
    _x_x670 = kk_string_box(_x_x671); /*1845*/
    tuple2_10035 = kk_std_core_types__new_Tuple2(_x_x666, _x_x670, _ctx); /*(string, string)*/
  }
  {
    kk_box_t _box_x111 = tuple2_10035.fst;
    kk_box_t _box_x112 = tuple2_10035.snd;
    kk_string_t _x_0_0 = kk_string_unbox(_box_x111);
    kk_string_dup(_x_0_0, _ctx);
    kk_std_core_types__tuple2_drop(tuple2_10035, _ctx);
    return _x_0_0;
  }
}

kk_std_core_types__tuple2 kk_std_os_path_split_parts(kk_std_core_types__list parts, kk_context_t* _ctx) { /* (parts : list<string>) -> (string, list<string>) */ 
  kk_box_t _x_x673;
  kk_string_t _x_x674;
  if (kk_std_core_types__is_Cons(parts, _ctx)) {
    struct kk_std_core_types_Cons* _con_x675 = kk_std_core_types__as_Cons(parts, _ctx);
    kk_box_t _box_x113 = _con_x675->head;
    kk_string_t x_0 = kk_string_unbox(_box_x113);
    kk_string_dup(x_0, _ctx);
    _x_x674 = x_0; /*string*/
  }
  else {
    _x_x674 = kk_string_empty(); /*string*/
  }
  _x_x673 = kk_string_box(_x_x674); /*1987*/
  kk_box_t _x_x677;
  kk_std_core_types__list _x_x678;
  if (kk_std_core_types__is_Cons(parts, _ctx)) {
    struct kk_std_core_types_Cons* _con_x679 = kk_std_core_types__as_Cons(parts, _ctx);
    kk_box_t _box_x115 = _con_x679->head;
    kk_std_core_types__list xx = _con_x679->tail;
    if kk_likely(kk_datatype_ptr_is_unique(parts, _ctx)) {
      kk_box_drop(_box_x115, _ctx);
      kk_datatype_ptr_free(parts, _ctx);
    }
    else {
      kk_std_core_types__list_dup(xx, _ctx);
      kk_datatype_ptr_decref(parts, _ctx);
    }
    _x_x678 = xx; /*list<string>*/
  }
  else {
    _x_x678 = kk_std_core_types__new_Nil(_ctx); /*list<string>*/
  }
  _x_x677 = kk_std_core_types__list_box(_x_x678, _ctx); /*1988*/
  return kk_std_core_types__new_Tuple2(_x_x673, _x_x677, _ctx);
}


// lift anonymous function
struct kk_std_os_path__trmc_paths_collect_fun695__t {
  struct kk_function_s _base;
};
static kk_std_core_types__maybe kk_std_os_path__trmc_paths_collect_fun695(kk_function_t _fself, kk_char_t _b_x122, kk_context_t* _ctx);
static kk_function_t kk_std_os_path__new_trmc_paths_collect_fun695(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_path__trmc_paths_collect_fun695, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_std_core_types__maybe kk_std_os_path__trmc_paths_collect_fun695(kk_function_t _fself, kk_char_t _b_x122, kk_context_t* _ctx) {
  kk_unused(_fself);
  return kk_std_core_types__new_Just(kk_char_box(_b_x122, _ctx), _ctx);
}

kk_std_core_types__list kk_std_os_path__trmc_paths_collect(kk_std_core_types__list ps, kk_std_core_types__cctx _acc, kk_context_t* _ctx) { /* (ps : list<string>, ctx<list<path>>) -> list<path> */ 
  kk__tailcall: ;
  if (kk_std_core_types__is_Cons(ps, _ctx)) {
    struct kk_std_core_types_Cons* _con_x687 = kk_std_core_types__as_Cons(ps, _ctx);
    kk_box_t _box_x120 = _con_x687->head;
    kk_std_core_types__list _pat_0 = _con_x687->tail;
    if (kk_std_core_types__is_Cons(_pat_0, _ctx)) {
      struct kk_std_core_types_Cons* _con_x688 = kk_std_core_types__as_Cons(_pat_0, _ctx);
      kk_box_t _box_x121 = _con_x688->head;
      kk_string_t root = kk_string_unbox(_box_x120);
      kk_string_t part = kk_string_unbox(_box_x121);
      bool _match_x442;
      kk_integer_t _brw_x444;
      kk_string_t _x_x689 = kk_string_dup(root, _ctx); /*string*/
      _brw_x444 = kk_std_core_string_count(_x_x689, _ctx); /*int*/
      bool _brw_x445 = kk_integer_eq_borrow(_brw_x444,(kk_integer_from_small(1)),kk_context()); /*bool*/;
      kk_integer_drop(_brw_x444, _ctx);
      _match_x442 = _brw_x445; /*bool*/
      bool _x_x690;
      if (_match_x442) {
        kk_std_core_types__maybe m_10047;
        kk_std_core_sslice__sslice _x_x691;
        kk_string_t _x_x692 = kk_string_dup(root, _ctx); /*string*/
        kk_integer_t _x_x693;
        kk_string_t _x_x694 = kk_string_dup(root, _ctx); /*string*/
        _x_x693 = kk_string_len_int(_x_x694,kk_context()); /*int*/
        _x_x691 = kk_std_core_sslice__new_Sslice(_x_x692, kk_integer_from_small(0), _x_x693, _ctx); /*sslice/sslice*/
        m_10047 = kk_std_core_sslice_foreach_while(_x_x691, kk_std_os_path__new_trmc_paths_collect_fun695(_ctx), _ctx); /*maybe<char>*/
        bool _match_x443;
        kk_char_t _x_x696;
        if (kk_std_core_types__is_Nothing(m_10047, _ctx)) {
          _x_x696 = ' '; /*char*/
        }
        else {
          kk_box_t _box_x123 = m_10047._cons.Just.value;
          kk_char_t x = kk_char_unbox(_box_x123, KK_BORROWED, _ctx);
          kk_std_core_types__maybe_drop(m_10047, _ctx);
          _x_x696 = x; /*char*/
        }
        _match_x443 = kk_std_core_char_is_alpha(_x_x696, _ctx); /*bool*/
        if (_match_x443) {
          bool b_10050;
          kk_string_t _x_x697 = kk_string_dup(part, _ctx); /*string*/
          kk_string_t _x_x698 = kk_string_empty(); /*string*/
          b_10050 = kk_string_is_eq(_x_x697,_x_x698,kk_context()); /*bool*/
          if (b_10050) {
            _x_x690 = false; /*bool*/
          }
          else {
            kk_string_t _x_x700;
            kk_define_string_literal(, _s_x701, 2, "/\\", _ctx)
            _x_x700 = kk_string_dup(_s_x701, _ctx); /*string*/
            kk_string_t _x_x702;
            kk_string_t _x_x703 = kk_string_dup(part, _ctx); /*string*/
            _x_x702 = kk_std_core_sslice_head(_x_x703, _ctx); /*string*/
            _x_x690 = kk_string_contains(_x_x700,_x_x702,kk_context()); /*bool*/
          }
        }
        else {
          _x_x690 = false; /*bool*/
        }
      }
      else {
        _x_x690 = false; /*bool*/
      }
      if (_x_x690) {
        kk_std_core_types__list rest = _con_x688->tail;
        kk_reuse_t _ru_x479 = kk_reuse_null; /*@reuse*/;
        if kk_likely(kk_datatype_ptr_is_unique(ps, _ctx)) {
          if kk_likely(kk_datatype_ptr_is_unique(_pat_0, _ctx)) {
            kk_datatype_ptr_free(_pat_0, _ctx);
          }
          else {
            kk_string_dup(part, _ctx);
            kk_std_core_types__list_dup(rest, _ctx);
            kk_datatype_ptr_decref(_pat_0, _ctx);
          }
          _ru_x479 = (kk_datatype_ptr_reuse(ps, _ctx));
        }
        else {
          kk_string_dup(part, _ctx);
          kk_std_core_types__list_dup(rest, _ctx);
          kk_string_dup(root, _ctx);
          kk_datatype_ptr_decref(ps, _ctx);
        }
        kk_std_os_path__path _trmc_x10132;
        kk_string_t _x_x704;
        kk_string_t _x_x705;
        kk_string_t _x_x706;
        kk_define_string_literal(, _s_x707, 1, ":", _ctx)
        _x_x706 = kk_string_dup(_s_x707, _ctx); /*string*/
        _x_x705 = kk_std_core_types__lp__plus__plus__rp_(_x_x706, part, _ctx); /*string*/
        _x_x704 = kk_std_core_types__lp__plus__plus__rp_(root, _x_x705, _ctx); /*string*/
        _trmc_x10132 = kk_std_os_path_path(_x_x704, _ctx); /*std/os/path/path*/
        kk_std_core_types__list _trmc_x10133 = kk_datatype_null(); /*list<std/os/path/path>*/;
        kk_std_core_types__list _trmc_x10134 = kk_std_core_types__new_Cons(_ru_x479, 0, kk_std_os_path__path_box(_trmc_x10132, _ctx), _trmc_x10133, _ctx); /*list<std/os/path/path>*/;
        kk_field_addr_t _b_x133_149 = kk_field_addr_create(&kk_std_core_types__as_Cons(_trmc_x10134, _ctx)->tail, _ctx); /*@field-addr<list<std/os/path/path>>*/;
        { // tailcall
          kk_std_core_types__cctx _x_x708 = kk_cctx_extend_linear(_acc,(kk_std_core_types__list_box(_trmc_x10134, _ctx)),_b_x133_149,kk_context()); /*ctx<0>*/
          ps = rest;
          _acc = _x_x708;
          goto kk__tailcall;
        }
      }
    }
  }
  if (kk_std_core_types__is_Cons(ps, _ctx)) {
    struct kk_std_core_types_Cons* _con_x709 = kk_std_core_types__as_Cons(ps, _ctx);
    kk_box_t _box_x134 = _con_x709->head;
    kk_std_core_types__list rest_0 = _con_x709->tail;
    kk_string_t part_0 = kk_string_unbox(_box_x134);
    kk_reuse_t _ru_x480 = kk_reuse_null; /*@reuse*/;
    if kk_likely(kk_datatype_ptr_is_unique(ps, _ctx)) {
      _ru_x480 = (kk_datatype_ptr_reuse(ps, _ctx));
    }
    else {
      kk_string_dup(part_0, _ctx);
      kk_std_core_types__list_dup(rest_0, _ctx);
      kk_datatype_ptr_decref(ps, _ctx);
    }
    kk_std_os_path__path _trmc_x10135 = kk_std_os_path_path(part_0, _ctx); /*std/os/path/path*/;
    kk_std_core_types__list _trmc_x10136 = kk_datatype_null(); /*list<std/os/path/path>*/;
    kk_std_core_types__list _trmc_x10137 = kk_std_core_types__new_Cons(_ru_x480, 0, kk_std_os_path__path_box(_trmc_x10135, _ctx), _trmc_x10136, _ctx); /*list<std/os/path/path>*/;
    kk_field_addr_t _b_x144_155 = kk_field_addr_create(&kk_std_core_types__as_Cons(_trmc_x10137, _ctx)->tail, _ctx); /*@field-addr<list<std/os/path/path>>*/;
    { // tailcall
      kk_std_core_types__cctx _x_x710 = kk_cctx_extend_linear(_acc,(kk_std_core_types__list_box(_trmc_x10137, _ctx)),_b_x144_155,kk_context()); /*ctx<0>*/
      ps = rest_0;
      _acc = _x_x710;
      goto kk__tailcall;
    }
  }
  {
    kk_box_t _x_x711 = kk_cctx_apply_linear(_acc,(kk_std_core_types__list_box(kk_std_core_types__new_Nil(_ctx), _ctx)),kk_context()); /*-1*/
    return kk_std_core_types__list_unbox(_x_x711, KK_OWNED, _ctx);
  }
}

kk_std_core_types__list kk_std_os_path_paths_collect(kk_std_core_types__list ps_0, kk_context_t* _ctx) { /* (ps : list<string>) -> list<path> */ 
  kk_std_core_types__cctx _x_x712 = kk_cctx_empty(kk_context()); /*ctx<0>*/
  return kk_std_os_path__trmc_paths_collect(ps_0, _x_x712, _ctx);
}
 
// Add two paths together using left-associative operator `(/)`.
// Keeps the root of `p1` and discards the root name of `p2`.
// `"/a/" / "b/foo.txt"          === "/a/b/foo.txt"`
// `"/a/foo.txt" / "/b/bar.txt"  === "/a/foo.txt/b/bar.txt"`
// `"c:/foo" / "d:/bar"          === "c:/foo/bar"`

kk_std_os_path__path kk_std_os_path__lp__fs__rp_(kk_std_os_path__path p1, kk_std_os_path__path p2, kk_context_t* _ctx) { /* (p1 : path, p2 : path) -> path */ 
  kk_std_core_types__list _b_x161_162;
  kk_std_core_types__list _x_x720;
  kk_std_core_types__list _x_x721;
  {
    kk_std_core_types__list _x_0 = p2.parts;
    kk_std_core_types__list_dup(_x_0, _ctx);
    kk_std_os_path__path_drop(p2, _ctx);
    _x_x721 = _x_0; /*list<string>*/
  }
  _x_x720 = kk_std_core_list__lift_reverse_append_4948(kk_std_core_types__new_Nil(_ctx), _x_x721, _ctx); /*list<950>*/
  kk_std_core_types__list _x_x722;
  {
    kk_std_core_types__list _x_1 = p1.parts;
    kk_std_core_types__list_dup(_x_1, _ctx);
    _x_x722 = _x_1; /*list<string>*/
  }
  _b_x161_162 = kk_std_os_path_push_parts(_x_x720, _x_x722, _ctx); /*list<string>*/
  kk_string_t _x_x723;
  {
    kk_string_t _x = p1.root;
    kk_string_dup(_x, _ctx);
    kk_std_os_path__path_drop(p1, _ctx);
    _x_x723 = _x; /*string*/
  }
  kk_std_core_types__list _x_x724;
  kk_std_core_types__optional _match_x441 = kk_std_core_types__new_Optional(kk_std_core_types__list_box(_b_x161_162, _ctx), _ctx); /*? 7*/;
  if (kk_std_core_types__is_Optional(_match_x441, _ctx)) {
    kk_box_t _box_x163 = _match_x441._cons._Optional.value;
    kk_std_core_types__list _uniq_parts_453 = kk_std_core_types__list_unbox(_box_x163, KK_BORROWED, _ctx);
    kk_std_core_types__list_dup(_uniq_parts_453, _ctx);
    kk_std_core_types__optional_drop(_match_x441, _ctx);
    _x_x724 = _uniq_parts_453; /*list<string>*/
  }
  else {
    kk_std_core_types__optional_drop(_match_x441, _ctx);
    _x_x724 = kk_std_core_types__new_Nil(_ctx); /*list<string>*/
  }
  return kk_std_os_path__new_Path(_x_x723, _x_x724, _ctx);
}
 
// Convenience function that adds a string path.

kk_std_os_path__path kk_std_os_path_pathstring_fs__lp__fs__rp_(kk_std_os_path__path p1, kk_string_t p2, kk_context_t* _ctx) { /* (p1 : path, p2 : string) -> path */ 
  kk_std_os_path__path p2_0_10113 = kk_std_os_path_path(p2, _ctx); /*std/os/path/path*/;
  kk_std_core_types__list _b_x164_165;
  kk_std_core_types__list _x_x725;
  kk_std_core_types__list _x_x726;
  {
    kk_std_core_types__list _x_0 = p2_0_10113.parts;
    kk_std_core_types__list_dup(_x_0, _ctx);
    kk_std_os_path__path_drop(p2_0_10113, _ctx);
    _x_x726 = _x_0; /*list<string>*/
  }
  _x_x725 = kk_std_core_list__lift_reverse_append_4948(kk_std_core_types__new_Nil(_ctx), _x_x726, _ctx); /*list<950>*/
  kk_std_core_types__list _x_x727;
  {
    kk_std_core_types__list _x_1 = p1.parts;
    kk_std_core_types__list_dup(_x_1, _ctx);
    _x_x727 = _x_1; /*list<string>*/
  }
  _b_x164_165 = kk_std_os_path_push_parts(_x_x725, _x_x727, _ctx); /*list<string>*/
  kk_string_t _x_x728;
  {
    kk_string_t _x = p1.root;
    kk_string_dup(_x, _ctx);
    kk_std_os_path__path_drop(p1, _ctx);
    _x_x728 = _x; /*string*/
  }
  kk_std_core_types__list _x_x729;
  kk_std_core_types__optional _match_x440 = kk_std_core_types__new_Optional(kk_std_core_types__list_box(_b_x164_165, _ctx), _ctx); /*? 7*/;
  if (kk_std_core_types__is_Optional(_match_x440, _ctx)) {
    kk_box_t _box_x166 = _match_x440._cons._Optional.value;
    kk_std_core_types__list _uniq_parts_453 = kk_std_core_types__list_unbox(_box_x166, KK_BORROWED, _ctx);
    kk_std_core_types__list_dup(_uniq_parts_453, _ctx);
    kk_std_core_types__optional_drop(_match_x440, _ctx);
    _x_x729 = _uniq_parts_453; /*list<string>*/
  }
  else {
    kk_std_core_types__optional_drop(_match_x440, _ctx);
    _x_x729 = kk_std_core_types__new_Nil(_ctx); /*list<string>*/
  }
  return kk_std_os_path__new_Path(_x_x728, _x_x729, _ctx);
}
 
// Convenience function that adds two strings into a path.

kk_std_os_path__path kk_std_os_path_string_fs__lp__fs__rp_(kk_string_t p1, kk_string_t p2, kk_context_t* _ctx) { /* (p1 : string, p2 : string) -> path */ 
  kk_std_os_path__path p1_0_10114 = kk_std_os_path_path(p1, _ctx); /*std/os/path/path*/;
  kk_std_os_path__path p2_0_10115 = kk_std_os_path_path(p2, _ctx); /*std/os/path/path*/;
  kk_std_core_types__list _b_x167_168;
  kk_std_core_types__list _x_x730;
  kk_std_core_types__list _x_x731;
  {
    kk_std_core_types__list _x_0 = p2_0_10115.parts;
    kk_std_core_types__list_dup(_x_0, _ctx);
    kk_std_os_path__path_drop(p2_0_10115, _ctx);
    _x_x731 = _x_0; /*list<string>*/
  }
  _x_x730 = kk_std_core_list__lift_reverse_append_4948(kk_std_core_types__new_Nil(_ctx), _x_x731, _ctx); /*list<950>*/
  kk_std_core_types__list _x_x732;
  {
    kk_std_core_types__list _x_1 = p1_0_10114.parts;
    kk_std_core_types__list_dup(_x_1, _ctx);
    _x_x732 = _x_1; /*list<string>*/
  }
  _b_x167_168 = kk_std_os_path_push_parts(_x_x730, _x_x732, _ctx); /*list<string>*/
  kk_string_t _x_x733;
  {
    kk_string_t _x = p1_0_10114.root;
    kk_string_dup(_x, _ctx);
    kk_std_os_path__path_drop(p1_0_10114, _ctx);
    _x_x733 = _x; /*string*/
  }
  kk_std_core_types__list _x_x734;
  kk_std_core_types__optional _match_x439 = kk_std_core_types__new_Optional(kk_std_core_types__list_box(_b_x167_168, _ctx), _ctx); /*? 7*/;
  if (kk_std_core_types__is_Optional(_match_x439, _ctx)) {
    kk_box_t _box_x169 = _match_x439._cons._Optional.value;
    kk_std_core_types__list _uniq_parts_453 = kk_std_core_types__list_unbox(_box_x169, KK_BORROWED, _ctx);
    kk_std_core_types__list_dup(_uniq_parts_453, _ctx);
    kk_std_core_types__optional_drop(_match_x439, _ctx);
    _x_x734 = _uniq_parts_453; /*list<string>*/
  }
  else {
    kk_std_core_types__optional_drop(_match_x439, _ctx);
    _x_x734 = kk_std_core_types__new_Nil(_ctx); /*list<string>*/
  }
  return kk_std_os_path__new_Path(_x_x733, _x_x734, _ctx);
}
 
// Combine multiple paths using `(/)`.


// lift anonymous function
struct kk_std_os_path_combine_fun740__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_os_path_combine_fun740(kk_function_t _fself, kk_box_t _b_x176, kk_box_t _b_x177, kk_context_t* _ctx);
static kk_function_t kk_std_os_path_new_combine_fun740(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_path_combine_fun740, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_os_path_combine_fun740(kk_function_t _fself, kk_box_t _b_x176, kk_box_t _b_x177, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_os_path__path _x_x741;
  kk_std_os_path__path _x_x742 = kk_std_os_path__path_unbox(_b_x176, KK_OWNED, _ctx); /*std/os/path/path*/
  kk_std_os_path__path _x_x743 = kk_std_os_path__path_unbox(_b_x177, KK_OWNED, _ctx); /*std/os/path/path*/
  _x_x741 = kk_std_os_path__lp__fs__rp_(_x_x742, _x_x743, _ctx); /*std/os/path/path*/
  return kk_std_os_path__path_box(_x_x741, _ctx);
}

kk_std_os_path__path kk_std_os_path_combine(kk_std_core_types__list ps, kk_context_t* _ctx) { /* (ps : list<path>) -> path */ 
  if (kk_std_core_types__is_Nil(ps, _ctx)) {
    kk_string_t _x_x735;
    kk_std_core_types__optional _match_x438 = kk_std_core_types__new_None(_ctx); /*forall<a> ? a*/;
    if (kk_std_core_types__is_Optional(_match_x438, _ctx)) {
      kk_box_t _box_x170 = _match_x438._cons._Optional.value;
      kk_string_t _uniq_root_447 = kk_string_unbox(_box_x170);
      kk_string_dup(_uniq_root_447, _ctx);
      kk_std_core_types__optional_drop(_match_x438, _ctx);
      _x_x735 = _uniq_root_447; /*string*/
    }
    else {
      kk_std_core_types__optional_drop(_match_x438, _ctx);
      _x_x735 = kk_string_empty(); /*string*/
    }
    kk_std_core_types__list _x_x737;
    kk_std_core_types__optional _match_x437 = kk_std_core_types__new_None(_ctx); /*forall<a> ? a*/;
    if (kk_std_core_types__is_Optional(_match_x437, _ctx)) {
      kk_box_t _box_x171 = _match_x437._cons._Optional.value;
      kk_std_core_types__list _uniq_parts_453 = kk_std_core_types__list_unbox(_box_x171, KK_BORROWED, _ctx);
      kk_std_core_types__list_dup(_uniq_parts_453, _ctx);
      kk_std_core_types__optional_drop(_match_x437, _ctx);
      _x_x737 = _uniq_parts_453; /*list<string>*/
    }
    else {
      kk_std_core_types__optional_drop(_match_x437, _ctx);
      _x_x737 = kk_std_core_types__new_Nil(_ctx); /*list<string>*/
    }
    return kk_std_os_path__new_Path(_x_x735, _x_x737, _ctx);
  }
  {
    struct kk_std_core_types_Cons* _con_x738 = kk_std_core_types__as_Cons(ps, _ctx);
    kk_box_t _box_x172 = _con_x738->head;
    kk_std_os_path__path p = kk_std_os_path__path_unbox(_box_x172, KK_BORROWED, _ctx);
    kk_std_core_types__list pp = _con_x738->tail;
    if kk_likely(kk_datatype_ptr_is_unique(ps, _ctx)) {
      kk_std_os_path__path_dup(p, _ctx);
      kk_box_drop(_box_x172, _ctx);
      kk_datatype_ptr_free(ps, _ctx);
    }
    else {
      kk_std_os_path__path_dup(p, _ctx);
      kk_std_core_types__list_dup(pp, _ctx);
      kk_datatype_ptr_decref(ps, _ctx);
    }
    kk_box_t _x_x739 = kk_std_core_list_foldl(pp, kk_std_os_path__path_box(p, _ctx), kk_std_os_path_new_combine_fun740(_ctx), _ctx); /*1073*/
    return kk_std_os_path__path_unbox(_x_x739, KK_OWNED, _ctx);
  }
}
 
// Remove the directory and root and only keep the base name (file name) portion of the path.
// `nodir("foo/bar.ext".path) === "bar.ext"`

kk_std_os_path__path kk_std_os_path_nodir(kk_std_os_path__path p, kk_context_t* _ctx) { /* (p : path) -> path */ 
  kk_std_core_types__list _b_x181_182;
  kk_std_core_types__list _x_x744;
  {
    kk_std_core_types__list _x_1 = p.parts;
    kk_std_core_types__list_dup(_x_1, _ctx);
    _x_x744 = _x_1; /*list<string>*/
  }
  _b_x181_182 = kk_std_core_list_take(_x_x744, kk_integer_from_small(1), _ctx); /*list<string>*/
  kk_string_t _x_x745 = kk_string_empty(); /*string*/
  kk_std_core_types__list _x_x747;
  kk_std_core_types__optional _match_x436 = kk_std_core_types__new_Optional(kk_std_core_types__list_box(_b_x181_182, _ctx), _ctx); /*? 7*/;
  if (kk_std_core_types__is_Optional(_match_x436, _ctx)) {
    kk_box_t _box_x183 = _match_x436._cons._Optional.value;
    kk_std_core_types__list _uniq_parts_115 = kk_std_core_types__list_unbox(_box_x183, KK_BORROWED, _ctx);
    kk_std_os_path__path_drop(p, _ctx);
    kk_std_core_types__list_dup(_uniq_parts_115, _ctx);
    kk_std_core_types__optional_drop(_match_x436, _ctx);
    _x_x747 = _uniq_parts_115; /*list<string>*/
  }
  else {
    kk_std_core_types__optional_drop(_match_x436, _ctx);
    {
      kk_std_core_types__list _x_0 = p.parts;
      kk_std_core_types__list_dup(_x_0, _ctx);
      kk_std_os_path__path_drop(p, _ctx);
      _x_x747 = _x_0; /*list<string>*/
    }
  }
  return kk_std_os_path__new_Path(_x_x745, _x_x747, _ctx);
}
 
// Remove the basename and only keep the root and directory name portion of the path.
// `nobase("foo/bar.ext".path) == "foo")`

kk_std_os_path__path kk_std_os_path_nobase(kk_std_os_path__path p, kk_context_t* _ctx) { /* (p : path) -> path */ 
  kk_string_t _x_x748;
  kk_std_core_types__optional _match_x435 = kk_std_core_types__new_None(_ctx); /*forall<a> ? a*/;
  if (kk_std_core_types__is_Optional(_match_x435, _ctx)) {
    kk_box_t _box_x184 = _match_x435._cons._Optional.value;
    kk_string_t _uniq_root_108 = kk_string_unbox(_box_x184);
    kk_string_dup(_uniq_root_108, _ctx);
    kk_std_core_types__optional_drop(_match_x435, _ctx);
    _x_x748 = _uniq_root_108; /*string*/
  }
  else {
    kk_std_core_types__optional_drop(_match_x435, _ctx);
    {
      kk_string_t _x_0 = p.root;
      kk_string_dup(_x_0, _ctx);
      _x_x748 = _x_0; /*string*/
    }
  }
  kk_std_core_types__list _x_x749;
  {
    kk_std_core_types__list _x = p.parts;
    kk_std_core_types__list_dup(_x, _ctx);
    kk_std_os_path__path_drop(p, _ctx);
    if (kk_std_core_types__is_Cons(_x, _ctx)) {
      struct kk_std_core_types_Cons* _con_x750 = kk_std_core_types__as_Cons(_x, _ctx);
      kk_box_t _box_x185 = _con_x750->head;
      kk_std_core_types__list xx = _con_x750->tail;
      if kk_likely(kk_datatype_ptr_is_unique(_x, _ctx)) {
        kk_box_drop(_box_x185, _ctx);
        kk_datatype_ptr_free(_x, _ctx);
      }
      else {
        kk_std_core_types__list_dup(xx, _ctx);
        kk_datatype_ptr_decref(_x, _ctx);
      }
      _x_x749 = xx; /*list<string>*/
    }
    else {
      _x_x749 = kk_std_core_types__new_Nil(_ctx); /*list<string>*/
    }
  }
  return kk_std_os_path__new_Path(_x_x748, _x_x749, _ctx);
}
 
// Change the extension of a path.
// Only adds a dot if the extname does not already start with a dot.

kk_std_os_path__path kk_std_os_path_change_ext(kk_std_os_path__path p, kk_string_t extname_0, kk_context_t* _ctx) { /* (p : path, extname : string) -> path */ 
  kk_std_core_types__maybe _match_x434;
  kk_string_t _x_x751;
  {
    kk_std_core_types__list _x = p.parts;
    kk_std_core_types__list_dup(_x, _ctx);
    if (kk_std_core_types__is_Cons(_x, _ctx)) {
      struct kk_std_core_types_Cons* _con_x752 = kk_std_core_types__as_Cons(_x, _ctx);
      kk_box_t _box_x186 = _con_x752->head;
      kk_std_core_types__list _pat_0_0_0 = _con_x752->tail;
      kk_string_t x_0 = kk_string_unbox(_box_x186);
      if kk_likely(kk_datatype_ptr_is_unique(_x, _ctx)) {
        kk_std_core_types__list_drop(_pat_0_0_0, _ctx);
        kk_datatype_ptr_free(_x, _ctx);
      }
      else {
        kk_string_dup(x_0, _ctx);
        kk_datatype_ptr_decref(_x, _ctx);
      }
      _x_x751 = x_0; /*string*/
    }
    else {
      _x_x751 = kk_string_empty(); /*string*/
    }
  }
  kk_string_t _x_x754;
  kk_define_string_literal(, _s_x755, 1, ".", _ctx)
  _x_x754 = kk_string_dup(_s_x755, _ctx); /*string*/
  _match_x434 = kk_std_core_sslice_find_last(_x_x751, _x_x754, _ctx); /*maybe<sslice/sslice>*/
  if (kk_std_core_types__is_Just(_match_x434, _ctx)) {
    kk_box_t _box_x188 = _match_x434._cons.Just.value;
    kk_std_core_sslice__sslice slice = kk_std_core_sslice__sslice_unbox(_box_x188, KK_BORROWED, _ctx);
    kk_std_core_sslice__sslice_dup(slice, _ctx);
    kk_std_core_types__maybe_drop(_match_x434, _ctx);
    kk_string_t stemname_0;
    kk_std_core_sslice__sslice _x_x756;
    {
      kk_string_t s = slice.str;
      kk_integer_t start = slice.start;
      kk_string_dup(s, _ctx);
      kk_integer_dup(start, _ctx);
      _x_x756 = kk_std_core_sslice__new_Sslice(s, kk_integer_from_small(0), start, _ctx); /*sslice/sslice*/
    }
    stemname_0 = kk_std_core_sslice_string(_x_x756, _ctx); /*string*/
    kk_string_t _pat_1_2;
    kk_std_core_sslice__sslice _x_x757 = kk_std_core_sslice_after(slice, _ctx); /*sslice/sslice*/
    _pat_1_2 = kk_std_core_sslice_string(_x_x757, _ctx); /*string*/
    kk_string_drop(_pat_1_2, _ctx);
    kk_std_core_types__maybe maybe_10078;
    kk_string_t _x_x758 = kk_string_dup(extname_0, _ctx); /*string*/
    kk_string_t _x_x759;
    kk_define_string_literal(, _s_x760, 1, ".", _ctx)
    _x_x759 = kk_string_dup(_s_x760, _ctx); /*string*/
    maybe_10078 = kk_std_core_sslice_starts_with(_x_x758, _x_x759, _ctx); /*maybe<sslice/sslice>*/
    kk_string_t newext;
    if (kk_std_core_types__is_Just(maybe_10078, _ctx)) {
      kk_box_t _box_x189 = maybe_10078._cons.Just.value;
      kk_std_core_types__maybe_drop(maybe_10078, _ctx);
      newext = extname_0; /*string*/
    }
    else {
      kk_string_t _x_x761;
      kk_define_string_literal(, _s_x762, 1, ".", _ctx)
      _x_x761 = kk_string_dup(_s_x762, _ctx); /*string*/
      newext = kk_std_core_types__lp__plus__plus__rp_(_x_x761, extname_0, _ctx); /*string*/
    }
    kk_string_t s_0_10118 = kk_std_core_types__lp__plus__plus__rp_(stemname_0, newext, _ctx); /*string*/;
    kk_vector_t v_10013;
    kk_string_t _x_x763;
    kk_define_string_literal(, _s_x764, 1, "/", _ctx)
    _x_x763 = kk_string_dup(_s_x764, _ctx); /*string*/
    v_10013 = kk_string_splitv(s_0_10118,_x_x763,kk_context()); /*vector<string>*/
    kk_std_core_types__list parts;
    kk_std_core_types__list _x_x765 = kk_std_core_vector_vlist(v_10013, kk_std_core_types__new_None(_ctx), _ctx); /*list<795>*/
    kk_std_core_types__list _x_x766;
    {
      kk_std_core_types__list _x_0 = p.parts;
      kk_std_core_types__list_dup(_x_0, _ctx);
      if (kk_std_core_types__is_Cons(_x_0, _ctx)) {
        struct kk_std_core_types_Cons* _con_x767 = kk_std_core_types__as_Cons(_x_0, _ctx);
        kk_box_t _box_x190 = _con_x767->head;
        kk_std_core_types__list xx = _con_x767->tail;
        if kk_likely(kk_datatype_ptr_is_unique(_x_0, _ctx)) {
          kk_box_drop(_box_x190, _ctx);
          kk_datatype_ptr_free(_x_0, _ctx);
        }
        else {
          kk_std_core_types__list_dup(xx, _ctx);
          kk_datatype_ptr_decref(_x_0, _ctx);
        }
        _x_x766 = xx; /*list<string>*/
      }
      else {
        _x_x766 = kk_std_core_types__new_Nil(_ctx); /*list<string>*/
      }
    }
    parts = kk_std_os_path_push_parts(_x_x765, _x_x766, _ctx); /*list<string>*/
    kk_string_t _x_x768;
    {
      kk_string_t _x_0_0 = p.root;
      kk_string_dup(_x_0_0, _ctx);
      kk_std_os_path__path_drop(p, _ctx);
      _x_x768 = _x_0_0; /*string*/
    }
    return kk_std_os_path__new_Path(_x_x768, parts, _ctx);
  }
  {
    kk_std_core_types__maybe maybe_10078_0;
    kk_string_t _x_x769 = kk_string_dup(extname_0, _ctx); /*string*/
    kk_string_t _x_x770;
    kk_define_string_literal(, _s_x771, 1, ".", _ctx)
    _x_x770 = kk_string_dup(_s_x771, _ctx); /*string*/
    maybe_10078_0 = kk_std_core_sslice_starts_with(_x_x769, _x_x770, _ctx); /*maybe<sslice/sslice>*/
    kk_string_t newext_0;
    if (kk_std_core_types__is_Just(maybe_10078_0, _ctx)) {
      kk_box_t _box_x191 = maybe_10078_0._cons.Just.value;
      kk_std_core_types__maybe_drop(maybe_10078_0, _ctx);
      newext_0 = extname_0; /*string*/
    }
    else {
      kk_string_t _x_x772;
      kk_define_string_literal(, _s_x773, 1, ".", _ctx)
      _x_x772 = kk_string_dup(_s_x773, _ctx); /*string*/
      newext_0 = kk_std_core_types__lp__plus__plus__rp_(_x_x772, extname_0, _ctx); /*string*/
    }
    kk_string_t s_0_10118_0;
    kk_string_t _x_x774;
    {
      kk_std_core_types__list _x_1 = p.parts;
      kk_std_core_types__list_dup(_x_1, _ctx);
      if (kk_std_core_types__is_Cons(_x_1, _ctx)) {
        struct kk_std_core_types_Cons* _con_x775 = kk_std_core_types__as_Cons(_x_1, _ctx);
        kk_box_t _box_x192 = _con_x775->head;
        kk_std_core_types__list _pat_0_0_0_0 = _con_x775->tail;
        kk_string_t x_0_0 = kk_string_unbox(_box_x192);
        if kk_likely(kk_datatype_ptr_is_unique(_x_1, _ctx)) {
          kk_std_core_types__list_drop(_pat_0_0_0_0, _ctx);
          kk_datatype_ptr_free(_x_1, _ctx);
        }
        else {
          kk_string_dup(x_0_0, _ctx);
          kk_datatype_ptr_decref(_x_1, _ctx);
        }
        _x_x774 = x_0_0; /*string*/
      }
      else {
        _x_x774 = kk_string_empty(); /*string*/
      }
    }
    s_0_10118_0 = kk_std_core_types__lp__plus__plus__rp_(_x_x774, newext_0, _ctx); /*string*/
    kk_vector_t v_10013_0;
    kk_string_t _x_x777;
    kk_define_string_literal(, _s_x778, 1, "/", _ctx)
    _x_x777 = kk_string_dup(_s_x778, _ctx); /*string*/
    v_10013_0 = kk_string_splitv(s_0_10118_0,_x_x777,kk_context()); /*vector<string>*/
    kk_std_core_types__list parts_0;
    kk_std_core_types__list _x_x779 = kk_std_core_vector_vlist(v_10013_0, kk_std_core_types__new_None(_ctx), _ctx); /*list<795>*/
    kk_std_core_types__list _x_x780;
    {
      kk_std_core_types__list _x_0_1 = p.parts;
      kk_std_core_types__list_dup(_x_0_1, _ctx);
      if (kk_std_core_types__is_Cons(_x_0_1, _ctx)) {
        struct kk_std_core_types_Cons* _con_x781 = kk_std_core_types__as_Cons(_x_0_1, _ctx);
        kk_box_t _box_x194 = _con_x781->head;
        kk_std_core_types__list xx_0 = _con_x781->tail;
        if kk_likely(kk_datatype_ptr_is_unique(_x_0_1, _ctx)) {
          kk_box_drop(_box_x194, _ctx);
          kk_datatype_ptr_free(_x_0_1, _ctx);
        }
        else {
          kk_std_core_types__list_dup(xx_0, _ctx);
          kk_datatype_ptr_decref(_x_0_1, _ctx);
        }
        _x_x780 = xx_0; /*list<string>*/
      }
      else {
        _x_x780 = kk_std_core_types__new_Nil(_ctx); /*list<string>*/
      }
    }
    parts_0 = kk_std_os_path_push_parts(_x_x779, _x_x780, _ctx); /*list<string>*/
    kk_string_t _x_x782;
    {
      kk_string_t _x_0_0_0 = p.root;
      kk_string_dup(_x_0_0_0, _ctx);
      kk_std_os_path__path_drop(p, _ctx);
      _x_x782 = _x_0_0_0; /*string*/
    }
    return kk_std_os_path__new_Path(_x_x782, parts_0, _ctx);
  }
}
 
// If a path has no extension, set it to the provided one.

kk_std_os_path__path kk_std_os_path_default_ext(kk_std_os_path__path p, kk_string_t newext, kk_context_t* _ctx) { /* (p : path, newext : string) -> path */ 
  kk_std_core_types__tuple2 tuple2_10082;
  kk_std_core_types__maybe _match_x433;
  kk_string_t _x_x785;
  {
    kk_std_core_types__list _x = p.parts;
    kk_std_core_types__list_dup(_x, _ctx);
    if (kk_std_core_types__is_Cons(_x, _ctx)) {
      struct kk_std_core_types_Cons* _con_x786 = kk_std_core_types__as_Cons(_x, _ctx);
      kk_box_t _box_x195 = _con_x786->head;
      kk_std_core_types__list _pat_0_0_0 = _con_x786->tail;
      kk_string_t x_0 = kk_string_unbox(_box_x195);
      if kk_likely(kk_datatype_ptr_is_unique(_x, _ctx)) {
        kk_std_core_types__list_drop(_pat_0_0_0, _ctx);
        kk_datatype_ptr_free(_x, _ctx);
      }
      else {
        kk_string_dup(x_0, _ctx);
        kk_datatype_ptr_decref(_x, _ctx);
      }
      _x_x785 = x_0; /*string*/
    }
    else {
      _x_x785 = kk_string_empty(); /*string*/
    }
  }
  kk_string_t _x_x788;
  kk_define_string_literal(, _s_x789, 1, ".", _ctx)
  _x_x788 = kk_string_dup(_s_x789, _ctx); /*string*/
  _match_x433 = kk_std_core_sslice_find_last(_x_x785, _x_x788, _ctx); /*maybe<sslice/sslice>*/
  if (kk_std_core_types__is_Just(_match_x433, _ctx)) {
    kk_box_t _box_x197 = _match_x433._cons.Just.value;
    kk_std_core_sslice__sslice slice = kk_std_core_sslice__sslice_unbox(_box_x197, KK_BORROWED, _ctx);
    kk_std_core_sslice__sslice_dup(slice, _ctx);
    kk_std_core_types__maybe_drop(_match_x433, _ctx);
    kk_string_t _b_x198_204;
    kk_std_core_sslice__sslice _x_x790;
    {
      kk_string_t s = slice.str;
      kk_integer_t start = slice.start;
      kk_string_dup(s, _ctx);
      kk_integer_dup(start, _ctx);
      _x_x790 = kk_std_core_sslice__new_Sslice(s, kk_integer_from_small(0), start, _ctx); /*sslice/sslice*/
    }
    _b_x198_204 = kk_std_core_sslice_string(_x_x790, _ctx); /*string*/
    kk_string_t _b_x199_205;
    kk_std_core_sslice__sslice _x_x791 = kk_std_core_sslice_after(slice, _ctx); /*sslice/sslice*/
    _b_x199_205 = kk_std_core_sslice_string(_x_x791, _ctx); /*string*/
    tuple2_10082 = kk_std_core_types__new_Tuple2(kk_string_box(_b_x198_204), kk_string_box(_b_x199_205), _ctx); /*(string, string)*/
  }
  else {
    kk_box_t _x_x792;
    kk_string_t _x_x793;
    {
      kk_std_core_types__list _x_0 = p.parts;
      kk_std_core_types__list_dup(_x_0, _ctx);
      if (kk_std_core_types__is_Cons(_x_0, _ctx)) {
        struct kk_std_core_types_Cons* _con_x794 = kk_std_core_types__as_Cons(_x_0, _ctx);
        kk_box_t _box_x200 = _con_x794->head;
        kk_std_core_types__list _pat_0_0_0_0 = _con_x794->tail;
        kk_string_t x_0_0 = kk_string_unbox(_box_x200);
        if kk_likely(kk_datatype_ptr_is_unique(_x_0, _ctx)) {
          kk_std_core_types__list_drop(_pat_0_0_0_0, _ctx);
          kk_datatype_ptr_free(_x_0, _ctx);
        }
        else {
          kk_string_dup(x_0_0, _ctx);
          kk_datatype_ptr_decref(_x_0, _ctx);
        }
        _x_x793 = x_0_0; /*string*/
      }
      else {
        _x_x793 = kk_string_empty(); /*string*/
      }
    }
    _x_x792 = kk_string_box(_x_x793); /*1844*/
    kk_box_t _x_x796;
    kk_string_t _x_x797 = kk_string_empty(); /*string*/
    _x_x796 = kk_string_box(_x_x797); /*1845*/
    tuple2_10082 = kk_std_core_types__new_Tuple2(_x_x792, _x_x796, _ctx); /*(string, string)*/
  }
  bool _match_x432;
  kk_string_t _x_x799;
  {
    kk_box_t _box_x208 = tuple2_10082.fst;
    kk_box_t _box_x209 = tuple2_10082.snd;
    kk_string_t _x_0_0 = kk_string_unbox(_box_x209);
    kk_string_dup(_x_0_0, _ctx);
    kk_std_core_types__tuple2_drop(tuple2_10082, _ctx);
    _x_x799 = _x_0_0; /*string*/
  }
  kk_string_t _x_x800 = kk_string_empty(); /*string*/
  _match_x432 = kk_string_is_eq(_x_x799,_x_x800,kk_context()); /*bool*/
  if (_match_x432) {
    return kk_std_os_path_change_ext(p, newext, _ctx);
  }
  {
    kk_string_drop(newext, _ctx);
    return p;
  }
}
 
// Change the base name of a path

kk_std_os_path__path kk_std_os_path_change_base(kk_std_os_path__path p, kk_string_t basename_0, kk_context_t* _ctx) { /* (p : path, basename : string) -> path */ 
  kk_std_os_path__path q;
  kk_string_t _x_x802;
  kk_std_core_types__optional _match_x431 = kk_std_core_types__new_None(_ctx); /*forall<a> ? a*/;
  if (kk_std_core_types__is_Optional(_match_x431, _ctx)) {
    kk_box_t _box_x210 = _match_x431._cons._Optional.value;
    kk_string_t _uniq_root_108 = kk_string_unbox(_box_x210);
    kk_string_dup(_uniq_root_108, _ctx);
    kk_std_core_types__optional_drop(_match_x431, _ctx);
    _x_x802 = _uniq_root_108; /*string*/
  }
  else {
    kk_std_core_types__optional_drop(_match_x431, _ctx);
    {
      kk_string_t _x_0 = p.root;
      kk_string_dup(_x_0, _ctx);
      _x_x802 = _x_0; /*string*/
    }
  }
  kk_std_core_types__list _x_x803;
  {
    kk_std_core_types__list _x = p.parts;
    kk_std_core_types__list_dup(_x, _ctx);
    kk_std_os_path__path_drop(p, _ctx);
    if (kk_std_core_types__is_Cons(_x, _ctx)) {
      struct kk_std_core_types_Cons* _con_x804 = kk_std_core_types__as_Cons(_x, _ctx);
      kk_box_t _box_x211 = _con_x804->head;
      kk_std_core_types__list xx = _con_x804->tail;
      if kk_likely(kk_datatype_ptr_is_unique(_x, _ctx)) {
        kk_box_drop(_box_x211, _ctx);
        kk_datatype_ptr_free(_x, _ctx);
      }
      else {
        kk_std_core_types__list_dup(xx, _ctx);
        kk_datatype_ptr_decref(_x, _ctx);
      }
      _x_x803 = xx; /*list<string>*/
    }
    else {
      _x_x803 = kk_std_core_types__new_Nil(_ctx); /*list<string>*/
    }
  }
  q = kk_std_os_path__new_Path(_x_x802, _x_x803, _ctx); /*std/os/path/path*/
  kk_vector_t v_10013;
  kk_string_t _x_x805;
  kk_define_string_literal(, _s_x806, 1, "/", _ctx)
  _x_x805 = kk_string_dup(_s_x806, _ctx); /*string*/
  v_10013 = kk_string_splitv(basename_0,_x_x805,kk_context()); /*vector<string>*/
  kk_std_core_types__list parts;
  kk_std_core_types__list _x_x807 = kk_std_core_vector_vlist(v_10013, kk_std_core_types__new_None(_ctx), _ctx); /*list<795>*/
  kk_std_core_types__list _x_x808;
  {
    kk_std_core_types__list _x_0_0 = q.parts;
    kk_std_core_types__list_dup(_x_0_0, _ctx);
    _x_x808 = _x_0_0; /*list<string>*/
  }
  parts = kk_std_os_path_push_parts(_x_x807, _x_x808, _ctx); /*list<string>*/
  kk_string_t _x_x809;
  {
    kk_string_t _x_1 = q.root;
    kk_string_dup(_x_1, _ctx);
    kk_std_os_path__path_drop(q, _ctx);
    _x_x809 = _x_1; /*string*/
  }
  return kk_std_os_path__new_Path(_x_x809, parts, _ctx);
}
 
// Change the stem name of a path

kk_std_os_path__path kk_std_os_path_change_stem(kk_std_os_path__path p, kk_string_t stemname_0, kk_context_t* _ctx) { /* (p : path, stemname : string) -> path */ 
  kk_std_core_types__tuple2 tuple2_10086;
  kk_std_core_types__maybe _match_x430;
  kk_string_t _x_x810;
  {
    kk_std_core_types__list _x = p.parts;
    kk_std_core_types__list_dup(_x, _ctx);
    if (kk_std_core_types__is_Cons(_x, _ctx)) {
      struct kk_std_core_types_Cons* _con_x811 = kk_std_core_types__as_Cons(_x, _ctx);
      kk_box_t _box_x212 = _con_x811->head;
      kk_std_core_types__list _pat_0_0_0 = _con_x811->tail;
      kk_string_t x_0 = kk_string_unbox(_box_x212);
      if kk_likely(kk_datatype_ptr_is_unique(_x, _ctx)) {
        kk_std_core_types__list_drop(_pat_0_0_0, _ctx);
        kk_datatype_ptr_free(_x, _ctx);
      }
      else {
        kk_string_dup(x_0, _ctx);
        kk_datatype_ptr_decref(_x, _ctx);
      }
      _x_x810 = x_0; /*string*/
    }
    else {
      _x_x810 = kk_string_empty(); /*string*/
    }
  }
  kk_string_t _x_x813;
  kk_define_string_literal(, _s_x814, 1, ".", _ctx)
  _x_x813 = kk_string_dup(_s_x814, _ctx); /*string*/
  _match_x430 = kk_std_core_sslice_find_last(_x_x810, _x_x813, _ctx); /*maybe<sslice/sslice>*/
  if (kk_std_core_types__is_Just(_match_x430, _ctx)) {
    kk_box_t _box_x214 = _match_x430._cons.Just.value;
    kk_std_core_sslice__sslice slice = kk_std_core_sslice__sslice_unbox(_box_x214, KK_BORROWED, _ctx);
    kk_std_core_sslice__sslice_dup(slice, _ctx);
    kk_std_core_types__maybe_drop(_match_x430, _ctx);
    kk_string_t _b_x215_221;
    kk_std_core_sslice__sslice _x_x815;
    {
      kk_string_t s = slice.str;
      kk_integer_t start = slice.start;
      kk_string_dup(s, _ctx);
      kk_integer_dup(start, _ctx);
      _x_x815 = kk_std_core_sslice__new_Sslice(s, kk_integer_from_small(0), start, _ctx); /*sslice/sslice*/
    }
    _b_x215_221 = kk_std_core_sslice_string(_x_x815, _ctx); /*string*/
    kk_string_t _b_x216_222;
    kk_std_core_sslice__sslice _x_x816 = kk_std_core_sslice_after(slice, _ctx); /*sslice/sslice*/
    _b_x216_222 = kk_std_core_sslice_string(_x_x816, _ctx); /*string*/
    tuple2_10086 = kk_std_core_types__new_Tuple2(kk_string_box(_b_x215_221), kk_string_box(_b_x216_222), _ctx); /*(string, string)*/
  }
  else {
    kk_box_t _x_x817;
    kk_string_t _x_x818;
    {
      kk_std_core_types__list _x_0 = p.parts;
      kk_std_core_types__list_dup(_x_0, _ctx);
      if (kk_std_core_types__is_Cons(_x_0, _ctx)) {
        struct kk_std_core_types_Cons* _con_x819 = kk_std_core_types__as_Cons(_x_0, _ctx);
        kk_box_t _box_x217 = _con_x819->head;
        kk_std_core_types__list _pat_0_0_0_0 = _con_x819->tail;
        kk_string_t x_0_0 = kk_string_unbox(_box_x217);
        if kk_likely(kk_datatype_ptr_is_unique(_x_0, _ctx)) {
          kk_std_core_types__list_drop(_pat_0_0_0_0, _ctx);
          kk_datatype_ptr_free(_x_0, _ctx);
        }
        else {
          kk_string_dup(x_0_0, _ctx);
          kk_datatype_ptr_decref(_x_0, _ctx);
        }
        _x_x818 = x_0_0; /*string*/
      }
      else {
        _x_x818 = kk_string_empty(); /*string*/
      }
    }
    _x_x817 = kk_string_box(_x_x818); /*1844*/
    kk_box_t _x_x821;
    kk_string_t _x_x822 = kk_string_empty(); /*string*/
    _x_x821 = kk_string_box(_x_x822); /*1845*/
    tuple2_10086 = kk_std_core_types__new_Tuple2(_x_x817, _x_x821, _ctx); /*(string, string)*/
  }
  kk_string_t basename_0_10088;
  kk_string_t _x_x824;
  bool _match_x429;
  kk_string_t _x_x825;
  {
    kk_box_t _box_x225 = tuple2_10086.fst;
    kk_box_t _box_x226 = tuple2_10086.snd;
    kk_string_t _x_0_0 = kk_string_unbox(_box_x226);
    kk_string_dup(_x_0_0, _ctx);
    _x_x825 = _x_0_0; /*string*/
  }
  kk_string_t _x_x826 = kk_string_empty(); /*string*/
  _match_x429 = kk_string_is_eq(_x_x825,_x_x826,kk_context()); /*bool*/
  if (_match_x429) {
    kk_std_core_types__tuple2_drop(tuple2_10086, _ctx);
    _x_x824 = kk_string_empty(); /*string*/
  }
  else {
    kk_string_t _x_x829;
    kk_define_string_literal(, _s_x830, 1, ".", _ctx)
    _x_x829 = kk_string_dup(_s_x830, _ctx); /*string*/
    kk_string_t _x_x831;
    {
      kk_box_t _box_x227 = tuple2_10086.fst;
      kk_box_t _box_x228 = tuple2_10086.snd;
      kk_string_t _x_0_1 = kk_string_unbox(_box_x228);
      kk_string_dup(_x_0_1, _ctx);
      kk_std_core_types__tuple2_drop(tuple2_10086, _ctx);
      _x_x831 = _x_0_1; /*string*/
    }
    _x_x824 = kk_std_core_types__lp__plus__plus__rp_(_x_x829, _x_x831, _ctx); /*string*/
  }
  basename_0_10088 = kk_std_core_types__lp__plus__plus__rp_(stemname_0, _x_x824, _ctx); /*string*/
  kk_std_os_path__path q;
  kk_string_t _x_x832;
  kk_std_core_types__optional _match_x428 = kk_std_core_types__new_None(_ctx); /*forall<a> ? a*/;
  if (kk_std_core_types__is_Optional(_match_x428, _ctx)) {
    kk_box_t _box_x229 = _match_x428._cons._Optional.value;
    kk_string_t _uniq_root_108 = kk_string_unbox(_box_x229);
    kk_string_dup(_uniq_root_108, _ctx);
    kk_std_core_types__optional_drop(_match_x428, _ctx);
    _x_x832 = _uniq_root_108; /*string*/
  }
  else {
    kk_std_core_types__optional_drop(_match_x428, _ctx);
    {
      kk_string_t _x_0_0_0 = p.root;
      kk_string_dup(_x_0_0_0, _ctx);
      _x_x832 = _x_0_0_0; /*string*/
    }
  }
  kk_std_core_types__list _x_x833;
  {
    kk_std_core_types__list _x_1 = p.parts;
    kk_std_core_types__list_dup(_x_1, _ctx);
    kk_std_os_path__path_drop(p, _ctx);
    if (kk_std_core_types__is_Cons(_x_1, _ctx)) {
      struct kk_std_core_types_Cons* _con_x834 = kk_std_core_types__as_Cons(_x_1, _ctx);
      kk_box_t _box_x230 = _con_x834->head;
      kk_std_core_types__list xx = _con_x834->tail;
      if kk_likely(kk_datatype_ptr_is_unique(_x_1, _ctx)) {
        kk_box_drop(_box_x230, _ctx);
        kk_datatype_ptr_free(_x_1, _ctx);
      }
      else {
        kk_std_core_types__list_dup(xx, _ctx);
        kk_datatype_ptr_decref(_x_1, _ctx);
      }
      _x_x833 = xx; /*list<string>*/
    }
    else {
      _x_x833 = kk_std_core_types__new_Nil(_ctx); /*list<string>*/
    }
  }
  q = kk_std_os_path__new_Path(_x_x832, _x_x833, _ctx); /*std/os/path/path*/
  kk_vector_t v_10013;
  kk_string_t _x_x835;
  kk_define_string_literal(, _s_x836, 1, "/", _ctx)
  _x_x835 = kk_string_dup(_s_x836, _ctx); /*string*/
  v_10013 = kk_string_splitv(basename_0_10088,_x_x835,kk_context()); /*vector<string>*/
  kk_std_core_types__list parts;
  kk_std_core_types__list _x_x837 = kk_std_core_vector_vlist(v_10013, kk_std_core_types__new_None(_ctx), _ctx); /*list<795>*/
  kk_std_core_types__list _x_x838;
  {
    kk_std_core_types__list _x_1_0 = q.parts;
    kk_std_core_types__list_dup(_x_1_0, _ctx);
    _x_x838 = _x_1_0; /*list<string>*/
  }
  parts = kk_std_os_path_push_parts(_x_x837, _x_x838, _ctx); /*list<string>*/
  kk_string_t _x_x839;
  {
    kk_string_t _x_0_1_0 = q.root;
    kk_string_dup(_x_0_1_0, _ctx);
    kk_std_os_path__path_drop(q, _ctx);
    _x_x839 = _x_0_1_0; /*string*/
  }
  return kk_std_os_path__new_Path(_x_x839, parts, _ctx);
}
 
// Return the last directory component name (or the empty string).
// `"c:/foo/bar/tst.txt".path.parentname === "bar"

kk_string_t kk_std_os_path_parentname(kk_std_os_path__path p, kk_context_t* _ctx) { /* (p : path) -> string */ 
  {
    kk_std_core_types__list _x = p.parts;
    kk_std_core_types__list_dup(_x, _ctx);
    kk_std_os_path__path_drop(p, _ctx);
    kk_std_core_types__list _match_x427;
    if (kk_std_core_types__is_Cons(_x, _ctx)) {
      struct kk_std_core_types_Cons* _con_x841 = kk_std_core_types__as_Cons(_x, _ctx);
      kk_box_t _box_x231 = _con_x841->head;
      kk_std_core_types__list xx = _con_x841->tail;
      if kk_likely(kk_datatype_ptr_is_unique(_x, _ctx)) {
        kk_box_drop(_box_x231, _ctx);
        kk_datatype_ptr_free(_x, _ctx);
      }
      else {
        kk_std_core_types__list_dup(xx, _ctx);
        kk_datatype_ptr_decref(_x, _ctx);
      }
      _match_x427 = xx; /*list<string>*/
    }
    else {
      _match_x427 = kk_std_core_types__new_Nil(_ctx); /*list<string>*/
    }
    if (kk_std_core_types__is_Cons(_match_x427, _ctx)) {
      struct kk_std_core_types_Cons* _con_x842 = kk_std_core_types__as_Cons(_match_x427, _ctx);
      kk_box_t _box_x232 = _con_x842->head;
      kk_std_core_types__list _pat_0_0 = _con_x842->tail;
      kk_string_t x_0 = kk_string_unbox(_box_x232);
      if kk_likely(kk_datatype_ptr_is_unique(_match_x427, _ctx)) {
        kk_std_core_types__list_drop(_pat_0_0, _ctx);
        kk_datatype_ptr_free(_match_x427, _ctx);
      }
      else {
        kk_string_dup(x_0, _ctx);
        kk_datatype_ptr_decref(_match_x427, _ctx);
      }
      return x_0;
    }
    {
      return kk_string_empty();
    }
  }
}

kk_string_t kk_std_os_path_xrealpath(kk_string_t p, kk_context_t* _ctx) { /* (p : string) -> io string */ 
  return kk_os_realpath(p,kk_context());
}
 
// monadic lift


// lift anonymous function
struct kk_std_os_path_string_fs__mlift_realpath_10196_fun845__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_os_path_string_fs__mlift_realpath_10196_fun845(kk_function_t _fself, kk_box_t _b_x236, kk_context_t* _ctx);
static kk_function_t kk_std_os_path_string_fs__new_mlift_realpath_10196_fun845(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_path_string_fs__mlift_realpath_10196_fun845, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_os_path_string_fs__mlift_realpath_10196_fun845(kk_function_t _fself, kk_box_t _b_x236, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_os_path__path _x_x846;
  kk_string_t _x_x847 = kk_string_unbox(_b_x236); /*string*/
  _x_x846 = kk_std_os_path_path(_x_x847, _ctx); /*std/os/path/path*/
  return kk_std_os_path__path_box(_x_x846, _ctx);
}

kk_std_os_path__path kk_std_os_path_string_fs__mlift_realpath_10196(kk_string_t _y_x10150, kk_context_t* _ctx) { /* (string) -> io path */ 
  kk_box_t _x_x844 = kk_std_core_hnd__open_none1(kk_std_os_path_string_fs__new_mlift_realpath_10196_fun845(_ctx), kk_string_box(_y_x10150), _ctx); /*8580*/
  return kk_std_os_path__path_unbox(_x_x844, KK_OWNED, _ctx);
}
 
// Convert a path to the absolute path on the file system.
// The overload on a plain string is necessary as it allows
// for unnormalized paths with `".."` parts. For example
// `"/foo/symlink/../test.txt"` may resolve to `"/bar/test.txt"` if
// ``symlink`` is a symbolic link to a sub directory of `"/bar"`.


// lift anonymous function
struct kk_std_os_path_string_fs_realpath_fun849__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_os_path_string_fs_realpath_fun849(kk_function_t _fself, kk_box_t _b_x240, kk_context_t* _ctx);
static kk_function_t kk_std_os_path_string_fs_new_realpath_fun849(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_path_string_fs_realpath_fun849, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_os_path_string_fs_realpath_fun849(kk_function_t _fself, kk_box_t _b_x240, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_os_path__path _x_x850;
  kk_string_t _x_x851 = kk_string_unbox(_b_x240); /*string*/
  _x_x850 = kk_std_os_path_string_fs__mlift_realpath_10196(_x_x851, _ctx); /*std/os/path/path*/
  return kk_std_os_path__path_box(_x_x850, _ctx);
}


// lift anonymous function
struct kk_std_os_path_string_fs_realpath_fun852__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_os_path_string_fs_realpath_fun852(kk_function_t _fself, kk_box_t _b_x243, kk_context_t* _ctx);
static kk_function_t kk_std_os_path_string_fs_new_realpath_fun852(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_path_string_fs_realpath_fun852, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_os_path_string_fs_realpath_fun852(kk_function_t _fself, kk_box_t _b_x243, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_os_path__path _x_x853;
  kk_string_t _x_x854 = kk_string_unbox(_b_x243); /*string*/
  _x_x853 = kk_std_os_path_path(_x_x854, _ctx); /*std/os/path/path*/
  return kk_std_os_path__path_box(_x_x853, _ctx);
}

kk_std_os_path__path kk_std_os_path_string_fs_realpath(kk_string_t s, kk_context_t* _ctx) { /* (s : string) -> io path */ 
  kk_string_t x_10224 = kk_std_os_path_xrealpath(s, _ctx); /*string*/;
  kk_box_t _x_x848;
  if (kk_yielding(kk_context())) {
    kk_string_drop(x_10224, _ctx);
    _x_x848 = kk_std_core_hnd_yield_extend(kk_std_os_path_string_fs_new_realpath_fun849(_ctx), _ctx); /*2978*/
  }
  else {
    _x_x848 = kk_std_core_hnd__open_none1(kk_std_os_path_string_fs_new_realpath_fun852(_ctx), kk_string_box(x_10224), _ctx); /*2978*/
  }
  return kk_std_os_path__path_unbox(_x_x848, KK_OWNED, _ctx);
}
 
// monadic lift


// lift anonymous function
struct kk_std_os_path__mlift_realpath_10197_fun856__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_os_path__mlift_realpath_10197_fun856(kk_function_t _fself, kk_box_t _b_x249, kk_context_t* _ctx);
static kk_function_t kk_std_os_path__new_mlift_realpath_10197_fun856(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_path__mlift_realpath_10197_fun856, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_os_path__mlift_realpath_10197_fun856(kk_function_t _fself, kk_box_t _b_x249, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_os_path__path _x_x857;
  kk_string_t _x_x858 = kk_string_unbox(_b_x249); /*string*/
  _x_x857 = kk_std_os_path_path(_x_x858, _ctx); /*std/os/path/path*/
  return kk_std_os_path__path_box(_x_x857, _ctx);
}

kk_std_os_path__path kk_std_os_path__mlift_realpath_10197(kk_string_t _y_x10151, kk_context_t* _ctx) { /* (string) -> io path */ 
  kk_box_t _x_x855 = kk_std_core_hnd__open_none1(kk_std_os_path__new_mlift_realpath_10197_fun856(_ctx), kk_string_box(_y_x10151), _ctx); /*8580*/
  return kk_std_os_path__path_unbox(_x_x855, KK_OWNED, _ctx);
}
 
// Convert a path to the absolute path on the file system.
// The path is not required to exist on disk. However, if it
// exists any permissions and symbolic links are resolved fully.
// `".".realpath` (to get the current working directory)
// `"/foo".realpath` (to resolve the full root, like `"c:/foo"` on windows)


// lift anonymous function
struct kk_std_os_path_realpath_fun860__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_os_path_realpath_fun860(kk_function_t _fself, kk_box_t _b_x254, kk_context_t* _ctx);
static kk_function_t kk_std_os_path_new_realpath_fun860(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_path_realpath_fun860, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_os_path_realpath_fun860(kk_function_t _fself, kk_box_t _b_x254, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_string_t _x_x861;
  kk_std_os_path__path _x_x862 = kk_std_os_path__path_unbox(_b_x254, KK_OWNED, _ctx); /*std/os/path/path*/
  _x_x861 = kk_std_os_path_string(_x_x862, _ctx); /*string*/
  return kk_string_box(_x_x861);
}


// lift anonymous function
struct kk_std_os_path_realpath_fun864__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_os_path_realpath_fun864(kk_function_t _fself, kk_box_t _b_x258, kk_context_t* _ctx);
static kk_function_t kk_std_os_path_new_realpath_fun864(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_path_realpath_fun864, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_os_path_realpath_fun864(kk_function_t _fself, kk_box_t _b_x258, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_os_path__path _x_x865;
  kk_string_t _x_x866 = kk_string_unbox(_b_x258); /*string*/
  _x_x865 = kk_std_os_path__mlift_realpath_10197(_x_x866, _ctx); /*std/os/path/path*/
  return kk_std_os_path__path_box(_x_x865, _ctx);
}


// lift anonymous function
struct kk_std_os_path_realpath_fun867__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_os_path_realpath_fun867(kk_function_t _fself, kk_box_t _b_x261, kk_context_t* _ctx);
static kk_function_t kk_std_os_path_new_realpath_fun867(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_path_realpath_fun867, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_os_path_realpath_fun867(kk_function_t _fself, kk_box_t _b_x261, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_os_path__path _x_x868;
  kk_string_t _x_x869 = kk_string_unbox(_b_x261); /*string*/
  _x_x868 = kk_std_os_path_path(_x_x869, _ctx); /*std/os/path/path*/
  return kk_std_os_path__path_box(_x_x868, _ctx);
}

kk_std_os_path__path kk_std_os_path_realpath(kk_std_os_path__path p, kk_context_t* _ctx) { /* (p : path) -> io path */ 
  kk_string_t s_10099;
  kk_box_t _x_x859 = kk_std_core_hnd__open_none1(kk_std_os_path_new_realpath_fun860(_ctx), kk_std_os_path__path_box(p, _ctx), _ctx); /*8580*/
  s_10099 = kk_string_unbox(_x_x859); /*string*/
  kk_string_t x_10227 = kk_std_os_path_xrealpath(s_10099, _ctx); /*string*/;
  kk_box_t _x_x863;
  if (kk_yielding(kk_context())) {
    kk_string_drop(x_10227, _ctx);
    _x_x863 = kk_std_core_hnd_yield_extend(kk_std_os_path_new_realpath_fun864(_ctx), _ctx); /*2978*/
  }
  else {
    _x_x863 = kk_std_core_hnd__open_none1(kk_std_os_path_new_realpath_fun867(_ctx), kk_string_box(x_10227), _ctx); /*2978*/
  }
  return kk_std_os_path__path_unbox(_x_x863, KK_OWNED, _ctx);
}
 
// monadic lift


// lift anonymous function
struct kk_std_os_path__mlift_cwd_10198_fun871__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_os_path__mlift_cwd_10198_fun871(kk_function_t _fself, kk_box_t _b_x267, kk_context_t* _ctx);
static kk_function_t kk_std_os_path__new_mlift_cwd_10198_fun871(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_path__mlift_cwd_10198_fun871, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_os_path__mlift_cwd_10198_fun871(kk_function_t _fself, kk_box_t _b_x267, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_os_path__path _x_x872;
  kk_string_t _x_x873 = kk_string_unbox(_b_x267); /*string*/
  _x_x872 = kk_std_os_path_path(_x_x873, _ctx); /*std/os/path/path*/
  return kk_std_os_path__path_box(_x_x872, _ctx);
}

kk_std_os_path__path kk_std_os_path__mlift_cwd_10198(kk_string_t _y_x10152, kk_context_t* _ctx) { /* (string) -> io path */ 
  kk_box_t _x_x870 = kk_std_core_hnd__open_none1(kk_std_os_path__new_mlift_cwd_10198_fun871(_ctx), kk_string_box(_y_x10152), _ctx); /*8580*/
  return kk_std_os_path__path_unbox(_x_x870, KK_OWNED, _ctx);
}
 
// Returns the current working directory.
// Equal to `".".realpath`.


// lift anonymous function
struct kk_std_os_path_cwd_fun877__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_os_path_cwd_fun877(kk_function_t _fself, kk_box_t _b_x271, kk_context_t* _ctx);
static kk_function_t kk_std_os_path_new_cwd_fun877(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_path_cwd_fun877, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_os_path_cwd_fun877(kk_function_t _fself, kk_box_t _b_x271, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_os_path__path _x_x878;
  kk_string_t _x_x879 = kk_string_unbox(_b_x271); /*string*/
  _x_x878 = kk_std_os_path__mlift_cwd_10198(_x_x879, _ctx); /*std/os/path/path*/
  return kk_std_os_path__path_box(_x_x878, _ctx);
}


// lift anonymous function
struct kk_std_os_path_cwd_fun880__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_os_path_cwd_fun880(kk_function_t _fself, kk_box_t _b_x274, kk_context_t* _ctx);
static kk_function_t kk_std_os_path_new_cwd_fun880(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_path_cwd_fun880, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_os_path_cwd_fun880(kk_function_t _fself, kk_box_t _b_x274, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_os_path__path _x_x881;
  kk_string_t _x_x882 = kk_string_unbox(_b_x274); /*string*/
  _x_x881 = kk_std_os_path_path(_x_x882, _ctx); /*std/os/path/path*/
  return kk_std_os_path__path_box(_x_x881, _ctx);
}

kk_std_os_path__path kk_std_os_path_cwd(kk_context_t* _ctx) { /* () -> io path */ 
  kk_string_t x_10230;
  kk_string_t _x_x874;
  kk_define_string_literal(, _s_x875, 1, ".", _ctx)
  _x_x874 = kk_string_dup(_s_x875, _ctx); /*string*/
  x_10230 = kk_std_os_path_xrealpath(_x_x874, _ctx); /*string*/
  kk_box_t _x_x876;
  if (kk_yielding(kk_context())) {
    kk_string_drop(x_10230, _ctx);
    _x_x876 = kk_std_core_hnd_yield_extend(kk_std_os_path_new_cwd_fun877(_ctx), _ctx); /*2978*/
  }
  else {
    _x_x876 = kk_std_core_hnd__open_none1(kk_std_os_path_new_cwd_fun880(_ctx), kk_string_box(x_10230), _ctx); /*2978*/
  }
  return kk_std_os_path__path_unbox(_x_x876, KK_OWNED, _ctx);
}
 
// Return the OS specific directory separator (`"/"` or `"\\"`)

kk_string_t kk_std_os_path_partsep(kk_context_t* _ctx) { /* () -> ndet string */ 
  return kk_os_dir_sep(kk_context());
}
 
// Return the OS specific path separator (`';'` or `':'`)

kk_string_t kk_std_os_path_pathsep(kk_context_t* _ctx) { /* () -> ndet string */ 
  return kk_os_path_sep(kk_context());
}

kk_string_t kk_std_os_path_xapp_path(kk_context_t* _ctx) { /* () -> io string */ 
  return kk_os_app_path(kk_context());
}
 
// monadic lift


// lift anonymous function
struct kk_std_os_path__mlift_app_path_10199_fun884__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_os_path__mlift_app_path_10199_fun884(kk_function_t _fself, kk_box_t _b_x280, kk_context_t* _ctx);
static kk_function_t kk_std_os_path__new_mlift_app_path_10199_fun884(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_path__mlift_app_path_10199_fun884, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_os_path__mlift_app_path_10199_fun884(kk_function_t _fself, kk_box_t _b_x280, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_os_path__path _x_x885;
  kk_string_t _x_x886 = kk_string_unbox(_b_x280); /*string*/
  _x_x885 = kk_std_os_path_path(_x_x886, _ctx); /*std/os/path/path*/
  return kk_std_os_path__path_box(_x_x885, _ctx);
}

kk_std_os_path__path kk_std_os_path__mlift_app_path_10199(kk_string_t _y_x10154, kk_context_t* _ctx) { /* (string) -> io path */ 
  kk_box_t _x_x883 = kk_std_core_hnd__open_none1(kk_std_os_path__new_mlift_app_path_10199_fun884(_ctx), kk_string_box(_y_x10154), _ctx); /*8580*/
  return kk_std_os_path__path_unbox(_x_x883, KK_OWNED, _ctx);
}
 
// Return the path to the currently executing application.


// lift anonymous function
struct kk_std_os_path_app_path_fun888__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_os_path_app_path_fun888(kk_function_t _fself, kk_box_t _b_x284, kk_context_t* _ctx);
static kk_function_t kk_std_os_path_new_app_path_fun888(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_path_app_path_fun888, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_os_path_app_path_fun888(kk_function_t _fself, kk_box_t _b_x284, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_os_path__path _x_x889;
  kk_string_t _x_x890 = kk_string_unbox(_b_x284); /*string*/
  _x_x889 = kk_std_os_path__mlift_app_path_10199(_x_x890, _ctx); /*std/os/path/path*/
  return kk_std_os_path__path_box(_x_x889, _ctx);
}


// lift anonymous function
struct kk_std_os_path_app_path_fun891__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_os_path_app_path_fun891(kk_function_t _fself, kk_box_t _b_x287, kk_context_t* _ctx);
static kk_function_t kk_std_os_path_new_app_path_fun891(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_path_app_path_fun891, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_os_path_app_path_fun891(kk_function_t _fself, kk_box_t _b_x287, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_os_path__path _x_x892;
  kk_string_t _x_x893 = kk_string_unbox(_b_x287); /*string*/
  _x_x892 = kk_std_os_path_path(_x_x893, _ctx); /*std/os/path/path*/
  return kk_std_os_path__path_box(_x_x892, _ctx);
}

kk_std_os_path__path kk_std_os_path_app_path(kk_context_t* _ctx) { /* () -> io path */ 
  kk_string_t x_10233 = kk_std_os_path_xapp_path(_ctx); /*string*/;
  kk_box_t _x_x887;
  if (kk_yielding(kk_context())) {
    kk_string_drop(x_10233, _ctx);
    _x_x887 = kk_std_core_hnd_yield_extend(kk_std_os_path_new_app_path_fun888(_ctx), _ctx); /*2978*/
  }
  else {
    _x_x887 = kk_std_core_hnd__open_none1(kk_std_os_path_new_app_path_fun891(_ctx), kk_string_box(x_10233), _ctx); /*2978*/
  }
  return kk_std_os_path__path_unbox(_x_x887, KK_OWNED, _ctx);
}
 
// monadic lift


// lift anonymous function
struct kk_std_os_path__mlift_appdir_10200_fun895__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_os_path__mlift_appdir_10200_fun895(kk_function_t _fself, kk_box_t _b_x293, kk_context_t* _ctx);
static kk_function_t kk_std_os_path__new_mlift_appdir_10200_fun895(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_path__mlift_appdir_10200_fun895, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_os_path__mlift_appdir_10200_fun895(kk_function_t _fself, kk_box_t _b_x293, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_os_path__path _x_x896;
  kk_string_t _x_x897 = kk_string_unbox(_b_x293); /*string*/
  _x_x896 = kk_std_os_path_path(_x_x897, _ctx); /*std/os/path/path*/
  return kk_std_os_path__path_box(_x_x896, _ctx);
}


// lift anonymous function
struct kk_std_os_path__mlift_appdir_10200_fun899__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_os_path__mlift_appdir_10200_fun899(kk_function_t _fself, kk_box_t _b_x300, kk_context_t* _ctx);
static kk_function_t kk_std_os_path__new_mlift_appdir_10200_fun899(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_path__mlift_appdir_10200_fun899, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_os_path__mlift_appdir_10200_fun899(kk_function_t _fself, kk_box_t _b_x300, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_os_path__path _x_x900;
  kk_string_t _x_x901;
  kk_std_core_types__optional _match_x421 = kk_std_core_types__new_None(_ctx); /*forall<a> ? a*/;
  if (kk_std_core_types__is_Optional(_match_x421, _ctx)) {
    kk_box_t _box_x296 = _match_x421._cons._Optional.value;
    kk_string_t _uniq_root_108 = kk_string_unbox(_box_x296);
    kk_string_dup(_uniq_root_108, _ctx);
    kk_std_core_types__optional_drop(_match_x421, _ctx);
    _x_x901 = _uniq_root_108; /*string*/
  }
  else {
    kk_std_core_types__optional_drop(_match_x421, _ctx);
    kk_std_os_path__path _match_x422;
    kk_box_t _x_x902 = kk_box_dup(_b_x300, _ctx); /*8579*/
    _match_x422 = kk_std_os_path__path_unbox(_x_x902, KK_OWNED, _ctx); /*std/os/path/path*/
    {
      kk_string_t _x_0 = _match_x422.root;
      kk_string_dup(_x_0, _ctx);
      kk_std_os_path__path_drop(_match_x422, _ctx);
      _x_x901 = _x_0; /*string*/
    }
  }
  kk_std_core_types__list _x_x903;
  kk_std_os_path__path _match_x420 = kk_std_os_path__path_unbox(_b_x300, KK_OWNED, _ctx); /*std/os/path/path*/;
  {
    kk_std_core_types__list _x = _match_x420.parts;
    kk_std_core_types__list_dup(_x, _ctx);
    kk_std_os_path__path_drop(_match_x420, _ctx);
    if (kk_std_core_types__is_Cons(_x, _ctx)) {
      struct kk_std_core_types_Cons* _con_x904 = kk_std_core_types__as_Cons(_x, _ctx);
      kk_box_t _box_x297 = _con_x904->head;
      kk_std_core_types__list xx = _con_x904->tail;
      if kk_likely(kk_datatype_ptr_is_unique(_x, _ctx)) {
        kk_box_drop(_box_x297, _ctx);
        kk_datatype_ptr_free(_x, _ctx);
      }
      else {
        kk_std_core_types__list_dup(xx, _ctx);
        kk_datatype_ptr_decref(_x, _ctx);
      }
      _x_x903 = xx; /*list<string>*/
    }
    else {
      _x_x903 = kk_std_core_types__new_Nil(_ctx); /*list<string>*/
    }
  }
  _x_x900 = kk_std_os_path__new_Path(_x_x901, _x_x903, _ctx); /*std/os/path/path*/
  return kk_std_os_path__path_box(_x_x900, _ctx);
}


// lift anonymous function
struct kk_std_os_path__mlift_appdir_10200_fun905__t {
  struct kk_function_s _base;
};
static kk_string_t kk_std_os_path__mlift_appdir_10200_fun905(kk_function_t _fself, kk_std_os_path__path p_1, kk_context_t* _ctx);
static kk_function_t kk_std_os_path__new_mlift_appdir_10200_fun905(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_path__mlift_appdir_10200_fun905, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_string_t kk_std_os_path__mlift_appdir_10200_fun905(kk_function_t _fself, kk_std_os_path__path p_1, kk_context_t* _ctx) {
  kk_unused(_fself);
  {
    kk_std_core_types__list _x_1 = p_1.parts;
    kk_std_core_types__list_dup(_x_1, _ctx);
    kk_std_os_path__path_drop(p_1, _ctx);
    if (kk_std_core_types__is_Cons(_x_1, _ctx)) {
      struct kk_std_core_types_Cons* _con_x906 = kk_std_core_types__as_Cons(_x_1, _ctx);
      kk_box_t _box_x304 = _con_x906->head;
      kk_std_core_types__list _pat_0_0_0 = _con_x906->tail;
      kk_string_t x_0 = kk_string_unbox(_box_x304);
      if kk_likely(kk_datatype_ptr_is_unique(_x_1, _ctx)) {
        kk_std_core_types__list_drop(_pat_0_0_0, _ctx);
        kk_datatype_ptr_free(_x_1, _ctx);
      }
      else {
        kk_string_dup(x_0, _ctx);
        kk_datatype_ptr_decref(_x_1, _ctx);
      }
      return x_0;
    }
    {
      return kk_string_empty();
    }
  }
}


// lift anonymous function
struct kk_std_os_path__mlift_appdir_10200_fun910__t {
  struct kk_function_s _base;
  kk_function_t _b_x306_324;
};
static kk_box_t kk_std_os_path__mlift_appdir_10200_fun910(kk_function_t _fself, kk_box_t _b_x308, kk_context_t* _ctx);
static kk_function_t kk_std_os_path__new_mlift_appdir_10200_fun910(kk_function_t _b_x306_324, kk_context_t* _ctx) {
  struct kk_std_os_path__mlift_appdir_10200_fun910__t* _self = kk_function_alloc_as(struct kk_std_os_path__mlift_appdir_10200_fun910__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_os_path__mlift_appdir_10200_fun910, kk_context());
  _self->_b_x306_324 = _b_x306_324;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_os_path__mlift_appdir_10200_fun910(kk_function_t _fself, kk_box_t _b_x308, kk_context_t* _ctx) {
  struct kk_std_os_path__mlift_appdir_10200_fun910__t* _self = kk_function_as(struct kk_std_os_path__mlift_appdir_10200_fun910__t*, _fself, _ctx);
  kk_function_t _b_x306_324 = _self->_b_x306_324; /* (p@1 : std/os/path/path) -> string */
  kk_drop_match(_self, {kk_function_dup(_b_x306_324, _ctx);}, {}, _ctx)
  kk_string_t _x_x911;
  kk_std_os_path__path _x_x912 = kk_std_os_path__path_unbox(_b_x308, KK_OWNED, _ctx); /*std/os/path/path*/
  _x_x911 = kk_function_call(kk_string_t, (kk_function_t, kk_std_os_path__path, kk_context_t*), _b_x306_324, (_b_x306_324, _x_x912, _ctx), _ctx); /*string*/
  return kk_string_box(_x_x911);
}


// lift anonymous function
struct kk_std_os_path__mlift_appdir_10200_fun916__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_os_path__mlift_appdir_10200_fun916(kk_function_t _fself, kk_box_t _b_x313, kk_context_t* _ctx);
static kk_function_t kk_std_os_path__new_mlift_appdir_10200_fun916(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_path__mlift_appdir_10200_fun916, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_os_path__mlift_appdir_10200_fun916(kk_function_t _fself, kk_box_t _b_x313, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_os_path__path p_2_332 = kk_std_os_path__path_unbox(_b_x313, KK_OWNED, _ctx); /*std/os/path/path*/;
  kk_std_os_path__path _x_x917;
  kk_string_t _x_x918;
  kk_std_core_types__optional _match_x419 = kk_std_core_types__new_None(_ctx); /*forall<a> ? a*/;
  if (kk_std_core_types__is_Optional(_match_x419, _ctx)) {
    kk_box_t _box_x309 = _match_x419._cons._Optional.value;
    kk_string_t _uniq_root_108_0 = kk_string_unbox(_box_x309);
    kk_string_dup(_uniq_root_108_0, _ctx);
    kk_std_core_types__optional_drop(_match_x419, _ctx);
    _x_x918 = _uniq_root_108_0; /*string*/
  }
  else {
    kk_std_core_types__optional_drop(_match_x419, _ctx);
    {
      kk_string_t _x_0_0 = p_2_332.root;
      kk_string_dup(_x_0_0, _ctx);
      _x_x918 = _x_0_0; /*string*/
    }
  }
  kk_std_core_types__list _x_x919;
  {
    kk_std_core_types__list _x_2 = p_2_332.parts;
    kk_std_core_types__list_dup(_x_2, _ctx);
    kk_std_os_path__path_drop(p_2_332, _ctx);
    if (kk_std_core_types__is_Cons(_x_2, _ctx)) {
      struct kk_std_core_types_Cons* _con_x920 = kk_std_core_types__as_Cons(_x_2, _ctx);
      kk_box_t _box_x310 = _con_x920->head;
      kk_std_core_types__list xx_0 = _con_x920->tail;
      if kk_likely(kk_datatype_ptr_is_unique(_x_2, _ctx)) {
        kk_box_drop(_box_x310, _ctx);
        kk_datatype_ptr_free(_x_2, _ctx);
      }
      else {
        kk_std_core_types__list_dup(xx_0, _ctx);
        kk_datatype_ptr_decref(_x_2, _ctx);
      }
      _x_x919 = xx_0; /*list<string>*/
    }
    else {
      _x_x919 = kk_std_core_types__new_Nil(_ctx); /*list<string>*/
    }
  }
  _x_x917 = kk_std_os_path__new_Path(_x_x918, _x_x919, _ctx); /*std/os/path/path*/
  return kk_std_os_path__path_box(_x_x917, _ctx);
}


// lift anonymous function
struct kk_std_os_path__mlift_appdir_10200_fun921__t {
  struct kk_function_s _base;
};
static kk_string_t kk_std_os_path__mlift_appdir_10200_fun921(kk_function_t _fself, kk_std_os_path__path p_3, kk_context_t* _ctx);
static kk_function_t kk_std_os_path__new_mlift_appdir_10200_fun921(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_path__mlift_appdir_10200_fun921, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_string_t kk_std_os_path__mlift_appdir_10200_fun921(kk_function_t _fself, kk_std_os_path__path p_3, kk_context_t* _ctx) {
  kk_unused(_fself);
  {
    kk_std_core_types__list _x_3 = p_3.parts;
    kk_std_core_types__list_dup(_x_3, _ctx);
    kk_std_os_path__path_drop(p_3, _ctx);
    if (kk_std_core_types__is_Cons(_x_3, _ctx)) {
      struct kk_std_core_types_Cons* _con_x922 = kk_std_core_types__as_Cons(_x_3, _ctx);
      kk_box_t _box_x314 = _con_x922->head;
      kk_std_core_types__list _pat_0_0_2 = _con_x922->tail;
      kk_string_t x_0_0 = kk_string_unbox(_box_x314);
      if kk_likely(kk_datatype_ptr_is_unique(_x_3, _ctx)) {
        kk_std_core_types__list_drop(_pat_0_0_2, _ctx);
        kk_datatype_ptr_free(_x_3, _ctx);
      }
      else {
        kk_string_dup(x_0_0, _ctx);
        kk_datatype_ptr_decref(_x_3, _ctx);
      }
      return x_0_0;
    }
    {
      return kk_string_empty();
    }
  }
}


// lift anonymous function
struct kk_std_os_path__mlift_appdir_10200_fun926__t {
  struct kk_function_s _base;
  kk_function_t _b_x316_328;
};
static kk_box_t kk_std_os_path__mlift_appdir_10200_fun926(kk_function_t _fself, kk_box_t _b_x318, kk_context_t* _ctx);
static kk_function_t kk_std_os_path__new_mlift_appdir_10200_fun926(kk_function_t _b_x316_328, kk_context_t* _ctx) {
  struct kk_std_os_path__mlift_appdir_10200_fun926__t* _self = kk_function_alloc_as(struct kk_std_os_path__mlift_appdir_10200_fun926__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_os_path__mlift_appdir_10200_fun926, kk_context());
  _self->_b_x316_328 = _b_x316_328;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_os_path__mlift_appdir_10200_fun926(kk_function_t _fself, kk_box_t _b_x318, kk_context_t* _ctx) {
  struct kk_std_os_path__mlift_appdir_10200_fun926__t* _self = kk_function_as(struct kk_std_os_path__mlift_appdir_10200_fun926__t*, _fself, _ctx);
  kk_function_t _b_x316_328 = _self->_b_x316_328; /* (p@3 : std/os/path/path) -> string */
  kk_drop_match(_self, {kk_function_dup(_b_x316_328, _ctx);}, {}, _ctx)
  kk_string_t _x_x927;
  kk_std_os_path__path _x_x928 = kk_std_os_path__path_unbox(_b_x318, KK_OWNED, _ctx); /*std/os/path/path*/
  _x_x927 = kk_function_call(kk_string_t, (kk_function_t, kk_std_os_path__path, kk_context_t*), _b_x316_328, (_b_x316_328, _x_x928, _ctx), _ctx); /*string*/
  return kk_string_box(_x_x927);
}


// lift anonymous function
struct kk_std_os_path__mlift_appdir_10200_fun932__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_os_path__mlift_appdir_10200_fun932(kk_function_t _fself, kk_box_t _b_x323, kk_context_t* _ctx);
static kk_function_t kk_std_os_path__new_mlift_appdir_10200_fun932(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_path__mlift_appdir_10200_fun932, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_os_path__mlift_appdir_10200_fun932(kk_function_t _fself, kk_box_t _b_x323, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_os_path__path p_4_333 = kk_std_os_path__path_unbox(_b_x323, KK_OWNED, _ctx); /*std/os/path/path*/;
  kk_std_os_path__path _x_x933;
  kk_string_t _x_x934;
  kk_std_core_types__optional _match_x418 = kk_std_core_types__new_None(_ctx); /*forall<a> ? a*/;
  if (kk_std_core_types__is_Optional(_match_x418, _ctx)) {
    kk_box_t _box_x319 = _match_x418._cons._Optional.value;
    kk_string_t _uniq_root_108_1 = kk_string_unbox(_box_x319);
    kk_string_dup(_uniq_root_108_1, _ctx);
    kk_std_core_types__optional_drop(_match_x418, _ctx);
    _x_x934 = _uniq_root_108_1; /*string*/
  }
  else {
    kk_std_core_types__optional_drop(_match_x418, _ctx);
    {
      kk_string_t _x_0_1 = p_4_333.root;
      kk_string_dup(_x_0_1, _ctx);
      _x_x934 = _x_0_1; /*string*/
    }
  }
  kk_std_core_types__list _x_x935;
  {
    kk_std_core_types__list _x_4 = p_4_333.parts;
    kk_std_core_types__list_dup(_x_4, _ctx);
    kk_std_os_path__path_drop(p_4_333, _ctx);
    if (kk_std_core_types__is_Cons(_x_4, _ctx)) {
      struct kk_std_core_types_Cons* _con_x936 = kk_std_core_types__as_Cons(_x_4, _ctx);
      kk_box_t _box_x320 = _con_x936->head;
      kk_std_core_types__list xx_1 = _con_x936->tail;
      if kk_likely(kk_datatype_ptr_is_unique(_x_4, _ctx)) {
        kk_box_drop(_box_x320, _ctx);
        kk_datatype_ptr_free(_x_4, _ctx);
      }
      else {
        kk_std_core_types__list_dup(xx_1, _ctx);
        kk_datatype_ptr_decref(_x_4, _ctx);
      }
      _x_x935 = xx_1; /*list<string>*/
    }
    else {
      _x_x935 = kk_std_core_types__new_Nil(_ctx); /*list<string>*/
    }
  }
  _x_x933 = kk_std_os_path__new_Path(_x_x934, _x_x935, _ctx); /*std/os/path/path*/
  return kk_std_os_path__path_box(_x_x933, _ctx);
}

kk_std_os_path__path kk_std_os_path__mlift_appdir_10200(kk_string_t _y_x10155, kk_context_t* _ctx) { /* (string) -> io path */ 
  kk_std_os_path__path _x_x1_10180;
  kk_box_t _x_x894 = kk_std_core_hnd__open_none1(kk_std_os_path__new_mlift_appdir_10200_fun895(_ctx), kk_string_box(_y_x10155), _ctx); /*8580*/
  _x_x1_10180 = kk_std_os_path__path_unbox(_x_x894, KK_OWNED, _ctx); /*std/os/path/path*/
  kk_std_os_path__path p_0;
  kk_box_t _x_x898 = kk_std_core_hnd__open_none1(kk_std_os_path__new_mlift_appdir_10200_fun899(_ctx), kk_std_os_path__path_box(_x_x1_10180, _ctx), _ctx); /*8580*/
  p_0 = kk_std_os_path__path_unbox(_x_x898, KK_OWNED, _ctx); /*std/os/path/path*/
  kk_function_t _b_x306_324 = kk_std_os_path__new_mlift_appdir_10200_fun905(_ctx); /*(p@1 : std/os/path/path) -> string*/;
  kk_std_os_path__path _b_x307_325 = kk_std_os_path__path_dup(p_0, _ctx); /*std/os/path/path*/;
  bool _match_x416;
  kk_string_t _x_x908;
  kk_box_t _x_x909 = kk_std_core_hnd__open_none1(kk_std_os_path__new_mlift_appdir_10200_fun910(_b_x306_324, _ctx), kk_std_os_path__path_box(_b_x307_325, _ctx), _ctx); /*8580*/
  _x_x908 = kk_string_unbox(_x_x909); /*string*/
  kk_string_t _x_x913;
  kk_define_string_literal(, _s_x914, 3, "bin", _ctx)
  _x_x913 = kk_string_dup(_s_x914, _ctx); /*string*/
  _match_x416 = kk_string_is_eq(_x_x908,_x_x913,kk_context()); /*bool*/
  if (_match_x416) {
    kk_box_t _x_x915 = kk_std_core_hnd__open_none1(kk_std_os_path__new_mlift_appdir_10200_fun916(_ctx), kk_std_os_path__path_box(p_0, _ctx), _ctx); /*8580*/
    return kk_std_os_path__path_unbox(_x_x915, KK_OWNED, _ctx);
  }
  {
    kk_function_t _b_x316_328 = kk_std_os_path__new_mlift_appdir_10200_fun921(_ctx); /*(p@3 : std/os/path/path) -> string*/;
    kk_std_os_path__path _b_x317_329 = kk_std_os_path__path_dup(p_0, _ctx); /*std/os/path/path*/;
    bool _match_x417;
    kk_string_t _x_x924;
    kk_box_t _x_x925 = kk_std_core_hnd__open_none1(kk_std_os_path__new_mlift_appdir_10200_fun926(_b_x316_328, _ctx), kk_std_os_path__path_box(_b_x317_329, _ctx), _ctx); /*8580*/
    _x_x924 = kk_string_unbox(_x_x925); /*string*/
    kk_string_t _x_x929;
    kk_define_string_literal(, _s_x930, 3, "exe", _ctx)
    _x_x929 = kk_string_dup(_s_x930, _ctx); /*string*/
    _match_x417 = kk_string_is_eq(_x_x924,_x_x929,kk_context()); /*bool*/
    if (_match_x417) {
      kk_box_t _x_x931 = kk_std_core_hnd__open_none1(kk_std_os_path__new_mlift_appdir_10200_fun932(_ctx), kk_std_os_path__path_box(p_0, _ctx), _ctx); /*8580*/
      return kk_std_os_path__path_unbox(_x_x931, KK_OWNED, _ctx);
    }
    {
      return p_0;
    }
  }
}
 
// Return the base directory that contains the currently running application.
// First tries `app-path().nobase`; if that ends in the ``bin`` or ``exe`` directory it
// returns the parent of that directory.


// lift anonymous function
struct kk_std_os_path_appdir_fun938__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_os_path_appdir_fun938(kk_function_t _fself, kk_box_t _b_x335, kk_context_t* _ctx);
static kk_function_t kk_std_os_path_new_appdir_fun938(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_path_appdir_fun938, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_os_path_appdir_fun938(kk_function_t _fself, kk_box_t _b_x335, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_os_path__path _x_x939;
  kk_string_t _x_x940 = kk_string_unbox(_b_x335); /*string*/
  _x_x939 = kk_std_os_path__mlift_appdir_10200(_x_x940, _ctx); /*std/os/path/path*/
  return kk_std_os_path__path_box(_x_x939, _ctx);
}


// lift anonymous function
struct kk_std_os_path_appdir_fun942__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_os_path_appdir_fun942(kk_function_t _fself, kk_box_t _b_x338, kk_context_t* _ctx);
static kk_function_t kk_std_os_path_new_appdir_fun942(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_path_appdir_fun942, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_os_path_appdir_fun942(kk_function_t _fself, kk_box_t _b_x338, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_os_path__path _x_x943;
  kk_string_t _x_x944 = kk_string_unbox(_b_x338); /*string*/
  _x_x943 = kk_std_os_path_path(_x_x944, _ctx); /*std/os/path/path*/
  return kk_std_os_path__path_box(_x_x943, _ctx);
}


// lift anonymous function
struct kk_std_os_path_appdir_fun946__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_os_path_appdir_fun946(kk_function_t _fself, kk_box_t _b_x345, kk_context_t* _ctx);
static kk_function_t kk_std_os_path_new_appdir_fun946(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_path_appdir_fun946, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_os_path_appdir_fun946(kk_function_t _fself, kk_box_t _b_x345, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_os_path__path _x_x947;
  kk_string_t _x_x948;
  kk_std_core_types__optional _match_x414 = kk_std_core_types__new_None(_ctx); /*forall<a> ? a*/;
  if (kk_std_core_types__is_Optional(_match_x414, _ctx)) {
    kk_box_t _box_x341 = _match_x414._cons._Optional.value;
    kk_string_t _uniq_root_108 = kk_string_unbox(_box_x341);
    kk_string_dup(_uniq_root_108, _ctx);
    kk_std_core_types__optional_drop(_match_x414, _ctx);
    _x_x948 = _uniq_root_108; /*string*/
  }
  else {
    kk_std_core_types__optional_drop(_match_x414, _ctx);
    kk_std_os_path__path _match_x415;
    kk_box_t _x_x949 = kk_box_dup(_b_x345, _ctx); /*8579*/
    _match_x415 = kk_std_os_path__path_unbox(_x_x949, KK_OWNED, _ctx); /*std/os/path/path*/
    {
      kk_string_t _x_0 = _match_x415.root;
      kk_string_dup(_x_0, _ctx);
      kk_std_os_path__path_drop(_match_x415, _ctx);
      _x_x948 = _x_0; /*string*/
    }
  }
  kk_std_core_types__list _x_x950;
  kk_std_os_path__path _match_x413 = kk_std_os_path__path_unbox(_b_x345, KK_OWNED, _ctx); /*std/os/path/path*/;
  {
    kk_std_core_types__list _x = _match_x413.parts;
    kk_std_core_types__list_dup(_x, _ctx);
    kk_std_os_path__path_drop(_match_x413, _ctx);
    if (kk_std_core_types__is_Cons(_x, _ctx)) {
      struct kk_std_core_types_Cons* _con_x951 = kk_std_core_types__as_Cons(_x, _ctx);
      kk_box_t _box_x342 = _con_x951->head;
      kk_std_core_types__list xx = _con_x951->tail;
      if kk_likely(kk_datatype_ptr_is_unique(_x, _ctx)) {
        kk_box_drop(_box_x342, _ctx);
        kk_datatype_ptr_free(_x, _ctx);
      }
      else {
        kk_std_core_types__list_dup(xx, _ctx);
        kk_datatype_ptr_decref(_x, _ctx);
      }
      _x_x950 = xx; /*list<string>*/
    }
    else {
      _x_x950 = kk_std_core_types__new_Nil(_ctx); /*list<string>*/
    }
  }
  _x_x947 = kk_std_os_path__new_Path(_x_x948, _x_x950, _ctx); /*std/os/path/path*/
  return kk_std_os_path__path_box(_x_x947, _ctx);
}


// lift anonymous function
struct kk_std_os_path_appdir_fun952__t {
  struct kk_function_s _base;
};
static kk_string_t kk_std_os_path_appdir_fun952(kk_function_t _fself, kk_std_os_path__path p_1, kk_context_t* _ctx);
static kk_function_t kk_std_os_path_new_appdir_fun952(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_path_appdir_fun952, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_string_t kk_std_os_path_appdir_fun952(kk_function_t _fself, kk_std_os_path__path p_1, kk_context_t* _ctx) {
  kk_unused(_fself);
  {
    kk_std_core_types__list _x_1 = p_1.parts;
    kk_std_core_types__list_dup(_x_1, _ctx);
    kk_std_os_path__path_drop(p_1, _ctx);
    if (kk_std_core_types__is_Cons(_x_1, _ctx)) {
      struct kk_std_core_types_Cons* _con_x953 = kk_std_core_types__as_Cons(_x_1, _ctx);
      kk_box_t _box_x349 = _con_x953->head;
      kk_std_core_types__list _pat_0_0_0 = _con_x953->tail;
      kk_string_t x_0 = kk_string_unbox(_box_x349);
      if kk_likely(kk_datatype_ptr_is_unique(_x_1, _ctx)) {
        kk_std_core_types__list_drop(_pat_0_0_0, _ctx);
        kk_datatype_ptr_free(_x_1, _ctx);
      }
      else {
        kk_string_dup(x_0, _ctx);
        kk_datatype_ptr_decref(_x_1, _ctx);
      }
      return x_0;
    }
    {
      return kk_string_empty();
    }
  }
}


// lift anonymous function
struct kk_std_os_path_appdir_fun957__t {
  struct kk_function_s _base;
  kk_function_t _b_x351_370;
};
static kk_box_t kk_std_os_path_appdir_fun957(kk_function_t _fself, kk_box_t _b_x353, kk_context_t* _ctx);
static kk_function_t kk_std_os_path_new_appdir_fun957(kk_function_t _b_x351_370, kk_context_t* _ctx) {
  struct kk_std_os_path_appdir_fun957__t* _self = kk_function_alloc_as(struct kk_std_os_path_appdir_fun957__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_os_path_appdir_fun957, kk_context());
  _self->_b_x351_370 = _b_x351_370;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_os_path_appdir_fun957(kk_function_t _fself, kk_box_t _b_x353, kk_context_t* _ctx) {
  struct kk_std_os_path_appdir_fun957__t* _self = kk_function_as(struct kk_std_os_path_appdir_fun957__t*, _fself, _ctx);
  kk_function_t _b_x351_370 = _self->_b_x351_370; /* (p@1 : std/os/path/path) -> string */
  kk_drop_match(_self, {kk_function_dup(_b_x351_370, _ctx);}, {}, _ctx)
  kk_string_t _x_x958;
  kk_std_os_path__path _x_x959 = kk_std_os_path__path_unbox(_b_x353, KK_OWNED, _ctx); /*std/os/path/path*/
  _x_x958 = kk_function_call(kk_string_t, (kk_function_t, kk_std_os_path__path, kk_context_t*), _b_x351_370, (_b_x351_370, _x_x959, _ctx), _ctx); /*string*/
  return kk_string_box(_x_x958);
}


// lift anonymous function
struct kk_std_os_path_appdir_fun963__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_os_path_appdir_fun963(kk_function_t _fself, kk_box_t _b_x358, kk_context_t* _ctx);
static kk_function_t kk_std_os_path_new_appdir_fun963(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_path_appdir_fun963, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_os_path_appdir_fun963(kk_function_t _fself, kk_box_t _b_x358, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_os_path__path p_2_378 = kk_std_os_path__path_unbox(_b_x358, KK_OWNED, _ctx); /*std/os/path/path*/;
  kk_std_os_path__path _x_x964;
  kk_string_t _x_x965;
  kk_std_core_types__optional _match_x412 = kk_std_core_types__new_None(_ctx); /*forall<a> ? a*/;
  if (kk_std_core_types__is_Optional(_match_x412, _ctx)) {
    kk_box_t _box_x354 = _match_x412._cons._Optional.value;
    kk_string_t _uniq_root_108_0 = kk_string_unbox(_box_x354);
    kk_string_dup(_uniq_root_108_0, _ctx);
    kk_std_core_types__optional_drop(_match_x412, _ctx);
    _x_x965 = _uniq_root_108_0; /*string*/
  }
  else {
    kk_std_core_types__optional_drop(_match_x412, _ctx);
    {
      kk_string_t _x_0_0 = p_2_378.root;
      kk_string_dup(_x_0_0, _ctx);
      _x_x965 = _x_0_0; /*string*/
    }
  }
  kk_std_core_types__list _x_x966;
  {
    kk_std_core_types__list _x_2 = p_2_378.parts;
    kk_std_core_types__list_dup(_x_2, _ctx);
    kk_std_os_path__path_drop(p_2_378, _ctx);
    if (kk_std_core_types__is_Cons(_x_2, _ctx)) {
      struct kk_std_core_types_Cons* _con_x967 = kk_std_core_types__as_Cons(_x_2, _ctx);
      kk_box_t _box_x355 = _con_x967->head;
      kk_std_core_types__list xx_0 = _con_x967->tail;
      if kk_likely(kk_datatype_ptr_is_unique(_x_2, _ctx)) {
        kk_box_drop(_box_x355, _ctx);
        kk_datatype_ptr_free(_x_2, _ctx);
      }
      else {
        kk_std_core_types__list_dup(xx_0, _ctx);
        kk_datatype_ptr_decref(_x_2, _ctx);
      }
      _x_x966 = xx_0; /*list<string>*/
    }
    else {
      _x_x966 = kk_std_core_types__new_Nil(_ctx); /*list<string>*/
    }
  }
  _x_x964 = kk_std_os_path__new_Path(_x_x965, _x_x966, _ctx); /*std/os/path/path*/
  return kk_std_os_path__path_box(_x_x964, _ctx);
}


// lift anonymous function
struct kk_std_os_path_appdir_fun968__t {
  struct kk_function_s _base;
};
static kk_string_t kk_std_os_path_appdir_fun968(kk_function_t _fself, kk_std_os_path__path p_3, kk_context_t* _ctx);
static kk_function_t kk_std_os_path_new_appdir_fun968(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_path_appdir_fun968, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_string_t kk_std_os_path_appdir_fun968(kk_function_t _fself, kk_std_os_path__path p_3, kk_context_t* _ctx) {
  kk_unused(_fself);
  {
    kk_std_core_types__list _x_3 = p_3.parts;
    kk_std_core_types__list_dup(_x_3, _ctx);
    kk_std_os_path__path_drop(p_3, _ctx);
    if (kk_std_core_types__is_Cons(_x_3, _ctx)) {
      struct kk_std_core_types_Cons* _con_x969 = kk_std_core_types__as_Cons(_x_3, _ctx);
      kk_box_t _box_x359 = _con_x969->head;
      kk_std_core_types__list _pat_0_0_2 = _con_x969->tail;
      kk_string_t x_0_0 = kk_string_unbox(_box_x359);
      if kk_likely(kk_datatype_ptr_is_unique(_x_3, _ctx)) {
        kk_std_core_types__list_drop(_pat_0_0_2, _ctx);
        kk_datatype_ptr_free(_x_3, _ctx);
      }
      else {
        kk_string_dup(x_0_0, _ctx);
        kk_datatype_ptr_decref(_x_3, _ctx);
      }
      return x_0_0;
    }
    {
      return kk_string_empty();
    }
  }
}


// lift anonymous function
struct kk_std_os_path_appdir_fun973__t {
  struct kk_function_s _base;
  kk_function_t _b_x361_374;
};
static kk_box_t kk_std_os_path_appdir_fun973(kk_function_t _fself, kk_box_t _b_x363, kk_context_t* _ctx);
static kk_function_t kk_std_os_path_new_appdir_fun973(kk_function_t _b_x361_374, kk_context_t* _ctx) {
  struct kk_std_os_path_appdir_fun973__t* _self = kk_function_alloc_as(struct kk_std_os_path_appdir_fun973__t, 2, _ctx);
  _self->_base.fun = kk_kkfun_ptr_box(&kk_std_os_path_appdir_fun973, kk_context());
  _self->_b_x361_374 = _b_x361_374;
  return kk_datatype_from_base(&_self->_base, kk_context());
}

static kk_box_t kk_std_os_path_appdir_fun973(kk_function_t _fself, kk_box_t _b_x363, kk_context_t* _ctx) {
  struct kk_std_os_path_appdir_fun973__t* _self = kk_function_as(struct kk_std_os_path_appdir_fun973__t*, _fself, _ctx);
  kk_function_t _b_x361_374 = _self->_b_x361_374; /* (p@3 : std/os/path/path) -> string */
  kk_drop_match(_self, {kk_function_dup(_b_x361_374, _ctx);}, {}, _ctx)
  kk_string_t _x_x974;
  kk_std_os_path__path _x_x975 = kk_std_os_path__path_unbox(_b_x363, KK_OWNED, _ctx); /*std/os/path/path*/
  _x_x974 = kk_function_call(kk_string_t, (kk_function_t, kk_std_os_path__path, kk_context_t*), _b_x361_374, (_b_x361_374, _x_x975, _ctx), _ctx); /*string*/
  return kk_string_box(_x_x974);
}


// lift anonymous function
struct kk_std_os_path_appdir_fun979__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_os_path_appdir_fun979(kk_function_t _fself, kk_box_t _b_x368, kk_context_t* _ctx);
static kk_function_t kk_std_os_path_new_appdir_fun979(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_path_appdir_fun979, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_os_path_appdir_fun979(kk_function_t _fself, kk_box_t _b_x368, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_os_path__path p_4_379 = kk_std_os_path__path_unbox(_b_x368, KK_OWNED, _ctx); /*std/os/path/path*/;
  kk_std_os_path__path _x_x980;
  kk_string_t _x_x981;
  kk_std_core_types__optional _match_x411 = kk_std_core_types__new_None(_ctx); /*forall<a> ? a*/;
  if (kk_std_core_types__is_Optional(_match_x411, _ctx)) {
    kk_box_t _box_x364 = _match_x411._cons._Optional.value;
    kk_string_t _uniq_root_108_1 = kk_string_unbox(_box_x364);
    kk_string_dup(_uniq_root_108_1, _ctx);
    kk_std_core_types__optional_drop(_match_x411, _ctx);
    _x_x981 = _uniq_root_108_1; /*string*/
  }
  else {
    kk_std_core_types__optional_drop(_match_x411, _ctx);
    {
      kk_string_t _x_0_1 = p_4_379.root;
      kk_string_dup(_x_0_1, _ctx);
      _x_x981 = _x_0_1; /*string*/
    }
  }
  kk_std_core_types__list _x_x982;
  {
    kk_std_core_types__list _x_4 = p_4_379.parts;
    kk_std_core_types__list_dup(_x_4, _ctx);
    kk_std_os_path__path_drop(p_4_379, _ctx);
    if (kk_std_core_types__is_Cons(_x_4, _ctx)) {
      struct kk_std_core_types_Cons* _con_x983 = kk_std_core_types__as_Cons(_x_4, _ctx);
      kk_box_t _box_x365 = _con_x983->head;
      kk_std_core_types__list xx_1 = _con_x983->tail;
      if kk_likely(kk_datatype_ptr_is_unique(_x_4, _ctx)) {
        kk_box_drop(_box_x365, _ctx);
        kk_datatype_ptr_free(_x_4, _ctx);
      }
      else {
        kk_std_core_types__list_dup(xx_1, _ctx);
        kk_datatype_ptr_decref(_x_4, _ctx);
      }
      _x_x982 = xx_1; /*list<string>*/
    }
    else {
      _x_x982 = kk_std_core_types__new_Nil(_ctx); /*list<string>*/
    }
  }
  _x_x980 = kk_std_os_path__new_Path(_x_x981, _x_x982, _ctx); /*std/os/path/path*/
  return kk_std_os_path__path_box(_x_x980, _ctx);
}

kk_std_os_path__path kk_std_os_path_appdir(kk_context_t* _ctx) { /* () -> io path */ 
  kk_string_t x_10236 = kk_std_os_path_xapp_path(_ctx); /*string*/;
  if (kk_yielding(kk_context())) {
    kk_string_drop(x_10236, _ctx);
    kk_box_t _x_x937 = kk_std_core_hnd_yield_extend(kk_std_os_path_new_appdir_fun938(_ctx), _ctx); /*2978*/
    return kk_std_os_path__path_unbox(_x_x937, KK_OWNED, _ctx);
  }
  {
    kk_std_os_path__path _x_x1_10180;
    kk_box_t _x_x941 = kk_std_core_hnd__open_none1(kk_std_os_path_new_appdir_fun942(_ctx), kk_string_box(x_10236), _ctx); /*8580*/
    _x_x1_10180 = kk_std_os_path__path_unbox(_x_x941, KK_OWNED, _ctx); /*std/os/path/path*/
    kk_std_os_path__path p_0;
    kk_box_t _x_x945 = kk_std_core_hnd__open_none1(kk_std_os_path_new_appdir_fun946(_ctx), kk_std_os_path__path_box(_x_x1_10180, _ctx), _ctx); /*8580*/
    p_0 = kk_std_os_path__path_unbox(_x_x945, KK_OWNED, _ctx); /*std/os/path/path*/
    kk_function_t _b_x351_370 = kk_std_os_path_new_appdir_fun952(_ctx); /*(p@1 : std/os/path/path) -> string*/;
    kk_std_os_path__path _b_x352_371 = kk_std_os_path__path_dup(p_0, _ctx); /*std/os/path/path*/;
    bool _match_x409;
    kk_string_t _x_x955;
    kk_box_t _x_x956 = kk_std_core_hnd__open_none1(kk_std_os_path_new_appdir_fun957(_b_x351_370, _ctx), kk_std_os_path__path_box(_b_x352_371, _ctx), _ctx); /*8580*/
    _x_x955 = kk_string_unbox(_x_x956); /*string*/
    kk_string_t _x_x960;
    kk_define_string_literal(, _s_x961, 3, "bin", _ctx)
    _x_x960 = kk_string_dup(_s_x961, _ctx); /*string*/
    _match_x409 = kk_string_is_eq(_x_x955,_x_x960,kk_context()); /*bool*/
    if (_match_x409) {
      kk_box_t _x_x962 = kk_std_core_hnd__open_none1(kk_std_os_path_new_appdir_fun963(_ctx), kk_std_os_path__path_box(p_0, _ctx), _ctx); /*8580*/
      return kk_std_os_path__path_unbox(_x_x962, KK_OWNED, _ctx);
    }
    {
      kk_function_t _b_x361_374 = kk_std_os_path_new_appdir_fun968(_ctx); /*(p@3 : std/os/path/path) -> string*/;
      kk_std_os_path__path _b_x362_375 = kk_std_os_path__path_dup(p_0, _ctx); /*std/os/path/path*/;
      bool _match_x410;
      kk_string_t _x_x971;
      kk_box_t _x_x972 = kk_std_core_hnd__open_none1(kk_std_os_path_new_appdir_fun973(_b_x361_374, _ctx), kk_std_os_path__path_box(_b_x362_375, _ctx), _ctx); /*8580*/
      _x_x971 = kk_string_unbox(_x_x972); /*string*/
      kk_string_t _x_x976;
      kk_define_string_literal(, _s_x977, 3, "exe", _ctx)
      _x_x976 = kk_string_dup(_s_x977, _ctx); /*string*/
      _match_x410 = kk_string_is_eq(_x_x971,_x_x976,kk_context()); /*bool*/
      if (_match_x410) {
        kk_box_t _x_x978 = kk_std_core_hnd__open_none1(kk_std_os_path_new_appdir_fun979(_ctx), kk_std_os_path__path_box(p_0, _ctx), _ctx); /*8580*/
        return kk_std_os_path__path_unbox(_x_x978, KK_OWNED, _ctx);
      }
      {
        return p_0;
      }
    }
  }
}

kk_string_t kk_std_os_path_xhomedir(kk_context_t* _ctx) { /* () -> io string */ 
  return kk_os_home_dir(kk_context());
}
 
// monadic lift


// lift anonymous function
struct kk_std_os_path__mlift_homedir_10201_fun985__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_os_path__mlift_homedir_10201_fun985(kk_function_t _fself, kk_box_t _b_x382, kk_context_t* _ctx);
static kk_function_t kk_std_os_path__new_mlift_homedir_10201_fun985(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_path__mlift_homedir_10201_fun985, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_os_path__mlift_homedir_10201_fun985(kk_function_t _fself, kk_box_t _b_x382, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_os_path__path _x_x986;
  kk_string_t _x_x987 = kk_string_unbox(_b_x382); /*string*/
  _x_x986 = kk_std_os_path_path(_x_x987, _ctx); /*std/os/path/path*/
  return kk_std_os_path__path_box(_x_x986, _ctx);
}

kk_std_os_path__path kk_std_os_path__mlift_homedir_10201(kk_string_t _y_x10159, kk_context_t* _ctx) { /* (string) -> io path */ 
  kk_box_t _x_x984 = kk_std_core_hnd__open_none1(kk_std_os_path__new_mlift_homedir_10201_fun985(_ctx), kk_string_box(_y_x10159), _ctx); /*8580*/
  return kk_std_os_path__path_unbox(_x_x984, KK_OWNED, _ctx);
}
 
// Return the home directory of the current user.


// lift anonymous function
struct kk_std_os_path_homedir_fun989__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_os_path_homedir_fun989(kk_function_t _fself, kk_box_t _b_x386, kk_context_t* _ctx);
static kk_function_t kk_std_os_path_new_homedir_fun989(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_path_homedir_fun989, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_os_path_homedir_fun989(kk_function_t _fself, kk_box_t _b_x386, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_os_path__path _x_x990;
  kk_string_t _x_x991 = kk_string_unbox(_b_x386); /*string*/
  _x_x990 = kk_std_os_path__mlift_homedir_10201(_x_x991, _ctx); /*std/os/path/path*/
  return kk_std_os_path__path_box(_x_x990, _ctx);
}


// lift anonymous function
struct kk_std_os_path_homedir_fun992__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_os_path_homedir_fun992(kk_function_t _fself, kk_box_t _b_x389, kk_context_t* _ctx);
static kk_function_t kk_std_os_path_new_homedir_fun992(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_path_homedir_fun992, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_os_path_homedir_fun992(kk_function_t _fself, kk_box_t _b_x389, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_os_path__path _x_x993;
  kk_string_t _x_x994 = kk_string_unbox(_b_x389); /*string*/
  _x_x993 = kk_std_os_path_path(_x_x994, _ctx); /*std/os/path/path*/
  return kk_std_os_path__path_box(_x_x993, _ctx);
}

kk_std_os_path__path kk_std_os_path_homedir(kk_context_t* _ctx) { /* () -> io path */ 
  kk_string_t x_10239 = kk_std_os_path_xhomedir(_ctx); /*string*/;
  kk_box_t _x_x988;
  if (kk_yielding(kk_context())) {
    kk_string_drop(x_10239, _ctx);
    _x_x988 = kk_std_core_hnd_yield_extend(kk_std_os_path_new_homedir_fun989(_ctx), _ctx); /*2978*/
  }
  else {
    _x_x988 = kk_std_core_hnd__open_none1(kk_std_os_path_new_homedir_fun992(_ctx), kk_string_box(x_10239), _ctx); /*2978*/
  }
  return kk_std_os_path__path_unbox(_x_x988, KK_OWNED, _ctx);
}

kk_string_t kk_std_os_path_xtempdir(kk_context_t* _ctx) { /* () -> io string */ 
  return kk_os_temp_dir(kk_context());
}
 
// monadic lift


// lift anonymous function
struct kk_std_os_path__mlift_tempdir_10202_fun996__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_os_path__mlift_tempdir_10202_fun996(kk_function_t _fself, kk_box_t _b_x395, kk_context_t* _ctx);
static kk_function_t kk_std_os_path__new_mlift_tempdir_10202_fun996(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_path__mlift_tempdir_10202_fun996, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_os_path__mlift_tempdir_10202_fun996(kk_function_t _fself, kk_box_t _b_x395, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_os_path__path _x_x997;
  kk_string_t _x_x998 = kk_string_unbox(_b_x395); /*string*/
  _x_x997 = kk_std_os_path_path(_x_x998, _ctx); /*std/os/path/path*/
  return kk_std_os_path__path_box(_x_x997, _ctx);
}

kk_std_os_path__path kk_std_os_path__mlift_tempdir_10202(kk_string_t _y_x10161, kk_context_t* _ctx) { /* (string) -> io path */ 
  kk_box_t _x_x995 = kk_std_core_hnd__open_none1(kk_std_os_path__new_mlift_tempdir_10202_fun996(_ctx), kk_string_box(_y_x10161), _ctx); /*8580*/
  return kk_std_os_path__path_unbox(_x_x995, KK_OWNED, _ctx);
}
 
// Return the temporary directory for the current user.


// lift anonymous function
struct kk_std_os_path_tempdir_fun1000__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_os_path_tempdir_fun1000(kk_function_t _fself, kk_box_t _b_x399, kk_context_t* _ctx);
static kk_function_t kk_std_os_path_new_tempdir_fun1000(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_path_tempdir_fun1000, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_os_path_tempdir_fun1000(kk_function_t _fself, kk_box_t _b_x399, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_os_path__path _x_x1001;
  kk_string_t _x_x1002 = kk_string_unbox(_b_x399); /*string*/
  _x_x1001 = kk_std_os_path__mlift_tempdir_10202(_x_x1002, _ctx); /*std/os/path/path*/
  return kk_std_os_path__path_box(_x_x1001, _ctx);
}


// lift anonymous function
struct kk_std_os_path_tempdir_fun1003__t {
  struct kk_function_s _base;
};
static kk_box_t kk_std_os_path_tempdir_fun1003(kk_function_t _fself, kk_box_t _b_x402, kk_context_t* _ctx);
static kk_function_t kk_std_os_path_new_tempdir_fun1003(kk_context_t* _ctx) {
  kk_define_static_function(_fself, kk_std_os_path_tempdir_fun1003, _ctx)
  return kk_function_dup(_fself,kk_context());
}

static kk_box_t kk_std_os_path_tempdir_fun1003(kk_function_t _fself, kk_box_t _b_x402, kk_context_t* _ctx) {
  kk_unused(_fself);
  kk_std_os_path__path _x_x1004;
  kk_string_t _x_x1005 = kk_string_unbox(_b_x402); /*string*/
  _x_x1004 = kk_std_os_path_path(_x_x1005, _ctx); /*std/os/path/path*/
  return kk_std_os_path__path_box(_x_x1004, _ctx);
}

kk_std_os_path__path kk_std_os_path_tempdir(kk_context_t* _ctx) { /* () -> io path */ 
  kk_string_t x_10242 = kk_std_os_path_xtempdir(_ctx); /*string*/;
  kk_box_t _x_x999;
  if (kk_yielding(kk_context())) {
    kk_string_drop(x_10242, _ctx);
    _x_x999 = kk_std_core_hnd_yield_extend(kk_std_os_path_new_tempdir_fun1000(_ctx), _ctx); /*2978*/
  }
  else {
    _x_x999 = kk_std_core_hnd__open_none1(kk_std_os_path_new_tempdir_fun1003(_ctx), kk_string_box(x_10242), _ctx); /*2978*/
  }
  return kk_std_os_path__path_unbox(_x_x999, KK_OWNED, _ctx);
}

// initialization
void kk_std_os_path__init(kk_context_t* _ctx){
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
  kk_std_text_parse__init(_ctx);
  #if defined(KK_CUSTOM_INIT)
    KK_CUSTOM_INIT (_ctx);
  #endif
}

// termination
void kk_std_os_path__done(kk_context_t* _ctx){
  static bool _kk_done = false;
  if (_kk_done) return;
  _kk_done = true;
  #if defined(KK_CUSTOM_DONE)
    KK_CUSTOM_DONE (_ctx);
  #endif
  kk_std_text_parse__done(_ctx);
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
