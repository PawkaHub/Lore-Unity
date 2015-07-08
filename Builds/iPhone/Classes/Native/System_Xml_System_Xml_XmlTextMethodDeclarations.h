#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.XmlText
struct XmlText_t4130;
// System.String
struct String_t;
// System.Xml.XmlNode
struct XmlNode_t4081;
// System.Xml.XmlDocument
struct XmlDocument_t3997;
// System.Xml.XmlWriter
struct XmlWriter_t4008;
// System.Xml.XmlNodeType
#include "System_Xml_System_Xml_XmlNodeType.h"

// System.Void System.Xml.XmlText::.ctor(System.String,System.Xml.XmlDocument)
extern "C" void XmlText__ctor_m12875 (XmlText_t4130 * __this, String_t* ___strData, XmlDocument_t3997 * ___doc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlText::get_LocalName()
extern "C" String_t* XmlText_get_LocalName_m12876 (XmlText_t4130 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlText::get_Name()
extern "C" String_t* XmlText_get_Name_m12877 (XmlText_t4130 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNodeType System.Xml.XmlText::get_NodeType()
extern "C" int32_t XmlText_get_NodeType_m12878 (XmlText_t4130 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlText::get_Value()
extern "C" String_t* XmlText_get_Value_m12879 (XmlText_t4130 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlText::set_Value(System.String)
extern "C" void XmlText_set_Value_m12880 (XmlText_t4130 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlText::get_ParentNode()
extern "C" XmlNode_t4081 * XmlText_get_ParentNode_m12881 (XmlText_t4130 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlText::CloneNode(System.Boolean)
extern "C" XmlNode_t4081 * XmlText_CloneNode_m12882 (XmlText_t4130 * __this, bool ___deep, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlText::WriteContentTo(System.Xml.XmlWriter)
extern "C" void XmlText_WriteContentTo_m12883 (XmlText_t4130 * __this, XmlWriter_t4008 * ___w, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlText::WriteTo(System.Xml.XmlWriter)
extern "C" void XmlText_WriteTo_m12884 (XmlText_t4130 * __this, XmlWriter_t4008 * ___w, const MethodInfo* method) IL2CPP_METHOD_ATTR;
