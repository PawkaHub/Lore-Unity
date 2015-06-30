#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.Serialization.XmlAnyElementAttributes
struct XmlAnyElementAttributes_t2337;
// System.Xml.Serialization.XmlAnyElementAttribute
struct XmlAnyElementAttribute_t2336;
// System.Text.StringBuilder
struct StringBuilder_t619;

// System.Void System.Xml.Serialization.XmlAnyElementAttributes::.ctor()
extern "C" void XmlAnyElementAttributes__ctor_m9945 (XmlAnyElementAttributes_t2337 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlAnyElementAttribute System.Xml.Serialization.XmlAnyElementAttributes::get_Item(System.Int32)
extern "C" XmlAnyElementAttribute_t2336 * XmlAnyElementAttributes_get_Item_m9946 (XmlAnyElementAttributes_t2337 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.Serialization.XmlAnyElementAttributes::Add(System.Xml.Serialization.XmlAnyElementAttribute)
extern "C" int32_t XmlAnyElementAttributes_Add_m9947 (XmlAnyElementAttributes_t2337 * __this, XmlAnyElementAttribute_t2336 * ___attribute, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlAnyElementAttributes::AddKeyHash(System.Text.StringBuilder)
extern "C" void XmlAnyElementAttributes_AddKeyHash_m9948 (XmlAnyElementAttributes_t2337 * __this, StringBuilder_t619 * ___sb, const MethodInfo* method) IL2CPP_METHOD_ATTR;
