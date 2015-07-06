#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.Serialization.XmlAttributeEventArgs
struct XmlAttributeEventArgs_t3726;
// System.String
struct String_t;
// System.Xml.XmlAttribute
struct XmlAttribute_t3725;
// System.Object
struct Object_t;

// System.Void System.Xml.Serialization.XmlAttributeEventArgs::.ctor(System.Xml.XmlAttribute,System.Int32,System.Int32,System.Object)
extern "C" void XmlAttributeEventArgs__ctor_m11256 (XmlAttributeEventArgs_t3726 * __this, XmlAttribute_t3725 * ___attr, int32_t ___lineNum, int32_t ___linePos, Object_t * ___source, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlAttributeEventArgs::set_ExpectedAttributes(System.String)
extern "C" void XmlAttributeEventArgs_set_ExpectedAttributes_m11257 (XmlAttributeEventArgs_t3726 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
