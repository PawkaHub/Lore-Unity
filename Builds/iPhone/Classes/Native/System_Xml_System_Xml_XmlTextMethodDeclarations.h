#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.XmlText
struct XmlText_t3892;
// System.String
struct String_t;
// System.Xml.XmlNode
struct XmlNode_t3843;
// System.Xml.XmlDocument
struct XmlDocument_t3759;
// System.Xml.XmlWriter
struct XmlWriter_t3770;
// System.Xml.XmlNodeType
#include "System_Xml_System_Xml_XmlNodeType.h"

// System.Void System.Xml.XmlText::.ctor(System.String,System.Xml.XmlDocument)
extern "C" void XmlText__ctor_m12456 (XmlText_t3892 * __this, String_t* ___strData, XmlDocument_t3759 * ___doc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlText::get_LocalName()
extern "C" String_t* XmlText_get_LocalName_m12457 (XmlText_t3892 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlText::get_Name()
extern "C" String_t* XmlText_get_Name_m12458 (XmlText_t3892 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNodeType System.Xml.XmlText::get_NodeType()
extern "C" int32_t XmlText_get_NodeType_m12459 (XmlText_t3892 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlText::get_Value()
extern "C" String_t* XmlText_get_Value_m12460 (XmlText_t3892 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlText::set_Value(System.String)
extern "C" void XmlText_set_Value_m12461 (XmlText_t3892 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlText::get_ParentNode()
extern "C" XmlNode_t3843 * XmlText_get_ParentNode_m12462 (XmlText_t3892 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlText::CloneNode(System.Boolean)
extern "C" XmlNode_t3843 * XmlText_CloneNode_m12463 (XmlText_t3892 * __this, bool ___deep, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlText::WriteContentTo(System.Xml.XmlWriter)
extern "C" void XmlText_WriteContentTo_m12464 (XmlText_t3892 * __this, XmlWriter_t3770 * ___w, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlText::WriteTo(System.Xml.XmlWriter)
extern "C" void XmlText_WriteTo_m12465 (XmlText_t3892 * __this, XmlWriter_t3770 * ___w, const MethodInfo* method) IL2CPP_METHOD_ATTR;
