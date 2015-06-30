﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Protocol.Tls.TlsException
struct TlsException_t1292;
// Mono.Security.Protocol.Tls.Alert
struct Alert_t1244;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1322;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// Mono.Security.Protocol.Tls.AlertLevel
#include "Mono_Security_Mono_Security_Protocol_Tls_AlertLevel.h"
// Mono.Security.Protocol.Tls.AlertDescription
#include "Mono_Security_Mono_Security_Protocol_Tls_AlertDescription.h"

// System.Void Mono.Security.Protocol.Tls.TlsException::.ctor(System.String)
extern "C" void TlsException__ctor_m6428 (TlsException_t1292 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void TlsException__ctor_m6429 (TlsException_t1292 * __this, SerializationInfo_t1322 * ___info, StreamingContext_t1323  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsException::.ctor(Mono.Security.Protocol.Tls.AlertLevel,Mono.Security.Protocol.Tls.AlertDescription)
extern "C" void TlsException__ctor_m6430 (TlsException_t1292 * __this, uint8_t ___level, uint8_t ___description, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsException::.ctor(Mono.Security.Protocol.Tls.AlertLevel,Mono.Security.Protocol.Tls.AlertDescription,System.String)
extern "C" void TlsException__ctor_m6431 (TlsException_t1292 * __this, uint8_t ___level, uint8_t ___description, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsException::.ctor(Mono.Security.Protocol.Tls.AlertDescription)
extern "C" void TlsException__ctor_m6432 (TlsException_t1292 * __this, uint8_t ___description, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsException::.ctor(Mono.Security.Protocol.Tls.AlertDescription,System.String)
extern "C" void TlsException__ctor_m6433 (TlsException_t1292 * __this, uint8_t ___description, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.Alert Mono.Security.Protocol.Tls.TlsException::get_Alert()
extern "C" Alert_t1244 * TlsException_get_Alert_m6434 (TlsException_t1292 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
