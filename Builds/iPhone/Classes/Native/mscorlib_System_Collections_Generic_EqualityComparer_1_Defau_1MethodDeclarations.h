﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Int32>
struct DefaultComparer_t6270;

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Int32>::.ctor()
extern "C" void DefaultComparer__ctor_m25120_gshared (DefaultComparer_t6270 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m25120(__this, method) (( void (*) (DefaultComparer_t6270 *, const MethodInfo*))DefaultComparer__ctor_m25120_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Int32>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m25121_gshared (DefaultComparer_t6270 * __this, int32_t ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m25121(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t6270 *, int32_t, const MethodInfo*))DefaultComparer_GetHashCode_m25121_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Int32>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m25122_gshared (DefaultComparer_t6270 * __this, int32_t ___x, int32_t ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m25122(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t6270 *, int32_t, int32_t, const MethodInfo*))DefaultComparer_Equals_m25122_gshared)(__this, ___x, ___y, method)
