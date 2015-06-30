#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.XmlWhitespace
struct XmlWhitespace_t2528;
// System.String
struct String_t;
// System.Xml.XmlNode
struct XmlNode_t2457;
// System.Xml.XmlDocument
struct XmlDocument_t2373;
// System.Xml.XmlWriter
struct XmlWriter_t2384;
// System.Xml.XmlNodeType
#include "System_Xml_System_Xml_XmlNodeType.h"

// System.Void System.Xml.XmlWhitespace::.ctor(System.String,System.Xml.XmlDocument)
extern "C" void XmlWhitespace__ctor_m11419 (XmlWhitespace_t2528 * __this, String_t* ___strData, XmlDocument_t2373 * ___doc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlWhitespace::get_LocalName()
extern "C" String_t* XmlWhitespace_get_LocalName_m11420 (XmlWhitespace_t2528 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlWhitespace::get_Name()
extern "C" String_t* XmlWhitespace_get_Name_m11421 (XmlWhitespace_t2528 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNodeType System.Xml.XmlWhitespace::get_NodeType()
extern "C" int32_t XmlWhitespace_get_NodeType_m11422 (XmlWhitespace_t2528 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlWhitespace::get_Value()
extern "C" String_t* XmlWhitespace_get_Value_m11423 (XmlWhitespace_t2528 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlWhitespace::set_Value(System.String)
extern "C" void XmlWhitespace_set_Value_m11424 (XmlWhitespace_t2528 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlWhitespace::get_ParentNode()
extern "C" XmlNode_t2457 * XmlWhitespace_get_ParentNode_m11425 (XmlWhitespace_t2528 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlWhitespace::CloneNode(System.Boolean)
extern "C" XmlNode_t2457 * XmlWhitespace_CloneNode_m11426 (XmlWhitespace_t2528 * __this, bool ___deep, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlWhitespace::WriteContentTo(System.Xml.XmlWriter)
extern "C" void XmlWhitespace_WriteContentTo_m11427 (XmlWhitespace_t2528 * __this, XmlWriter_t2384 * ___w, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlWhitespace::WriteTo(System.Xml.XmlWriter)
extern "C" void XmlWhitespace_WriteTo_m11428 (XmlWhitespace_t2528 * __this, XmlWriter_t2384 * ___w, const MethodInfo* method) IL2CPP_METHOD_ATTR;
