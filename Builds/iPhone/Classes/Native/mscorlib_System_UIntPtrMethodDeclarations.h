﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.UIntPtr
struct UIntPtr_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3058;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Void
#include "mscorlib_System_Void.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.UIntPtr
#include "mscorlib_System_UIntPtr.h"

// System.Void System.UIntPtr::.ctor(System.UInt64)
extern "C" void UIntPtr__ctor_m18835 (UIntPtr_t * __this, uint64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UIntPtr::.ctor(System.UInt32)
extern "C" void UIntPtr__ctor_m18836 (UIntPtr_t * __this, uint32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UIntPtr::.ctor(System.Void*)
extern "C" void UIntPtr__ctor_m18837 (UIntPtr_t * __this, void* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UIntPtr::.cctor()
extern "C" void UIntPtr__cctor_m18838 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UIntPtr::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void UIntPtr_System_Runtime_Serialization_ISerializable_GetObjectData_m18839 (UIntPtr_t * __this, SerializationInfo_t3058 * ___info, StreamingContext_t3059  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.UIntPtr::Equals(System.Object)
extern "C" bool UIntPtr_Equals_m18840 (UIntPtr_t * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.UIntPtr::GetHashCode()
extern "C" int32_t UIntPtr_GetHashCode_m18841 (UIntPtr_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.UIntPtr::ToUInt32()
extern "C" uint32_t UIntPtr_ToUInt32_m18842 (UIntPtr_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.UIntPtr::ToUInt64()
extern "C" uint64_t UIntPtr_ToUInt64_m18843 (UIntPtr_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void* System.UIntPtr::ToPointer()
extern "C" void* UIntPtr_ToPointer_m18844 (UIntPtr_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.UIntPtr::ToString()
extern "C" String_t* UIntPtr_ToString_m18845 (UIntPtr_t * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.UIntPtr::get_Size()
extern "C" int32_t UIntPtr_get_Size_m18846 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.UIntPtr::op_Equality(System.UIntPtr,System.UIntPtr)
extern "C" bool UIntPtr_op_Equality_m18847 (Object_t * __this /* static, unused */, UIntPtr_t  ___value1, UIntPtr_t  ___value2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.UIntPtr::op_Inequality(System.UIntPtr,System.UIntPtr)
extern "C" bool UIntPtr_op_Inequality_m18848 (Object_t * __this /* static, unused */, UIntPtr_t  ___value1, UIntPtr_t  ___value2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.UIntPtr::op_Explicit(System.UIntPtr)
extern "C" uint64_t UIntPtr_op_Explicit_m18849 (Object_t * __this /* static, unused */, UIntPtr_t  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.UIntPtr::op_Explicit(System.UIntPtr)
extern "C" uint32_t UIntPtr_op_Explicit_m18850 (Object_t * __this /* static, unused */, UIntPtr_t  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UIntPtr System.UIntPtr::op_Explicit(System.UInt64)
extern "C" UIntPtr_t  UIntPtr_op_Explicit_m18851 (Object_t * __this /* static, unused */, uint64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UIntPtr System.UIntPtr::op_Explicit(System.Void*)
extern "C" UIntPtr_t  UIntPtr_op_Explicit_m18852 (Object_t * __this /* static, unused */, void* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void* System.UIntPtr::op_Explicit(System.UIntPtr)
extern "C" void* UIntPtr_op_Explicit_m18853 (Object_t * __this /* static, unused */, UIntPtr_t  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UIntPtr System.UIntPtr::op_Explicit(System.UInt32)
extern "C" UIntPtr_t  UIntPtr_op_Explicit_m18854 (Object_t * __this /* static, unused */, uint32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
