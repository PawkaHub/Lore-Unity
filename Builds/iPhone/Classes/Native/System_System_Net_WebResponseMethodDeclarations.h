#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.WebResponse
struct WebResponse_t2560;
// System.Net.WebHeaderCollection
struct WebHeaderCollection_t3590;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1322;
// System.Exception
struct Exception_t468;
// System.IO.Stream
struct Stream_t1271;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Net.WebResponse::.ctor()
extern "C" void WebResponse__ctor_m16042 (WebResponse_t2560 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebResponse::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void WebResponse__ctor_m16043 (WebResponse_t2560 * __this, SerializationInfo_t1322 * ___serializationInfo, StreamingContext_t1323  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebResponse::System.IDisposable.Dispose()
extern "C" void WebResponse_System_IDisposable_Dispose_m16044 (WebResponse_t2560 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebResponse::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void WebResponse_System_Runtime_Serialization_ISerializable_GetObjectData_m16045 (WebResponse_t2560 * __this, SerializationInfo_t1322 * ___serializationInfo, StreamingContext_t1323  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebHeaderCollection System.Net.WebResponse::get_Headers()
extern "C" WebHeaderCollection_t3590 * WebResponse_get_Headers_m16046 (WebResponse_t2560 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Net.WebResponse::GetMustImplement()
extern "C" Exception_t468 * WebResponse_GetMustImplement_m16047 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebResponse::Close()
extern "C" void WebResponse_Close_m16048 (WebResponse_t2560 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream System.Net.WebResponse::GetResponseStream()
extern "C" Stream_t1271 * WebResponse_GetResponseStream_m16049 (WebResponse_t2560 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebResponse::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void WebResponse_GetObjectData_m16050 (WebResponse_t2560 * __this, SerializationInfo_t1322 * ___serializationInfo, StreamingContext_t1323  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
