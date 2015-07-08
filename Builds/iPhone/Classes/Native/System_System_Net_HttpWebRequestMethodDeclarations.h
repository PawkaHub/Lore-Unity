#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.HttpWebRequest
struct HttpWebRequest_t4305;
// System.Uri
struct Uri_t32;
// System.Security.Cryptography.X509Certificates.X509CertificateCollection
struct X509CertificateCollection_t4227;
// System.Net.ICredentials
struct ICredentials_t4150;
// System.Net.WebHeaderCollection
struct WebHeaderCollection_t4261;
// System.String
struct String_t;
// System.Net.IWebProxy
struct IWebProxy_t4279;
// System.Net.ServicePoint
struct ServicePoint_t4292;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3296;
// System.IAsyncResult
struct IAsyncResult_t476;
// System.AsyncCallback
struct AsyncCallback_t477;
// System.Object
struct Object_t;
// System.Net.WebResponse
struct WebResponse_t4185;
// System.Net.WebAsyncResult
struct WebAsyncResult_t4303;
// System.Exception
struct Exception_t496;
// System.Net.WebConnectionStream
struct WebConnectionStream_t4301;
// System.Net.WebConnectionData
struct WebConnectionData_t4320;
// System.Net.DecompressionMethods
#include "System_System_Net_DecompressionMethods.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Net.HttpStatusCode
#include "System_System_Net_HttpStatusCode.h"
// System.Net.WebExceptionStatus
#include "System_System_Net_WebExceptionStatus.h"

