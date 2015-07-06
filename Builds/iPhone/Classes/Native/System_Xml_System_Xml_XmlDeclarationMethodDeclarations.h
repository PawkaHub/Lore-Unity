#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.XmlDeclaration
struct XmlDeclaration_t3853;
// System.String
struct String_t;
// System.Xml.XmlDocument
struct XmlDocument_t3759;
// System.Xml.XmlNode
struct XmlNode_t3843;
// System.Xml.XmlWriter
struct XmlWriter_t3770;
// System.Xml.XmlNodeType
#include "System_Xml_System_Xml_XmlNodeType.h"

// System.Void System.Xml.XmlDeclaration::.ctor(System.String,System.String,System.String,System.Xml.XmlDocument)
extern "C" void XmlDeclaration__ctor_m12034 (XmlDeclaration_t3853 * __this, String_t* ___version, String_t* ___encoding, String_t* ___standalone, XmlDocument_t3759 * ___doc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlDeclaration::get_Encoding()
extern "C" String_t* XmlDeclaration_get_Encoding_m12035 (XmlDeclaration_t3853 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDeclaration::set_Encoding(System.String)
extern "C" void XmlDeclaration_set_Encoding_m12036 (XmlDeclaration_t3853 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlDeclaration::get_InnerText()
extern "C" String_t* XmlDeclaration_get_InnerText_m12037 (XmlDeclaration_t3853 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlDeclaration::get_LocalName()
extern "C" String_t* XmlDeclaration_get_LocalName_m12038 (XmlDeclaration_t3853 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlDeclaration::get_Name()
extern "C" String_t* XmlDeclaration_get_Name_m12039 (XmlDeclaration_t3853 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNodeType System.Xml.XmlDeclaration::get_NodeType()
extern "C" int32_t XmlDeclaration_get_NodeType_m12040 (XmlDeclaration_t3853 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlDeclaration::get_Standalone()
extern "C" String_t* XmlDeclaration_get_Standalone_m12041 (XmlDeclaration_t3853 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDeclaration::set_Standalone(System.String)
extern "C" void XmlDeclaration_set_Standalone_m12042 (XmlDeclaration_t3853 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlDeclaration::get_Value()
extern "C" String_t* XmlDeclaration_get_Value_m12043 (XmlDeclaration_t3853 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDeclaration::set_Value(System.String)
extern "C" void XmlDeclaration_set_Value_m12044 (XmlDeclaration_t3853 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlDeclaration::get_Version()
extern "C" String_t* XmlDeclaration_get_Version_m12045 (XmlDeclaration_t3853 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNode System.Xml.XmlDeclaration::CloneNode(System.Boolean)
extern "C" XmlNode_t3843 * XmlDeclaration_CloneNode_m12046 (XmlDeclaration_t3853 * __this, bool ___deep, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDeclaration::WriteContentTo(System.Xml.XmlWriter)
extern "C" void XmlDeclaration_WriteContentTo_m12047 (XmlDeclaration_t3853 * __this, XmlWriter_t3770 * ___w, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDeclaration::WriteTo(System.Xml.XmlWriter)
extern "C" void XmlDeclaration_WriteTo_m12048 (XmlDeclaration_t3853 * __this, XmlWriter_t3770 * ___w, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlDeclaration::SkipWhitespace(System.String,System.Int32)
extern "C" int32_t XmlDeclaration_SkipWhitespace_m12049 (XmlDeclaration_t3853 * __this, String_t* ___input, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlDeclaration::ParseInput(System.String)
extern "C" void XmlDeclaration_ParseInput_m12050 (XmlDeclaration_t3853 * __this, String_t* ___input, const MethodInfo* method) IL2CPP_METHOD_ATTR;
