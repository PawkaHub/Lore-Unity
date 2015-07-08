#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.UnitySerializationHolder
struct UnitySerializationHolder_t5666;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3296;
// System.Type
struct Type_t;
// System.DBNull
struct DBNull_t4169;
// System.Reflection.Module
struct Module_t5334;
// System.Object
struct Object_t;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.UnitySerializationHolder::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void UnitySerializationHolder__ctor_m23303 (UnitySerializationHolder_t5666 * __this, SerializationInfo_t3296 * ___info, StreamingContext_t3297  ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UnitySerializationHolder::GetTypeData(System.Type,System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void UnitySerializationHolder_GetTypeData_m23304 (Object_t * __this /* static, unused */, Type_t * ___instance, SerializationInfo_t3296 * ___info, StreamingContext_t3297  ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UnitySerializationHolder::GetDBNullData(System.DBNull,System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void UnitySerializationHolder_GetDBNullData_m23305 (Object_t * __this /* static, unused */, DBNull_t4169 * ___instance, SerializationInfo_t3296 * ___info, StreamingContext_t3297  ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UnitySerializationHolder::GetModuleData(System.Reflection.Module,System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void UnitySerializationHolder_GetModuleData_m23306 (Object_t * __this /* static, unused */, Module_t5334 * ___instance, SerializationInfo_t3296 * ___info, StreamingContext_t3297  ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UnitySerializationHolder::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void UnitySerializationHolder_GetObjectData_m23307 (UnitySerializationHolder_t5666 * __this, SerializationInfo_t3296 * ___info, StreamingContext_t3297  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.UnitySerializationHolder::GetRealObject(System.Runtime.Serialization.StreamingContext)
extern "C" Object_t * UnitySerializationHolder_GetRealObject_m23308 (UnitySerializationHolder_t5666 * __this, StreamingContext_t3297  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
