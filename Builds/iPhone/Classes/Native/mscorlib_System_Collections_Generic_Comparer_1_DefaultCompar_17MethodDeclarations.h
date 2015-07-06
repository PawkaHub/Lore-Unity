#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Comparer`1/DefaultComparer<System.DateTime>
struct DefaultComparer_t7646;
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<System.DateTime>::.ctor()
extern "C" void DefaultComparer__ctor_m48103_gshared (DefaultComparer_t7646 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m48103(__this, method) (( void (*) (DefaultComparer_t7646 *, const MethodInfo*))DefaultComparer__ctor_m48103_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<System.DateTime>::Compare(T,T)
extern "C" int32_t DefaultComparer_Compare_m48104_gshared (DefaultComparer_t7646 * __this, DateTime_t1705  ___x, DateTime_t1705  ___y, const MethodInfo* method);
#define DefaultComparer_Compare_m48104(__this, ___x, ___y, method) (( int32_t (*) (DefaultComparer_t7646 *, DateTime_t1705 , DateTime_t1705 , const MethodInfo*))DefaultComparer_Compare_m48104_gshared)(__this, ___x, ___y, method)
