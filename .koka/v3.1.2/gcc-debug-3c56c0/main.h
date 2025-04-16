#pragma once
#ifndef kk_main_H
#define kk_main_H
// Koka generated module: main, koka version: 3.1.2, platform: 64-bit
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
#include "std_core_list.h"
#include "std_core_maybe.h"
#include "std_core_either.h"
#include "std_core_tuple.h"
#include "std_core_show.h"
#include "std_core_debug.h"
#include "std_core_delayed.h"
#include "std_core_console.h"
#include "std_core.h"
#include "std_os_env.h"
#include "utest.h"
#include "parser.h"

// type declarations

// value declarations
 
// monadic lift

static inline kk_unit_t kk_main__mlift_main_10006(kk_std_core_types__list _c_x10002, kk_context_t* _ctx) { /* (list<()>) -> () */ 
  kk_std_core_types__list_drop(_c_x10002, _ctx);
  kk_Unit; return kk_Unit;
}
 
// monadic lift

static inline kk_unit_t kk_main__mlift_main_10007(kk_std_core_types__list wild___0, kk_context_t* _ctx) { /* (wild_@0 : list<()>) -> <console/console,exn,ndet> () */ 
  kk_std_core_types__list_drop(wild___0, _ctx);
  kk_Unit; return kk_Unit;
}

kk_unit_t kk_main_main(kk_context_t* _ctx); /* () -> <console/console,exn,ndet> () */ 

void kk_main__init(kk_context_t* _ctx);


void kk_main__done(kk_context_t* _ctx);

#endif // header
