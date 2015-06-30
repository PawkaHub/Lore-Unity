#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.PKCS7/EncryptedData
struct EncryptedData_t3907;
// Mono.Security.PKCS7/ContentInfo
struct ContentInfo_t3906;
// System.Byte[]
struct ByteU5BU5D_t25;
// Mono.Security.ASN1
struct ASN1_t3894;

// System.Void Mono.Security.PKCS7/EncryptedData::.ctor()
extern "C" void EncryptedData__ctor_m18265 (EncryptedData_t3907 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.PKCS7/EncryptedData::.ctor(Mono.Security.ASN1)
extern "C" void EncryptedData__ctor_m18266 (EncryptedData_t3907 * __this, ASN1_t3894 * ___asn1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.PKCS7/ContentInfo Mono.Security.PKCS7/EncryptedData::get_EncryptionAlgorithm()
extern "C" ContentInfo_t3906 * EncryptedData_get_EncryptionAlgorithm_m18267 (EncryptedData_t3907 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.PKCS7/EncryptedData::get_EncryptedContent()
extern "C" ByteU5BU5D_t25* EncryptedData_get_EncryptedContent_m18268 (EncryptedData_t3907 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
