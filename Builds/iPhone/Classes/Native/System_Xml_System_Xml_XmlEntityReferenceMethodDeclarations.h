#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.XmlEntityReference
struct XmlEntityReference_t2473;
// System.Xml.XmlLinkedNode
struct XmlLinkedNode_t2455;
// System.String
struct String_t;
// System.Xml.XmlEntity
struct XmlEntity_t2472;
// System.Xml.XmlDocument
struct XmlDocument_t2373;
// System.Xml.XmlNode
struct XmlNode_t2457;
// System.Xml.XmlWriter
struct XmlWriter_t2384;
// System.Xml.XmlNodeType
#include "System_Xml_System_Xml_XmlNodeType.h"

// System.Void System.Xml.XmlEntityReference::.ctor(System.String,System.Xml.XmlDocument)
extern "C" void XmlEntityReference__ctor_m10889 (XmlEntityReference_t2473 * __this, String_t* ___name, XmlDocument_t2373 * ___doc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlLinkedNode System.Xml.XmlEntityReference::System.Xml.IHasXmlChildNode.get_LastLinkedChild()
extern "C" XmlLinkedNode_t2455 * XmlEntityReference_System_Xml_IHasXmlChildNode_get_LastLinkedChild_m10890 (XmlEntityReference_t2473 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlEntityReference::System.Xml.IHasXmlChildNode.set_LastLinkedChild(System.Xml.XmlLinkedNode)
extern "C" void XmlEntityReference_System_Xml_IHasXmlChildNode_set_LastLinkedChild_m10891 (XmlEntityReference_t2473 * __this, XmlLinkedNode_t2455 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlEntityReference::get_BaseURI()
extern "C" String_t* XmlEntityReference_get_BaseURI_m10892 (XmlEntityReference_t2473 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlEntity System.Xml.XmlEntityReference::get_Entity()
extern "C" XmlEntity_t2472 * XmlEntityReference_get_Entity_m10893 (XmlEntityReference_t2473 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlEntityReference::get_ChildrenBaseURI()
extern "C" String_t* XmlEntityReference_get_ChildrenBaseURI_m10894 (XmlEntityReference_t2473 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlEntityReference::get_IsReadOnly()
extern "C" bool XmlEntityReference_get_IsReadOnly_m10895 (XmlEntityReference_t2473 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlEntityReference::get_LocalName()
extern "C" String_t* XmlEntityReference_get_LocalName_m10896 (XmlEntityReference_t2473 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlEntityReference::get_Name()
extern "C" String_t* XmlEntityReference_get_Name_m10897 (XmlEntityReference_t2473 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNodeType System.Xml.XmlEntityReference::get_NodeType()
extern "C" int32_t XmlEntityReference_get_NodeType_m10898 (XmlEntityReference_t2473 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlEntityReference::get_Value()
extern "C" String_t* XmlEntityReference_get_Value_m10899 (XmlEntityReference_t2473 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlEntityReference::set_Value(System.String)
extern "C" void XmlEntityReference_set_Value_m10900 (XmlEntityReference_t2473 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlEntityReference::CloneNode(System.Boolean)
extern "C" XmlNode_t2457 * XmlEntityReference_CloneNode_m10901 (XmlEntityReference_t2473 * __this, bool ___deep, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlEntityReference::WriteContentTo(System.Xml.XmlWriter)
extern "C" void XmlEntityReference_WriteContentTo_m10902 (XmlEntityReference_t2473 * __this, XmlWriter_t2384 * ___w, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlEntityReference::WriteTo(System.Xml.XmlWriter)
extern "C" void XmlEntityReference_WriteTo_m10903 (XmlEntityReference_t2473 * __this, XmlWriter_t2384 * ___w, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlEntityReference::SetReferencedEntityContent()
extern "C" void XmlEntityReference_SetReferencedEntityContent_m10904 (XmlEntityReference_t2473 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
