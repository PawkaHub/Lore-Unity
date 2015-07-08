#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t3923;
// System.String
struct String_t;
// System.Object
struct Object_t;

// System.Void System.Xml.XmlQualifiedName::.ctor()
extern "C" void XmlQualifiedName__ctor_m12820 (XmlQualifiedName_t3923 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlQualifiedName::.ctor(System.String,System.String)
extern "C" void XmlQualifiedName__ctor_m12821 (XmlQualifiedName_t3923 * __this, String_t* ___name, String_t* ___ns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlQualifiedName::.cctor()
extern "C" void XmlQualifiedName__cctor_m12822 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlQualifiedName::get_IsEmpty()
extern "C" bool XmlQualifiedName_get_IsEmpty_m12823 (XmlQualifiedName_t3923 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlQualifiedName::get_Name()
extern "C" String_t* XmlQualifiedName_get_Name_m12824 (XmlQualifiedName_t3923 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlQualifiedName::get_Namespace()
extern "C" String_t* XmlQualifiedName_get_Namespace_m12825 (XmlQualifiedName_t3923 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlQualifiedName::Equals(System.Object)
extern "C" bool XmlQualifiedName_Equals_m12826 (XmlQualifiedName_t3923 * __this, Object_t * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlQualifiedName::GetHashCode()
extern "C" int32_t XmlQualifiedName_GetHashCode_m12827 (XmlQualifiedName_t3923 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlQualifiedName::ToString()
extern "C" String_t* XmlQualifiedName_ToString_m12828 (XmlQualifiedName_t3923 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlQualifiedName::op_Equality(System.Xml.XmlQualifiedName,System.Xml.XmlQualifiedName)
extern "C" bool XmlQualifiedName_op_Equality_m12829 (Object_t * __this /* static, unused */, XmlQualifiedName_t3923 * ___a, XmlQualifiedName_t3923 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlQualifiedName::op_Inequality(System.Xml.XmlQualifiedName,System.Xml.XmlQualifiedName)
extern "C" bool XmlQualifiedName_op_Inequality_m12830 (Object_t * __this /* static, unused */, XmlQualifiedName_t3923 * ___a, XmlQualifiedName_t3923 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
