#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.X509.X509Crl
struct X509Crl_t4212;
// Mono.Security.X509.X509ExtensionCollection
struct X509ExtensionCollection_t4235;
// System.Byte[]
struct ByteU5BU5D_t25;
// System.String
struct String_t;
// Mono.Security.X509.X509Crl/X509CrlEntry
struct X509CrlEntry_t4214;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t4103;
// System.Security.Cryptography.DSA
struct DSA_t4208;
// System.Security.Cryptography.RSA
struct RSA_t4209;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t4092;
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Void Mono.Security.X509.X509Crl::.ctor(System.Byte[])
extern "C" void X509Crl__ctor_m15496 (X509Crl_t4212 * __this, ByteU5BU5D_t25* ___crl, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509Crl::Parse(System.Byte[])
extern "C" void X509Crl_Parse_m15497 (X509Crl_t4212 * __this, ByteU5BU5D_t25* ___crl, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509ExtensionCollection Mono.Security.X509.X509Crl::get_Extensions()
extern "C" X509ExtensionCollection_t4235 * X509Crl_get_Extensions_m15009 (X509Crl_t4212 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.X509Crl::get_Hash()
extern "C" ByteU5BU5D_t25* X509Crl_get_Hash_m15498 (X509Crl_t4212 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.X509Crl::get_IssuerName()
extern "C" String_t* X509Crl_get_IssuerName_m15017 (X509Crl_t4212 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime Mono.Security.X509.X509Crl::get_NextUpdate()
extern "C" DateTime_t1705  X509Crl_get_NextUpdate_m15015 (X509Crl_t4212 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Crl::Compare(System.Byte[],System.Byte[])
extern "C" bool X509Crl_Compare_m15499 (X509Crl_t4212 * __this, ByteU5BU5D_t25* ___array1, ByteU5BU5D_t25* ___array2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509Crl/X509CrlEntry Mono.Security.X509.X509Crl::GetCrlEntry(Mono.Security.X509.X509Certificate)
extern "C" X509CrlEntry_t4214 * X509Crl_GetCrlEntry_m15013 (X509Crl_t4212 * __this, X509Certificate_t4103 * ___x509, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509Crl/X509CrlEntry Mono.Security.X509.X509Crl::GetCrlEntry(System.Byte[])
extern "C" X509CrlEntry_t4214 * X509Crl_GetCrlEntry_m15500 (X509Crl_t4212 * __this, ByteU5BU5D_t25* ___serialNumber, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.X509Crl::GetHashName()
extern "C" String_t* X509Crl_GetHashName_m15501 (X509Crl_t4212 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Crl::VerifySignature(System.Security.Cryptography.DSA)
extern "C" bool X509Crl_VerifySignature_m15502 (X509Crl_t4212 * __this, DSA_t4208 * ___dsa, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Crl::VerifySignature(System.Security.Cryptography.RSA)
extern "C" bool X509Crl_VerifySignature_m15503 (X509Crl_t4212 * __this, RSA_t4209 * ___rsa, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.X509Crl::VerifySignature(System.Security.Cryptography.AsymmetricAlgorithm)
extern "C" bool X509Crl_VerifySignature_m15012 (X509Crl_t4212 * __this, AsymmetricAlgorithm_t4092 * ___aa, const MethodInfo* method) IL2CPP_METHOD_ATTR;
