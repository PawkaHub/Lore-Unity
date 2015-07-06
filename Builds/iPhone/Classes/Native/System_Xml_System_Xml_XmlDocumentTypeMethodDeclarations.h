#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.XmlDocumentType
struct XmlDocumentType_t3858;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t3802;
// System.Xml.XmlNamedNodeMap
struct XmlNamedNodeMap_t3845;
// System.String
struct String_t;
// System.Xml.XmlDocument
struct XmlDocument_t3759;
// System.Xml.XmlNode
struct XmlNode_t3843;
// System.Xml.XmlWriter
struct XmlWriter_t3770;
// System.Xml.XmlNodeType
#include "System_Xml_System_Xml_XmlNodeType.h"

// System.Void System.Xml.XmlDocumentType::.ctor(System.String,System.String,System.String,System.String,System.Xml.XmlDocument)
extern "C" void XmlDocumentType__ctor_m12122 (XmlDocumentType_t3858 * __this, String_t* ___name, String_t* ___publicId, String_t* ___systemId, String_t* ___internalSubset, XmlDocument_t3759 * ___doc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDocumentType::.ctor(Mono.Xml.DTDObjectModel,System.Xml.XmlDocument)
extern "C" void XmlDocumentType__ctor_m12123 (XmlDocumentType_t3858 * __this, DTDObjectModel_t3802 * ___dtd, XmlDocument_t3759 * ___doc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDocumentType::ImportFromDTD()
extern "C" void XmlDocumentType_ImportFromDTD_m12124 (XmlDocumentType_t3858 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDObjectModel System.Xml.XmlDocumentType::get_DTD()
extern "C" DTDObjectModel_t3802 * XmlDocumentType_get_DTD_m12125 (XmlDocumentType_t3858 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNamedNodeMap System.Xml.XmlDocumentType::get_Entities()
extern "C" XmlNamedNodeMap_t3845 * XmlDocumentType_get_Entities_m12126 (XmlDocumentType_t3858 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlDocumentType::get_InternalSubset()
extern "C" String_t* XmlDocumentType_get_InternalSubset_m12127 (XmlDocumentType_t3858 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlDocumentType::get_IsReadOnly()
extern "C" bool XmlDocumentType_get_IsReadOnly_m12128 (XmlDocumentType_t3858 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlDocumentType::get_LocalName()
extern "C" String_t* XmlDocumentType_get_LocalName_m12129 (XmlDocumentType_t3858 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlDocumentType::get_Name()
extern "C" String_t* XmlDocumentType_get_Name_m12130 (XmlDocumentType_t3858 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNodeType System.Xml.XmlDocumentType::get_NodeType()
extern "C" int32_t XmlDocumentType_get_NodeType_m12131 (XmlDocumentType_t3858 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlDocumentType::get_PublicId()
extern "C" String_t* XmlDocumentType_get_PublicId_m12132 (XmlDocumentType_t3858 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlDocumentType::get_SystemId()
extern "C" String_t* XmlDocumentType_get_SystemId_m12133 (XmlDocumentType_t3858 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlDocumentType::CloneNode(System.Boolean)
extern "C" XmlNode_t3843 * XmlDocumentType_CloneNode_m12134 (XmlDocumentType_t3858 * __this, bool ___deep, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDocumentType::WriteContentTo(System.Xml.XmlWriter)
extern "C" void XmlDocumentType_WriteContentTo_m12135 (XmlDocumentType_t3858 * __this, XmlWriter_t3770 * ___w, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDocumentType::WriteTo(System.Xml.XmlWriter)
extern "C" void XmlDocumentType_WriteTo_m12136 (XmlDocumentType_t3858 * __this, XmlWriter_t3770 * ___w, const MethodInfo* method) IL2CPP_METHOD_ATTR;
