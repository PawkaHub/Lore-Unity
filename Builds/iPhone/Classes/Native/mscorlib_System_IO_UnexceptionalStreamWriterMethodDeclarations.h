#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.IO.UnexceptionalStreamWriter
struct UnexceptionalStreamWriter_t5321;
// System.IO.Stream
struct Stream_t1751;
// System.Text.Encoding
struct Encoding_t680;
// System.Char[]
struct CharU5BU5D_t583;
// System.String
struct String_t;

// System.Void System.IO.UnexceptionalStreamWriter::.ctor(System.IO.Stream,System.Text.Encoding)
extern "C" void UnexceptionalStreamWriter__ctor_m20815 (UnexceptionalStreamWriter_t5321 * __this, Stream_t1751 * ___stream, Encoding_t680 * ___encoding, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.UnexceptionalStreamWriter::Flush()
extern "C" void UnexceptionalStreamWriter_Flush_m20816 (UnexceptionalStreamWriter_t5321 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.UnexceptionalStreamWriter::Write(System.Char[],System.Int32,System.Int32)
extern "C" void UnexceptionalStreamWriter_Write_m20817 (UnexceptionalStreamWriter_t5321 * __this, CharU5BU5D_t583* ___buffer, int32_t ___index, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.UnexceptionalStreamWriter::Write(System.Char)
extern "C" void UnexceptionalStreamWriter_Write_m20818 (UnexceptionalStreamWriter_t5321 * __this, uint16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.UnexceptionalStreamWriter::Write(System.Char[])
extern "C" void UnexceptionalStreamWriter_Write_m20819 (UnexceptionalStreamWriter_t5321 * __this, CharU5BU5D_t583* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.UnexceptionalStreamWriter::Write(System.String)
extern "C" void UnexceptionalStreamWriter_Write_m20820 (UnexceptionalStreamWriter_t5321 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
