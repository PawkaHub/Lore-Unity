#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t4040;
// System.String
struct String_t;
// System.Xml.XmlNameTable
struct XmlNameTable_t3937;
// System.Xml.XmlResolver
struct XmlResolver_t3938;
// System.Collections.Hashtable
struct Hashtable_t1909;
// Mono.Xml.DTDElementDeclarationCollection
struct DTDElementDeclarationCollection_t4042;
// Mono.Xml.DTDAttListDeclarationCollection
struct DTDAttListDeclarationCollection_t4043;
// Mono.Xml.DTDEntityDeclarationCollection
struct DTDEntityDeclarationCollection_t4045;
// Mono.Xml.DTDParameterEntityDeclarationCollection
struct DTDParameterEntityDeclarationCollection_t4044;
// Mono.Xml.DTDNotationDeclarationCollection
struct DTDNotationDeclarationCollection_t4046;
// System.Xml.XmlException
struct XmlException_t4099;
// Mono.Xml2.XmlTextReader
struct XmlTextReader_t4131;
// System.Xml.XmlParserContext
struct XmlParserContext_t4121;

// System.Void Mono.Xml.DTDObjectModel::.ctor(System.Xml.XmlNameTable)
extern "C" void DTDObjectModel__ctor_m12141 (DTDObjectModel_t4040 * __this, XmlNameTable_t3937 * ___nameTable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDObjectModel::get_BaseURI()
extern "C" String_t* DTDObjectModel_get_BaseURI_m12142 (DTDObjectModel_t4040 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDObjectModel::set_BaseURI(System.String)
extern "C" void DTDObjectModel_set_BaseURI_m12143 (DTDObjectModel_t4040 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.DTDObjectModel::get_IsStandalone()
extern "C" bool DTDObjectModel_get_IsStandalone_m12144 (DTDObjectModel_t4040 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDObjectModel::set_IsStandalone(System.Boolean)
extern "C" void DTDObjectModel_set_IsStandalone_m12145 (DTDObjectModel_t4040 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDObjectModel::get_Name()
extern "C" String_t* DTDObjectModel_get_Name_m12146 (DTDObjectModel_t4040 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDObjectModel::set_Name(System.String)
extern "C" void DTDObjectModel_set_Name_m12147 (DTDObjectModel_t4040 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlNameTable Mono.Xml.DTDObjectModel::get_NameTable()
extern "C" XmlNameTable_t3937 * DTDObjectModel_get_NameTable_m12148 (DTDObjectModel_t4040 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDObjectModel::get_PublicId()
extern "C" String_t* DTDObjectModel_get_PublicId_m12149 (DTDObjectModel_t4040 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDObjectModel::set_PublicId(System.String)
extern "C" void DTDObjectModel_set_PublicId_m12150 (DTDObjectModel_t4040 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDObjectModel::get_SystemId()
extern "C" String_t* DTDObjectModel_get_SystemId_m12151 (DTDObjectModel_t4040 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDObjectModel::set_SystemId(System.String)
extern "C" void DTDObjectModel_set_SystemId_m12152 (DTDObjectModel_t4040 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDObjectModel::get_InternalSubset()
extern "C" String_t* DTDObjectModel_get_InternalSubset_m12153 (DTDObjectModel_t4040 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDObjectModel::set_InternalSubset(System.String)
extern "C" void DTDObjectModel_set_InternalSubset_m12154 (DTDObjectModel_t4040 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.DTDObjectModel::get_InternalSubsetHasPEReference()
extern "C" bool DTDObjectModel_get_InternalSubsetHasPEReference_m12155 (DTDObjectModel_t4040 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDObjectModel::set_InternalSubsetHasPEReference(System.Boolean)
extern "C" void DTDObjectModel_set_InternalSubsetHasPEReference_m12156 (DTDObjectModel_t4040 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml.DTDObjectModel::get_LineNumber()
extern "C" int32_t DTDObjectModel_get_LineNumber_m12157 (DTDObjectModel_t4040 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDObjectModel::set_LineNumber(System.Int32)
extern "C" void DTDObjectModel_set_LineNumber_m12158 (DTDObjectModel_t4040 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml.DTDObjectModel::get_LinePosition()
extern "C" int32_t DTDObjectModel_get_LinePosition_m12159 (DTDObjectModel_t4040 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDObjectModel::set_LinePosition(System.Int32)
extern "C" void DTDObjectModel_set_LinePosition_m12160 (DTDObjectModel_t4040 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDObjectModel::ResolveEntity(System.String)
extern "C" String_t* DTDObjectModel_ResolveEntity_m12161 (DTDObjectModel_t4040 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlResolver Mono.Xml.DTDObjectModel::get_Resolver()
extern "C" XmlResolver_t3938 * DTDObjectModel_get_Resolver_m12162 (DTDObjectModel_t4040 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDObjectModel::set_XmlResolver(System.Xml.XmlResolver)
extern "C" void DTDObjectModel_set_XmlResolver_m12163 (DTDObjectModel_t4040 * __this, XmlResolver_t3938 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Hashtable Mono.Xml.DTDObjectModel::get_ExternalResources()
extern "C" Hashtable_t1909 * DTDObjectModel_get_ExternalResources_m12164 (DTDObjectModel_t4040 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDElementDeclarationCollection Mono.Xml.DTDObjectModel::get_ElementDecls()
extern "C" DTDElementDeclarationCollection_t4042 * DTDObjectModel_get_ElementDecls_m12165 (DTDObjectModel_t4040 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAttListDeclarationCollection Mono.Xml.DTDObjectModel::get_AttListDecls()
extern "C" DTDAttListDeclarationCollection_t4043 * DTDObjectModel_get_AttListDecls_m12166 (DTDObjectModel_t4040 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDEntityDeclarationCollection Mono.Xml.DTDObjectModel::get_EntityDecls()
extern "C" DTDEntityDeclarationCollection_t4045 * DTDObjectModel_get_EntityDecls_m12167 (DTDObjectModel_t4040 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDParameterEntityDeclarationCollection Mono.Xml.DTDObjectModel::get_PEDecls()
extern "C" DTDParameterEntityDeclarationCollection_t4044 * DTDObjectModel_get_PEDecls_m12168 (DTDObjectModel_t4040 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDNotationDeclarationCollection Mono.Xml.DTDObjectModel::get_NotationDecls()
extern "C" DTDNotationDeclarationCollection_t4046 * DTDObjectModel_get_NotationDecls_m12169 (DTDObjectModel_t4040 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDObjectModel::AddError(System.Xml.XmlException)
extern "C" void DTDObjectModel_AddError_m12170 (DTDObjectModel_t4040 * __this, XmlException_t4099 * ___ex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDObjectModel::GenerateEntityAttributeText(System.String)
extern "C" String_t* DTDObjectModel_GenerateEntityAttributeText_m12171 (DTDObjectModel_t4040 * __this, String_t* ___entityName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml2.XmlTextReader Mono.Xml.DTDObjectModel::GenerateEntityContentReader(System.String,System.Xml.XmlParserContext)
extern "C" XmlTextReader_t4131 * DTDObjectModel_GenerateEntityContentReader_m12172 (DTDObjectModel_t4040 * __this, String_t* ___entityName, XmlParserContext_t4121 * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
