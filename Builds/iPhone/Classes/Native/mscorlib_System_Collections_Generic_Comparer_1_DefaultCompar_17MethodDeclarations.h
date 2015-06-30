#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Comparer`1/DefaultComparer<System.TimeSpan>
struct DefaultComparer_t6415;
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"

// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<System.TimeSpan>::.ctor()
extern "C" void DefaultComparer__ctor_m45217_gshared (DefaultComparer_t6415 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m45217(__this, method) (( void (*) (DefaultComparer_t6415 *, const MethodInfo*))DefaultComparer__ctor_m45217_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<System.TimeSpan>::Compare(T,T)
extern "C" int32_t DefaultComparer_Compare_m45218_gshared (DefaultComparer_t6415 * __this, TimeSpan_t2672  ___x, TimeSpan_t2672  ___y, const MethodInfo* method);
#define DefaultComparer_Compare_m45218(__this, ___x, ___y, method) (( int32_t (*) (DefaultComparer_t6415 *, TimeSpan_t2672 , TimeSpan_t2672 , const MethodInfo*))DefaultComparer_Compare_m45218_gshared)(__this, ___x, ___y, method)
