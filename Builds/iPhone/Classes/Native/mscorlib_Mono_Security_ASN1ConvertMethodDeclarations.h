#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.ASN1Convert
struct ASN1Convert_t3904;
// Mono.Security.ASN1
struct ASN1_t3894;
// System.String
struct String_t;
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Int32 Mono.Security.ASN1Convert::ToInt32(Mono.Security.ASN1)
extern "C" int32_t ASN1Convert_ToInt32_m18244 (Object_t * __this /* static, unused */, ASN1_t3894 * ___asn1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.ASN1Convert::ToOid(Mono.Security.ASN1)
extern "C" String_t* ASN1Convert_ToOid_m18245 (Object_t * __this /* static, unused */, ASN1_t3894 * ___asn1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime Mono.Security.ASN1Convert::ToDateTime(Mono.Security.ASN1)
extern "C" DateTime_t1219  ASN1Convert_ToDateTime_m18246 (Object_t * __this /* static, unused */, ASN1_t3894 * ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
