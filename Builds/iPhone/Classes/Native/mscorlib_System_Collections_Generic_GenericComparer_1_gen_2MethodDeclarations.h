#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.GenericComparer`1<System.TimeSpan>
struct GenericComparer_1_t4398;
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"

// System.Void System.Collections.Generic.GenericComparer`1<System.TimeSpan>::.ctor()
extern "C" void GenericComparer_1__ctor_m21648_gshared (GenericComparer_1_t4398 * __this, const MethodInfo* method);
#define GenericComparer_1__ctor_m21648(__this, method) (( void (*) (GenericComparer_1_t4398 *, const MethodInfo*))GenericComparer_1__ctor_m21648_gshared)(__this, method)
// System.Int32 System.Collections.Generic.GenericComparer`1<System.TimeSpan>::Compare(T,T)
extern "C" int32_t GenericComparer_1_Compare_m45212_gshared (GenericComparer_1_t4398 * __this, TimeSpan_t2672  ___x, TimeSpan_t2672  ___y, const MethodInfo* method);
#define GenericComparer_1_Compare_m45212(__this, ___x, ___y, method) (( int32_t (*) (GenericComparer_1_t4398 *, TimeSpan_t2672 , TimeSpan_t2672 , const MethodInfo*))GenericComparer_1_Compare_m45212_gshared)(__this, ___x, ___y, method)
