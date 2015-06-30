#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.XmlAttribute
struct XmlAttribute_t2339;
// System.Xml.XmlLinkedNode
struct XmlLinkedNode_t2455;
// System.String
struct String_t;
// System.Xml.XmlDocument
struct XmlDocument_t2373;
// System.Xml.XmlElement
struct XmlElement_t2350;
// System.Xml.XmlNode
struct XmlNode_t2457;
// System.Xml.Schema.IXmlSchemaInfo
struct IXmlSchemaInfo_t2456;
// System.Xml.XmlWriter
struct XmlWriter_t2384;
// Mono.Xml.DTDAttributeDefinition
struct DTDAttributeDefinition_t2433;
// System.Xml.XmlNodeType
#include "System_Xml_System_Xml_XmlNodeType.h"
// System.Xml.XmlSpace
#include "System_Xml_System_Xml_XmlSpace.h"

// System.Void System.Xml.XmlAttribute::.ctor(System.String,System.String,System.String,System.Xml.XmlDocument,System.Boolean,System.Boolean)
extern "C" void XmlAttribute__ctor_m10633 (XmlAttribute_t2339 * __this, String_t* ___prefix, String_t* ___localName, String_t* ___namespaceURI, XmlDocument_t2373 * ___doc, bool ___atomizedNames, bool ___checkNamespace, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlLinkedNode System.Xml.XmlAttribute::System.Xml.IHasXmlChildNode.get_LastLinkedChild()
extern "C" XmlLinkedNode_t2455 * XmlAttribute_System_Xml_IHasXmlChildNode_get_LastLinkedChild_m10634 (XmlAttribute_t2339 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlAttribute::System.Xml.IHasXmlChildNode.set_LastLinkedChild(System.Xml.XmlLinkedNode)
extern "C" void XmlAttribute_System_Xml_IHasXmlChildNode_set_LastLinkedChild_m10635 (XmlAttribute_t2339 * __this, XmlLinkedNode_t2455 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlAttribute::get_BaseURI()
extern "C" String_t* XmlAttribute_get_BaseURI_m10636 (XmlAttribute_t2339 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlAttribute::get_LocalName()
extern "C" String_t* XmlAttribute_get_LocalName_m10637 (XmlAttribute_t2339 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlAttribute::get_Name()
extern "C" String_t* XmlAttribute_get_Name_m10638 (XmlAttribute_t2339 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlAttribute::get_NamespaceURI()
extern "C" String_t* XmlAttribute_get_NamespaceURI_m10639 (XmlAttribute_t2339 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNodeType System.Xml.XmlAttribute::get_NodeType()
extern "C" int32_t XmlAttribute_get_NodeType_m10640 (XmlAttribute_t2339 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlDocument System.Xml.XmlAttribute::get_OwnerDocument()
extern "C" XmlDocument_t2373 * XmlAttribute_get_OwnerDocument_m10641 (XmlAttribute_t2339 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlElement System.Xml.XmlAttribute::get_OwnerElement()
extern "C" XmlElement_t2350 * XmlAttribute_get_OwnerElement_m10642 (XmlAttribute_t2339 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlAttribute::get_ParentNode()
extern "C" XmlNode_t2457 * XmlAttribute_get_ParentNode_m10643 (XmlAttribute_t2339 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlAttribute::get_Prefix()
extern "C" String_t* XmlAttribute_get_Prefix_m10644 (XmlAttribute_t2339 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlAttribute::set_SchemaInfo(System.Xml.Schema.IXmlSchemaInfo)
extern "C" void XmlAttribute_set_SchemaInfo_m10645 (XmlAttribute_t2339 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlAttribute::get_Specified()
extern "C" bool XmlAttribute_get_Specified_m10646 (XmlAttribute_t2339 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlAttribute::get_Value()
extern "C" String_t* XmlAttribute_get_Value_m10647 (XmlAttribute_t2339 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlAttribute::set_Value(System.String)
extern "C" void XmlAttribute_set_Value_m10648 (XmlAttribute_t2339 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlAttribute::get_XmlLang()
extern "C" String_t* XmlAttribute_get_XmlLang_m10649 (XmlAttribute_t2339 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlSpace System.Xml.XmlAttribute::get_XmlSpace()
extern "C" int32_t XmlAttribute_get_XmlSpace_m10650 (XmlAttribute_t2339 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlAttribute::AppendChild(System.Xml.XmlNode)
extern "C" XmlNode_t2457 * XmlAttribute_AppendChild_m10651 (XmlAttribute_t2339 * __this, XmlNode_t2457 * ___child, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlAttribute::InsertBefore(System.Xml.XmlNode,System.Xml.XmlNode)
extern "C" XmlNode_t2457 * XmlAttribute_InsertBefore_m10652 (XmlAttribute_t2339 * __this, XmlNode_t2457 * ___newChild, XmlNode_t2457 * ___refChild, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlAttribute::RemoveChild(System.Xml.XmlNode)
extern "C" XmlNode_t2457 * XmlAttribute_RemoveChild_m10653 (XmlAttribute_t2339 * __this, XmlNode_t2457 * ___node, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlAttribute::CloneNode(System.Boolean)
extern "C" XmlNode_t2457 * XmlAttribute_CloneNode_m10654 (XmlAttribute_t2339 * __this, bool ___deep, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlAttribute::SetDefault()
extern "C" void XmlAttribute_SetDefault_m10655 (XmlAttribute_t2339 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlAttribute::WriteContentTo(System.Xml.XmlWriter)
extern "C" void XmlAttribute_WriteContentTo_m10656 (XmlAttribute_t2339 * __this, XmlWriter_t2384 * ___w, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlAttribute::WriteTo(System.Xml.XmlWriter)
extern "C" void XmlAttribute_WriteTo_m10657 (XmlAttribute_t2339 * __this, XmlWriter_t2384 * ___w, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAttributeDefinition System.Xml.XmlAttribute::GetAttributeDefinition()
extern "C" DTDAttributeDefinition_t2433 * XmlAttribute_GetAttributeDefinition_m10658 (XmlAttribute_t2339 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
