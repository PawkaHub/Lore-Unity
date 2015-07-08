#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.PKCS7/EncryptedData
struct EncryptedData_t5235;
// Mono.Security.PKCS7/ContentInfo
struct ContentInfo_t5234;
// System.Byte[]
struct ByteU5BU5D_t25;
// Mono.Security.ASN1
struct ASN1_t5222;

// System.Void Mono.Security.PKCS7/EncryptedData::.ctor()
extern "C" void EncryptedData__ctor_m19969 (EncryptedData_t5235 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.PKCS7/EncryptedData::.ctor(Mono.Security.ASN1)
extern "C" void EncryptedData__ctor_m19970 (EncryptedData_t5235 * __this, ASN1_t5222 * ___asn1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.PKCS7/ContentInfo Mono.Security.PKCS7/EncryptedData::get_EncryptionAlgorithm()
extern "C" ContentInfo_t5234 * EncryptedData_get_EncryptionAlgorithm_m19971 (EncryptedData_t5235 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.PKCS7/EncryptedData::get_EncryptedContent()
extern "C" ByteU5BU5D_t25* EncryptedData_get_EncryptedContent_m19972 (EncryptedData_t5235 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
