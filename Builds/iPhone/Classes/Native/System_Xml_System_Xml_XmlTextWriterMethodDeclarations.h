﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.XmlTextWriter
struct XmlTextWriter_t4148;
// System.String
struct String_t;
// System.IO.TextWriter
struct TextWriter_t3796;
// System.Char[]
struct CharU5BU5D_t583;
// System.Exception
struct Exception_t496;
// System.Xml.Formatting
#include "System_Xml_System_Xml_Formatting.h"
// System.Xml.XmlSpace
#include "System_Xml_System_Xml_XmlSpace.h"
// System.Xml.WriteState
#include "System_Xml_System_Xml_WriteState.h"

// System.Void System.Xml.XmlTextWriter::.ctor(System.IO.TextWriter)
extern "C" void XmlTextWriter__ctor_m13074 (XmlTextWriter_t4148 * __this, TextWriter_t3796 * ___writer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextWriter::.cctor()
extern "C" void XmlTextWriter__cctor_m13075 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextWriter::Initialize(System.IO.TextWriter)
extern "C" void XmlTextWriter_Initialize_m13076 (XmlTextWriter_t4148 * __this, TextWriter_t3796 * ___writer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextWriter::set_Formatting(System.Xml.Formatting)
extern "C" void XmlTextWriter_set_Formatting_m13077 (XmlTextWriter_t4148 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlTextWriter::get_XmlLang()
extern "C" String_t* XmlTextWriter_get_XmlLang_m13078 (XmlTextWriter_t4148 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlSpace System.Xml.XmlTextWriter::get_XmlSpace()
extern "C" int32_t XmlTextWriter_get_XmlSpace_m13079 (XmlTextWriter_t4148 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.WriteState System.Xml.XmlTextWriter::get_WriteState()
extern "C" int32_t XmlTextWriter_get_WriteState_m13080 (XmlTextWriter_t4148 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlTextWriter::LookupPrefix(System.String)
extern "C" String_t* XmlTextWriter_LookupPrefix_m13081 (XmlTextWriter_t4148 * __this, String_t* ___namespaceUri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextWriter::Close()
extern "C" void XmlTextWriter_Close_m13082 (XmlTextWriter_t4148 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextWriter::Flush()
extern "C" void XmlTextWriter_Flush_m13083 (XmlTextWriter_t4148 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextWriter::WriteStartDocument()
extern "C" void XmlTextWriter_WriteStartDocument_m13084 (XmlTextWriter_t4148 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextWriter::WriteStartDocumentCore(System.Boolean,System.Boolean)
extern "C" void XmlTextWriter_WriteStartDocumentCore_m13085 (XmlTextWriter_t4148 * __this, bool ___outputStd, bool ___standalone, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextWriter::WriteDocType(System.String,System.String,System.String,System.String)
extern "C" void XmlTextWriter_WriteDocType_m13086 (XmlTextWriter_t4148 * __this, String_t* ___name, String_t* ___pubid, String_t* ___sysid, String_t* ___subset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextWriter::WriteStartElement(System.String,System.String,System.String)
extern "C" void XmlTextWriter_WriteStartElement_m13087 (XmlTextWriter_t4148 * __this, String_t* ___prefix, String_t* ___localName, String_t* ___namespaceUri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextWriter::CloseStartElement()
extern "C" void XmlTextWriter_CloseStartElement_m13088 (XmlTextWriter_t4148 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextWriter::CloseStartElementCore()
extern "C" void XmlTextWriter_CloseStartElementCore_m13089 (XmlTextWriter_t4148 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextWriter::WriteEndElement()
extern "C" void XmlTextWriter_WriteEndElement_m13090 (XmlTextWriter_t4148 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextWriter::WriteFullEndElement()
extern "C" void XmlTextWriter_WriteFullEndElement_m13091 (XmlTextWriter_t4148 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextWriter::WriteEndElementCore(System.Boolean)
extern "C" void XmlTextWriter_WriteEndElementCore_m13092 (XmlTextWriter_t4148 * __this, bool ___full, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextWriter::WriteStartAttribute(System.String,System.String,System.String)
extern "C" void XmlTextWriter_WriteStartAttribute_m13093 (XmlTextWriter_t4148 * __this, String_t* ___prefix, String_t* ___localName, String_t* ___namespaceUri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlTextWriter::DetermineAttributePrefix(System.String,System.String,System.String)
extern "C" String_t* XmlTextWriter_DetermineAttributePrefix_m13094 (XmlTextWriter_t4148 * __this, String_t* ___prefix, String_t* ___local, String_t* ___ns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlTextWriter::MockupPrefix(System.String,System.Boolean)
extern "C" String_t* XmlTextWriter_MockupPrefix_m13095 (XmlTextWriter_t4148 * __this, String_t* ___ns, bool ___skipLookup, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextWriter::WriteEndAttribute()
extern "C" void XmlTextWriter_WriteEndAttribute_m13096 (XmlTextWriter_t4148 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextWriter::WriteComment(System.String)
extern "C" void XmlTextWriter_WriteComment_m13097 (XmlTextWriter_t4148 * __this, String_t* ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextWriter::WriteProcessingInstruction(System.String,System.String)
extern "C" void XmlTextWriter_WriteProcessingInstruction_m13098 (XmlTextWriter_t4148 * __this, String_t* ___name, String_t* ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextWriter::WriteWhitespace(System.String)
extern "C" void XmlTextWriter_WriteWhitespace_m13099 (XmlTextWriter_t4148 * __this, String_t* ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextWriter::WriteCData(System.String)
extern "C" void XmlTextWriter_WriteCData_m13100 (XmlTextWriter_t4148 * __this, String_t* ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextWriter::WriteString(System.String)
extern "C" void XmlTextWriter_WriteString_m13101 (XmlTextWriter_t4148 * __this, String_t* ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextWriter::WriteRaw(System.String)
extern "C" void XmlTextWriter_WriteRaw_m13102 (XmlTextWriter_t4148 * __this, String_t* ___raw, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextWriter::WriteEntityRef(System.String)
extern "C" void XmlTextWriter_WriteEntityRef_m13103 (XmlTextWriter_t4148 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextWriter::WriteName(System.String)
extern "C" void XmlTextWriter_WriteName_m13104 (XmlTextWriter_t4148 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextWriter::WriteIndent()
extern "C" void XmlTextWriter_WriteIndent_m13105 (XmlTextWriter_t4148 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextWriter::WriteIndentEndElement()
extern "C" void XmlTextWriter_WriteIndentEndElement_m13106 (XmlTextWriter_t4148 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextWriter::WriteIndentAttribute()
extern "C" void XmlTextWriter_WriteIndentAttribute_m13107 (XmlTextWriter_t4148 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlTextWriter::WriteIndentCore(System.Int32,System.Boolean)
extern "C" bool XmlTextWriter_WriteIndentCore_m13108 (XmlTextWriter_t4148 * __this, int32_t ___nestFix, bool ___attribute, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextWriter::OutputAutoStartDocument()
extern "C" void XmlTextWriter_OutputAutoStartDocument_m13109 (XmlTextWriter_t4148 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextWriter::ShiftStateTopLevel(System.String,System.Boolean,System.Boolean,System.Boolean)
extern "C" void XmlTextWriter_ShiftStateTopLevel_m13110 (XmlTextWriter_t4148 * __this, String_t* ___occured, bool ___allowAttribute, bool ___dontCheckXmlDecl, bool ___isCharacter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextWriter::CheckMixedContentState()
extern "C" void XmlTextWriter_CheckMixedContentState_m13111 (XmlTextWriter_t4148 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextWriter::ShiftStateContent(System.String,System.Boolean)
extern "C" void XmlTextWriter_ShiftStateContent_m13112 (XmlTextWriter_t4148 * __this, String_t* ___occured, bool ___allowAttribute, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextWriter::WriteEscapedString(System.String,System.Boolean)
extern "C" void XmlTextWriter_WriteEscapedString_m13113 (XmlTextWriter_t4148 * __this, String_t* ___text, bool ___isAttribute, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextWriter::WriteCheckedString(System.String)
extern "C" void XmlTextWriter_WriteCheckedString_m13114 (XmlTextWriter_t4148 * __this, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextWriter::WriteCheckedBuffer(System.Char[],System.Int32,System.Int32)
extern "C" void XmlTextWriter_WriteCheckedBuffer_m13115 (XmlTextWriter_t4148 * __this, CharU5BU5D_t583* ___text, int32_t ___idx, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextWriter::WriteEscapedBuffer(System.Char[],System.Int32,System.Int32,System.Boolean)
extern "C" void XmlTextWriter_WriteEscapedBuffer_m13116 (XmlTextWriter_t4148 * __this, CharU5BU5D_t583* ___text, int32_t ___index, int32_t ___length, bool ___isAttribute, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Xml.XmlTextWriter::ArgumentError(System.String)
extern "C" Exception_t496 * XmlTextWriter_ArgumentError_m13117 (XmlTextWriter_t4148 * __this, String_t* ___msg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Xml.XmlTextWriter::InvalidOperation(System.String)
extern "C" Exception_t496 * XmlTextWriter_InvalidOperation_m13118 (XmlTextWriter_t4148 * __this, String_t* ___msg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Xml.XmlTextWriter::StateError(System.String)
extern "C" Exception_t496 * XmlTextWriter_StateError_m13119 (XmlTextWriter_t4148 * __this, String_t* ___occured, const MethodInfo* method) IL2CPP_METHOD_ATTR;
