#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.XmlComment
struct XmlComment_t2463;
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

// System.Void System.Xml.XmlComment::.ctor(System.String,System.Xml.XmlDocument)
extern "C" void XmlComment__ctor_m10698 (XmlComment_t2463 * __this, String_t* ___comment, XmlDocument_t2373 * ___doc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlComment::get_LocalName()
extern "C" String_t* XmlComment_get_LocalName_m10699 (XmlComment_t2463 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlComment::get_Name()
extern "C" String_t* XmlComment_get_Name_m10700 (XmlComment_t2463 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNodeType System.Xml.XmlComment::get_NodeType()
extern "C" int32_t XmlComment_get_NodeType_m10701 (XmlComment_t2463 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlComment::CloneNode(System.Boolean)
extern "C" XmlNode_t2457 * XmlComment_CloneNode_m10702 (XmlComment_t2463 * __this, bool ___deep, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlComment::WriteContentTo(System.Xml.XmlWriter)
extern "C" void XmlComment_WriteContentTo_m10703 (XmlComment_t2463 * __this, XmlWriter_t2384 * ___w, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlComment::WriteTo(System.Xml.XmlWriter)
extern "C" void XmlComment_WriteTo_m10704 (XmlComment_t2463 * __this, XmlWriter_t2384 * ___w, const MethodInfo* method) IL2CPP_METHOD_ATTR;
