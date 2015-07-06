#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.HttpWebRequest
struct HttpWebRequest_t4067;
// System.Uri
struct Uri_t32;
// System.Security.Cryptography.X509Certificates.X509CertificateCollection
struct X509CertificateCollection_t3989;
// System.Net.ICredentials
struct ICredentials_t3912;
// System.Net.WebHeaderCollection
struct WebHeaderCollection_t4023;
// System.String
struct String_t;
// System.Net.IWebProxy
struct IWebProxy_t4041;
// System.Net.ServicePoint
struct ServicePoint_t4054;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3058;
// System.IAsyncResult
struct IAsyncResult_t448;
// System.AsyncCallback
struct AsyncCallback_t449;
// System.Object
struct Object_t;
// System.Net.WebResponse
struct WebResponse_t3947;
// System.Net.WebAsyncResult
struct WebAsyncResult_t4065;
// System.Exception
struct Exception_t468;
// System.Net.WebConnectionStream
struct WebConnectionStream_t4063;
// System.Net.WebConnectionData
struct WebConnectionData_t4082;
// System.Net.DecompressionMethods
#include "System_System_Net_DecompressionMethods.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Net.HttpStatusCode
#include "System_System_Net_HttpStatusCode.h"
// System.Net.WebExceptionStatus
#include "System_System_Net_WebExceptionStatus.h"

