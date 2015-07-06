#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.UnitySerializationHolder
struct UnitySerializationHolder_t5428;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3058;
// System.Type
struct Type_t;
// System.DBNull
struct DBNull_t3931;
// System.Reflection.Module
struct Module_t5096;
// System.Object
struct Object_t;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.UnitySerializationHolder::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void UnitySerializationHolder__ctor_m22886 (UnitySerializationHolder_t5428 * __this, SerializationInfo_t3058 * ___info, StreamingContext_t3059  ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UnitySerializationHolder::GetTypeData(System.Type,System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void UnitySerializationHolder_GetTypeData_m22887 (Object_t * __this /* static, unused */, Type_t * ___instance, SerializationInfo_t3058 * ___info, StreamingContext_t3059  ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UnitySerializationHolder::GetDBNullData(System.DBNull,System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void UnitySerializationHolder_GetDBNullData_m22888 (Object_t * __this /* static, unused */, DBNull_t3931 * ___instance, SerializationInfo_t3058 * ___info, StreamingContext_t3059  ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UnitySerializationHolder::GetModuleData(System.Reflection.Module,System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void UnitySerializationHolder_GetModuleData_m22889 (Object_t * __this /* static, unused */, Module_t5096 * ___instance, SerializationInfo_t3058 * ___info, StreamingContext_t3059  ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UnitySerializationHolder::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void UnitySerializationHolder_GetObjectData_m22890 (UnitySerializationHolder_t5428 * __this, SerializationInfo_t3058 * ___info, StreamingContext_t3059  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.UnitySerializationHolder::GetRealObject(System.Runtime.Serialization.StreamingContext)
extern "C" Object_t * UnitySerializationHolder_GetRealObject_m22891 (UnitySerializationHolder_t5428 * __this, StreamingContext_t3059  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
