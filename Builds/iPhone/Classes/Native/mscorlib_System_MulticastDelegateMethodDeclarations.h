#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.MulticastDelegate
struct MulticastDelegate_t479;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3296;
// System.Object
struct Object_t;
// System.Object[]
struct ObjectU5BU5D_t21;
// System.Delegate[]
struct DelegateU5BU5D_t2720;
// System.Delegate
struct Delegate_t651;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.MulticastDelegate::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void MulticastDelegate_GetObjectData_m4053 (MulticastDelegate_t479 * __this, SerializationInfo_t3296 * ___info, StreamingContext_t3297  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.MulticastDelegate::DynamicInvokeImpl(System.Object[])
extern "C" Object_t * MulticastDelegate_DynamicInvokeImpl_m4054 (MulticastDelegate_t479 * __this, ObjectU5BU5D_t21* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MulticastDelegate::Equals(System.Object)
extern "C" bool MulticastDelegate_Equals_m4051 (MulticastDelegate_t479 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.MulticastDelegate::GetHashCode()
extern "C" int32_t MulticastDelegate_GetHashCode_m4052 (MulticastDelegate_t479 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate[] System.MulticastDelegate::GetInvocationList()
extern "C" DelegateU5BU5D_t2720* MulticastDelegate_GetInvocationList_m4056 (MulticastDelegate_t479 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.MulticastDelegate::CombineImpl(System.Delegate)
extern "C" Delegate_t651 * MulticastDelegate_CombineImpl_m4057 (MulticastDelegate_t479 * __this, Delegate_t651 * ___follow, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MulticastDelegate::BaseEquals(System.MulticastDelegate)
extern "C" bool MulticastDelegate_BaseEquals_m19272 (MulticastDelegate_t479 * __this, MulticastDelegate_t479 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.MulticastDelegate System.MulticastDelegate::KPM(System.MulticastDelegate,System.MulticastDelegate,System.MulticastDelegate&)
extern "C" MulticastDelegate_t479 * MulticastDelegate_KPM_m19273 (Object_t * __this /* static, unused */, MulticastDelegate_t479 * ___needle, MulticastDelegate_t479 * ___haystack, MulticastDelegate_t479 ** ___tail, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.MulticastDelegate::RemoveImpl(System.Delegate)
extern "C" Delegate_t651 * MulticastDelegate_RemoveImpl_m4058 (MulticastDelegate_t479 * __this, Delegate_t651 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MulticastDelegate::op_Equality(System.MulticastDelegate,System.MulticastDelegate)
extern "C" bool MulticastDelegate_op_Equality_m7554 (Object_t * __this /* static, unused */, MulticastDelegate_t479 * ___d1, MulticastDelegate_t479 * ___d2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
