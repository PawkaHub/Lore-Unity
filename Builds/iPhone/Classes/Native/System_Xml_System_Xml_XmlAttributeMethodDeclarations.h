#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.XmlAttribute
struct XmlAttribute_t3963;
// System.Xml.XmlLinkedNode
struct XmlLinkedNode_t4079;
// System.String
struct String_t;
// System.Xml.XmlDocument
struct XmlDocument_t3997;
// System.Xml.XmlElement
struct XmlElement_t3974;
// System.Xml.XmlNode
struct XmlNode_t4081;
// System.Xml.Schema.IXmlSchemaInfo
struct IXmlSchemaInfo_t4080;
// System.Xml.XmlWriter
struct XmlWriter_t4008;
// Mono.Xml.DTDAttributeDefinition
struct DTDAttributeDefinition_t4057;
// System.Xml.XmlNodeType
#include "System_Xml_System_Xml_XmlNodeType.h"
// System.Xml.XmlSpace
#include "System_Xml_System_Xml_XmlSpace.h"

// System.Void System.Xml.XmlAttribute::.ctor(System.String,System.String,System.String,System.Xml.XmlDocument,System.Boolean,System.Boolean)
extern "C" void XmlAttribute__ctor_m12337 (XmlAttribute_t3963 * __this, String_t* ___prefix, String_t* ___localName, String_t* ___namespaceURI, XmlDocument_t3997 * ___doc, bool ___atomizedNames, bool ___checkNamespace, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlLinkedNode System.Xml.XmlAttribute::System.Xml.IHasXmlChildNode.get_LastLinkedChild()
extern "C" XmlLinkedNode_t4079 * XmlAttribute_System_Xml_IHasXmlChildNode_get_LastLinkedChild_m12338 (XmlAttribute_t3963 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlAttribute::System.Xml.IHasXmlChildNode.set_LastLinkedChild(System.Xml.XmlLinkedNode)
extern "C" void XmlAttribute_System_Xml_IHasXmlChildNode_set_LastLinkedChild_m12339 (XmlAttribute_t3963 * __this, XmlLinkedNode_t4079 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlAttribute::get_BaseURI()
extern "C" String_t* XmlAttribute_get_BaseURI_m12340 (XmlAttribute_t3963 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlAttribute::get_LocalName()
extern "C" String_t* XmlAttribute_get_LocalName_m12341 (XmlAttribute_t3963 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlAttribute::get_Name()
extern "C" String_t* XmlAttribute_get_Name_m12342 (XmlAttribute_t3963 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlAttribute::get_NamespaceURI()
extern "C" String_t* XmlAttribute_get_NamespaceURI_m12343 (XmlAttribute_t3963 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNodeType System.Xml.XmlAttribute::get_NodeType()
extern "C" int32_t XmlAttribute_get_NodeType_m12344 (XmlAttribute_t3963 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlDocument System.Xml.XmlAttribute::get_OwnerDocument()
extern "C" XmlDocument_t3997 * XmlAttribute_get_OwnerDocument_m12345 (XmlAttribute_t3963 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlElement System.Xml.XmlAttribute::get_OwnerElement()
extern "C" XmlElement_t3974 * XmlAttribute_get_OwnerElement_m12346 (XmlAttribute_t3963 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlAttribute::get_ParentNode()
extern "C" XmlNode_t4081 * XmlAttribute_get_ParentNode_m12347 (XmlAttribute_t3963 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlAttribute::get_Prefix()
extern "C" String_t* XmlAttribute_get_Prefix_m12348 (XmlAttribute_t3963 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlAttribute::set_SchemaInfo(System.Xml.Schema.IXmlSchemaInfo)
extern "C" void XmlAttribute_set_SchemaInfo_m12349 (XmlAttribute_t3963 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlAttribute::get_Specified()
extern "C" bool XmlAttribute_get_Specified_m12350 (XmlAttribute_t3963 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlAttribute::get_Value()
extern "C" String_t* XmlAttribute_get_Value_m12351 (XmlAttribute_t3963 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlAttribute::set_Value(System.String)
extern "C" void XmlAttribute_set_Value_m12352 (XmlAttribute_t3963 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlAttribute::get_XmlLang()
extern "C" String_t* XmlAttribute_get_XmlLang_m12353 (XmlAttribute_t3963 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlSpace System.Xml.XmlAttribute::get_XmlSpace()
extern "C" int32_t XmlAttribute_get_XmlSpace_m12354 (XmlAttribute_t3963 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlAttribute::AppendChild(System.Xml.XmlNode)
extern "C" XmlNode_t4081 * XmlAttribute_AppendChild_m12355 (XmlAttribute_t3963 * __this, XmlNode_t4081 * ___child, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlAttribute::InsertBefore(System.Xml.XmlNode,System.Xml.XmlNode)
extern "C" XmlNode_t4081 * XmlAttribute_InsertBefore_m12356 (XmlAttribute_t3963 * __this, XmlNode_t4081 * ___newChild, XmlNode_t4081 * ___refChild, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlAttribute::RemoveChild(System.Xml.XmlNode)
extern "C" XmlNode_t4081 * XmlAttribute_RemoveChild_m12357 (XmlAttribute_t3963 * __this, XmlNode_t4081 * ___node, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlAttribute::CloneNode(System.Boolean)
extern "C" XmlNode_t4081 * XmlAttribute_CloneNode_m12358 (XmlAttribute_t3963 * __this, bool ___deep, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlAttribute::SetDefault()
extern "C" void XmlAttribute_SetDefault_m12359 (XmlAttribute_t3963 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlAttribute::WriteContentTo(System.Xml.XmlWriter)
extern "C" void XmlAttribute_WriteContentTo_m12360 (XmlAttribute_t3963 * __this, XmlWriter_t4008 * ___w, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlAttribute::WriteTo(System.Xml.XmlWriter)
extern "C" void XmlAttribute_WriteTo_m12361 (XmlAttribute_t3963 * __this, XmlWriter_t4008 * ___w, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAttributeDefinition System.Xml.XmlAttribute::GetAttributeDefinition()
extern "C" DTDAttributeDefinition_t4057 * XmlAttribute_GetAttributeDefinition_m12362 (XmlAttribute_t3963 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
