#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.CookieException
struct CookieException_t4030;
// System.String
struct String_t;
// System.Exception
struct Exception_t468;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3058;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Net.CookieException::.ctor()
extern "C" void CookieException__ctor_m13512 (CookieException_t4030 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.CookieException::.ctor(System.String)
extern "C" void CookieException__ctor_m13513 (CookieException_t4030 * __this, String_t* ___msg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.CookieException::.ctor(System.String,System.Exception)
extern "C" void CookieException__ctor_m13514 (CookieException_t4030 * __this, String_t* ___msg, Exception_t468 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.CookieException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void CookieException__ctor_m13515 (CookieException_t4030 * __this, SerializationInfo_t3058 * ___info, StreamingContext_t3059  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.CookieException::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void CookieException_System_Runtime_Serialization_ISerializable_GetObjectData_m13516 (CookieException_t4030 * __this, SerializationInfo_t3058 * ___info, StreamingContext_t3059  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.CookieException::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void CookieException_GetObjectData_m13517 (CookieException_t4030 * __this, SerializationInfo_t3058 * ___serializationInfo, StreamingContext_t3059  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
