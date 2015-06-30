#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Language.Lua.TextInput
struct TextInput_t2653;
// System.String
struct String_t;
// System.Char[]
struct CharU5BU5D_t646;

// System.Void Language.Lua.TextInput::.ctor(System.String)
extern "C" void TextInput__ctor_m12116 (TextInput_t2653 * __this, String_t* ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Language.Lua.TextInput::get_Length()
extern "C" int32_t TextInput_get_Length_m12117 (TextInput_t2653 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Language.Lua.TextInput::HasInput(System.Int32)
extern "C" bool TextInput_HasInput_m12118 (TextInput_t2653 * __this, int32_t ___pos, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char Language.Lua.TextInput::GetInputSymbol(System.Int32)
extern "C" uint16_t TextInput_GetInputSymbol_m12119 (TextInput_t2653 * __this, int32_t ___pos, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char[] Language.Lua.TextInput::GetSubSection(System.Int32,System.Int32)
extern "C" CharU5BU5D_t646* TextInput_GetSubSection_m12120 (TextInput_t2653 * __this, int32_t ___position, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Language.Lua.TextInput::FormErrorMessage(System.Int32,System.String)
extern "C" String_t* TextInput_FormErrorMessage_m12121 (TextInput_t2653 * __this, int32_t ___position, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Language.Lua.TextInput::GetLineColumnNumber(System.Int32,System.Int32&,System.Int32&)
extern "C" void TextInput_GetLineColumnNumber_m12122 (TextInput_t2653 * __this, int32_t ___pos, int32_t* ___line, int32_t* ___col, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Language.Lua.TextInput::GetSubString(System.Int32,System.Int32)
extern "C" String_t* TextInput_GetSubString_m12123 (TextInput_t2653 * __this, int32_t ___start, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
