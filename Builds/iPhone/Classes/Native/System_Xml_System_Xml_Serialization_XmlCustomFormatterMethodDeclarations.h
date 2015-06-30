#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.Serialization.XmlCustomFormatter
struct XmlCustomFormatter_t2348;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t20;
// System.Int64[]
struct Int64U5BU5D_t2413;
// System.Xml.Serialization.TypeData
struct TypeData_t2331;
// System.Object
struct Object_t;

// System.String System.Xml.Serialization.XmlCustomFormatter::FromEnum(System.Int64,System.String[],System.Int64[],System.String)
extern "C" String_t* XmlCustomFormatter_FromEnum_m9997 (Object_t * __this /* static, unused */, int64_t ___value, StringU5BU5D_t20* ___values, Int64U5BU5D_t2413* ___ids, String_t* ___typeName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Serialization.XmlCustomFormatter::FromXmlName(System.String)
extern "C" String_t* XmlCustomFormatter_FromXmlName_m9998 (Object_t * __this /* static, unused */, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Serialization.XmlCustomFormatter::FromXmlNCName(System.String)
extern "C" String_t* XmlCustomFormatter_FromXmlNCName_m9999 (Object_t * __this /* static, unused */, String_t* ___ncName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.Serialization.XmlCustomFormatter::ToXmlString(System.Xml.Serialization.TypeData,System.Object)
extern "C" String_t* XmlCustomFormatter_ToXmlString_m10000 (Object_t * __this /* static, unused */, TypeData_t2331 * ___type, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Serialization.XmlCustomFormatter::FromXmlString(System.Xml.Serialization.TypeData,System.String)
extern "C" Object_t * XmlCustomFormatter_FromXmlString_m10001 (Object_t * __this /* static, unused */, TypeData_t2331 * ___type, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
