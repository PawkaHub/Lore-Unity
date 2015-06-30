#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.Serialization.XmlArrayItemAttributes
struct XmlArrayItemAttributes_t2338;
// System.Xml.Serialization.XmlArrayItemAttribute
struct XmlArrayItemAttribute_t1143;
// System.Text.StringBuilder
struct StringBuilder_t619;

// System.Void System.Xml.Serialization.XmlArrayItemAttributes::.ctor()
extern "C" void XmlArrayItemAttributes__ctor_m9962 (XmlArrayItemAttributes_t2338 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlArrayItemAttribute System.Xml.Serialization.XmlArrayItemAttributes::get_Item(System.Int32)
extern "C" XmlArrayItemAttribute_t1143 * XmlArrayItemAttributes_get_Item_m9963 (XmlArrayItemAttributes_t2338 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Serialization.XmlArrayItemAttributes::Add(System.Xml.Serialization.XmlArrayItemAttribute)
extern "C" int32_t XmlArrayItemAttributes_Add_m9964 (XmlArrayItemAttributes_t2338 * __this, XmlArrayItemAttribute_t1143 * ___attribute, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlArrayItemAttributes::AddKeyHash(System.Text.StringBuilder)
extern "C" void XmlArrayItemAttributes_AddKeyHash_m9965 (XmlArrayItemAttributes_t2338 * __this, StringBuilder_t619 * ___sb, const MethodInfo* method) IL2CPP_METHOD_ATTR;
