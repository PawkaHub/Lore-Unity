#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Protocol.Tls.Handshake.HandshakeMessage
struct HandshakeMessage_t4615;
// Mono.Security.Protocol.Tls.Context
struct Context_t4596;
// System.Byte[]
struct ByteU5BU5D_t25;
// Mono.Security.Protocol.Tls.Handshake.HandshakeType
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_Handshake.h"
// Mono.Security.Protocol.Tls.ContentType
#include "Mono_Security_Mono_Security_Protocol_Tls_ContentType.h"

// System.Void Mono.Security.Protocol.Tls.Handshake.HandshakeMessage::.ctor(Mono.Security.Protocol.Tls.Context,Mono.Security.Protocol.Tls.Handshake.HandshakeType)
extern "C" void HandshakeMessage__ctor_m16385 (HandshakeMessage_t4615 * __this, Context_t4596 * ___context, uint8_t ___handshakeType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.HandshakeMessage::.ctor(Mono.Security.Protocol.Tls.Context,Mono.Security.Protocol.Tls.Handshake.HandshakeType,Mono.Security.Protocol.Tls.ContentType)
extern "C" void HandshakeMessage__ctor_m16386 (HandshakeMessage_t4615 * __this, Context_t4596 * ___context, uint8_t ___handshakeType, uint8_t ___contentType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.HandshakeMessage::.ctor(Mono.Security.Protocol.Tls.Context,Mono.Security.Protocol.Tls.Handshake.HandshakeType,System.Byte[])
extern "C" void HandshakeMessage__ctor_m16387 (HandshakeMessage_t4615 * __this, Context_t4596 * ___context, uint8_t ___handshakeType, ByteU5BU5D_t25* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.Context Mono.Security.Protocol.Tls.Handshake.HandshakeMessage::get_Context()
extern "C" Context_t4596 * HandshakeMessage_get_Context_m16388 (HandshakeMessage_t4615 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.Handshake.HandshakeType Mono.Security.Protocol.Tls.Handshake.HandshakeMessage::get_HandshakeType()
extern "C" uint8_t HandshakeMessage_get_HandshakeType_m16389 (HandshakeMessage_t4615 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.ContentType Mono.Security.Protocol.Tls.Handshake.HandshakeMessage::get_ContentType()
extern "C" uint8_t HandshakeMessage_get_ContentType_m16390 (HandshakeMessage_t4615 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.HandshakeMessage::ProcessAsTls1()
// System.Void Mono.Security.Protocol.Tls.Handshake.HandshakeMessage::ProcessAsSsl3()
// System.Void Mono.Security.Protocol.Tls.Handshake.HandshakeMessage::Process()
extern "C" void HandshakeMessage_Process_m16391 (HandshakeMessage_t4615 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.HandshakeMessage::Update()
extern "C" void HandshakeMessage_Update_m16392 (HandshakeMessage_t4615 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.Handshake.HandshakeMessage::EncodeMessage()
extern "C" ByteU5BU5D_t25* HandshakeMessage_EncodeMessage_m16393 (HandshakeMessage_t4615 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.Handshake.HandshakeMessage::Compare(System.Byte[],System.Byte[])
extern "C" bool HandshakeMessage_Compare_m16394 (Object_t * __this /* static, unused */, ByteU5BU5D_t25* ___buffer1, ByteU5BU5D_t25* ___buffer2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
