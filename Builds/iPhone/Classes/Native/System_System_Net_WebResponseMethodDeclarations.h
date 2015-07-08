#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.WebResponse
struct WebResponse_t4185;
// System.Net.WebHeaderCollection
struct WebHeaderCollection_t4261;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3296;
// System.Exception
struct Exception_t496;
// System.IO.Stream
struct Stream_t1751;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Net.WebResponse::.ctor()
extern "C" void WebResponse__ctor_m14520 (WebResponse_t4185 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebResponse::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void WebResponse__ctor_m14521 (WebResponse_t4185 * __this, SerializationInfo_t3296 * ___serializationInfo, StreamingContext_t3297  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebResponse::System.IDisposable.Dispose()
extern "C" void WebResponse_System_IDisposable_Dispose_m14522 (WebResponse_t4185 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebResponse::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void WebResponse_System_Runtime_Serialization_ISerializable_GetObjectData_m14523 (WebResponse_t4185 * __this, SerializationInfo_t3296 * ___serializationInfo, StreamingContext_t3297  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebHeaderCollection System.Net.WebResponse::get_Headers()
extern "C" WebHeaderCollection_t4261 * WebResponse_get_Headers_m14524 (WebResponse_t4185 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Net.WebResponse::GetMustImplement()
extern "C" Exception_t496 * WebResponse_GetMustImplement_m14525 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebResponse::Close()
extern "C" void WebResponse_Close_m14526 (WebResponse_t4185 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream System.Net.WebResponse::GetResponseStream()
extern "C" Stream_t1751 * WebResponse_GetResponseStream_m14527 (WebResponse_t4185 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebResponse::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void WebResponse_GetObjectData_m14528 (WebResponse_t4185 * __this, SerializationInfo_t3296 * ___serializationInfo, StreamingContext_t3297  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
