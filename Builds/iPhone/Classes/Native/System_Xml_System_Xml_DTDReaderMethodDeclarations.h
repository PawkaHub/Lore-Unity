#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.DTDReader
struct DTDReader_t4067;
// System.String
struct String_t;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t4040;
// System.Xml.XmlException
struct XmlException_t4099;
// Mono.Xml.DTDElementDeclaration
struct DTDElementDeclaration_t4056;
// Mono.Xml.DTDContentModel
struct DTDContentModel_t4055;
// Mono.Xml.DTDContentModelCollection
struct DTDContentModelCollection_t4054;
// Mono.Xml.DTDEntityBase
struct DTDEntityBase_t4059;
// Mono.Xml.DTDParameterEntityDeclaration
struct DTDParameterEntityDeclaration_t4062;
// Mono.Xml.DTDEntityDeclaration
struct DTDEntityDeclaration_t4060;
// Mono.Xml.DTDAttListDeclaration
struct DTDAttListDeclaration_t4058;
// Mono.Xml.DTDAttributeDefinition
struct DTDAttributeDefinition_t4057;
// Mono.Xml.DTDNotationDeclaration
struct DTDNotationDeclaration_t4061;

// System.Void System.Xml.DTDReader::.ctor(Mono.Xml.DTDObjectModel,System.Int32,System.Int32)
extern "C" void DTDReader__ctor_m12277 (DTDReader_t4067 * __this, DTDObjectModel_t4040 * ___dtd, int32_t ___startLineNumber, int32_t ___startLinePosition, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.DTDReader::get_BaseURI()
extern "C" String_t* DTDReader_get_BaseURI_m12278 (DTDReader_t4067 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.DTDReader::get_Normalization()
extern "C" bool DTDReader_get_Normalization_m12279 (DTDReader_t4067 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.DTDReader::set_Normalization(System.Boolean)
extern "C" void DTDReader_set_Normalization_m12280 (DTDReader_t4067 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.DTDReader::get_LineNumber()
extern "C" int32_t DTDReader_get_LineNumber_m12281 (DTDReader_t4067 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.DTDReader::get_LinePosition()
extern "C" int32_t DTDReader_get_LinePosition_m12282 (DTDReader_t4067 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.XmlException System.Xml.DTDReader::NotWFError(System.String)
extern "C" XmlException_t4099 * DTDReader_NotWFError_m12283 (DTDReader_t4067 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.DTDReader::Init()
extern "C" void DTDReader_Init_m12284 (DTDReader_t4067 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDObjectModel System.Xml.DTDReader::GenerateDTDObjectModel()
extern "C" DTDObjectModel_t4040 * DTDReader_GenerateDTDObjectModel_m12285 (DTDReader_t4067 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.DTDReader::ProcessDTDSubset()
extern "C" bool DTDReader_ProcessDTDSubset_m12286 (DTDReader_t4067 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.DTDReader::CompileDeclaration()
extern "C" void DTDReader_CompileDeclaration_m12287 (DTDReader_t4067 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.DTDReader::ReadIgnoreSect()
extern "C" void DTDReader_ReadIgnoreSect_m12288 (DTDReader_t4067 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDElementDeclaration System.Xml.DTDReader::ReadElementDecl()
extern "C" DTDElementDeclaration_t4056 * DTDReader_ReadElementDecl_m12289 (DTDReader_t4067 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.DTDReader::ReadContentSpec(Mono.Xml.DTDElementDeclaration)
extern "C" void DTDReader_ReadContentSpec_m12290 (DTDReader_t4067 * __this, DTDElementDeclaration_t4056 * ___decl, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDContentModel System.Xml.DTDReader::ReadCP(Mono.Xml.DTDElementDeclaration)
extern "C" DTDContentModel_t4055 * DTDReader_ReadCP_m12291 (DTDReader_t4067 * __this, DTDElementDeclaration_t4056 * ___elem, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.DTDReader::AddContentModel(Mono.Xml.DTDContentModelCollection,Mono.Xml.DTDContentModel)
extern "C" void DTDReader_AddContentModel_m12292 (DTDReader_t4067 * __this, DTDContentModelCollection_t4054 * ___cmc, DTDContentModel_t4055 * ___cm, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.DTDReader::ReadParameterEntityDecl()
extern "C" void DTDReader_ReadParameterEntityDecl_m12293 (DTDReader_t4067 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.DTDReader::ResolveExternalEntityReplacementText(Mono.Xml.DTDEntityBase)
extern "C" void DTDReader_ResolveExternalEntityReplacementText_m12294 (DTDReader_t4067 * __this, DTDEntityBase_t4059 * ___decl, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.DTDReader::ResolveInternalEntityReplacementText(Mono.Xml.DTDEntityBase)
extern "C" void DTDReader_ResolveInternalEntityReplacementText_m12295 (DTDReader_t4067 * __this, DTDEntityBase_t4059 * ___decl, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.DTDReader::GetCharacterReference(Mono.Xml.DTDEntityBase,System.String,System.Int32&,System.Int32)
extern "C" int32_t DTDReader_GetCharacterReference_m12296 (DTDReader_t4067 * __this, DTDEntityBase_t4059 * ___li, String_t* ___value, int32_t* ___index, int32_t ___end, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.DTDReader::GetPEValue(System.String)
extern "C" String_t* DTDReader_GetPEValue_m12297 (DTDReader_t4067 * __this, String_t* ___peName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDParameterEntityDeclaration System.Xml.DTDReader::GetPEDecl(System.String)
extern "C" DTDParameterEntityDeclaration_t4062 * DTDReader_GetPEDecl_m12298 (DTDReader_t4067 * __this, String_t* ___peName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.DTDReader::TryExpandPERef()
extern "C" bool DTDReader_TryExpandPERef_m12299 (DTDReader_t4067 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.DTDReader::TryExpandPERefSpaceKeep()
extern "C" bool DTDReader_TryExpandPERefSpaceKeep_m12300 (DTDReader_t4067 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.DTDReader::ExpandPERef()
extern "C" void DTDReader_ExpandPERef_m12301 (DTDReader_t4067 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDEntityDeclaration System.Xml.DTDReader::ReadEntityDecl()
extern "C" DTDEntityDeclaration_t4060 * DTDReader_ReadEntityDecl_m12302 (DTDReader_t4067 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.DTDReader::ReadEntityValueDecl(Mono.Xml.DTDEntityDeclaration)
extern "C" void DTDReader_ReadEntityValueDecl_m12303 (DTDReader_t4067 * __this, DTDEntityDeclaration_t4060 * ___decl, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAttListDeclaration System.Xml.DTDReader::ReadAttListDecl()
extern "C" DTDAttListDeclaration_t4058 * DTDReader_ReadAttListDecl_m12304 (DTDReader_t4067 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAttributeDefinition System.Xml.DTDReader::ReadAttributeDefinition()
extern "C" DTDAttributeDefinition_t4057 * DTDReader_ReadAttributeDefinition_m12305 (DTDReader_t4067 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDNotationDeclaration System.Xml.DTDReader::ReadNotationDecl()
extern "C" DTDNotationDeclaration_t4061 * DTDReader_ReadNotationDecl_m12306 (DTDReader_t4067 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.DTDReader::ReadExternalID()
extern "C" void DTDReader_ReadExternalID_m12307 (DTDReader_t4067 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.DTDReader::ReadSystemLiteral(System.Boolean)
extern "C" String_t* DTDReader_ReadSystemLiteral_m12308 (DTDReader_t4067 * __this, bool ___expectSYSTEM, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.DTDReader::ReadPubidLiteral()
extern "C" String_t* DTDReader_ReadPubidLiteral_m12309 (DTDReader_t4067 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.DTDReader::ReadName()
extern "C" String_t* DTDReader_ReadName_m12310 (DTDReader_t4067 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.DTDReader::ReadNameOrNmToken(System.Boolean)
extern "C" String_t* DTDReader_ReadNameOrNmToken_m12311 (DTDReader_t4067 * __this, bool ___isNameToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.DTDReader::Expect(System.Int32)
extern "C" void DTDReader_Expect_m12312 (DTDReader_t4067 * __this, int32_t ___expected, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.DTDReader::Expect(System.String)
extern "C" void DTDReader_Expect_m12313 (DTDReader_t4067 * __this, String_t* ___expected, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.DTDReader::ExpectAfterWhitespace(System.Char)
extern "C" void DTDReader_ExpectAfterWhitespace_m12314 (DTDReader_t4067 * __this, uint16_t ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.DTDReader::SkipWhitespace()
extern "C" bool DTDReader_SkipWhitespace_m12315 (DTDReader_t4067 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.DTDReader::PeekChar()
extern "C" int32_t DTDReader_PeekChar_m12316 (DTDReader_t4067 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.DTDReader::ReadChar()
extern "C" int32_t DTDReader_ReadChar_m12317 (DTDReader_t4067 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.DTDReader::ReadComment()
extern "C" void DTDReader_ReadComment_m12318 (DTDReader_t4067 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.DTDReader::ReadProcessingInstruction()
extern "C" void DTDReader_ReadProcessingInstruction_m12319 (DTDReader_t4067 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.DTDReader::ReadTextDeclaration()
extern "C" void DTDReader_ReadTextDeclaration_m12320 (DTDReader_t4067 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.DTDReader::AppendNameChar(System.Int32)
extern "C" void DTDReader_AppendNameChar_m12321 (DTDReader_t4067 * __this, int32_t ___ch, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.DTDReader::CheckNameCapacity()
extern "C" void DTDReader_CheckNameCapacity_m12322 (DTDReader_t4067 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.DTDReader::CreateNameString()
extern "C" String_t* DTDReader_CreateNameString_m12323 (DTDReader_t4067 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.DTDReader::AppendValueChar(System.Int32)
extern "C" void DTDReader_AppendValueChar_m12324 (DTDReader_t4067 * __this, int32_t ___ch, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.DTDReader::CreateValueString()
extern "C" String_t* DTDReader_CreateValueString_m12325 (DTDReader_t4067 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.DTDReader::ClearValueBuffer()
extern "C" void DTDReader_ClearValueBuffer_m12326 (DTDReader_t4067 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.DTDReader::PushParserInput(System.String)
extern "C" void DTDReader_PushParserInput_m12327 (DTDReader_t4067 * __this, String_t* ___url, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.DTDReader::PopParserInput()
extern "C" void DTDReader_PopParserInput_m12328 (DTDReader_t4067 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.DTDReader::HandleError(System.Xml.XmlException)
extern "C" void DTDReader_HandleError_m12329 (DTDReader_t4067 * __this, XmlException_t4099 * ___ex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