// System.Void System.Net.HttpWebRequest::.ctor(System.Uri)
extern "C" void HttpWebRequest__ctor_m13724 (HttpWebRequest_t4067 * __this, Uri_t32 * ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void HttpWebRequest__ctor_m13725 (HttpWebRequest_t4067 * __this, SerializationInfo_t3058 * ___serializationInfo, StreamingContext_t3059  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::.cctor()
extern "C" void HttpWebRequest__cctor_m13726 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void HttpWebRequest_System_Runtime_Serialization_ISerializable_GetObjectData_m13727 (HttpWebRequest_t4067 * __this, SerializationInfo_t3058 * ___serializationInfo, StreamingContext_t3059  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri System.Net.HttpWebRequest::get_Address()
extern "C" Uri_t32 * HttpWebRequest_get_Address_m13728 (HttpWebRequest_t4067 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.DecompressionMethods System.Net.HttpWebRequest::get_AutomaticDecompression()
extern "C" int32_t HttpWebRequest_get_AutomaticDecompression_m13729 (HttpWebRequest_t4067 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.HttpWebRequest::get_InternalAllowBuffering()
extern "C" bool HttpWebRequest_get_InternalAllowBuffering_m13730 (HttpWebRequest_t4067 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509CertificateCollection System.Net.HttpWebRequest::get_ClientCertificates()
extern "C" X509CertificateCollection_t3989 * HttpWebRequest_get_ClientCertificates_m13731 (HttpWebRequest_t4067 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.HttpWebRequest::get_ContentLength()
extern "C" int64_t HttpWebRequest_get_ContentLength_m13732 (HttpWebRequest_t4067 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::set_InternalContentLength(System.Int64)
extern "C" void HttpWebRequest_set_InternalContentLength_m13733 (HttpWebRequest_t4067 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.ICredentials System.Net.HttpWebRequest::get_Credentials()
extern "C" Object_t * HttpWebRequest_get_Credentials_m13734 (HttpWebRequest_t4067 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::set_Credentials(System.Net.ICredentials)
extern "C" void HttpWebRequest_set_Credentials_m13735 (HttpWebRequest_t4067 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebHeaderCollection System.Net.HttpWebRequest::get_Headers()
extern "C" WebHeaderCollection_t4023 * HttpWebRequest_get_Headers_m13736 (HttpWebRequest_t4067 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.HttpWebRequest::get_KeepAlive()
extern "C" bool HttpWebRequest_get_KeepAlive_m13737 (HttpWebRequest_t4067 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.HttpWebRequest::get_ReadWriteTimeout()
extern "C" int32_t HttpWebRequest_get_ReadWriteTimeout_m13738 (HttpWebRequest_t4067 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.HttpWebRequest::get_Method()
extern "C" String_t* HttpWebRequest_get_Method_m13739 (HttpWebRequest_t4067 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IWebProxy System.Net.HttpWebRequest::get_Proxy()
extern "C" Object_t * HttpWebRequest_get_Proxy_m13740 (HttpWebRequest_t4067 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri System.Net.HttpWebRequest::get_RequestUri()
extern "C" Uri_t32 * HttpWebRequest_get_RequestUri_m13741 (HttpWebRequest_t4067 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.HttpWebRequest::get_SendChunked()
extern "C" bool HttpWebRequest_get_SendChunked_m13742 (HttpWebRequest_t4067 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.ServicePoint System.Net.HttpWebRequest::get_ServicePoint()
extern "C" ServicePoint_t4054 * HttpWebRequest_get_ServicePoint_m13743 (HttpWebRequest_t4067 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.HttpWebRequest::get_TransferEncoding()
extern "C" String_t* HttpWebRequest_get_TransferEncoding_m13744 (HttpWebRequest_t4067 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.HttpWebRequest::get_UnsafeAuthenticatedConnectionSharing()
extern "C" bool HttpWebRequest_get_UnsafeAuthenticatedConnectionSharing_m13745 (HttpWebRequest_t4067 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.HttpWebRequest::get_ExpectContinue()
extern "C" bool HttpWebRequest_get_ExpectContinue_m13746 (HttpWebRequest_t4067 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::set_ExpectContinue(System.Boolean)
extern "C" void HttpWebRequest_set_ExpectContinue_m13747 (HttpWebRequest_t4067 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri System.Net.HttpWebRequest::get_AuthUri()
extern "C" Uri_t32 * HttpWebRequest_get_AuthUri_m13748 (HttpWebRequest_t4067 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.HttpWebRequest::get_ProxyQuery()
extern "C" bool HttpWebRequest_get_ProxyQuery_m13749 (HttpWebRequest_t4067 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.ServicePoint System.Net.HttpWebRequest::GetServicePoint()
extern "C" ServicePoint_t4054 * HttpWebRequest_GetServicePoint_m13750 (HttpWebRequest_t4067 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::CheckIfForceWrite()
extern "C" void HttpWebRequest_CheckIfForceWrite_m13751 (HttpWebRequest_t4067 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.HttpWebRequest::BeginGetResponse(System.AsyncCallback,System.Object)
extern "C" Object_t * HttpWebRequest_BeginGetResponse_m13752 (HttpWebRequest_t4067 * __this, AsyncCallback_t449 * ___callback, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebResponse System.Net.HttpWebRequest::EndGetResponse(System.IAsyncResult)
extern "C" WebResponse_t3947 * HttpWebRequest_EndGetResponse_m13753 (HttpWebRequest_t4067 * __this, Object_t * ___asyncResult, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebResponse System.Net.HttpWebRequest::GetResponse()
extern "C" WebResponse_t3947 * HttpWebRequest_GetResponse_m13754 (HttpWebRequest_t4067 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.HttpWebRequest::get_FinishedReading()
extern "C" bool HttpWebRequest_get_FinishedReading_m13755 (HttpWebRequest_t4067 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::set_FinishedReading(System.Boolean)
extern "C" void HttpWebRequest_set_FinishedReading_m13756 (HttpWebRequest_t4067 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.HttpWebRequest::get_Aborted()
extern "C" bool HttpWebRequest_get_Aborted_m13757 (HttpWebRequest_t4067 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::Abort()
extern "C" void HttpWebRequest_Abort_m13758 (HttpWebRequest_t4067 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void HttpWebRequest_GetObjectData_m13759 (HttpWebRequest_t4067 * __this, SerializationInfo_t3058 * ___serializationInfo, StreamingContext_t3059  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::DoContinueDelegate(System.Int32,System.Net.WebHeaderCollection)
extern "C" void HttpWebRequest_DoContinueDelegate_m13760 (HttpWebRequest_t4067 * __this, int32_t ___statusCode, WebHeaderCollection_t4023 * ___headers, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.HttpWebRequest::Redirect(System.Net.WebAsyncResult,System.Net.HttpStatusCode)
extern "C" bool HttpWebRequest_Redirect_m13761 (HttpWebRequest_t4067 * __this, WebAsyncResult_t4065 * ___result, int32_t ___code, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.HttpWebRequest::GetHeaders()
extern "C" String_t* HttpWebRequest_GetHeaders_m13762 (HttpWebRequest_t4067 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::DoPreAuthenticate()
extern "C" void HttpWebRequest_DoPreAuthenticate_m13763 (HttpWebRequest_t4067 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::SetWriteStreamError(System.Net.WebExceptionStatus,System.Exception)
extern "C" void HttpWebRequest_SetWriteStreamError_m13764 (HttpWebRequest_t4067 * __this, int32_t ___status, Exception_t468 * ___exc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::SendRequestHeaders(System.Boolean)
extern "C" void HttpWebRequest_SendRequestHeaders_m13765 (HttpWebRequest_t4067 * __this, bool ___propagate_error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::SetWriteStream(System.Net.WebConnectionStream)
extern "C" void HttpWebRequest_SetWriteStream_m13766 (HttpWebRequest_t4067 * __this, WebConnectionStream_t4063 * ___stream, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::SetResponseError(System.Net.WebExceptionStatus,System.Exception,System.String)
extern "C" void HttpWebRequest_SetResponseError_m13767 (HttpWebRequest_t4067 * __this, int32_t ___status, Exception_t468 * ___e, String_t* ___where, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::CheckSendError(System.Net.WebConnectionData)
extern "C" void HttpWebRequest_CheckSendError_m13768 (HttpWebRequest_t4067 * __this, WebConnectionData_t4082 * ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::HandleNtlmAuth(System.Net.WebAsyncResult)
extern "C" void HttpWebRequest_HandleNtlmAuth_m13769 (HttpWebRequest_t4067 * __this, WebAsyncResult_t4065 * ___r, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::SetResponseData(System.Net.WebConnectionData)
extern "C" void HttpWebRequest_SetResponseData_m13770 (HttpWebRequest_t4067 * __this, WebConnectionData_t4082 * ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.HttpWebRequest::CheckAuthorization(System.Net.WebResponse,System.Net.HttpStatusCode)
extern "C" bool HttpWebRequest_CheckAuthorization_m13771 (HttpWebRequest_t4067 * __this, WebResponse_t3947 * ___response, int32_t ___code, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.HttpWebRequest::CheckFinalStatus(System.Net.WebAsyncResult)
extern "C" bool HttpWebRequest_CheckFinalStatus_m13772 (HttpWebRequest_t4067 * __this, WebAsyncResult_t4065 * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
