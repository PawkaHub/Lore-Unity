﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.Serialization.XmlAttributeEventArgs
struct XmlAttributeEventArgs_t3964;
// System.String
struct String_t;
// System.Xml.XmlAttribute
struct XmlAttribute_t3963;
// System.Object
struct Object_t;

// System.Void System.Xml.Serialization.XmlAttributeEventArgs::.ctor(System.Xml.XmlAttribute,System.Int32,System.Int32,System.Object)
extern "C" void XmlAttributeEventArgs__ctor_m11675 (XmlAttributeEventArgs_t3964 * __this, XmlAttribute_t3963 * ___attr, int32_t ___lineNum, int32_t ___linePos, Object_t * ___source, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlAttributeEventArgs::set_ExpectedAttributes(System.String)
extern "C" void XmlAttributeEventArgs_set_ExpectedAttributes_m11676 (XmlAttributeEventArgs_t3964 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
