#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.X509Certificates.PublicKey
struct PublicKey_t4095;
// System.Security.Cryptography.AsnEncodedData
struct AsnEncodedData_t4093;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t4092;
// System.Security.Cryptography.Oid
struct Oid_t4094;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t4103;
// System.Byte[]
struct ByteU5BU5D_t25;
// System.Security.Cryptography.DSA
struct DSA_t4208;
// System.Security.Cryptography.RSA
struct RSA_t4209;

// System.Void System.Security.Cryptography.X509Certificates.PublicKey::.ctor(Mono.Security.X509.X509Certificate)
extern "C" void PublicKey__ctor_m14123 (PublicKey_t4095 * __this, X509Certificate_t4103 * ___certificate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsnEncodedData System.Security.Cryptography.X509Certificates.PublicKey::get_EncodedKeyValue()
extern "C" AsnEncodedData_t4093 * PublicKey_get_EncodedKeyValue_m14124 (PublicKey_t4095 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsnEncodedData System.Security.Cryptography.X509Certificates.PublicKey::get_EncodedParameters()
extern "C" AsnEncodedData_t4093 * PublicKey_get_EncodedParameters_m14125 (PublicKey_t4095 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsymmetricAlgorithm System.Security.Cryptography.X509Certificates.PublicKey::get_Key()
extern "C" AsymmetricAlgorithm_t4092 * PublicKey_get_Key_m14126 (PublicKey_t4095 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.Oid System.Security.Cryptography.X509Certificates.PublicKey::get_Oid()
extern "C" Oid_t4094 * PublicKey_get_Oid_m14127 (PublicKey_t4095 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.X509Certificates.PublicKey::GetUnsignedBigInteger(System.Byte[])
extern "C" ByteU5BU5D_t25* PublicKey_GetUnsignedBigInteger_m14128 (Object_t * __this /* static, unused */, ByteU5BU5D_t25* ___integer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.DSA System.Security.Cryptography.X509Certificates.PublicKey::DecodeDSA(System.Byte[],System.Byte[])
extern "C" DSA_t4208 * PublicKey_DecodeDSA_m14129 (Object_t * __this /* static, unused */, ByteU5BU5D_t25* ___rawPublicKey, ByteU5BU5D_t25* ___rawParameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA System.Security.Cryptography.X509Certificates.PublicKey::DecodeRSA(System.Byte[])
extern "C" RSA_t4209 * PublicKey_DecodeRSA_m14130 (Object_t * __this /* static, unused */, ByteU5BU5D_t25* ___rawPublicKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
