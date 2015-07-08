#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.XmlNode
struct XmlNode_t4081;
// System.Xml.XmlAttributeCollection
struct XmlAttributeCollection_t4082;
// System.String
struct String_t;
// System.Xml.XmlNodeList
struct XmlNodeList_t4111;
// System.Xml.XmlDocument
struct XmlDocument_t3997;
// System.Xml.Schema.IXmlSchemaInfo
struct IXmlSchemaInfo_t4080;
// System.Xml.XmlElement
struct XmlElement_t3974;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.Text.StringBuilder
struct StringBuilder_t696;
// System.Xml.XmlWriter
struct XmlWriter_t4008;
// System.Xml.XmlNamespaceManager
struct XmlNamespaceManager_t4109;
// System.Xml.XmlNodeType
#include "System_Xml_System_Xml_XmlNodeType.h"
// System.Xml.XmlSpace
#include "System_Xml_System_Xml_XmlSpace.h"

// System.Void System.Xml.XmlNode::.ctor(System.Xml.XmlDocument)
extern "C" void XmlNode__ctor_m12711 (XmlNode_t4081 * __this, XmlDocument_t3997 * ___ownerDocument, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlNode::.cctor()
extern "C" void XmlNode__cctor_m12712 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Xml.XmlNode::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * XmlNode_System_Collections_IEnumerable_GetEnumerator_m12713 (XmlNode_t4081 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlAttributeCollection System.Xml.XmlNode::get_Attributes()
extern "C" XmlAttributeCollection_t4082 * XmlNode_get_Attributes_m12714 (XmlNode_t4081 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNode::get_BaseURI()
extern "C" String_t* XmlNode_get_BaseURI_m12715 (XmlNode_t4081 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNode::get_ChildrenBaseURI()
extern "C" String_t* XmlNode_get_ChildrenBaseURI_m12716 (XmlNode_t4081 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNodeList System.Xml.XmlNode::get_ChildNodes()
extern "C" XmlNodeList_t4111 * XmlNode_get_ChildNodes_m12717 (XmlNode_t4081 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlNode::get_FirstChild()
extern "C" XmlNode_t4081 * XmlNode_get_FirstChild_m12718 (XmlNode_t4081 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlNode::get_HasChildNodes()
extern "C" bool XmlNode_get_HasChildNodes_m12719 (XmlNode_t4081 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNode::get_InnerText()
extern "C" String_t* XmlNode_get_InnerText_m12720 (XmlNode_t4081 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlNode::AppendChildValues(System.Text.StringBuilder&)
extern "C" void XmlNode_AppendChildValues_m12721 (XmlNode_t4081 * __this, StringBuilder_t696 ** ___builder, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlNode::get_IsReadOnly()
extern "C" bool XmlNode_get_IsReadOnly_m12722 (XmlNode_t4081 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlNode::get_LastChild()
extern "C" XmlNode_t4081 * XmlNode_get_LastChild_m12723 (XmlNode_t4081 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNode::get_LocalName()
// System.String System.Xml.XmlNode::get_Name()
// System.String System.Xml.XmlNode::get_NamespaceURI()
extern "C" String_t* XmlNode_get_NamespaceURI_m12724 (XmlNode_t4081 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlNode::get_NextSibling()
extern "C" XmlNode_t4081 * XmlNode_get_NextSibling_m12725 (XmlNode_t4081 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNodeType System.Xml.XmlNode::get_NodeType()
// System.Xml.XmlDocument System.Xml.XmlNode::get_OwnerDocument()
extern "C" XmlDocument_t3997 * XmlNode_get_OwnerDocument_m12726 (XmlNode_t4081 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlNode::get_ParentNode()
extern "C" XmlNode_t4081 * XmlNode_get_ParentNode_m12727 (XmlNode_t4081 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNode::get_Prefix()
extern "C" String_t* XmlNode_get_Prefix_m12728 (XmlNode_t4081 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlNode::get_PreviousSibling()
extern "C" XmlNode_t4081 * XmlNode_get_PreviousSibling_m12729 (XmlNode_t4081 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNode::get_Value()
extern "C" String_t* XmlNode_get_Value_m12730 (XmlNode_t4081 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlNode::set_Value(System.String)
extern "C" void XmlNode_set_Value_m12731 (XmlNode_t4081 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlNode::get_XmlLang()
extern "C" String_t* XmlNode_get_XmlLang_m12732 (XmlNode_t4081 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlSpace System.Xml.XmlNode::get_XmlSpace()
extern "C" int32_t XmlNode_get_XmlSpace_m12733 (XmlNode_t4081 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlNode::set_SchemaInfo(System.Xml.Schema.IXmlSchemaInfo)
extern "C" void XmlNode_set_SchemaInfo_m12734 (XmlNode_t4081 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlNode::AppendChild(System.Xml.XmlNode)
extern "C" XmlNode_t4081 * XmlNode_AppendChild_m12735 (XmlNode_t4081 * __this, XmlNode_t4081 * ___newChild, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlNode::AppendChild(System.Xml.XmlNode,System.Boolean)
extern "C" XmlNode_t4081 * XmlNode_AppendChild_m12736 (XmlNode_t4081 * __this, XmlNode_t4081 * ___newChild, bool ___checkNodeType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlNode::CloneNode(System.Boolean)
// System.Collections.IEnumerator System.Xml.XmlNode::GetEnumerator()
extern "C" Object_t * XmlNode_GetEnumerator_m12737 (XmlNode_t4081 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlNode::InsertBefore(System.Xml.XmlNode,System.Xml.XmlNode)
extern "C" XmlNode_t4081 * XmlNode_InsertBefore_m12738 (XmlNode_t4081 * __this, XmlNode_t4081 * ___newChild, XmlNode_t4081 * ___refChild, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlNode::IsAncestor(System.Xml.XmlNode)
extern "C" bool XmlNode_IsAncestor_m12739 (XmlNode_t4081 * __this, XmlNode_t4081 * ___newChild, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlNode::InsertBefore(System.Xml.XmlNode,System.Xml.XmlNode,System.Boolean,System.Boolean)
extern "C" XmlNode_t4081 * XmlNode_InsertBefore_m12740 (XmlNode_t4081 * __this, XmlNode_t4081 * ___newChild, XmlNode_t4081 * ___refChild, bool ___checkNodeType, bool ___raiseEvent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlNode::CheckNodeInsertion(System.Xml.XmlNode,System.Xml.XmlNode)
extern "C" void XmlNode_CheckNodeInsertion_m12741 (XmlNode_t4081 * __this, XmlNode_t4081 * ___newChild, XmlNode_t4081 * ___refChild, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlNode::RemoveAll()
extern "C" void XmlNode_RemoveAll_m12742 (XmlNode_t4081 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlNode::RemoveChild(System.Xml.XmlNode)
extern "C" XmlNode_t4081 * XmlNode_RemoveChild_m12743 (XmlNode_t4081 * __this, XmlNode_t4081 * ___oldChild, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlNode::CheckNodeRemoval()
extern "C" void XmlNode_CheckNodeRemoval_m12744 (XmlNode_t4081 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlNode::RemoveChild(System.Xml.XmlNode,System.Boolean)
extern "C" XmlNode_t4081 * XmlNode_RemoveChild_m12745 (XmlNode_t4081 * __this, XmlNode_t4081 * ___oldChild, bool ___checkNodeType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlElement System.Xml.XmlNode::get_AttributeOwnerElement()
extern "C" XmlElement_t3974 * XmlNode_get_AttributeOwnerElement_m12746 (XmlNode_t4081 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlNode::set_AttributeOwnerElement(System.Xml.XmlElement)
extern "C" void XmlNode_set_AttributeOwnerElement_m12747 (XmlNode_t4081 * __this, XmlElement_t3974 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlNode::WriteContentTo(System.Xml.XmlWriter)
// System.Void System.Xml.XmlNode::WriteTo(System.Xml.XmlWriter)
// System.Xml.XmlNamespaceManager System.Xml.XmlNode::ConstructNamespaceManager()
extern "C" XmlNamespaceManager_t4109 * XmlNode_ConstructNamespaceManager_m12748 (XmlNode_t4081 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
