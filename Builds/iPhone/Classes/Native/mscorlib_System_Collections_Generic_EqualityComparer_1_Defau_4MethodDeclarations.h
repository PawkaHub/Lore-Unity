#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityParseHelpers.Loom/DelayedQueueItem>
struct DefaultComparer_t6471;
// UnityParseHelpers.Loom/DelayedQueueItem
#include "AssemblyU2DCSharp_UnityParseHelpers_Loom_DelayedQueueItem.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityParseHelpers.Loom/DelayedQueueItem>::.ctor()
extern "C" void DefaultComparer__ctor_m28361_gshared (DefaultComparer_t6471 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m28361(__this, method) (( void (*) (DefaultComparer_t6471 *, const MethodInfo*))DefaultComparer__ctor_m28361_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityParseHelpers.Loom/DelayedQueueItem>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m28362_gshared (DefaultComparer_t6471 * __this, DelayedQueueItem_t323  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m28362(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t6471 *, DelayedQueueItem_t323 , const MethodInfo*))DefaultComparer_GetHashCode_m28362_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityParseHelpers.Loom/DelayedQueueItem>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m28363_gshared (DefaultComparer_t6471 * __this, DelayedQueueItem_t323  ___x, DelayedQueueItem_t323  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m28363(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t6471 *, DelayedQueueItem_t323 , DelayedQueueItem_t323 , const MethodInfo*))DefaultComparer_Equals_m28363_gshared)(__this, ___x, ___y, method)
