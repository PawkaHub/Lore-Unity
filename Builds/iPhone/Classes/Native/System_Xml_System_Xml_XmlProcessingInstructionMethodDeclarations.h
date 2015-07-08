#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.XmlProcessingInstruction
struct XmlProcessingInstruction_t4123;
// System.String
struct String_t;
// System.Xml.XmlDocument
struct XmlDocument_t3997;
// System.Xml.XmlNode
struct XmlNode_t4081;
// System.Xml.XmlWriter
struct XmlWriter_t4008;
// System.Xml.XmlNodeType
#include "System_Xml_System_Xml_XmlNodeType.h"

// System.Void System.Xml.XmlProcessingInstruction::.ctor(System.String,System.String,System.Xml.XmlDocument)
extern "C" void XmlProcessingInstruction__ctor_m12808 (XmlProcessingInstruction_t4123 * __this, String_t* ___target, String_t* ___data, XmlDocument_t3997 * ___doc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlProcessingInstruction::get_Data()
extern "C" String_t* XmlProcessingInstruction_get_Data_m12809 (XmlProcessingInstruction_t4123 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlProcessingInstruction::get_InnerText()
extern "C" String_t* XmlProcessingInstruction_get_InnerText_m12810 (XmlProcessingInstruction_t4123 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlProcessingInstruction::get_LocalName()
extern "C" String_t* XmlProcessingInstruction_get_LocalName_m12811 (XmlProcessingInstruction_t4123 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlProcessingInstruction::get_Name()
extern "C" String_t* XmlProcessingInstruction_get_Name_m12812 (XmlProcessingInstruction_t4123 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNodeType System.Xml.XmlProcessingInstruction::get_NodeType()
extern "C" int32_t XmlProcessingInstruction_get_NodeType_m12813 (XmlProcessingInstruction_t4123 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlProcessingInstruction::get_Target()
extern "C" String_t* XmlProcessingInstruction_get_Target_m12814 (XmlProcessingInstruction_t4123 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlProcessingInstruction::get_Value()
extern "C" String_t* XmlProcessingInstruction_get_Value_m12815 (XmlProcessingInstruction_t4123 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlProcessingInstruction::set_Value(System.String)
extern "C" void XmlProcessingInstruction_set_Value_m12816 (XmlProcessingInstruction_t4123 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlProcessingInstruction::CloneNode(System.Boolean)
extern "C" XmlNode_t4081 * XmlProcessingInstruction_CloneNode_m12817 (XmlProcessingInstruction_t4123 * __this, bool ___deep, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlProcessingInstruction::WriteContentTo(System.Xml.XmlWriter)
extern "C" void XmlProcessingInstruction_WriteContentTo_m12818 (XmlProcessingInstruction_t4123 * __this, XmlWriter_t4008 * ___w, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlProcessingInstruction::WriteTo(System.Xml.XmlWriter)
extern "C" void XmlProcessingInstruction_WriteTo_m12819 (XmlProcessingInstruction_t4123 * __this, XmlWriter_t4008 * ___w, const MethodInfo* method) IL2CPP_METHOD_ATTR;
