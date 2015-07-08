#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Xml.SmallXmlParser
struct SmallXmlParser_t5240;
// System.Exception
struct Exception_t496;
// System.String
struct String_t;
// System.IO.TextReader
struct TextReader_t3795;
// Mono.Xml.SmallXmlParser/IContentHandler
struct IContentHandler_t5242;
// Mono.Xml.SmallXmlParser/AttrListImpl
struct AttrListImpl_t5241;

// System.Void Mono.Xml.SmallXmlParser::.ctor()
extern "C" void SmallXmlParser__ctor_m19993 (SmallXmlParser_t5240 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception Mono.Xml.SmallXmlParser::Error(System.String)
extern "C" Exception_t496 * SmallXmlParser_Error_m19994 (SmallXmlParser_t5240 * __this, String_t* ___msg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception Mono.Xml.SmallXmlParser::UnexpectedEndError()
extern "C" Exception_t496 * SmallXmlParser_UnexpectedEndError_m19995 (SmallXmlParser_t5240 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.SmallXmlParser::IsNameChar(System.Char,System.Boolean)
extern "C" bool SmallXmlParser_IsNameChar_m19996 (SmallXmlParser_t5240 * __this, uint16_t ___c, bool ___start, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.SmallXmlParser::IsWhitespace(System.Int32)
extern "C" bool SmallXmlParser_IsWhitespace_m19997 (SmallXmlParser_t5240 * __this, int32_t ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SmallXmlParser::SkipWhitespaces()
extern "C" void SmallXmlParser_SkipWhitespaces_m19998 (SmallXmlParser_t5240 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SmallXmlParser::HandleWhitespaces()
extern "C" void SmallXmlParser_HandleWhitespaces_m19999 (SmallXmlParser_t5240 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SmallXmlParser::SkipWhitespaces(System.Boolean)
extern "C" void SmallXmlParser_SkipWhitespaces_m20000 (SmallXmlParser_t5240 * __this, bool ___expected, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml.SmallXmlParser::Peek()
extern "C" int32_t SmallXmlParser_Peek_m20001 (SmallXmlParser_t5240 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml.SmallXmlParser::Read()
extern "C" int32_t SmallXmlParser_Read_m20002 (SmallXmlParser_t5240 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SmallXmlParser::Expect(System.Int32)
extern "C" void SmallXmlParser_Expect_m20003 (SmallXmlParser_t5240 * __this, int32_t ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.SmallXmlParser::ReadUntil(System.Char,System.Boolean)
extern "C" String_t* SmallXmlParser_ReadUntil_m20004 (SmallXmlParser_t5240 * __this, uint16_t ___until, bool ___handleReferences, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.SmallXmlParser::ReadName()
extern "C" String_t* SmallXmlParser_ReadName_m20005 (SmallXmlParser_t5240 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SmallXmlParser::Parse(System.IO.TextReader,Mono.Xml.SmallXmlParser/IContentHandler)
extern "C" void SmallXmlParser_Parse_m20006 (SmallXmlParser_t5240 * __this, TextReader_t3795 * ___input, Object_t * ___handler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SmallXmlParser::Cleanup()
extern "C" void SmallXmlParser_Cleanup_m20007 (SmallXmlParser_t5240 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SmallXmlParser::ReadContent()
extern "C" void SmallXmlParser_ReadContent_m20008 (SmallXmlParser_t5240 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SmallXmlParser::HandleBufferedContent()
extern "C" void SmallXmlParser_HandleBufferedContent_m20009 (SmallXmlParser_t5240 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SmallXmlParser::ReadCharacters()
extern "C" void SmallXmlParser_ReadCharacters_m20010 (SmallXmlParser_t5240 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SmallXmlParser::ReadReference()
extern "C" void SmallXmlParser_ReadReference_m20011 (SmallXmlParser_t5240 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Xml.SmallXmlParser::ReadCharacterReference()
extern "C" int32_t SmallXmlParser_ReadCharacterReference_m20012 (SmallXmlParser_t5240 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SmallXmlParser::ReadAttribute(Mono.Xml.SmallXmlParser/AttrListImpl)
extern "C" void SmallXmlParser_ReadAttribute_m20013 (SmallXmlParser_t5240 * __this, AttrListImpl_t5241 * ___a, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SmallXmlParser::ReadCDATASection()
extern "C" void SmallXmlParser_ReadCDATASection_m20014 (SmallXmlParser_t5240 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.SmallXmlParser::ReadComment()
extern "C" void SmallXmlParser_ReadComment_m20015 (SmallXmlParser_t5240 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
