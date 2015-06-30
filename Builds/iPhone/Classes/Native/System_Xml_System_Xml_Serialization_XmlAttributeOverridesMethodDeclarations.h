#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.Serialization.XmlAttributeOverrides
struct XmlAttributeOverrides_t2341;
// System.Xml.Serialization.XmlAttributes
struct XmlAttributes_t2347;
// System.Type
struct Type_t;
// System.String
struct String_t;
// System.Xml.Serialization.TypeMember
struct TypeMember_t2332;
// System.Text.StringBuilder
struct StringBuilder_t619;

// System.Void System.Xml.Serialization.XmlAttributeOverrides::.ctor()
extern "C" void XmlAttributeOverrides__ctor_m9974 (XmlAttributeOverrides_t2341 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlAttributes System.Xml.Serialization.XmlAttributeOverrides::get_Item(System.Type)
extern "C" XmlAttributes_t2347 * XmlAttributeOverrides_get_Item_m9975 (XmlAttributeOverrides_t2341 * __this, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlAttributes System.Xml.Serialization.XmlAttributeOverrides::get_Item(System.Type,System.String)
extern "C" XmlAttributes_t2347 * XmlAttributeOverrides_get_Item_m9976 (XmlAttributeOverrides_t2341 * __this, Type_t * ___type, String_t* ___member, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.TypeMember System.Xml.Serialization.XmlAttributeOverrides::GetKey(System.Type,System.String)
extern "C" TypeMember_t2332 * XmlAttributeOverrides_GetKey_m9977 (XmlAttributeOverrides_t2341 * __this, Type_t * ___type, String_t* ___member, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlAttributeOverrides::AddKeyHash(System.Text.StringBuilder)
extern "C" void XmlAttributeOverrides_AddKeyHash_m9978 (XmlAttributeOverrides_t2341 * __this, StringBuilder_t619 * ___sb, const MethodInfo* method) IL2CPP_METHOD_ATTR;