// System.Void System.Net.HttpWebRequest::.ctor(System.Uri)
extern "C" void HttpWebRequest__ctor_m14142 (HttpWebRequest_t4305 * __this, Uri_t32 * ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void HttpWebRequest__ctor_m14143 (HttpWebRequest_t4305 * __this, SerializationInfo_t3296 * ___serializationInfo, StreamingContext_t3297  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::.cctor()
extern "C" void HttpWebRequest__cctor_m14144 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void HttpWebRequest_System_Runtime_Serialization_ISerializable_GetObjectData_m14145 (HttpWebRequest_t4305 * __this, SerializationInfo_t3296 * ___serializationInfo, StreamingContext_t3297  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri System.Net.HttpWebRequest::get_Address()
extern "C" Uri_t32 * HttpWebRequest_get_Address_m14146 (HttpWebRequest_t4305 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.DecompressionMethods System.Net.HttpWebRequest::get_AutomaticDecompression()
extern "C" int32_t HttpWebRequest_get_AutomaticDecompression_m14147 (HttpWebRequest_t4305 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.HttpWebRequest::get_InternalAllowBuffering()
extern "C" bool HttpWebRequest_get_InternalAllowBuffering_m14148 (HttpWebRequest_t4305 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509CertificateCollection System.Net.HttpWebRequest::get_ClientCertificates()
extern "C" X509CertificateCollection_t4227 * HttpWebRequest_get_ClientCertificates_m14149 (HttpWebRequest_t4305 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.HttpWebRequest::get_ContentLength()
extern "C" int64_t HttpWebRequest_get_ContentLength_m14150 (HttpWebRequest_t4305 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::set_InternalContentLength(System.Int64)
extern "C" void HttpWebRequest_set_InternalContentLength_m14151 (HttpWebRequest_t4305 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.ICredentials System.Net.HttpWebRequest::get_Credentials()
extern "C" Object_t * HttpWebRequest_get_Credentials_m14152 (HttpWebRequest_t4305 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::set_Credentials(System.Net.ICredentials)
extern "C" void HttpWebRequest_set_Credentials_m14153 (HttpWebRequest_t4305 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebHeaderCollection System.Net.HttpWebRequest::get_Headers()
extern "C" WebHeaderCollection_t4261 * HttpWebRequest_get_Headers_m14154 (HttpWebRequest_t4305 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.HttpWebRequest::get_KeepAlive()
extern "C" bool HttpWebRequest_get_KeepAlive_m14155 (HttpWebRequest_t4305 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.HttpWebRequest::get_ReadWriteTimeout()
extern "C" int32_t HttpWebRequest_get_ReadWriteTimeout_m14156 (HttpWebRequest_t4305 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.HttpWebRequest::get_Method()
extern "C" String_t* HttpWebRequest_get_Method_m14157 (HttpWebRequest_t4305 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IWebProxy System.Net.HttpWebRequest::get_Proxy()
extern "C" Object_t * HttpWebRequest_get_Proxy_m14158 (HttpWebRequest_t4305 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri System.Net.HttpWebRequest::get_RequestUri()
extern "C" Uri_t32 * HttpWebRequest_get_RequestUri_m14159 (HttpWebRequest_t4305 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.HttpWebRequest::get_SendChunked()
extern "C" bool HttpWebRequest_get_SendChunked_m14160 (HttpWebRequest_t4305 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.ServicePoint System.Net.HttpWebRequest::get_ServicePoint()
extern "C" ServicePoint_t4292 * HttpWebRequest_get_ServicePoint_m14161 (HttpWebRequest_t4305 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.HttpWebRequest::get_TransferEncoding()
extern "C" String_t* HttpWebRequest_get_TransferEncoding_m14162 (HttpWebRequest_t4305 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.HttpWebRequest::get_UnsafeAuthenticatedConnectionSharing()
extern "C" bool HttpWebRequest_get_UnsafeAuthenticatedConnectionSharing_m14163 (HttpWebRequest_t4305 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.HttpWebRequest::get_ExpectContinue()
extern "C" bool HttpWebRequest_get_ExpectContinue_m14164 (HttpWebRequest_t4305 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::set_ExpectContinue(System.Boolean)
extern "C" void HttpWebRequest_set_ExpectContinue_m14165 (HttpWebRequest_t4305 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri System.Net.HttpWebRequest::get_AuthUri()
extern "C" Uri_t32 * HttpWebRequest_get_AuthUri_m14166 (HttpWebRequest_t4305 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.HttpWebRequest::get_ProxyQuery()
extern "C" bool HttpWebRequest_get_ProxyQuery_m14167 (HttpWebRequest_t4305 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.ServicePoint System.Net.HttpWebRequest::GetServicePoint()
extern "C" ServicePoint_t4292 * HttpWebRequest_GetServicePoint_m14168 (HttpWebRequest_t4305 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::CheckIfForceWrite()
extern "C" void HttpWebRequest_CheckIfForceWrite_m14169 (HttpWebRequest_t4305 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.HttpWebRequest::BeginGetResponse(System.AsyncCallback,System.Object)
extern "C" Object_t * HttpWebRequest_BeginGetResponse_m14170 (HttpWebRequest_t4305 * __this, AsyncCallback_t477 * ___callback, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebResponse System.Net.HttpWebRequest::EndGetResponse(System.IAsyncResult)
extern "C" WebResponse_t4185 * HttpWebRequest_EndGetResponse_m14171 (HttpWebRequest_t4305 * __this, Object_t * ___asyncResult, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebResponse System.Net.HttpWebRequest::GetResponse()
extern "C" WebResponse_t4185 * HttpWebRequest_GetResponse_m14172 (HttpWebRequest_t4305 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.HttpWebRequest::get_FinishedReading()
extern "C" bool HttpWebRequest_get_FinishedReading_m14173 (HttpWebRequest_t4305 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::set_FinishedReading(System.Boolean)
extern "C" void HttpWebRequest_set_FinishedReading_m14174 (HttpWebRequest_t4305 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.HttpWebRequest::get_Aborted()
extern "C" bool HttpWebRequest_get_Aborted_m14175 (HttpWebRequest_t4305 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::Abort()
extern "C" void HttpWebRequest_Abort_m14176 (HttpWebRequest_t4305 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void HttpWebRequest_GetObjectData_m14177 (HttpWebRequest_t4305 * __this, SerializationInfo_t3296 * ___serializationInfo, StreamingContext_t3297  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::DoContinueDelegate(System.Int32,System.Net.WebHeaderCollection)
extern "C" void HttpWebRequest_DoContinueDelegate_m14178 (HttpWebRequest_t4305 * __this, int32_t ___statusCode, WebHeaderCollection_t4261 * ___headers, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.HttpWebRequest::Redirect(System.Net.WebAsyncResult,System.Net.HttpStatusCode)
extern "C" bool HttpWebRequest_Redirect_m14179 (HttpWebRequest_t4305 * __this, WebAsyncResult_t4303 * ___result, int32_t ___code, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.HttpWebRequest::GetHeaders()
extern "C" String_t* HttpWebRequest_GetHeaders_m14180 (HttpWebRequest_t4305 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::DoPreAuthenticate()
extern "C" void HttpWebRequest_DoPreAuthenticate_m14181 (HttpWebRequest_t4305 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::SetWriteStreamError(System.Net.WebExceptionStatus,System.Exception)
extern "C" void HttpWebRequest_SetWriteStreamError_m14182 (HttpWebRequest_t4305 * __this, int32_t ___status, Exception_t496 * ___exc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::SendRequestHeaders(System.Boolean)
extern "C" void HttpWebRequest_SendRequestHeaders_m14183 (HttpWebRequest_t4305 * __this, bool ___propagate_error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::SetWriteStream(System.Net.WebConnectionStream)
extern "C" void HttpWebRequest_SetWriteStream_m14184 (HttpWebRequest_t4305 * __this, WebConnectionStream_t4301 * ___stream, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::SetResponseError(System.Net.WebExceptionStatus,System.Exception,System.String)
extern "C" void HttpWebRequest_SetResponseError_m14185 (HttpWebRequest_t4305 * __this, int32_t ___status, Exception_t496 * ___e, String_t* ___where, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::CheckSendError(System.Net.WebConnectionData)
extern "C" void HttpWebRequest_CheckSendError_m14186 (HttpWebRequest_t4305 * __this, WebConnectionData_t4320 * ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::HandleNtlmAuth(System.Net.WebAsyncResult)
extern "C" void HttpWebRequest_HandleNtlmAuth_m14187 (HttpWebRequest_t4305 * __this, WebAsyncResult_t4303 * ___r, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::SetResponseData(System.Net.WebConnectionData)
extern "C" void HttpWebRequest_SetResponseData_m14188 (HttpWebRequest_t4305 * __this, WebConnectionData_t4320 * ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.HttpWebRequest::CheckAuthorization(System.Net.WebResponse,System.Net.HttpStatusCode)
extern "C" bool HttpWebRequest_CheckAuthorization_m14189 (HttpWebRequest_t4305 * __this, WebResponse_t4185 * ___response, int32_t ___code, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.HttpWebRequest::CheckFinalStatus(System.Net.WebAsyncResult)
extern "C" bool HttpWebRequest_CheckFinalStatus_m14190 (HttpWebRequest_t4305 * __this, WebAsyncResult_t4303 * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
