#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.XmlWhitespace
struct XmlWhitespace_t4152;
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

// System.Void System.Xml.XmlWhitespace::.ctor(System.String,System.Xml.XmlDocument)
extern "C" void XmlWhitespace__ctor_m13124 (XmlWhitespace_t4152 * __this, String_t* ___strData, XmlDocument_t3997 * ___doc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlWhitespace::get_LocalName()
extern "C" String_t* XmlWhitespace_get_LocalName_m13125 (XmlWhitespace_t4152 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlWhitespace::get_Name()
extern "C" String_t* XmlWhitespace_get_Name_m13126 (XmlWhitespace_t4152 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNodeType System.Xml.XmlWhitespace::get_NodeType()
extern "C" int32_t XmlWhitespace_get_NodeType_m13127 (XmlWhitespace_t4152 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlWhitespace::get_Value()
extern "C" String_t* XmlWhitespace_get_Value_m13128 (XmlWhitespace_t4152 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlWhitespace::set_Value(System.String)
extern "C" void XmlWhitespace_set_Value_m13129 (XmlWhitespace_t4152 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlWhitespace::get_ParentNode()
extern "C" XmlNode_t4081 * XmlWhitespace_get_ParentNode_m13130 (XmlWhitespace_t4152 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlWhitespace::CloneNode(System.Boolean)
extern "C" XmlNode_t4081 * XmlWhitespace_CloneNode_m13131 (XmlWhitespace_t4152 * __this, bool ___deep, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlWhitespace::WriteContentTo(System.Xml.XmlWriter)
extern "C" void XmlWhitespace_WriteContentTo_m13132 (XmlWhitespace_t4152 * __this, XmlWriter_t4008 * ___w, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlWhitespace::WriteTo(System.Xml.XmlWriter)
extern "C" void XmlWhitespace_WriteTo_m13133 (XmlWhitespace_t4152 * __this, XmlWriter_t4008 * ___w, const MethodInfo* method) IL2CPP_METHOD_ATTR;
