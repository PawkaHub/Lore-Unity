﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.XmlEntity
struct XmlEntity_t2472;
// System.Xml.XmlLinkedNode
struct XmlLinkedNode_t2455;
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

// System.Void System.Xml.XmlEntity::.ctor(System.String,System.String,System.String,System.String,System.Xml.XmlDocument)
extern "C" void XmlEntity__ctor_m10875 (XmlEntity_t2472 * __this, String_t* ___name, String_t* ___NDATA, String_t* ___publicId, String_t* ___systemId, XmlDocument_t2373 * ___doc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlLinkedNode System.Xml.XmlEntity::System.Xml.IHasXmlChildNode.get_LastLinkedChild()
extern "C" XmlLinkedNode_t2455 * XmlEntity_System_Xml_IHasXmlChildNode_get_LastLinkedChild_m10876 (XmlEntity_t2472 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlEntity::System.Xml.IHasXmlChildNode.set_LastLinkedChild(System.Xml.XmlLinkedNode)
extern "C" void XmlEntity_System_Xml_IHasXmlChildNode_set_LastLinkedChild_m10877 (XmlEntity_t2472 * __this, XmlLinkedNode_t2455 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlEntity::get_BaseURI()
extern "C" String_t* XmlEntity_get_BaseURI_m10878 (XmlEntity_t2472 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlEntity::get_InnerText()
extern "C" String_t* XmlEntity_get_InnerText_m10879 (XmlEntity_t2472 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlEntity::get_IsReadOnly()
extern "C" bool XmlEntity_get_IsReadOnly_m10880 (XmlEntity_t2472 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlEntity::get_LocalName()
extern "C" String_t* XmlEntity_get_LocalName_m10881 (XmlEntity_t2472 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlEntity::get_Name()
extern "C" String_t* XmlEntity_get_Name_m10882 (XmlEntity_t2472 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNodeType System.Xml.XmlEntity::get_NodeType()
extern "C" int32_t XmlEntity_get_NodeType_m10883 (XmlEntity_t2472 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlEntity::get_SystemId()
extern "C" String_t* XmlEntity_get_SystemId_m10884 (XmlEntity_t2472 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlEntity::CloneNode(System.Boolean)
extern "C" XmlNode_t2457 * XmlEntity_CloneNode_m10885 (XmlEntity_t2472 * __this, bool ___deep, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlEntity::WriteContentTo(System.Xml.XmlWriter)
extern "C" void XmlEntity_WriteContentTo_m10886 (XmlEntity_t2472 * __this, XmlWriter_t2384 * ___w, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlEntity::WriteTo(System.Xml.XmlWriter)
extern "C" void XmlEntity_WriteTo_m10887 (XmlEntity_t2472 * __this, XmlWriter_t2384 * ___w, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlEntity::SetEntityContent()
extern "C" void XmlEntity_SetEntityContent_m10888 (XmlEntity_t2472 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;