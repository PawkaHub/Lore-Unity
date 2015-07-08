#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.Security.SslStream
struct SslStream_t4228;
// System.IO.Stream
struct Stream_t1751;
// System.Net.Security.RemoteCertificateValidationCallback
struct RemoteCertificateValidationCallback_t4231;
// System.Net.Security.LocalCertificateSelectionCallback
struct LocalCertificateSelectionCallback_t4232;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t4311;
// System.Security.Cryptography.X509Certificates.X509CertificateCollection
struct X509CertificateCollection_t4227;
// System.String
struct String_t;
// System.IAsyncResult
struct IAsyncResult_t476;
// System.AsyncCallback
struct AsyncCallback_t477;
// System.Object
struct Object_t;
// System.Byte[]
struct ByteU5BU5D_t25;
// System.Security.Authentication.SslProtocols
#include "System_System_Security_Authentication_SslProtocols.h"
// Mono.Security.Protocol.Tls.SecurityProtocolType
#include "Mono_Security_Mono_Security_Protocol_Tls_SecurityProtocolTyp.h"
// System.IO.SeekOrigin
#include "mscorlib_System_IO_SeekOrigin.h"

// System.Void System.Net.Security.SslStream::.ctor(System.IO.Stream,System.Boolean,System.Net.Security.RemoteCertificateValidationCallback,System.Net.Security.LocalCertificateSelectionCallback)
extern "C" void SslStream__ctor_m13673 (SslStream_t4228 * __this, Stream_t1751 * ___innerStream, bool ___leaveStreamOpen, RemoteCertificateValidationCallback_t4231 * ___certValidationCallback, LocalCertificateSelectionCallback_t4232 * ___certSelectionCallback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Security.SslStream::get_CanRead()
extern "C" bool SslStream_get_CanRead_m13674 (SslStream_t4228 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Security.SslStream::get_CanSeek()
extern "C" bool SslStream_get_CanSeek_m13675 (SslStream_t4228 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Security.SslStream::get_CanWrite()
extern "C" bool SslStream_get_CanWrite_m13676 (SslStream_t4228 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.Security.SslStream::get_Length()
extern "C" int64_t SslStream_get_Length_m13677 (SslStream_t4228 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.Security.SslStream::get_Position()
extern "C" int64_t SslStream_get_Position_m13678 (SslStream_t4228 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Security.SslStream::set_Position(System.Int64)
extern "C" void SslStream_set_Position_m13679 (SslStream_t4228 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Security.SslStream::get_IsAuthenticated()
extern "C" bool SslStream_get_IsAuthenticated_m13680 (SslStream_t4228 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Security.SslStream::get_ReadTimeout()
extern "C" int32_t SslStream_get_ReadTimeout_m13681 (SslStream_t4228 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Security.SslStream::get_WriteTimeout()
extern "C" int32_t SslStream_get_WriteTimeout_m13682 (SslStream_t4228 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate System.Net.Security.SslStream::OnCertificateSelection(System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Security.Cryptography.X509Certificates.X509Certificate,System.String,System.Security.Cryptography.X509Certificates.X509CertificateCollection)
extern "C" X509Certificate_t4311 * SslStream_OnCertificateSelection_m13683 (SslStream_t4228 * __this, X509CertificateCollection_t4227 * ___clientCerts, X509Certificate_t4311 * ___serverCert, String_t* ___targetHost, X509CertificateCollection_t4227 * ___serverRequestedCerts, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.Security.SslStream::BeginAuthenticateAsClient(System.String,System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Security.Authentication.SslProtocols,System.Boolean,System.AsyncCallback,System.Object)
extern "C" Object_t * SslStream_BeginAuthenticateAsClient_m13684 (SslStream_t4228 * __this, String_t* ___targetHost, X509CertificateCollection_t4227 * ___clientCertificates, int32_t ___sslProtocolType, bool ___checkCertificateRevocation, AsyncCallback_t477 * ___asyncCallback, Object_t * ___asyncState, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.Security.SslStream::BeginRead(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern "C" Object_t * SslStream_BeginRead_m13685 (SslStream_t4228 * __this, ByteU5BU5D_t25* ___buffer, int32_t ___offset, int32_t ___count, AsyncCallback_t477 * ___asyncCallback, Object_t * ___asyncState, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.SecurityProtocolType System.Net.Security.SslStream::GetMonoSslProtocol(System.Security.Authentication.SslProtocols)
extern "C" int32_t SslStream_GetMonoSslProtocol_m13686 (SslStream_t4228 * __this, int32_t ___ms, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.Security.SslStream::BeginWrite(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern "C" Object_t * SslStream_BeginWrite_m13687 (SslStream_t4228 * __this, ByteU5BU5D_t25* ___buffer, int32_t ___offset, int32_t ___count, AsyncCallback_t477 * ___asyncCallback, Object_t * ___asyncState, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Security.SslStream::AuthenticateAsClient(System.String,System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Security.Authentication.SslProtocols,System.Boolean)
extern "C" void SslStream_AuthenticateAsClient_m13688 (SslStream_t4228 * __this, String_t* ___targetHost, X509CertificateCollection_t4227 * ___clientCertificates, int32_t ___sslProtocolType, bool ___checkCertificateRevocation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Security.SslStream::Dispose(System.Boolean)
extern "C" void SslStream_Dispose_m13689 (SslStream_t4228 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Security.SslStream::EndAuthenticateAsClient(System.IAsyncResult)
extern "C" void SslStream_EndAuthenticateAsClient_m13690 (SslStream_t4228 * __this, Object_t * ___asyncResult, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Security.SslStream::EndRead(System.IAsyncResult)
extern "C" int32_t SslStream_EndRead_m13691 (SslStream_t4228 * __this, Object_t * ___asyncResult, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Security.SslStream::EndWrite(System.IAsyncResult)
extern "C" void SslStream_EndWrite_m13692 (SslStream_t4228 * __this, Object_t * ___asyncResult, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Security.SslStream::Flush()
extern "C" void SslStream_Flush_m13693 (SslStream_t4228 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Security.SslStream::Read(System.Byte[],System.Int32,System.Int32)
extern "C" int32_t SslStream_Read_m13694 (SslStream_t4228 * __this, ByteU5BU5D_t25* ___buffer, int32_t ___offset, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.Security.SslStream::Seek(System.Int64,System.IO.SeekOrigin)
extern "C" int64_t SslStream_Seek_m13695 (SslStream_t4228 * __this, int64_t ___offset, int32_t ___origin, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Security.SslStream::SetLength(System.Int64)
extern "C" void SslStream_SetLength_m13696 (SslStream_t4228 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Security.SslStream::Write(System.Byte[],System.Int32,System.Int32)
extern "C" void SslStream_Write_m13697 (SslStream_t4228 * __this, ByteU5BU5D_t25* ___buffer, int32_t ___offset, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Security.SslStream::CheckConnectionAuthenticated()
extern "C" void SslStream_CheckConnectionAuthenticated_m13698 (SslStream_t4228 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
