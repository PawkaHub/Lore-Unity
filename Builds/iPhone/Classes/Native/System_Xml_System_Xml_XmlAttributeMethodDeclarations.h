#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.XmlAttribute
struct XmlAttribute_t3725;
// System.Xml.XmlLinkedNode
struct XmlLinkedNode_t3841;
// System.String
struct String_t;
// System.Xml.XmlDocument
struct XmlDocument_t3759;
// System.Xml.XmlElement
struct XmlElement_t3736;
// System.Xml.XmlNode
struct XmlNode_t3843;
// System.Xml.Schema.IXmlSchemaInfo
struct IXmlSchemaInfo_t3842;
// System.Xml.XmlWriter
struct XmlWriter_t3770;
// Mono.Xml.DTDAttributeDefinition
struct DTDAttributeDefinition_t3819;
// System.Xml.XmlNodeType
#include "System_Xml_System_Xml_XmlNodeType.h"
// System.Xml.XmlSpace
#include "System_Xml_System_Xml_XmlSpace.h"

// System.Void System.Xml.XmlAttribute::.ctor(System.String,System.String,System.String,System.Xml.XmlDocument,System.Boolean,System.Boolean)
extern "C" void XmlAttribute__ctor_m11918 (XmlAttribute_t3725 * __this, String_t* ___prefix, String_t* ___localName, String_t* ___namespaceURI, XmlDocument_t3759 * ___doc, bool ___atomizedNames, bool ___checkNamespace, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlLinkedNode System.Xml.XmlAttribute::System.Xml.IHasXmlChildNode.get_LastLinkedChild()
extern "C" XmlLinkedNode_t3841 * XmlAttribute_System_Xml_IHasXmlChildNode_get_LastLinkedChild_m11919 (XmlAttribute_t3725 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlAttribute::System.Xml.IHasXmlChildNode.set_LastLinkedChild(System.Xml.XmlLinkedNode)
extern "C" void XmlAttribute_System_Xml_IHasXmlChildNode_set_LastLinkedChild_m11920 (XmlAttribute_t3725 * __this, XmlLinkedNode_t3841 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlAttribute::get_BaseURI()
extern "C" String_t* XmlAttribute_get_BaseURI_m11921 (XmlAttribute_t3725 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlAttribute::get_LocalName()
extern "C" String_t* XmlAttribute_get_LocalName_m11922 (XmlAttribute_t3725 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlAttribute::get_Name()
extern "C" String_t* XmlAttribute_get_Name_m11923 (XmlAttribute_t3725 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlAttribute::get_NamespaceURI()
extern "C" String_t* XmlAttribute_get_NamespaceURI_m11924 (XmlAttribute_t3725 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNodeType System.Xml.XmlAttribute::get_NodeType()
extern "C" int32_t XmlAttribute_get_NodeType_m11925 (XmlAttribute_t3725 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlDocument System.Xml.XmlAttribute::get_OwnerDocument()
extern "C" XmlDocument_t3759 * XmlAttribute_get_OwnerDocument_m11926 (XmlAttribute_t3725 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlElement System.Xml.XmlAttribute::get_OwnerElement()
extern "C" XmlElement_t3736 * XmlAttribute_get_OwnerElement_m11927 (XmlAttribute_t3725 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlAttribute::get_ParentNode()
extern "C" XmlNode_t3843 * XmlAttribute_get_ParentNode_m11928 (XmlAttribute_t3725 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlAttribute::get_Prefix()
extern "C" String_t* XmlAttribute_get_Prefix_m11929 (XmlAttribute_t3725 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlAttribute::set_SchemaInfo(System.Xml.Schema.IXmlSchemaInfo)
extern "C" void XmlAttribute_set_SchemaInfo_m11930 (XmlAttribute_t3725 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlAttribute::get_Specified()
extern "C" bool XmlAttribute_get_Specified_m11931 (XmlAttribute_t3725 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlAttribute::get_Value()
extern "C" String_t* XmlAttribute_get_Value_m11932 (XmlAttribute_t3725 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlAttribute::set_Value(System.String)
extern "C" void XmlAttribute_set_Value_m11933 (XmlAttribute_t3725 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlAttribute::get_XmlLang()
extern "C" String_t* XmlAttribute_get_XmlLang_m11934 (XmlAttribute_t3725 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlSpace System.Xml.XmlAttribute::get_XmlSpace()
extern "C" int32_t XmlAttribute_get_XmlSpace_m11935 (XmlAttribute_t3725 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlAttribute::AppendChild(System.Xml.XmlNode)
extern "C" XmlNode_t3843 * XmlAttribute_AppendChild_m11936 (XmlAttribute_t3725 * __this, XmlNode_t3843 * ___child, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlAttribute::InsertBefore(System.Xml.XmlNode,System.Xml.XmlNode)
extern "C" XmlNode_t3843 * XmlAttribute_InsertBefore_m11937 (XmlAttribute_t3725 * __this, XmlNode_t3843 * ___newChild, XmlNode_t3843 * ___refChild, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlAttribute::RemoveChild(System.Xml.XmlNode)
extern "C" XmlNode_t3843 * XmlAttribute_RemoveChild_m11938 (XmlAttribute_t3725 * __this, XmlNode_t3843 * ___node, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlAttribute::CloneNode(System.Boolean)
extern "C" XmlNode_t3843 * XmlAttribute_CloneNode_m11939 (XmlAttribute_t3725 * __this, bool ___deep, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlAttribute::SetDefault()
extern "C" void XmlAttribute_SetDefault_m11940 (XmlAttribute_t3725 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlAttribute::WriteContentTo(System.Xml.XmlWriter)
extern "C" void XmlAttribute_WriteContentTo_m11941 (XmlAttribute_t3725 * __this, XmlWriter_t3770 * ___w, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlAttribute::WriteTo(System.Xml.XmlWriter)
extern "C" void XmlAttribute_WriteTo_m11942 (XmlAttribute_t3725 * __this, XmlWriter_t3770 * ___w, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAttributeDefinition System.Xml.XmlAttribute::GetAttributeDefinition()
extern "C" DTDAttributeDefinition_t3819 * XmlAttribute_GetAttributeDefinition_m11943 (XmlAttribute_t3725 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
