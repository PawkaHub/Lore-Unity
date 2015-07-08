#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.XmlReader
struct XmlReader_t3998;
// System.String
struct String_t;
// System.Xml.XmlReaderBinarySupport
struct XmlReaderBinarySupport_t4124;
// System.Xml.XmlNameTable
struct XmlNameTable_t3937;
// System.Xml.Schema.IXmlSchemaInfo
struct IXmlSchemaInfo_t4080;
// System.Xml.XmlReaderSettings
struct XmlReaderSettings_t4125;
// System.Xml.XmlException
struct XmlException_t4099;
// System.Xml.XmlNodeType
#include "System_Xml_System_Xml_XmlNodeType.h"
// System.Xml.ReadState
#include "System_Xml_System_Xml_ReadState.h"
// System.Xml.XmlSpace
#include "System_Xml_System_Xml_XmlSpace.h"

// System.Void System.Xml.XmlReader::.ctor()
extern "C" void XmlReader__ctor_m12831 (XmlReader_t3998 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlReader::System.IDisposable.Dispose()
extern "C" void XmlReader_System_IDisposable_Dispose_m12832 (XmlReader_t3998 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlReader::get_AttributeCount()
// System.String System.Xml.XmlReader::get_BaseURI()
// System.Xml.XmlReaderBinarySupport System.Xml.XmlReader::get_Binary()
extern "C" XmlReaderBinarySupport_t4124 * XmlReader_get_Binary_m12833 (XmlReader_t3998 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlReader::get_CanResolveEntity()
extern "C" bool XmlReader_get_CanResolveEntity_m12834 (XmlReader_t3998 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlReader::get_Depth()
// System.Boolean System.Xml.XmlReader::get_EOF()
// System.Boolean System.Xml.XmlReader::get_HasAttributes()
extern "C" bool XmlReader_get_HasAttributes_m12835 (XmlReader_t3998 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlReader::get_IsEmptyElement()
// System.Boolean System.Xml.XmlReader::get_IsDefault()
extern "C" bool XmlReader_get_IsDefault_m12836 (XmlReader_t3998 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlReader::get_Item(System.String)
extern "C" String_t* XmlReader_get_Item_m12837 (XmlReader_t3998 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlReader::get_LocalName()
// System.String System.Xml.XmlReader::get_Name()
extern "C" String_t* XmlReader_get_Name_m12838 (XmlReader_t3998 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlReader::get_NamespaceURI()
// System.Xml.XmlNameTable System.Xml.XmlReader::get_NameTable()
// System.Xml.XmlNodeType System.Xml.XmlReader::get_NodeType()
// System.String System.Xml.XmlReader::get_Prefix()
// System.Xml.ReadState System.Xml.XmlReader::get_ReadState()
// System.Xml.Schema.IXmlSchemaInfo System.Xml.XmlReader::get_SchemaInfo()
extern "C" Object_t * XmlReader_get_SchemaInfo_m12839 (XmlReader_t3998 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlReaderSettings System.Xml.XmlReader::get_Settings()
extern "C" XmlReaderSettings_t4125 * XmlReader_get_Settings_m12840 (XmlReader_t3998 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlReader::get_Value()
// System.Xml.XmlSpace System.Xml.XmlReader::get_XmlSpace()
extern "C" int32_t XmlReader_get_XmlSpace_m12841 (XmlReader_t3998 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlReader::Close()
// System.Void System.Xml.XmlReader::Dispose(System.Boolean)
extern "C" void XmlReader_Dispose_m12842 (XmlReader_t3998 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlReader::GetAttribute(System.String)
// System.String System.Xml.XmlReader::GetAttribute(System.String,System.String)
// System.Boolean System.Xml.XmlReader::IsStartElement()
extern "C" bool XmlReader_IsStartElement_m12843 (XmlReader_t3998 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlReader::IsStartElement(System.String,System.String)
extern "C" bool XmlReader_IsStartElement_m12844 (XmlReader_t3998 * __this, String_t* ___localName, String_t* ___namespaceName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlReader::LookupNamespace(System.String)
// System.Void System.Xml.XmlReader::MoveToAttribute(System.Int32)
extern "C" void XmlReader_MoveToAttribute_m12845 (XmlReader_t3998 * __this, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlReader::MoveToAttribute(System.String,System.String)
// System.Boolean System.Xml.XmlReader::IsContent(System.Xml.XmlNodeType)
extern "C" bool XmlReader_IsContent_m12846 (XmlReader_t3998 * __this, int32_t ___nodeType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNodeType System.Xml.XmlReader::MoveToContent()
extern "C" int32_t XmlReader_MoveToContent_m12847 (XmlReader_t3998 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlReader::MoveToElement()
// System.Boolean System.Xml.XmlReader::MoveToFirstAttribute()
// System.Boolean System.Xml.XmlReader::MoveToNextAttribute()
// System.Boolean System.Xml.XmlReader::Read()
// System.Boolean System.Xml.XmlReader::ReadAttributeValue()
// System.String System.Xml.XmlReader::ReadElementString()
extern "C" String_t* XmlReader_ReadElementString_m12848 (XmlReader_t3998 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlReader::ReadEndElement()
extern "C" void XmlReader_ReadEndElement_m12849 (XmlReader_t3998 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlReader::ReadOuterXml()
extern "C" String_t* XmlReader_ReadOuterXml_m12850 (XmlReader_t3998 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlReader::ReadStartElement()
extern "C" void XmlReader_ReadStartElement_m12851 (XmlReader_t3998 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlReader::ReadString()
extern "C" String_t* XmlReader_ReadString_m12852 (XmlReader_t3998 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlReader::ResolveEntity()
// System.Void System.Xml.XmlReader::Skip()
extern "C" void XmlReader_Skip_m12853 (XmlReader_t3998 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlException System.Xml.XmlReader::XmlError(System.String)
extern "C" XmlException_t4099 * XmlReader_XmlError_m12854 (XmlReader_t3998 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
