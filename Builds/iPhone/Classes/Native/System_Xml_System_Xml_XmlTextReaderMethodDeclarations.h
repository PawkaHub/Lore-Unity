#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.XmlTextReader
struct XmlTextReader_t4140;
// System.Xml.XmlParserContext
struct XmlParserContext_t4121;
// System.Xml.XmlReader
struct XmlReader_t3998;
// System.String
struct String_t;
// System.Xml.XmlNameTable
struct XmlNameTable_t3937;
// System.Xml.XmlReaderSettings
struct XmlReaderSettings_t4125;
// System.Xml.XmlResolver
struct XmlResolver_t3938;
// System.IO.TextReader
struct TextReader_t3795;
// Mono.Xml2.XmlTextReader
struct XmlTextReader_t4131;
// System.Xml.XmlNodeType
#include "System_Xml_System_Xml_XmlNodeType.h"
// System.Xml.ReadState
#include "System_Xml_System_Xml_ReadState.h"
// System.Xml.XmlSpace
#include "System_Xml_System_Xml_XmlSpace.h"
// System.Xml.ConformanceLevel
#include "System_Xml_System_Xml_ConformanceLevel.h"
// System.Xml.EntityHandling
#include "System_Xml_System_Xml_EntityHandling.h"
// System.Xml.WhitespaceHandling
#include "System_Xml_System_Xml_WhitespaceHandling.h"

