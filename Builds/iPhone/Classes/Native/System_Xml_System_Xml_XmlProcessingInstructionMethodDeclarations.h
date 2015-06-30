#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.XmlProcessingInstruction
struct XmlProcessingInstruction_t2499;
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

// System.Void System.Xml.XmlProcessingInstruction::.ctor(System.String,System.String,System.Xml.XmlDocument)
extern "C" void XmlProcessingInstruction__ctor_m11103 (XmlProcessingInstruction_t2499 * __this, String_t* ___target, String_t* ___data, XmlDocument_t2373 * ___doc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlProcessingInstruction::get_Data()
extern "C" String_t* XmlProcessingInstruction_get_Data_m11104 (XmlProcessingInstruction_t2499 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlProcessingInstruction::get_InnerText()
extern "C" String_t* XmlProcessingInstruction_get_InnerText_m11105 (XmlProcessingInstruction_t2499 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlProcessingInstruction::get_LocalName()
extern "C" String_t* XmlProcessingInstruction_get_LocalName_m11106 (XmlProcessingInstruction_t2499 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlProcessingInstruction::get_Name()
extern "C" String_t* XmlProcessingInstruction_get_Name_m11107 (XmlProcessingInstruction_t2499 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNodeType System.Xml.XmlProcessingInstruction::get_NodeType()
extern "C" int32_t XmlProcessingInstruction_get_NodeType_m11108 (XmlProcessingInstruction_t2499 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlProcessingInstruction::get_Target()
extern "C" String_t* XmlProcessingInstruction_get_Target_m11109 (XmlProcessingInstruction_t2499 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlProcessingInstruction::get_Value()
extern "C" String_t* XmlProcessingInstruction_get_Value_m11110 (XmlProcessingInstruction_t2499 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlProcessingInstruction::set_Value(System.String)
extern "C" void XmlProcessingInstruction_set_Value_m11111 (XmlProcessingInstruction_t2499 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlProcessingInstruction::CloneNode(System.Boolean)
extern "C" XmlNode_t2457 * XmlProcessingInstruction_CloneNode_m11112 (XmlProcessingInstruction_t2499 * __this, bool ___deep, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlProcessingInstruction::WriteContentTo(System.Xml.XmlWriter)
extern "C" void XmlProcessingInstruction_WriteContentTo_m11113 (XmlProcessingInstruction_t2499 * __this, XmlWriter_t2384 * ___w, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlProcessingInstruction::WriteTo(System.Xml.XmlWriter)
extern "C" void XmlProcessingInstruction_WriteTo_m11114 (XmlProcessingInstruction_t2499 * __this, XmlWriter_t2384 * ___w, const MethodInfo* method) IL2CPP_METHOD_ATTR;
