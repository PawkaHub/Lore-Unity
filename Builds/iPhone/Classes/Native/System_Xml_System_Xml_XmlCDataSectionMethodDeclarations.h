#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.XmlCDataSection
struct XmlCDataSection_t2460;
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

// System.Void System.Xml.XmlCDataSection::.ctor(System.String,System.Xml.XmlDocument)
extern "C" void XmlCDataSection__ctor_m10671 (XmlCDataSection_t2460 * __this, String_t* ___data, XmlDocument_t2373 * ___doc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlCDataSection::get_LocalName()
extern "C" String_t* XmlCDataSection_get_LocalName_m10672 (XmlCDataSection_t2460 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlCDataSection::get_Name()
extern "C" String_t* XmlCDataSection_get_Name_m10673 (XmlCDataSection_t2460 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNodeType System.Xml.XmlCDataSection::get_NodeType()
extern "C" int32_t XmlCDataSection_get_NodeType_m10674 (XmlCDataSection_t2460 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlCDataSection::get_ParentNode()
extern "C" XmlNode_t2457 * XmlCDataSection_get_ParentNode_m10675 (XmlCDataSection_t2460 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlCDataSection::CloneNode(System.Boolean)
extern "C" XmlNode_t2457 * XmlCDataSection_CloneNode_m10676 (XmlCDataSection_t2460 * __this, bool ___deep, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlCDataSection::WriteContentTo(System.Xml.XmlWriter)
extern "C" void XmlCDataSection_WriteContentTo_m10677 (XmlCDataSection_t2460 * __this, XmlWriter_t2384 * ___w, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlCDataSection::WriteTo(System.Xml.XmlWriter)
extern "C" void XmlCDataSection_WriteTo_m10678 (XmlCDataSection_t2460 * __this, XmlWriter_t2384 * ___w, const MethodInfo* method) IL2CPP_METHOD_ATTR;
