#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.XmlLinkedNode
struct XmlLinkedNode_t4079;
// System.Xml.XmlNode
struct XmlNode_t4081;
// System.Xml.XmlDocument
struct XmlDocument_t3997;

// System.Void System.Xml.XmlLinkedNode::.ctor(System.Xml.XmlDocument)
extern "C" void XmlLinkedNode__ctor_m12660 (XmlLinkedNode_t4079 * __this, XmlDocument_t3997 * ___doc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlLinkedNode::get_IsRooted()
extern "C" bool XmlLinkedNode_get_IsRooted_m12661 (XmlLinkedNode_t4079 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlLinkedNode::get_NextSibling()
extern "C" XmlNode_t4081 * XmlLinkedNode_get_NextSibling_m12662 (XmlLinkedNode_t4079 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlLinkedNode System.Xml.XmlLinkedNode::get_NextLinkedSibling()
extern "C" XmlLinkedNode_t4079 * XmlLinkedNode_get_NextLinkedSibling_m12663 (XmlLinkedNode_t4079 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlLinkedNode::set_NextLinkedSibling(System.Xml.XmlLinkedNode)
extern "C" void XmlLinkedNode_set_NextLinkedSibling_m12664 (XmlLinkedNode_t4079 * __this, XmlLinkedNode_t4079 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlLinkedNode::get_PreviousSibling()
extern "C" XmlNode_t4081 * XmlLinkedNode_get_PreviousSibling_m12665 (XmlLinkedNode_t4079 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
