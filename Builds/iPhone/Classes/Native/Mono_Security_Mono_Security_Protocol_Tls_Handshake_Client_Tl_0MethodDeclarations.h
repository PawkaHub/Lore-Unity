#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificateVerify
struct TlsClientCertificateVerify_t4632;
// Mono.Security.Protocol.Tls.Context
struct Context_t4596;
// System.Security.Cryptography.RSA
struct RSA_t4447;
// System.Byte[]
struct ByteU5BU5D_t25;

// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificateVerify::.ctor(Mono.Security.Protocol.Tls.Context)
extern "C" void TlsClientCertificateVerify__ctor_m16403 (TlsClientCertificateVerify_t4632 * __this, Context_t4596 * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificateVerify::Update()
extern "C" void TlsClientCertificateVerify_Update_m16404 (TlsClientCertificateVerify_t4632 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificateVerify::ProcessAsSsl3()
extern "C" void TlsClientCertificateVerify_ProcessAsSsl3_m16405 (TlsClientCertificateVerify_t4632 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificateVerify::ProcessAsTls1()
extern "C" void TlsClientCertificateVerify_ProcessAsTls1_m16406 (TlsClientCertificateVerify_t4632 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificateVerify::getClientCertRSA(System.Security.Cryptography.RSA)
extern "C" RSA_t4447 * TlsClientCertificateVerify_getClientCertRSA_m16407 (TlsClientCertificateVerify_t4632 * __this, RSA_t4447 * ___privKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificateVerify::getUnsignedBigInteger(System.Byte[])
extern "C" ByteU5BU5D_t25* TlsClientCertificateVerify_getUnsignedBigInteger_m16408 (TlsClientCertificateVerify_t4632 * __this, ByteU5BU5D_t25* ___integer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
