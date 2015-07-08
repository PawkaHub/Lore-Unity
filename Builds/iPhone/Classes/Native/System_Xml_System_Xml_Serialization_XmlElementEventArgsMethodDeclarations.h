#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.Serialization.XmlElementEventArgs
struct XmlElementEventArgs_t3975;
// System.String
struct String_t;
// System.Xml.XmlElement
struct XmlElement_t3974;
// System.Object
struct Object_t;

// System.Void System.Xml.Serialization.XmlElementEventArgs::.ctor(System.Xml.XmlElement,System.Int32,System.Int32,System.Object)
extern "C" void XmlElementEventArgs__ctor_m11719 (XmlElementEventArgs_t3975 * __this, XmlElement_t3974 * ___attr, int32_t ___lineNum, int32_t ___linePos, Object_t * ___source, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlElementEventArgs::set_ExpectedElements(System.String)
extern "C" void XmlElementEventArgs_set_ExpectedElements_m11720 (XmlElementEventArgs_t3975 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
