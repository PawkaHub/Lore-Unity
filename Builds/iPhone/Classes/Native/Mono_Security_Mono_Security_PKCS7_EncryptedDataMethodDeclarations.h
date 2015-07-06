#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.PKCS7/EncryptedData
struct EncryptedData_t4324;
// Mono.Security.PKCS7/ContentInfo
struct ContentInfo_t4323;
// System.Byte[]
struct ByteU5BU5D_t25;
// Mono.Security.ASN1
struct ASN1_t4210;

// System.Void Mono.Security.PKCS7/EncryptedData::.ctor()
extern "C" void EncryptedData__ctor_m15336 (EncryptedData_t4324 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.PKCS7/EncryptedData::.ctor(Mono.Security.ASN1)
extern "C" void EncryptedData__ctor_m15337 (EncryptedData_t4324 * __this, ASN1_t4210 * ___asn1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.PKCS7/ContentInfo Mono.Security.PKCS7/EncryptedData::get_EncryptionAlgorithm()
extern "C" ContentInfo_t4323 * EncryptedData_get_EncryptionAlgorithm_m15338 (EncryptedData_t4324 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.PKCS7/EncryptedData::get_EncryptedContent()
extern "C" ByteU5BU5D_t25* EncryptedData_get_EncryptedContent_m15339 (EncryptedData_t4324 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
