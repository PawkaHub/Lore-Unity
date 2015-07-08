#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityParseHelpers.Loom/ConditionalQueueItem>
struct DefaultComparer_t6482;
// UnityParseHelpers.Loom/ConditionalQueueItem
#include "AssemblyU2DCSharp_UnityParseHelpers_Loom_ConditionalQueueIte.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityParseHelpers.Loom/ConditionalQueueItem>::.ctor()
extern "C" void DefaultComparer__ctor_m28519_gshared (DefaultComparer_t6482 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m28519(__this, method) (( void (*) (DefaultComparer_t6482 *, const MethodInfo*))DefaultComparer__ctor_m28519_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityParseHelpers.Loom/ConditionalQueueItem>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m28520_gshared (DefaultComparer_t6482 * __this, ConditionalQueueItem_t326  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m28520(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t6482 *, ConditionalQueueItem_t326 , const MethodInfo*))DefaultComparer_GetHashCode_m28520_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityParseHelpers.Loom/ConditionalQueueItem>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m28521_gshared (DefaultComparer_t6482 * __this, ConditionalQueueItem_t326  ___x, ConditionalQueueItem_t326  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m28521(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t6482 *, ConditionalQueueItem_t326 , ConditionalQueueItem_t326 , const MethodInfo*))DefaultComparer_Equals_m28521_gshared)(__this, ___x, ___y, method)
