#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.Security.LocalCertificateSelectionCallback
struct LocalCertificateSelectionCallback_t3994;
// System.Object
struct Object_t;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t4073;
// System.String
struct String_t;
// System.Security.Cryptography.X509Certificates.X509CertificateCollection
struct X509CertificateCollection_t3989;
// System.String[]
struct StringU5BU5D_t20;
// System.IAsyncResult
struct IAsyncResult_t448;
// System.AsyncCallback
struct AsyncCallback_t449;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Net.Security.LocalCertificateSelectionCallback::.ctor(System.Object,System.IntPtr)
extern "C" void LocalCertificateSelectionCallback__ctor_m14823 (LocalCertificateSelectionCallback_t3994 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate System.Net.Security.LocalCertificateSelectionCallback::Invoke(System.Object,System.String,System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Security.Cryptography.X509Certificates.X509Certificate,System.String[])
extern "C" X509Certificate_t4073 * LocalCertificateSelectionCallback_Invoke_m14824 (LocalCertificateSelectionCallback_t3994 * __this, Object_t * ___sender, String_t* ___targetHost, X509CertificateCollection_t3989 * ___localCertificates, X509Certificate_t4073 * ___remoteCertificate, StringU5BU5D_t20* ___acceptableIssuers, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String
#include "mscorlib_System_String.h"
#include "mscorlib_ArrayTypes.h"
extern "C" X509Certificate_t4073 * pinvoke_delegate_wrapper_LocalCertificateSelectionCallback_t3994(Il2CppObject* delegate, Object_t * ___sender, String_t* ___targetHost, X509CertificateCollection_t3989 * ___localCertificates, X509Certificate_t4073 * ___remoteCertificate, StringU5BU5D_t20* ___acceptableIssuers);
// System.IAsyncResult System.Net.Security.LocalCertificateSelectionCallback::BeginInvoke(System.Object,System.String,System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Security.Cryptography.X509Certificates.X509Certificate,System.String[],System.AsyncCallback,System.Object)
extern "C" Object_t * LocalCertificateSelectionCallback_BeginInvoke_m14825 (LocalCertificateSelectionCallback_t3994 * __this, Object_t * ___sender, String_t* ___targetHost, X509CertificateCollection_t3989 * ___localCertificates, X509Certificate_t4073 * ___remoteCertificate, StringU5BU5D_t20* ___acceptableIssuers, AsyncCallback_t449 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate System.Net.Security.LocalCertificateSelectionCallback::EndInvoke(System.IAsyncResult)
extern "C" X509Certificate_t4073 * LocalCertificateSelectionCallback_EndInvoke_m14826 (LocalCertificateSelectionCallback_t3994 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
