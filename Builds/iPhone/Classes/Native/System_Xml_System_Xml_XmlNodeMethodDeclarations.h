#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.XmlNode
struct XmlNode_t2457;
// System.Xml.XmlAttributeCollection
struct XmlAttributeCollection_t2458;
// System.String
struct String_t;
// System.Xml.XmlNodeList
struct XmlNodeList_t2487;
// System.Xml.XmlDocument
struct XmlDocument_t2373;
// System.Xml.Schema.IXmlSchemaInfo
struct IXmlSchemaInfo_t2456;
// System.Xml.XmlElement
struct XmlElement_t2350;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Text.StringBuilder
struct StringBuilder_t619;
// System.Xml.XmlWriter
struct XmlWriter_t2384;
// System.Xml.XmlNamespaceManager
struct XmlNamespaceManager_t2485;
// System.Xml.XmlNodeType
#include "System_Xml_System_Xml_XmlNodeType.h"
// System.Xml.XmlSpace
#include "System_Xml_System_Xml_XmlSpace.h"

// System.Void System.Xml.XmlNode::.ctor(System.Xml.XmlDocument)
extern "C" void XmlNode__ctor_m11007 (XmlNode_t2457 * __this, XmlDocument_t2373 * ___ownerDocument, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlNode::.cctor()
extern "C" void XmlNode__cctor_m11008 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Xml.XmlNode::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * XmlNode_System_Collections_IEnumerable_GetEnumerator_m11009 (XmlNode_t2457 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlAttributeCollection System.Xml.XmlNode::get_Attributes()
extern "C" XmlAttributeCollection_t2458 * XmlNode_get_Attributes_m11010 (XmlNode_t2457 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNode::get_BaseURI()
extern "C" String_t* XmlNode_get_BaseURI_m11011 (XmlNode_t2457 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNode::get_ChildrenBaseURI()
extern "C" String_t* XmlNode_get_ChildrenBaseURI_m11012 (XmlNode_t2457 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNodeList System.Xml.XmlNode::get_ChildNodes()
extern "C" XmlNodeList_t2487 * XmlNode_get_ChildNodes_m11013 (XmlNode_t2457 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlNode::get_FirstChild()
extern "C" XmlNode_t2457 * XmlNode_get_FirstChild_m11014 (XmlNode_t2457 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlNode::get_HasChildNodes()
extern "C" bool XmlNode_get_HasChildNodes_m11015 (XmlNode_t2457 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNode::get_InnerText()
extern "C" String_t* XmlNode_get_InnerText_m11016 (XmlNode_t2457 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlNode::AppendChildValues(System.Text.StringBuilder&)
extern "C" void XmlNode_AppendChildValues_m11017 (XmlNode_t2457 * __this, StringBuilder_t619 ** ___builder, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlNode::get_IsReadOnly()
extern "C" bool XmlNode_get_IsReadOnly_m11018 (XmlNode_t2457 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlNode::get_LastChild()
extern "C" XmlNode_t2457 * XmlNode_get_LastChild_m11019 (XmlNode_t2457 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNode::get_LocalName()
// System.String System.Xml.XmlNode::get_Name()
// System.String System.Xml.XmlNode::get_NamespaceURI()
extern "C" String_t* XmlNode_get_NamespaceURI_m11020 (XmlNode_t2457 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlNode::get_NextSibling()
extern "C" XmlNode_t2457 * XmlNode_get_NextSibling_m11021 (XmlNode_t2457 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNodeType System.Xml.XmlNode::get_NodeType()
// System.Xml.XmlDocument System.Xml.XmlNode::get_OwnerDocument()
extern "C" XmlDocument_t2373 * XmlNode_get_OwnerDocument_m11022 (XmlNode_t2457 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlNode::get_ParentNode()
extern "C" XmlNode_t2457 * XmlNode_get_ParentNode_m11023 (XmlNode_t2457 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNode::get_Prefix()
extern "C" String_t* XmlNode_get_Prefix_m11024 (XmlNode_t2457 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlNode::get_PreviousSibling()
extern "C" XmlNode_t2457 * XmlNode_get_PreviousSibling_m11025 (XmlNode_t2457 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNode::get_Value()
extern "C" String_t* XmlNode_get_Value_m11026 (XmlNode_t2457 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlNode::set_Value(System.String)
extern "C" void XmlNode_set_Value_m11027 (XmlNode_t2457 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNode::get_XmlLang()
extern "C" String_t* XmlNode_get_XmlLang_m11028 (XmlNode_t2457 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlSpace System.Xml.XmlNode::get_XmlSpace()
extern "C" int32_t XmlNode_get_XmlSpace_m11029 (XmlNode_t2457 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlNode::set_SchemaInfo(System.Xml.Schema.IXmlSchemaInfo)
extern "C" void XmlNode_set_SchemaInfo_m11030 (XmlNode_t2457 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlNode::AppendChild(System.Xml.XmlNode)
extern "C" XmlNode_t2457 * XmlNode_AppendChild_m11031 (XmlNode_t2457 * __this, XmlNode_t2457 * ___newChild, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlNode::AppendChild(System.Xml.XmlNode,System.Boolean)
extern "C" XmlNode_t2457 * XmlNode_AppendChild_m11032 (XmlNode_t2457 * __this, XmlNode_t2457 * ___newChild, bool ___checkNodeType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlNode::CloneNode(System.Boolean)
// System.Collections.IEnumerator System.Xml.XmlNode::GetEnumerator()
extern "C" Object_t * XmlNode_GetEnumerator_m11033 (XmlNode_t2457 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlNode::InsertBefore(System.Xml.XmlNode,System.Xml.XmlNode)
extern "C" XmlNode_t2457 * XmlNode_InsertBefore_m11034 (XmlNode_t2457 * __this, XmlNode_t2457 * ___newChild, XmlNode_t2457 * ___refChild, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlNode::IsAncestor(System.Xml.XmlNode)
extern "C" bool XmlNode_IsAncestor_m11035 (XmlNode_t2457 * __this, XmlNode_t2457 * ___newChild, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlNode::InsertBefore(System.Xml.XmlNode,System.Xml.XmlNode,System.Boolean,System.Boolean)
extern "C" XmlNode_t2457 * XmlNode_InsertBefore_m11036 (XmlNode_t2457 * __this, XmlNode_t2457 * ___newChild, XmlNode_t2457 * ___refChild, bool ___checkNodeType, bool ___raiseEvent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlNode::CheckNodeInsertion(System.Xml.XmlNode,System.Xml.XmlNode)
extern "C" void XmlNode_CheckNodeInsertion_m11037 (XmlNode_t2457 * __this, XmlNode_t2457 * ___newChild, XmlNode_t2457 * ___refChild, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlNode::RemoveAll()
extern "C" void XmlNode_RemoveAll_m11038 (XmlNode_t2457 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlNode::RemoveChild(System.Xml.XmlNode)
extern "C" XmlNode_t2457 * XmlNode_RemoveChild_m11039 (XmlNode_t2457 * __this, XmlNode_t2457 * ___oldChild, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlNode::CheckNodeRemoval()
extern "C" void XmlNode_CheckNodeRemoval_m11040 (XmlNode_t2457 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlNode::RemoveChild(System.Xml.XmlNode,System.Boolean)
extern "C" XmlNode_t2457 * XmlNode_RemoveChild_m11041 (XmlNode_t2457 * __this, XmlNode_t2457 * ___oldChild, bool ___checkNodeType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlElement System.Xml.XmlNode::get_AttributeOwnerElement()
extern "C" XmlElement_t2350 * XmlNode_get_AttributeOwnerElement_m11042 (XmlNode_t2457 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlNode::set_AttributeOwnerElement(System.Xml.XmlElement)
extern "C" void XmlNode_set_AttributeOwnerElement_m11043 (XmlNode_t2457 * __this, XmlElement_t2350 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlNode::WriteContentTo(System.Xml.XmlWriter)
// System.Void System.Xml.XmlNode::WriteTo(System.Xml.XmlWriter)
// System.Xml.XmlNamespaceManager System.Xml.XmlNode::ConstructNamespaceManager()
extern "C" XmlNamespaceManager_t2485 * XmlNode_ConstructNamespaceManager_m11044 (XmlNode_t2457 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
