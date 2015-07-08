#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.Serialization.XmlAttributeOverrides
struct XmlAttributeOverrides_t3965;
// System.Xml.Serialization.XmlAttributes
struct XmlAttributes_t3971;
// System.Type
struct Type_t;
// System.String
struct String_t;
// System.Xml.Serialization.TypeMember
struct TypeMember_t3955;
// System.Text.StringBuilder
struct StringBuilder_t696;

// System.Void System.Xml.Serialization.XmlAttributeOverrides::.ctor()
extern "C" void XmlAttributeOverrides__ctor_m11677 (XmlAttributeOverrides_t3965 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlAttributes System.Xml.Serialization.XmlAttributeOverrides::get_Item(System.Type)
extern "C" XmlAttributes_t3971 * XmlAttributeOverrides_get_Item_m11678 (XmlAttributeOverrides_t3965 * __this, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlAttributes System.Xml.Serialization.XmlAttributeOverrides::get_Item(System.Type,System.String)
extern "C" XmlAttributes_t3971 * XmlAttributeOverrides_get_Item_m11679 (XmlAttributeOverrides_t3965 * __this, Type_t * ___type, String_t* ___member, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.TypeMember System.Xml.Serialization.XmlAttributeOverrides::GetKey(System.Type,System.String)
extern "C" TypeMember_t3955 * XmlAttributeOverrides_GetKey_m11680 (XmlAttributeOverrides_t3965 * __this, Type_t * ___type, String_t* ___member, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlAttributeOverrides::AddKeyHash(System.Text.StringBuilder)
extern "C" void XmlAttributeOverrides_AddKeyHash_m11681 (XmlAttributeOverrides_t3965 * __this, StringBuilder_t696 * ___sb, const MethodInfo* method) IL2CPP_METHOD_ATTR;
