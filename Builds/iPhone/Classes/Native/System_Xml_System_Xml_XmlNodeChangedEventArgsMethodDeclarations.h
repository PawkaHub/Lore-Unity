#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.XmlNodeChangedEventArgs
struct XmlNodeChangedEventArgs_t2490;
// System.Xml.XmlNode
struct XmlNode_t2457;
// System.String
struct String_t;
// System.Xml.XmlNodeChangedAction
#include "System_Xml_System_Xml_XmlNodeChangedAction.h"

// System.Void System.Xml.XmlNodeChangedEventArgs::.ctor(System.Xml.XmlNode,System.Xml.XmlNode,System.Xml.XmlNode,System.String,System.String,System.Xml.XmlNodeChangedAction)
extern "C" void XmlNodeChangedEventArgs__ctor_m11045 (XmlNodeChangedEventArgs_t2490 * __this, XmlNode_t2457 * ___node, XmlNode_t2457 * ___oldParent, XmlNode_t2457 * ___newParent, String_t* ___oldValue, String_t* ___newValue, int32_t ___action, const MethodInfo* method) IL2CPP_METHOD_ATTR;
