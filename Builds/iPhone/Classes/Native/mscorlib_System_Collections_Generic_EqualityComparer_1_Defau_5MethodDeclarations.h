#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<Consolation.Console/Log>
struct DefaultComparer_t6385;
// Consolation.Console/Log
#include "AssemblyU2DCSharp_Consolation_Console_Log.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<Consolation.Console/Log>::.ctor()
extern "C" void DefaultComparer__ctor_m30401_gshared (DefaultComparer_t6385 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m30401(__this, method) (( void (*) (DefaultComparer_t6385 *, const MethodInfo*))DefaultComparer__ctor_m30401_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<Consolation.Console/Log>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m30402_gshared (DefaultComparer_t6385 * __this, Log_t539  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m30402(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t6385 *, Log_t539 , const MethodInfo*))DefaultComparer_GetHashCode_m30402_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<Consolation.Console/Log>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m30403_gshared (DefaultComparer_t6385 * __this, Log_t539  ___x, Log_t539  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m30403(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t6385 *, Log_t539 , Log_t539 , const MethodInfo*))DefaultComparer_Equals_m30403_gshared)(__this, ___x, ___y, method)
