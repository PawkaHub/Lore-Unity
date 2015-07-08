#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.ServicePointManager/ChainValidationHelper
struct ChainValidationHelper_t4314;
// System.String
struct String_t;
// System.Object
struct Object_t;
// Mono.Security.Protocol.Tls.ValidationResult
struct ValidationResult_t4442;
// Mono.Security.X509.X509CertificateCollection
struct X509CertificateCollection_t4443;
// System.Security.Cryptography.X509Certificates.X509Chain
struct X509Chain_t4352;
// System.Security.Cryptography.X509Certificates.X509Certificate2
struct X509Certificate2_t4342;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t4341;
// System.Net.Security.SslPolicyErrors
#include "System_System_Net_Security_SslPolicyErrors.h"

// System.Void System.Net.ServicePointManager/ChainValidationHelper::.ctor(System.Object)
extern "C" void ChainValidationHelper__ctor_m14307 (ChainValidationHelper_t4314 * __this, Object_t * ___sender, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ServicePointManager/ChainValidationHelper::.cctor()
extern "C" void ChainValidationHelper__cctor_m14308 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.ServicePointManager/ChainValidationHelper::get_Host()
extern "C" String_t* ChainValidationHelper_get_Host_m14309 (ChainValidationHelper_t4314 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.ValidationResult System.Net.ServicePointManager/ChainValidationHelper::ValidateChain(Mono.Security.X509.X509CertificateCollection)
extern "C" ValidationResult_t4442 * ChainValidationHelper_ValidateChain_m14310 (ChainValidationHelper_t4314 * __this, X509CertificateCollection_t4443 * ___certs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.ServicePointManager/ChainValidationHelper::GetStatusFromChain(System.Security.Cryptography.X509Certificates.X509Chain)
extern "C" int32_t ChainValidationHelper_GetStatusFromChain_m14311 (Object_t * __this /* static, unused */, X509Chain_t4352 * ___chain, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Security.SslPolicyErrors System.Net.ServicePointManager/ChainValidationHelper::GetErrorsFromChain(System.Security.Cryptography.X509Certificates.X509Chain)
extern "C" int32_t ChainValidationHelper_GetErrorsFromChain_m14312 (Object_t * __this /* static, unused */, X509Chain_t4352 * ___chain, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.ServicePointManager/ChainValidationHelper::CheckCertificateUsage(System.Security.Cryptography.X509Certificates.X509Certificate2)
extern "C" bool ChainValidationHelper_CheckCertificateUsage_m14313 (Object_t * __this /* static, unused */, X509Certificate2_t4342 * ___cert, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.ServicePointManager/ChainValidationHelper::CheckServerIdentity(Mono.Security.X509.X509Certificate,System.String)
extern "C" bool ChainValidationHelper_CheckServerIdentity_m14314 (Object_t * __this /* static, unused */, X509Certificate_t4341 * ___cert, String_t* ___targetHost, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.ServicePointManager/ChainValidationHelper::CheckDomainName(System.String,System.String)
extern "C" bool ChainValidationHelper_CheckDomainName_m14315 (Object_t * __this /* static, unused */, String_t* ___subjectName, String_t* ___targetHost, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.ServicePointManager/ChainValidationHelper::Match(System.String,System.String)
extern "C" bool ChainValidationHelper_Match_m14316 (Object_t * __this /* static, unused */, String_t* ___hostname, String_t* ___pattern, const MethodInfo* method) IL2CPP_METHOD_ATTR;
