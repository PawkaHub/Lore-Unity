#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.Vector3>
struct DefaultComparer_t6063;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.Vector3>::.ctor()
extern "C" void DefaultComparer__ctor_m25169_gshared (DefaultComparer_t6063 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m25169(__this, method) (( void (*) (DefaultComparer_t6063 *, const MethodInfo*))DefaultComparer__ctor_m25169_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<UnityEngine.Vector3>::Compare(T,T)
extern "C" int32_t DefaultComparer_Compare_m25170_gshared (DefaultComparer_t6063 * __this, Vector3_t53  ___x, Vector3_t53  ___y, const MethodInfo* method);
#define DefaultComparer_Compare_m25170(__this, ___x, ___y, method) (( int32_t (*) (DefaultComparer_t6063 *, Vector3_t53 , Vector3_t53 , const MethodInfo*))DefaultComparer_Compare_m25170_gshared)(__this, ___x, ___y, method)
