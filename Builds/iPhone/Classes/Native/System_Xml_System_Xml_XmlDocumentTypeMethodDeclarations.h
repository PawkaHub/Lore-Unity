#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.XmlDocumentType
struct XmlDocumentType_t4096;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t4040;
// System.Xml.XmlNamedNodeMap
struct XmlNamedNodeMap_t4083;
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

// System.Void System.Xml.XmlDocumentType::.ctor(System.String,System.String,System.String,System.String,System.Xml.XmlDocument)
extern "C" void XmlDocumentType__ctor_m12541 (XmlDocumentType_t4096 * __this, String_t* ___name, String_t* ___publicId, String_t* ___systemId, String_t* ___internalSubset, XmlDocument_t3997 * ___doc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDocumentType::.ctor(Mono.Xml.DTDObjectModel,System.Xml.XmlDocument)
extern "C" void XmlDocumentType__ctor_m12542 (XmlDocumentType_t4096 * __this, DTDObjectModel_t4040 * ___dtd, XmlDocument_t3997 * ___doc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDocumentType::ImportFromDTD()
extern "C" void XmlDocumentType_ImportFromDTD_m12543 (XmlDocumentType_t4096 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDObjectModel System.Xml.XmlDocumentType::get_DTD()
extern "C" DTDObjectModel_t4040 * XmlDocumentType_get_DTD_m12544 (XmlDocumentType_t4096 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNamedNodeMap System.Xml.XmlDocumentType::get_Entities()
extern "C" XmlNamedNodeMap_t4083 * XmlDocumentType_get_Entities_m12545 (XmlDocumentType_t4096 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlDocumentType::get_InternalSubset()
extern "C" String_t* XmlDocumentType_get_InternalSubset_m12546 (XmlDocumentType_t4096 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlDocumentType::get_IsReadOnly()
extern "C" bool XmlDocumentType_get_IsReadOnly_m12547 (XmlDocumentType_t4096 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlDocumentType::get_LocalName()
extern "C" String_t* XmlDocumentType_get_LocalName_m12548 (XmlDocumentType_t4096 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlDocumentType::get_Name()
extern "C" String_t* XmlDocumentType_get_Name_m12549 (XmlDocumentType_t4096 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNodeType System.Xml.XmlDocumentType::get_NodeType()
extern "C" int32_t XmlDocumentType_get_NodeType_m12550 (XmlDocumentType_t4096 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlDocumentType::get_PublicId()
extern "C" String_t* XmlDocumentType_get_PublicId_m12551 (XmlDocumentType_t4096 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlDocumentType::get_SystemId()
extern "C" String_t* XmlDocumentType_get_SystemId_m12552 (XmlDocumentType_t4096 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlDocumentType::CloneNode(System.Boolean)
extern "C" XmlNode_t4081 * XmlDocumentType_CloneNode_m12553 (XmlDocumentType_t4096 * __this, bool ___deep, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDocumentType::WriteContentTo(System.Xml.XmlWriter)
extern "C" void XmlDocumentType_WriteContentTo_m12554 (XmlDocumentType_t4096 * __this, XmlWriter_t4008 * ___w, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDocumentType::WriteTo(System.Xml.XmlWriter)
extern "C" void XmlDocumentType_WriteTo_m12555 (XmlDocumentType_t4096 * __this, XmlWriter_t4008 * ___w, const MethodInfo* method) IL2CPP_METHOD_ATTR;