// System.Void System.Xml.XmlTextReader::.ctor(System.IO.TextReader)
extern "C" void XmlTextReader__ctor_m13014 (XmlTextReader_t4140 * __this, TextReader_t3795 * ___input, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextReader::.ctor(System.IO.TextReader,System.Xml.XmlNameTable)
extern "C" void XmlTextReader__ctor_m13015 (XmlTextReader_t4140 * __this, TextReader_t3795 * ___input, XmlNameTable_t3937 * ___nt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextReader::.ctor(System.String,System.IO.TextReader,System.Xml.XmlNameTable)
extern "C" void XmlTextReader__ctor_m13016 (XmlTextReader_t4140 * __this, String_t* ___url, TextReader_t3795 * ___input, XmlNameTable_t3937 * ___nt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextReader::.ctor(System.String,System.Xml.XmlNodeType,System.Xml.XmlParserContext)
extern "C" void XmlTextReader__ctor_m13017 (XmlTextReader_t4140 * __this, String_t* ___xmlFragment, int32_t ___fragType, XmlParserContext_t4121 * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextReader::.ctor(Mono.Xml2.XmlTextReader,System.Boolean)
extern "C" void XmlTextReader__ctor_m13018 (XmlTextReader_t4140 * __this, XmlTextReader_t4131 * ___entityContainer, bool ___insideAttribute, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlParserContext System.Xml.XmlTextReader::Mono.Xml.IHasXmlParserContext.get_ParserContext()
extern "C" XmlParserContext_t4121 * XmlTextReader_Mono_Xml_IHasXmlParserContext_get_ParserContext_m13019 (XmlTextReader_t4140 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlReader System.Xml.XmlTextReader::get_Current()
extern "C" XmlReader_t3998 * XmlTextReader_get_Current_m13020 (XmlTextReader_t4140 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlTextReader::get_AttributeCount()
extern "C" int32_t XmlTextReader_get_AttributeCount_m13021 (XmlTextReader_t4140 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlTextReader::get_BaseURI()
extern "C" String_t* XmlTextReader_get_BaseURI_m13022 (XmlTextReader_t4140 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlTextReader::get_CanResolveEntity()
extern "C" bool XmlTextReader_get_CanResolveEntity_m13023 (XmlTextReader_t4140 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlTextReader::get_Depth()
extern "C" int32_t XmlTextReader_get_Depth_m13024 (XmlTextReader_t4140 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlTextReader::get_EOF()
extern "C" bool XmlTextReader_get_EOF_m13025 (XmlTextReader_t4140 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlTextReader::get_IsDefault()
extern "C" bool XmlTextReader_get_IsDefault_m13026 (XmlTextReader_t4140 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlTextReader::get_IsEmptyElement()
extern "C" bool XmlTextReader_get_IsEmptyElement_m13027 (XmlTextReader_t4140 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlTextReader::get_LocalName()
extern "C" String_t* XmlTextReader_get_LocalName_m13028 (XmlTextReader_t4140 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlTextReader::get_Name()
extern "C" String_t* XmlTextReader_get_Name_m13029 (XmlTextReader_t4140 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlTextReader::get_NamespaceURI()
extern "C" String_t* XmlTextReader_get_NamespaceURI_m13030 (XmlTextReader_t4140 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNameTable System.Xml.XmlTextReader::get_NameTable()
extern "C" XmlNameTable_t3937 * XmlTextReader_get_NameTable_m13031 (XmlTextReader_t4140 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNodeType System.Xml.XmlTextReader::get_NodeType()
extern "C" int32_t XmlTextReader_get_NodeType_m13032 (XmlTextReader_t4140 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlParserContext System.Xml.XmlTextReader::get_ParserContext()
extern "C" XmlParserContext_t4121 * XmlTextReader_get_ParserContext_m13033 (XmlTextReader_t4140 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlTextReader::get_Prefix()
extern "C" String_t* XmlTextReader_get_Prefix_m13034 (XmlTextReader_t4140 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.ReadState System.Xml.XmlTextReader::get_ReadState()
extern "C" int32_t XmlTextReader_get_ReadState_m13035 (XmlTextReader_t4140 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlReaderSettings System.Xml.XmlTextReader::get_Settings()
extern "C" XmlReaderSettings_t4125 * XmlTextReader_get_Settings_m13036 (XmlTextReader_t4140 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlTextReader::get_Value()
extern "C" String_t* XmlTextReader_get_Value_m13037 (XmlTextReader_t4140 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlSpace System.Xml.XmlTextReader::get_XmlSpace()
extern "C" int32_t XmlTextReader_get_XmlSpace_m13038 (XmlTextReader_t4140 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlTextReader::get_CharacterChecking()
extern "C" bool XmlTextReader_get_CharacterChecking_m13039 (XmlTextReader_t4140 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextReader::set_CharacterChecking(System.Boolean)
extern "C" void XmlTextReader_set_CharacterChecking_m13040 (XmlTextReader_t4140 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlTextReader::get_CloseInput()
extern "C" bool XmlTextReader_get_CloseInput_m13041 (XmlTextReader_t4140 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextReader::set_CloseInput(System.Boolean)
extern "C" void XmlTextReader_set_CloseInput_m13042 (XmlTextReader_t4140 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextReader::set_Conformance(System.Xml.ConformanceLevel)
extern "C" void XmlTextReader_set_Conformance_m13043 (XmlTextReader_t4140 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlResolver System.Xml.XmlTextReader::get_Resolver()
extern "C" XmlResolver_t3938 * XmlTextReader_get_Resolver_m13044 (XmlTextReader_t4140 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextReader::CopyProperties(System.Xml.XmlTextReader)
extern "C" void XmlTextReader_CopyProperties_m13045 (XmlTextReader_t4140 * __this, XmlTextReader_t4140 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.EntityHandling System.Xml.XmlTextReader::get_EntityHandling()
extern "C" int32_t XmlTextReader_get_EntityHandling_m13046 (XmlTextReader_t4140 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlTextReader::get_LineNumber()
extern "C" int32_t XmlTextReader_get_LineNumber_m13047 (XmlTextReader_t4140 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlTextReader::get_LinePosition()
extern "C" int32_t XmlTextReader_get_LinePosition_m13048 (XmlTextReader_t4140 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextReader::set_Normalization(System.Boolean)
extern "C" void XmlTextReader_set_Normalization_m13049 (XmlTextReader_t4140 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.WhitespaceHandling System.Xml.XmlTextReader::get_WhitespaceHandling()
extern "C" int32_t XmlTextReader_get_WhitespaceHandling_m13050 (XmlTextReader_t4140 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextReader::set_WhitespaceHandling(System.Xml.WhitespaceHandling)
extern "C" void XmlTextReader_set_WhitespaceHandling_m13051 (XmlTextReader_t4140 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextReader::set_XmlResolver(System.Xml.XmlResolver)
extern "C" void XmlTextReader_set_XmlResolver_m13052 (XmlTextReader_t4140 * __this, XmlResolver_t3938 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextReader::SkipTextDeclaration()
extern "C" void XmlTextReader_SkipTextDeclaration_m13053 (XmlTextReader_t4140 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextReader::Close()
extern "C" void XmlTextReader_Close_m13054 (XmlTextReader_t4140 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlTextReader::GetAttribute(System.String)
extern "C" String_t* XmlTextReader_GetAttribute_m13055 (XmlTextReader_t4140 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlTextReader::GetAttribute(System.String,System.String)
extern "C" String_t* XmlTextReader_GetAttribute_m13056 (XmlTextReader_t4140 * __this, String_t* ___localName, String_t* ___namespaceURI, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlTextReader::LookupNamespace(System.String)
extern "C" String_t* XmlTextReader_LookupNamespace_m13057 (XmlTextReader_t4140 * __this, String_t* ___prefix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextReader::MoveToAttribute(System.Int32)
extern "C" void XmlTextReader_MoveToAttribute_m13058 (XmlTextReader_t4140 * __this, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlTextReader::MoveToAttribute(System.String,System.String)
extern "C" bool XmlTextReader_MoveToAttribute_m13059 (XmlTextReader_t4140 * __this, String_t* ___localName, String_t* ___namespaceName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlTextReader::MoveToElement()
extern "C" bool XmlTextReader_MoveToElement_m13060 (XmlTextReader_t4140 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlTextReader::MoveToFirstAttribute()
extern "C" bool XmlTextReader_MoveToFirstAttribute_m13061 (XmlTextReader_t4140 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlTextReader::MoveToNextAttribute()
extern "C" bool XmlTextReader_MoveToNextAttribute_m13062 (XmlTextReader_t4140 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlTextReader::Read()
extern "C" bool XmlTextReader_Read_m13063 (XmlTextReader_t4140 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlTextReader::ReadAttributeValue()
extern "C" bool XmlTextReader_ReadAttributeValue_m13064 (XmlTextReader_t4140 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlTextReader::ReadString()
extern "C" String_t* XmlTextReader_ReadString_m13065 (XmlTextReader_t4140 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextReader::ResolveEntity()
extern "C" void XmlTextReader_ResolveEntity_m13066 (XmlTextReader_t4140 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextReader::CloseEntity()
extern "C" void XmlTextReader_CloseEntity_m13067 (XmlTextReader_t4140 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlTextReader::Skip()
extern "C" void XmlTextReader_Skip_m13068 (XmlTextReader_t4140 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.TextReader System.Xml.XmlTextReader::GetRemainder()
extern "C" TextReader_t3795 * XmlTextReader_GetRemainder_m13069 (XmlTextReader_t4140 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
