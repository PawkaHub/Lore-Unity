#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.X509Certificates.X509EnhancedKeyUsageExtension
struct X509EnhancedKeyUsageExtension_t4356;
// System.Security.Cryptography.OidCollection
struct OidCollection_t4354;
// System.Security.Cryptography.AsnEncodedData
struct AsnEncodedData_t4331;
// System.Byte[]
struct ByteU5BU5D_t25;
// System.String
struct String_t;
// System.Security.Cryptography.AsnDecodeStatus
#include "System_System_Security_Cryptography_AsnDecodeStatus.h"

// System.Void System.Security.Cryptography.X509Certificates.X509EnhancedKeyUsageExtension::.ctor(System.Security.Cryptography.AsnEncodedData,System.Boolean)
extern "C" void X509EnhancedKeyUsageExtension__ctor_m14687 (X509EnhancedKeyUsageExtension_t4356 * __this, AsnEncodedData_t4331 * ___encodedEnhancedKeyUsages, bool ___critical, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.OidCollection System.Security.Cryptography.X509Certificates.X509EnhancedKeyUsageExtension::get_EnhancedKeyUsages()
extern "C" OidCollection_t4354 * X509EnhancedKeyUsageExtension_get_EnhancedKeyUsages_m14688 (X509EnhancedKeyUsageExtension_t4356 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509EnhancedKeyUsageExtension::CopyFrom(System.Security.Cryptography.AsnEncodedData)
extern "C" void X509EnhancedKeyUsageExtension_CopyFrom_m14689 (X509EnhancedKeyUsageExtension_t4356 * __this, AsnEncodedData_t4331 * ___asnEncodedData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsnDecodeStatus System.Security.Cryptography.X509Certificates.X509EnhancedKeyUsageExtension::Decode(System.Byte[])
extern "C" int32_t X509EnhancedKeyUsageExtension_Decode_m14690 (X509EnhancedKeyUsageExtension_t4356 * __this, ByteU5BU5D_t25* ___extension, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509EnhancedKeyUsageExtension::ToString(System.Boolean)
extern "C" String_t* X509EnhancedKeyUsageExtension_ToString_m14691 (X509EnhancedKeyUsageExtension_t4356 * __this, bool ___multiLine, const MethodInfo* method) IL2CPP_METHOD_ATTR;
