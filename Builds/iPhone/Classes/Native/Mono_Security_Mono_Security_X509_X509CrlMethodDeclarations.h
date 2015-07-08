#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.X509.X509Crl
struct X509Crl_t4450;
// Mono.Security.X509.X509ExtensionCollection
struct X509ExtensionCollection_t4473;
// System.Byte[]
struct ByteU5BU5D_t25;
// System.String
struct String_t;
// Mono.Security.X509.X509Crl/X509CrlEntry
struct X509CrlEntry_t4452;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t4341;
// System.Security.Cryptography.DSA
struct DSA_t4446;
// System.Security.Cryptography.RSA
struct RSA_t4447;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t4330;
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Void Mono.Security.X509.X509Crl::.ctor(System.Byte[])
extern "C" void X509Crl__ctor_m15915 (X509Crl_t4450 * __this, ByteU5BU5D_t25* ___crl, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509Crl::Parse(System.Byte[])
extern "C" void X509Crl_Parse_m15916 (X509Crl_t4450 * __this, ByteU5BU5D_t25* ___crl, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509ExtensionCollection Mono.Security.X509.X509Crl::get_Extensions()
extern "C" X509ExtensionCollection_t4473 * X509Crl_get_Extensions_m15428 (X509Crl_t4450 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Crl::get_Hash()
extern "C" ByteU5BU5D_t25* X509Crl_get_Hash_m15917 (X509Crl_t4450 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.X509Crl::get_IssuerName()
extern "C" String_t* X509Crl_get_IssuerName_m15436 (X509Crl_t4450 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime Mono.Security.X509.X509Crl::get_NextUpdate()
extern "C" DateTime_t1953  X509Crl_get_NextUpdate_m15434 (X509Crl_t4450 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Crl::Compare(System.Byte[],System.Byte[])
extern "C" bool X509Crl_Compare_m15918 (X509Crl_t4450 * __this, ByteU5BU5D_t25* ___array1, ByteU5BU5D_t25* ___array2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509Crl/X509CrlEntry Mono.Security.X509.X509Crl::GetCrlEntry(Mono.Security.X509.X509Certificate)
extern "C" X509CrlEntry_t4452 * X509Crl_GetCrlEntry_m15432 (X509Crl_t4450 * __this, X509Certificate_t4341 * ___x509, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509Crl/X509CrlEntry Mono.Security.X509.X509Crl::GetCrlEntry(System.Byte[])
extern "C" X509CrlEntry_t4452 * X509Crl_GetCrlEntry_m15919 (X509Crl_t4450 * __this, ByteU5BU5D_t25* ___serialNumber, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.X509Crl::GetHashName()
extern "C" String_t* X509Crl_GetHashName_m15920 (X509Crl_t4450 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Crl::VerifySignature(System.Security.Cryptography.DSA)
extern "C" bool X509Crl_VerifySignature_m15921 (X509Crl_t4450 * __this, DSA_t4446 * ___dsa, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Crl::VerifySignature(System.Security.Cryptography.RSA)
extern "C" bool X509Crl_VerifySignature_m15922 (X509Crl_t4450 * __this, RSA_t4447 * ___rsa, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Crl::VerifySignature(System.Security.Cryptography.AsymmetricAlgorithm)
extern "C" bool X509Crl_VerifySignature_m15431 (X509Crl_t4450 * __this, AsymmetricAlgorithm_t4330 * ___aa, const MethodInfo* method) IL2CPP_METHOD_ATTR;
