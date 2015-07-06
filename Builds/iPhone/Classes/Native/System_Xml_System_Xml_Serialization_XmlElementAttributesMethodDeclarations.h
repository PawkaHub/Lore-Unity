#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.Serialization.XmlElementAttributes
struct XmlElementAttributes_t3729;
// System.Xml.Serialization.XmlElementAttribute
struct XmlElementAttribute_t3735;
// System.Text.StringBuilder
struct StringBuilder_t640;

// System.Void System.Xml.Serialization.XmlElementAttributes::.ctor()
extern "C" void XmlElementAttributes__ctor_m11296 (XmlElementAttributes_t3729 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlElementAttribute System.Xml.Serialization.XmlElementAttributes::get_Item(System.Int32)
extern "C" XmlElementAttribute_t3735 * XmlElementAttributes_get_Item_m11297 (XmlElementAttributes_t3729 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Serialization.XmlElementAttributes::Add(System.Xml.Serialization.XmlElementAttribute)
extern "C" int32_t XmlElementAttributes_Add_m11298 (XmlElementAttributes_t3729 * __this, XmlElementAttribute_t3735 * ___attribute, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlElementAttributes::AddKeyHash(System.Text.StringBuilder)
extern "C" void XmlElementAttributes_AddKeyHash_m11299 (XmlElementAttributes_t3729 * __this, StringBuilder_t640 * ___sb, const MethodInfo* method) IL2CPP_METHOD_ATTR;
