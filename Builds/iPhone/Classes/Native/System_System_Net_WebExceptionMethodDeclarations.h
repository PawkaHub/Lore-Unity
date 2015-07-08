#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.WebException
struct WebException_t4322;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3296;
// System.Exception
struct Exception_t496;
// System.Net.WebResponse
struct WebResponse_t4185;
// System.Net.WebExceptionStatus
#include "System_System_Net_WebExceptionStatus.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Net.WebException::.ctor()
extern "C" void WebException__ctor_m14450 (WebException_t4322 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebException::.ctor(System.String)
extern "C" void WebException__ctor_m14451 (WebException_t4322 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void WebException__ctor_m14452 (WebException_t4322 * __this, SerializationInfo_t3296 * ___info, StreamingContext_t3297  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebException::.ctor(System.String,System.Exception)
extern "C" void WebException__ctor_m14453 (WebException_t4322 * __this, String_t* ___message, Exception_t496 * ___innerException, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebException::.ctor(System.String,System.Net.WebExceptionStatus)
extern "C" void WebException__ctor_m14454 (WebException_t4322 * __this, String_t* ___message, int32_t ___status, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebException::.ctor(System.String,System.Exception,System.Net.WebExceptionStatus)
extern "C" void WebException__ctor_m14455 (WebException_t4322 * __this, String_t* ___message, Exception_t496 * ___innerException, int32_t ___status, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebException::.ctor(System.String,System.Exception,System.Net.WebExceptionStatus,System.Net.WebResponse)
extern "C" void WebException__ctor_m14456 (WebException_t4322 * __this, String_t* ___message, Exception_t496 * ___innerException, int32_t ___status, WebResponse_t4185 * ___response, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebException::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void WebException_System_Runtime_Serialization_ISerializable_GetObjectData_m14457 (WebException_t4322 * __this, SerializationInfo_t3296 * ___info, StreamingContext_t3297  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebExceptionStatus System.Net.WebException::get_Status()
extern "C" int32_t WebException_get_Status_m14458 (WebException_t4322 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebException::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void WebException_GetObjectData_m14459 (WebException_t4322 * __this, SerializationInfo_t3296 * ___serializationInfo, StreamingContext_t3297  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
