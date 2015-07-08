#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.XmlEntityReference
struct XmlEntityReference_t4098;
// System.Xml.XmlLinkedNode
struct XmlLinkedNode_t4079;
// System.String
struct String_t;
// System.Xml.XmlEntity
struct XmlEntity_t4097;
// System.Xml.XmlDocument
struct XmlDocument_t3997;
// System.Xml.XmlNode
struct XmlNode_t4081;
// System.Xml.XmlWriter
struct XmlWriter_t4008;
// System.Xml.XmlNodeType
#include "System_Xml_System_Xml_XmlNodeType.h"

// System.Void System.Xml.XmlEntityReference::.ctor(System.String,System.Xml.XmlDocument)
extern "C" void XmlEntityReference__ctor_m12593 (XmlEntityReference_t4098 * __this, String_t* ___name, XmlDocument_t3997 * ___doc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlLinkedNode System.Xml.XmlEntityReference::System.Xml.IHasXmlChildNode.get_LastLinkedChild()
extern "C" XmlLinkedNode_t4079 * XmlEntityReference_System_Xml_IHasXmlChildNode_get_LastLinkedChild_m12594 (XmlEntityReference_t4098 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlEntityReference::System.Xml.IHasXmlChildNode.set_LastLinkedChild(System.Xml.XmlLinkedNode)
extern "C" void XmlEntityReference_System_Xml_IHasXmlChildNode_set_LastLinkedChild_m12595 (XmlEntityReference_t4098 * __this, XmlLinkedNode_t4079 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlEntityReference::get_BaseURI()
extern "C" String_t* XmlEntityReference_get_BaseURI_m12596 (XmlEntityReference_t4098 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlEntity System.Xml.XmlEntityReference::get_Entity()
extern "C" XmlEntity_t4097 * XmlEntityReference_get_Entity_m12597 (XmlEntityReference_t4098 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlEntityReference::get_ChildrenBaseURI()
extern "C" String_t* XmlEntityReference_get_ChildrenBaseURI_m12598 (XmlEntityReference_t4098 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlEntityReference::get_IsReadOnly()
extern "C" bool XmlEntityReference_get_IsReadOnly_m12599 (XmlEntityReference_t4098 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlEntityReference::get_LocalName()
extern "C" String_t* XmlEntityReference_get_LocalName_m12600 (XmlEntityReference_t4098 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlEntityReference::get_Name()
extern "C" String_t* XmlEntityReference_get_Name_m12601 (XmlEntityReference_t4098 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNodeType System.Xml.XmlEntityReference::get_NodeType()
extern "C" int32_t XmlEntityReference_get_NodeType_m12602 (XmlEntityReference_t4098 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlEntityReference::get_Value()
extern "C" String_t* XmlEntityReference_get_Value_m12603 (XmlEntityReference_t4098 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlEntityReference::set_Value(System.String)
extern "C" void XmlEntityReference_set_Value_m12604 (XmlEntityReference_t4098 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlEntityReference::CloneNode(System.Boolean)
extern "C" XmlNode_t4081 * XmlEntityReference_CloneNode_m12605 (XmlEntityReference_t4098 * __this, bool ___deep, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlEntityReference::WriteContentTo(System.Xml.XmlWriter)
extern "C" void XmlEntityReference_WriteContentTo_m12606 (XmlEntityReference_t4098 * __this, XmlWriter_t4008 * ___w, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlEntityReference::WriteTo(System.Xml.XmlWriter)
extern "C" void XmlEntityReference_WriteTo_m12607 (XmlEntityReference_t4098 * __this, XmlWriter_t4008 * ___w, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlEntityReference::SetReferencedEntityContent()
extern "C" void XmlEntityReference_SetReferencedEntityContent_m12608 (XmlEntityReference_t4098 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
