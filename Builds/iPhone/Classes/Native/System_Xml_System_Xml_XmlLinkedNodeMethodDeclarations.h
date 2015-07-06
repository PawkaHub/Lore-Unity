#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.XmlLinkedNode
struct XmlLinkedNode_t3841;
// System.Xml.XmlNode
struct XmlNode_t3843;
// System.Xml.XmlDocument
struct XmlDocument_t3759;

// System.Void System.Xml.XmlLinkedNode::.ctor(System.Xml.XmlDocument)
extern "C" void XmlLinkedNode__ctor_m12241 (XmlLinkedNode_t3841 * __this, XmlDocument_t3759 * ___doc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlLinkedNode::get_IsRooted()
extern "C" bool XmlLinkedNode_get_IsRooted_m12242 (XmlLinkedNode_t3841 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlLinkedNode::get_NextSibling()
extern "C" XmlNode_t3843 * XmlLinkedNode_get_NextSibling_m12243 (XmlLinkedNode_t3841 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlLinkedNode System.Xml.XmlLinkedNode::get_NextLinkedSibling()
extern "C" XmlLinkedNode_t3841 * XmlLinkedNode_get_NextLinkedSibling_m12244 (XmlLinkedNode_t3841 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlLinkedNode::set_NextLinkedSibling(System.Xml.XmlLinkedNode)
extern "C" void XmlLinkedNode_set_NextLinkedSibling_m12245 (XmlLinkedNode_t3841 * __this, XmlLinkedNode_t3841 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlLinkedNode::get_PreviousSibling()
extern "C" XmlNode_t3843 * XmlLinkedNode_get_PreviousSibling_m12246 (XmlLinkedNode_t3841 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
