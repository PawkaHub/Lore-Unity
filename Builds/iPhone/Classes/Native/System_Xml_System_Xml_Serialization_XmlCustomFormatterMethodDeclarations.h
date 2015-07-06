#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.Serialization.XmlCustomFormatter
struct XmlCustomFormatter_t3734;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t20;
// System.Int64[]
struct Int64U5BU5D_t3799;
// System.Xml.Serialization.TypeData
struct TypeData_t3716;
// System.Object
struct Object_t;

// System.String System.Xml.Serialization.XmlCustomFormatter::FromEnum(System.Int64,System.String[],System.Int64[],System.String)
extern "C" String_t* XmlCustomFormatter_FromEnum_m11281 (Object_t * __this /* static, unused */, int64_t ___value, StringU5BU5D_t20* ___values, Int64U5BU5D_t3799* ___ids, String_t* ___typeName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Serialization.XmlCustomFormatter::FromXmlName(System.String)
extern "C" String_t* XmlCustomFormatter_FromXmlName_m11282 (Object_t * __this /* static, unused */, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Serialization.XmlCustomFormatter::FromXmlNCName(System.String)
extern "C" String_t* XmlCustomFormatter_FromXmlNCName_m11283 (Object_t * __this /* static, unused */, String_t* ___ncName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Serialization.XmlCustomFormatter::ToXmlString(System.Xml.Serialization.TypeData,System.Object)
extern "C" String_t* XmlCustomFormatter_ToXmlString_m11284 (Object_t * __this /* static, unused */, TypeData_t3716 * ___type, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Serialization.XmlCustomFormatter::FromXmlString(System.Xml.Serialization.TypeData,System.String)
extern "C" Object_t * XmlCustomFormatter_FromXmlString_m11285 (Object_t * __this /* static, unused */, TypeData_t3716 * ___type, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
