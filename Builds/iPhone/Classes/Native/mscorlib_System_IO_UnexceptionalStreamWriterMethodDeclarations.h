#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.IO.UnexceptionalStreamWriter
struct UnexceptionalStreamWriter_t5083;
// System.IO.Stream
struct Stream_t1494;
// System.Text.Encoding
struct Encoding_t623;
// System.Char[]
struct CharU5BU5D_t665;
// System.String
struct String_t;

// System.Void System.IO.UnexceptionalStreamWriter::.ctor(System.IO.Stream,System.Text.Encoding)
extern "C" void UnexceptionalStreamWriter__ctor_m20398 (UnexceptionalStreamWriter_t5083 * __this, Stream_t1494 * ___stream, Encoding_t623 * ___encoding, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.UnexceptionalStreamWriter::Flush()
extern "C" void UnexceptionalStreamWriter_Flush_m20399 (UnexceptionalStreamWriter_t5083 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.UnexceptionalStreamWriter::Write(System.Char[],System.Int32,System.Int32)
extern "C" void UnexceptionalStreamWriter_Write_m20400 (UnexceptionalStreamWriter_t5083 * __this, CharU5BU5D_t665* ___buffer, int32_t ___index, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.UnexceptionalStreamWriter::Write(System.Char)
extern "C" void UnexceptionalStreamWriter_Write_m20401 (UnexceptionalStreamWriter_t5083 * __this, uint16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.UnexceptionalStreamWriter::Write(System.Char[])
extern "C" void UnexceptionalStreamWriter_Write_m20402 (UnexceptionalStreamWriter_t5083 * __this, CharU5BU5D_t665* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.UnexceptionalStreamWriter::Write(System.String)
extern "C" void UnexceptionalStreamWriter_Write_m20403 (UnexceptionalStreamWriter_t5083 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
