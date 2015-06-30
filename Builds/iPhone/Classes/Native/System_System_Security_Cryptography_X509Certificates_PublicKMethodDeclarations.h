#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.X509Certificates.PublicKey
struct PublicKey_t3654;
// System.Security.Cryptography.AsnEncodedData
struct AsnEncodedData_t3652;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t1309;
// System.Security.Cryptography.Oid
struct Oid_t3653;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t1218;
// System.Byte[]
struct ByteU5BU5D_t25;
// System.Security.Cryptography.DSA
struct DSA_t1216;
// System.Security.Cryptography.RSA
struct RSA_t1210;

// System.Void System.Security.Cryptography.X509Certificates.PublicKey::.ctor(Mono.Security.X509.X509Certificate)
extern "C" void PublicKey__ctor_m16063 (PublicKey_t3654 * __this, X509Certificate_t1218 * ___certificate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsnEncodedData System.Security.Cryptography.X509Certificates.PublicKey::get_EncodedKeyValue()
extern "C" AsnEncodedData_t3652 * PublicKey_get_EncodedKeyValue_m16064 (PublicKey_t3654 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsnEncodedData System.Security.Cryptography.X509Certificates.PublicKey::get_EncodedParameters()
extern "C" AsnEncodedData_t3652 * PublicKey_get_EncodedParameters_m16065 (PublicKey_t3654 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsymmetricAlgorithm System.Security.Cryptography.X509Certificates.PublicKey::get_Key()
extern "C" AsymmetricAlgorithm_t1309 * PublicKey_get_Key_m16066 (PublicKey_t3654 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.Oid System.Security.Cryptography.X509Certificates.PublicKey::get_Oid()
extern "C" Oid_t3653 * PublicKey_get_Oid_m16067 (PublicKey_t3654 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.X509Certificates.PublicKey::GetUnsignedBigInteger(System.Byte[])
extern "C" ByteU5BU5D_t25* PublicKey_GetUnsignedBigInteger_m16068 (Object_t * __this /* static, unused */, ByteU5BU5D_t25* ___integer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.DSA System.Security.Cryptography.X509Certificates.PublicKey::DecodeDSA(System.Byte[],System.Byte[])
extern "C" DSA_t1216 * PublicKey_DecodeDSA_m16069 (Object_t * __this /* static, unused */, ByteU5BU5D_t25* ___rawPublicKey, ByteU5BU5D_t25* ___rawParameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA System.Security.Cryptography.X509Certificates.PublicKey::DecodeRSA(System.Byte[])
extern "C" RSA_t1210 * PublicKey_DecodeRSA_m16070 (Object_t * __this /* static, unused */, ByteU5BU5D_t25* ___rawPublicKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
