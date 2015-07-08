#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<Consolation.Console/Log>
struct DefaultComparer_t6711;
// Consolation.Console/Log
#include "AssemblyU2DCSharp_Consolation_Console_Log.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<Consolation.Console/Log>::.ctor()
extern "C" void DefaultComparer__ctor_m31773_gshared (DefaultComparer_t6711 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m31773(__this, method) (( void (*) (DefaultComparer_t6711 *, const MethodInfo*))DefaultComparer__ctor_m31773_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<Consolation.Console/Log>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m31774_gshared (DefaultComparer_t6711 * __this, Log_t563  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m31774(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t6711 *, Log_t563 , const MethodInfo*))DefaultComparer_GetHashCode_m31774_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<Consolation.Console/Log>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m31775_gshared (DefaultComparer_t6711 * __this, Log_t563  ___x, Log_t563  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m31775(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t6711 *, Log_t563 , Log_t563 , const MethodInfo*))DefaultComparer_Equals_m31775_gshared)(__this, ___x, ___y, method)
