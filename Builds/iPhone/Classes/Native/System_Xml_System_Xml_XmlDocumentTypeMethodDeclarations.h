#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.XmlDocumentType
struct XmlDocumentType_t2471;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t2416;
// System.Xml.XmlNamedNodeMap
struct XmlNamedNodeMap_t2459;
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

// System.Void System.Xml.XmlDocumentType::.ctor(System.String,System.String,System.String,System.String,System.Xml.XmlDocument)
extern "C" void XmlDocumentType__ctor_m10837 (XmlDocumentType_t2471 * __this, String_t* ___name, String_t* ___publicId, String_t* ___systemId, String_t* ___internalSubset, XmlDocument_t2373 * ___doc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDocumentType::.ctor(Mono.Xml.DTDObjectModel,System.Xml.XmlDocument)
extern "C" void XmlDocumentType__ctor_m10838 (XmlDocumentType_t2471 * __this, DTDObjectModel_t2416 * ___dtd, XmlDocument_t2373 * ___doc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDocumentType::ImportFromDTD()
extern "C" void XmlDocumentType_ImportFromDTD_m10839 (XmlDocumentType_t2471 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDObjectModel System.Xml.XmlDocumentType::get_DTD()
extern "C" DTDObjectModel_t2416 * XmlDocumentType_get_DTD_m10840 (XmlDocumentType_t2471 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNamedNodeMap System.Xml.XmlDocumentType::get_Entities()
extern "C" XmlNamedNodeMap_t2459 * XmlDocumentType_get_Entities_m10841 (XmlDocumentType_t2471 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlDocumentType::get_InternalSubset()
extern "C" String_t* XmlDocumentType_get_InternalSubset_m10842 (XmlDocumentType_t2471 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlDocumentType::get_IsReadOnly()
extern "C" bool XmlDocumentType_get_IsReadOnly_m10843 (XmlDocumentType_t2471 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlDocumentType::get_LocalName()
extern "C" String_t* XmlDocumentType_get_LocalName_m10844 (XmlDocumentType_t2471 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlDocumentType::get_Name()
extern "C" String_t* XmlDocumentType_get_Name_m10845 (XmlDocumentType_t2471 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNodeType System.Xml.XmlDocumentType::get_NodeType()
extern "C" int32_t XmlDocumentType_get_NodeType_m10846 (XmlDocumentType_t2471 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlDocumentType::get_PublicId()
extern "C" String_t* XmlDocumentType_get_PublicId_m10847 (XmlDocumentType_t2471 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlDocumentType::get_SystemId()
extern "C" String_t* XmlDocumentType_get_SystemId_m10848 (XmlDocumentType_t2471 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlDocumentType::CloneNode(System.Boolean)
extern "C" XmlNode_t2457 * XmlDocumentType_CloneNode_m10849 (XmlDocumentType_t2471 * __this, bool ___deep, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDocumentType::WriteContentTo(System.Xml.XmlWriter)
extern "C" void XmlDocumentType_WriteContentTo_m10850 (XmlDocumentType_t2471 * __this, XmlWriter_t2384 * ___w, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDocumentType::WriteTo(System.Xml.XmlWriter)
extern "C" void XmlDocumentType_WriteTo_m10851 (XmlDocumentType_t2471 * __this, XmlWriter_t2384 * ___w, const MethodInfo* method) IL2CPP_METHOD_ATTR;
