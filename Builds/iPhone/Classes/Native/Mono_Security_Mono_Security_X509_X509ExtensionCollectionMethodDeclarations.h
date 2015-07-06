#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.X509.X509ExtensionCollection
struct X509ExtensionCollection_t4235;
// Mono.Security.X509.X509Extension
struct X509Extension_t4213;
// System.String
struct String_t;
// Mono.Security.ASN1
struct ASN1_t4210;
// System.Collections.IEnumerator
struct IEnumerator_t74;

// System.Void Mono.Security.X509.X509ExtensionCollection::.ctor()
extern "C" void X509ExtensionCollection__ctor_m15512 (X509ExtensionCollection_t4235 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.X509ExtensionCollection::.ctor(Mono.Security.ASN1)
extern "C" void X509ExtensionCollection__ctor_m15513 (X509ExtensionCollection_t4235 * __this, ASN1_t4210 * ___asn1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Mono.Security.X509.X509ExtensionCollection::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * X509ExtensionCollection_System_Collections_IEnumerable_GetEnumerator_m15514 (X509ExtensionCollection_t4235 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.X509.X509ExtensionCollection::IndexOf(System.String)
extern "C" int32_t X509ExtensionCollection_IndexOf_m15515 (X509ExtensionCollection_t4235 * __this, String_t* ___oid, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509Extension Mono.Security.X509.X509ExtensionCollection::get_Item(System.String)
extern "C" X509Extension_t4213 * X509ExtensionCollection_get_Item_m14938 (X509ExtensionCollection_t4235 * __this, String_t* ___oid, const MethodInfo* method) IL2CPP_METHOD_ATTR;
