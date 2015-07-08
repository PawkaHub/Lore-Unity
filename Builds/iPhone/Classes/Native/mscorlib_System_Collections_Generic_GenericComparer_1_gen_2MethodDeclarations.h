#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.GenericComparer`1<System.TimeSpan>
struct GenericComparer_1_t5725;
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"

// System.Void System.Collections.Generic.GenericComparer`1<System.TimeSpan>::.ctor()
extern "C" void GenericComparer_1__ctor_m23391_gshared (GenericComparer_1_t5725 * __this, const MethodInfo* method);
#define GenericComparer_1__ctor_m23391(__this, method) (( void (*) (GenericComparer_1_t5725 *, const MethodInfo*))GenericComparer_1__ctor_m23391_gshared)(__this, method)
// System.Int32 System.Collections.Generic.GenericComparer`1<System.TimeSpan>::Compare(T,T)
extern "C" int32_t GenericComparer_1_Compare_m73421_gshared (GenericComparer_1_t5725 * __this, TimeSpan_t629  ___x, TimeSpan_t629  ___y, const MethodInfo* method);
#define GenericComparer_1_Compare_m73421(__this, ___x, ___y, method) (( int32_t (*) (GenericComparer_1_t5725 *, TimeSpan_t629 , TimeSpan_t629 , const MethodInfo*))GenericComparer_1_Compare_m73421_gshared)(__this, ___x, ___y, method)
