#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.XmlElement
struct XmlElement_t3974;
// System.Xml.XmlLinkedNode
struct XmlLinkedNode_t4079;
// System.Xml.XmlAttributeCollection
struct XmlAttributeCollection_t4082;
// System.String
struct String_t;
// System.Xml.XmlNode
struct XmlNode_t4081;
// System.Xml.XmlDocument
struct XmlDocument_t3997;
// System.Xml.Schema.IXmlSchemaInfo
struct IXmlSchemaInfo_t4080;
// System.Xml.XmlAttribute
struct XmlAttribute_t3963;
// System.Xml.XmlWriter
struct XmlWriter_t4008;
// System.Xml.XmlNodeType
#include "System_Xml_System_Xml_XmlNodeType.h"

// System.Void System.Xml.XmlElement::.ctor(System.String,System.String,System.String,System.Xml.XmlDocument,System.Boolean)
extern "C" void XmlElement__ctor_m12556 (XmlElement_t3974 * __this, String_t* ___prefix, String_t* ___localName, String_t* ___namespaceURI, XmlDocument_t3997 * ___doc, bool ___atomizedNames, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlLinkedNode System.Xml.XmlElement::System.Xml.IHasXmlChildNode.get_LastLinkedChild()
extern "C" XmlLinkedNode_t4079 * XmlElement_System_Xml_IHasXmlChildNode_get_LastLinkedChild_m12557 (XmlElement_t3974 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlElement::System.Xml.IHasXmlChildNode.set_LastLinkedChild(System.Xml.XmlLinkedNode)
extern "C" void XmlElement_System_Xml_IHasXmlChildNode_set_LastLinkedChild_m12558 (XmlElement_t3974 * __this, XmlLinkedNode_t4079 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlAttributeCollection System.Xml.XmlElement::get_Attributes()
extern "C" XmlAttributeCollection_t4082 * XmlElement_get_Attributes_m12559 (XmlElement_t3974 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlElement::get_HasAttributes()
extern "C" bool XmlElement_get_HasAttributes_m12560 (XmlElement_t3974 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlElement::get_InnerText()
extern "C" String_t* XmlElement_get_InnerText_m12561 (XmlElement_t3974 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlElement::get_IsEmpty()
extern "C" bool XmlElement_get_IsEmpty_m12562 (XmlElement_t3974 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlElement::set_IsEmpty(System.Boolean)
extern "C" void XmlElement_set_IsEmpty_m12563 (XmlElement_t3974 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlElement::get_LocalName()
extern "C" String_t* XmlElement_get_LocalName_m12564 (XmlElement_t3974 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlElement::get_Name()
extern "C" String_t* XmlElement_get_Name_m12565 (XmlElement_t3974 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlElement::get_NamespaceURI()
extern "C" String_t* XmlElement_get_NamespaceURI_m12566 (XmlElement_t3974 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlElement::get_NextSibling()
extern "C" XmlNode_t4081 * XmlElement_get_NextSibling_m12567 (XmlElement_t3974 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNodeType System.Xml.XmlElement::get_NodeType()
extern "C" int32_t XmlElement_get_NodeType_m12568 (XmlElement_t3974 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlDocument System.Xml.XmlElement::get_OwnerDocument()
extern "C" XmlDocument_t3997 * XmlElement_get_OwnerDocument_m12569 (XmlElement_t3974 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlElement::get_Prefix()
extern "C" String_t* XmlElement_get_Prefix_m12570 (XmlElement_t3974 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlElement::get_ParentNode()
extern "C" XmlNode_t4081 * XmlElement_get_ParentNode_m12571 (XmlElement_t3974 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlElement::set_SchemaInfo(System.Xml.Schema.IXmlSchemaInfo)
extern "C" void XmlElement_set_SchemaInfo_m12572 (XmlElement_t3974 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlElement::CloneNode(System.Boolean)
extern "C" XmlNode_t4081 * XmlElement_CloneNode_m12573 (XmlElement_t3974 * __this, bool ___deep, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlElement::RemoveAll()
extern "C" void XmlElement_RemoveAll_m12574 (XmlElement_t3974 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlElement::SetAttribute(System.String,System.String)
extern "C" void XmlElement_SetAttribute_m12575 (XmlElement_t3974 * __this, String_t* ___name, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlAttribute System.Xml.XmlElement::SetAttributeNode(System.Xml.XmlAttribute)
extern "C" XmlAttribute_t3963 * XmlElement_SetAttributeNode_m12576 (XmlElement_t3974 * __this, XmlAttribute_t3963 * ___newAttr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlElement::WriteContentTo(System.Xml.XmlWriter)
extern "C" void XmlElement_WriteContentTo_m12577 (XmlElement_t3974 * __this, XmlWriter_t4008 * ___w, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlElement::WriteTo(System.Xml.XmlWriter)
extern "C" void XmlElement_WriteTo_m12578 (XmlElement_t3974 * __this, XmlWriter_t4008 * ___w, const MethodInfo* method) IL2CPP_METHOD_ATTR;
