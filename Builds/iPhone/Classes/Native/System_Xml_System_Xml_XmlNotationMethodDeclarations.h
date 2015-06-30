#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.XmlNotation
struct XmlNotation_t2494;
// System.String
struct String_t;
// System.Xml.XmlDocument
struct XmlDocument_t2373;
// System.Xml.XmlNode
struct XmlNode_t2457;
// System.Xml.XmlWriter
struct XmlWriter_t2384;
// System.Xml.XmlNodeType
#include "System_Xml_System_Xml_XmlNodeType.h"

// System.Void System.Xml.XmlNotation::.ctor(System.String,System.String,System.String,System.String,System.Xml.XmlDocument)
extern "C" void XmlNotation__ctor_m11055 (XmlNotation_t2494 * __this, String_t* ___localName, String_t* ___prefix, String_t* ___publicId, String_t* ___systemId, XmlDocument_t2373 * ___doc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlNotation::get_IsReadOnly()
extern "C" bool XmlNotation_get_IsReadOnly_m11056 (XmlNotation_t2494 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNotation::get_LocalName()
extern "C" String_t* XmlNotation_get_LocalName_m11057 (XmlNotation_t2494 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNotation::get_Name()
extern "C" String_t* XmlNotation_get_Name_m11058 (XmlNotation_t2494 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNodeType System.Xml.XmlNotation::get_NodeType()
extern "C" int32_t XmlNotation_get_NodeType_m11059 (XmlNotation_t2494 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlNotation::CloneNode(System.Boolean)
extern "C" XmlNode_t2457 * XmlNotation_CloneNode_m11060 (XmlNotation_t2494 * __this, bool ___deep, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlNotation::WriteContentTo(System.Xml.XmlWriter)
extern "C" void XmlNotation_WriteContentTo_m11061 (XmlNotation_t2494 * __this, XmlWriter_t2384 * ___w, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlNotation::WriteTo(System.Xml.XmlWriter)
extern "C" void XmlNotation_WriteTo_m11062 (XmlNotation_t2494 * __this, XmlWriter_t2384 * ___w, const MethodInfo* method) IL2CPP_METHOD_ATTR;
