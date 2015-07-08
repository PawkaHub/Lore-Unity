#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.Serialization.XmlAnyElementAttributes
struct XmlAnyElementAttributes_t3960;
// System.Xml.Serialization.XmlAnyElementAttribute
struct XmlAnyElementAttribute_t3959;
// System.Text.StringBuilder
struct StringBuilder_t696;

// System.Void System.Xml.Serialization.XmlAnyElementAttributes::.ctor()
extern "C" void XmlAnyElementAttributes__ctor_m11648 (XmlAnyElementAttributes_t3960 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlAnyElementAttribute System.Xml.Serialization.XmlAnyElementAttributes::get_Item(System.Int32)
extern "C" XmlAnyElementAttribute_t3959 * XmlAnyElementAttributes_get_Item_m11649 (XmlAnyElementAttributes_t3960 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Serialization.XmlAnyElementAttributes::Add(System.Xml.Serialization.XmlAnyElementAttribute)
extern "C" int32_t XmlAnyElementAttributes_Add_m11650 (XmlAnyElementAttributes_t3960 * __this, XmlAnyElementAttribute_t3959 * ___attribute, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlAnyElementAttributes::AddKeyHash(System.Text.StringBuilder)
extern "C" void XmlAnyElementAttributes_AddKeyHash_m11651 (XmlAnyElementAttributes_t3960 * __this, StringBuilder_t696 * ___sb, const MethodInfo* method) IL2CPP_METHOD_ATTR;
