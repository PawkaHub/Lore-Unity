#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.XmlNotation
struct XmlNotation_t4118;
// System.String
struct String_t;
// System.Xml.XmlDocument
struct XmlDocument_t3997;
// System.Xml.XmlNode
struct XmlNode_t4081;
// System.Xml.XmlWriter
struct XmlWriter_t4008;
// System.Xml.XmlNodeType
#include "System_Xml_System_Xml_XmlNodeType.h"

// System.Void System.Xml.XmlNotation::.ctor(System.String,System.String,System.String,System.String,System.Xml.XmlDocument)
extern "C" void XmlNotation__ctor_m12760 (XmlNotation_t4118 * __this, String_t* ___localName, String_t* ___prefix, String_t* ___publicId, String_t* ___systemId, XmlDocument_t3997 * ___doc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlNotation::get_IsReadOnly()
extern "C" bool XmlNotation_get_IsReadOnly_m12761 (XmlNotation_t4118 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNotation::get_LocalName()
extern "C" String_t* XmlNotation_get_LocalName_m12762 (XmlNotation_t4118 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNotation::get_Name()
extern "C" String_t* XmlNotation_get_Name_m12763 (XmlNotation_t4118 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNodeType System.Xml.XmlNotation::get_NodeType()
extern "C" int32_t XmlNotation_get_NodeType_m12764 (XmlNotation_t4118 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlNotation::CloneNode(System.Boolean)
extern "C" XmlNode_t4081 * XmlNotation_CloneNode_m12765 (XmlNotation_t4118 * __this, bool ___deep, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlNotation::WriteContentTo(System.Xml.XmlWriter)
extern "C" void XmlNotation_WriteContentTo_m12766 (XmlNotation_t4118 * __this, XmlWriter_t4008 * ___w, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlNotation::WriteTo(System.Xml.XmlWriter)
extern "C" void XmlNotation_WriteTo_m12767 (XmlNotation_t4118 * __this, XmlWriter_t4008 * ___w, const MethodInfo* method) IL2CPP_METHOD_ATTR;
