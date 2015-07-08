#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.XmlComment
struct XmlComment_t4088;
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

// System.Void System.Xml.XmlComment::.ctor(System.String,System.Xml.XmlDocument)
extern "C" void XmlComment__ctor_m12402 (XmlComment_t4088 * __this, String_t* ___comment, XmlDocument_t3997 * ___doc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlComment::get_LocalName()
extern "C" String_t* XmlComment_get_LocalName_m12403 (XmlComment_t4088 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlComment::get_Name()
extern "C" String_t* XmlComment_get_Name_m12404 (XmlComment_t4088 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNodeType System.Xml.XmlComment::get_NodeType()
extern "C" int32_t XmlComment_get_NodeType_m12405 (XmlComment_t4088 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlComment::CloneNode(System.Boolean)
extern "C" XmlNode_t4081 * XmlComment_CloneNode_m12406 (XmlComment_t4088 * __this, bool ___deep, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlComment::WriteContentTo(System.Xml.XmlWriter)
extern "C" void XmlComment_WriteContentTo_m12407 (XmlComment_t4088 * __this, XmlWriter_t4008 * ___w, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlComment::WriteTo(System.Xml.XmlWriter)
extern "C" void XmlComment_WriteTo_m12408 (XmlComment_t4088 * __this, XmlWriter_t4008 * ___w, const MethodInfo* method) IL2CPP_METHOD_ATTR;
