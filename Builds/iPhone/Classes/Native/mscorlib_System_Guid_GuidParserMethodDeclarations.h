#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Guid/GuidParser
struct GuidParser_t4305;
// System.String
struct String_t;
// System.Guid
#include "mscorlib_System_Guid.h"

// System.Void System.Guid/GuidParser::.ctor(System.String)
extern "C" void GuidParser__ctor_m21209 (GuidParser_t4305 * __this, String_t* ___src, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Guid/GuidParser::Reset()
extern "C" void GuidParser_Reset_m21210 (GuidParser_t4305 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Guid/GuidParser::AtEnd()
extern "C" bool GuidParser_AtEnd_m21211 (GuidParser_t4305 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Guid/GuidParser::ThrowFormatException()
extern "C" void GuidParser_ThrowFormatException_m21212 (GuidParser_t4305 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.Guid/GuidParser::ParseHex(System.Int32,System.Boolean)
extern "C" uint64_t GuidParser_ParseHex_m21213 (GuidParser_t4305 * __this, int32_t ___length, bool ___strictLength, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Guid/GuidParser::ParseOptChar(System.Char)
extern "C" bool GuidParser_ParseOptChar_m21214 (GuidParser_t4305 * __this, uint16_t ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Guid/GuidParser::ParseChar(System.Char)
extern "C" void GuidParser_ParseChar_m21215 (GuidParser_t4305 * __this, uint16_t ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Guid System.Guid/GuidParser::ParseGuid1()
extern "C" Guid_t1562  GuidParser_ParseGuid1_m21216 (GuidParser_t4305 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Guid/GuidParser::ParseHexPrefix()
extern "C" void GuidParser_ParseHexPrefix_m21217 (GuidParser_t4305 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Guid System.Guid/GuidParser::ParseGuid2()
extern "C" Guid_t1562  GuidParser_ParseGuid2_m21218 (GuidParser_t4305 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Guid System.Guid/GuidParser::Parse()
extern "C" Guid_t1562  GuidParser_Parse_m21219 (GuidParser_t4305 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
