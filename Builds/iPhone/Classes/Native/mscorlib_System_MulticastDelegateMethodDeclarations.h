#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.MulticastDelegate
struct MulticastDelegate_t451;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1322;
// System.Object
struct Object_t;
// System.Object[]
struct ObjectU5BU5D_t21;
// System.Delegate[]
struct DelegateU5BU5D_t4362;
// System.Delegate
struct Delegate_t572;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.MulticastDelegate::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void MulticastDelegate_GetObjectData_m3370 (MulticastDelegate_t451 * __this, SerializationInfo_t1322 * ___info, StreamingContext_t1323  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.MulticastDelegate::DynamicInvokeImpl(System.Object[])
extern "C" Object_t * MulticastDelegate_DynamicInvokeImpl_m3371 (MulticastDelegate_t451 * __this, ObjectU5BU5D_t21* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MulticastDelegate::Equals(System.Object)
extern "C" bool MulticastDelegate_Equals_m3368 (MulticastDelegate_t451 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.MulticastDelegate::GetHashCode()
extern "C" int32_t MulticastDelegate_GetHashCode_m3369 (MulticastDelegate_t451 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate[] System.MulticastDelegate::GetInvocationList()
extern "C" DelegateU5BU5D_t4362* MulticastDelegate_GetInvocationList_m3373 (MulticastDelegate_t451 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.MulticastDelegate::CombineImpl(System.Delegate)
extern "C" Delegate_t572 * MulticastDelegate_CombineImpl_m3374 (MulticastDelegate_t451 * __this, Delegate_t572 * ___follow, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MulticastDelegate::BaseEquals(System.MulticastDelegate)
extern "C" bool MulticastDelegate_BaseEquals_m17572 (MulticastDelegate_t451 * __this, MulticastDelegate_t451 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.MulticastDelegate System.MulticastDelegate::KPM(System.MulticastDelegate,System.MulticastDelegate,System.MulticastDelegate&)
extern "C" MulticastDelegate_t451 * MulticastDelegate_KPM_m17573 (Object_t * __this /* static, unused */, MulticastDelegate_t451 * ___needle, MulticastDelegate_t451 * ___haystack, MulticastDelegate_t451 ** ___tail, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.MulticastDelegate::RemoveImpl(System.Delegate)
extern "C" Delegate_t572 * MulticastDelegate_RemoveImpl_m3375 (MulticastDelegate_t451 * __this, Delegate_t572 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MulticastDelegate::op_Equality(System.MulticastDelegate,System.MulticastDelegate)
extern "C" bool MulticastDelegate_op_Equality_m5253 (Object_t * __this /* static, unused */, MulticastDelegate_t451 * ___d1, MulticastDelegate_t451 * ___d2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
