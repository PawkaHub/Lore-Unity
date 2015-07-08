#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.XmlWriter
struct XmlWriter_t4008;
// System.Xml.XmlWriterSettings
struct XmlWriterSettings_t4153;
// System.String
struct String_t;
// System.Xml.XmlReader
struct XmlReader_t3998;
// System.Xml.WriteState
#include "System_Xml_System_Xml_WriteState.h"
// System.Xml.XmlSpace
#include "System_Xml_System_Xml_XmlSpace.h"

// System.Void System.Xml.XmlWriter::.ctor()
extern "C" void XmlWriter__ctor_m13134 (XmlWriter_t4008 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlWriter::System.IDisposable.Dispose()
extern "C" void XmlWriter_System_IDisposable_Dispose_m13135 (XmlWriter_t4008 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlWriterSettings System.Xml.XmlWriter::get_Settings()
extern "C" XmlWriterSettings_t4153 * XmlWriter_get_Settings_m13136 (XmlWriter_t4008 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.WriteState System.Xml.XmlWriter::get_WriteState()
// System.String System.Xml.XmlWriter::get_XmlLang()
extern "C" String_t* XmlWriter_get_XmlLang_m13137 (XmlWriter_t4008 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlSpace System.Xml.XmlWriter::get_XmlSpace()
extern "C" int32_t XmlWriter_get_XmlSpace_m13138 (XmlWriter_t4008 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlWriter::Close()
// System.Void System.Xml.XmlWriter::Dispose(System.Boolean)
extern "C" void XmlWriter_Dispose_m13139 (XmlWriter_t4008 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlWriter::Flush()
// System.String System.Xml.XmlWriter::LookupPrefix(System.String)
// System.Void System.Xml.XmlWriter::WriteAttribute(System.Xml.XmlReader,System.Boolean)
extern "C" void XmlWriter_WriteAttribute_m13140 (XmlWriter_t4008 * __this, XmlReader_t3998 * ___reader, bool ___defattr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlWriter::WriteAttributeString(System.String,System.String)
extern "C" void XmlWriter_WriteAttributeString_m13141 (XmlWriter_t4008 * __this, String_t* ___localName, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlWriter::WriteAttributeString(System.String,System.String,System.String)
extern "C" void XmlWriter_WriteAttributeString_m13142 (XmlWriter_t4008 * __this, String_t* ___localName, String_t* ___ns, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlWriter::WriteAttributeString(System.String,System.String,System.String,System.String)
extern "C" void XmlWriter_WriteAttributeString_m13143 (XmlWriter_t4008 * __this, String_t* ___prefix, String_t* ___localName, String_t* ___ns, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlWriter::WriteCData(System.String)
// System.Void System.Xml.XmlWriter::WriteComment(System.String)
// System.Void System.Xml.XmlWriter::WriteDocType(System.String,System.String,System.String,System.String)
// System.Void System.Xml.XmlWriter::WriteElementString(System.String,System.String,System.String)
extern "C" void XmlWriter_WriteElementString_m13144 (XmlWriter_t4008 * __this, String_t* ___localName, String_t* ___ns, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlWriter::WriteEndAttribute()
// System.Void System.Xml.XmlWriter::WriteEndElement()
// System.Void System.Xml.XmlWriter::WriteEntityRef(System.String)
// System.Void System.Xml.XmlWriter::WriteFullEndElement()
// System.Void System.Xml.XmlWriter::WriteName(System.String)
extern "C" void XmlWriter_WriteName_m13145 (XmlWriter_t4008 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlWriter::WriteNameInternal(System.String)
extern "C" void XmlWriter_WriteNameInternal_m13146 (XmlWriter_t4008 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlWriter::WriteNode(System.Xml.XmlReader,System.Boolean)
extern "C" void XmlWriter_WriteNode_m13147 (XmlWriter_t4008 * __this, XmlReader_t3998 * ___reader, bool ___defattr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlWriter::WriteProcessingInstruction(System.String,System.String)
// System.Void System.Xml.XmlWriter::WriteRaw(System.String)
// System.Void System.Xml.XmlWriter::WriteStartAttribute(System.String,System.String,System.String)
// System.Void System.Xml.XmlWriter::WriteStartDocument()
// System.Void System.Xml.XmlWriter::WriteStartElement(System.String,System.String)
extern "C" void XmlWriter_WriteStartElement_m13148 (XmlWriter_t4008 * __this, String_t* ___localName, String_t* ___ns, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlWriter::WriteStartElement(System.String,System.String,System.String)
// System.Void System.Xml.XmlWriter::WriteString(System.String)
// System.Void System.Xml.XmlWriter::WriteWhitespace(System.String)
