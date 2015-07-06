#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.X509.SafeBag
struct SafeBag_t4985;
// System.String
struct String_t;
// Mono.Security.ASN1
struct ASN1_t4984;

// System.Void Mono.Security.X509.SafeBag::.ctor(System.String,Mono.Security.ASN1)
extern "C" void SafeBag__ctor_m19441 (SafeBag_t4985 * __this, String_t* ___bagOID, ASN1_t4984 * ___asn1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.SafeBag::get_BagOID()
extern "C" String_t* SafeBag_get_BagOID_m19442 (SafeBag_t4985 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.ASN1 Mono.Security.X509.SafeBag::get_ASN1()
extern "C" ASN1_t4984 * SafeBag_get_ASN1_m19443 (SafeBag_t4985 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
