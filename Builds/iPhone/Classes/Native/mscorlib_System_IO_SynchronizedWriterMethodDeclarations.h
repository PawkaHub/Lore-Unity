#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.IO.SynchronizedWriter
struct SynchronizedWriter_t5319;
// System.Text.Encoding
struct Encoding_t680;
// System.String
struct String_t;
// System.IO.TextWriter
struct TextWriter_t3796;
// System.Char[]
struct CharU5BU5D_t583;
// System.Object
struct Object_t;

// System.Void System.IO.SynchronizedWriter::.ctor(System.IO.TextWriter,System.Boolean)
extern "C" void SynchronizedWriter__ctor_m20792 (SynchronizedWriter_t5319 * __this, TextWriter_t3796 * ___writer, bool ___neverClose, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.SynchronizedWriter::Close()
extern "C" void SynchronizedWriter_Close_m20793 (SynchronizedWriter_t5319 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.SynchronizedWriter::Flush()
extern "C" void SynchronizedWriter_Flush_m20794 (SynchronizedWriter_t5319 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.SynchronizedWriter::Write(System.Char)
extern "C" void SynchronizedWriter_Write_m20795 (SynchronizedWriter_t5319 * __this, uint16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.SynchronizedWriter::Write(System.Char[])
extern "C" void SynchronizedWriter_Write_m20796 (SynchronizedWriter_t5319 * __this, CharU5BU5D_t583* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.SynchronizedWriter::Write(System.Object)
extern "C" void SynchronizedWriter_Write_m20797 (SynchronizedWriter_t5319 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.SynchronizedWriter::Write(System.String)
extern "C" void SynchronizedWriter_Write_m20798 (SynchronizedWriter_t5319 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.SynchronizedWriter::Write(System.String,System.Object)
extern "C" void SynchronizedWriter_Write_m20799 (SynchronizedWriter_t5319 * __this, String_t* ___format, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.SynchronizedWriter::Write(System.Char[],System.Int32,System.Int32)
extern "C" void SynchronizedWriter_Write_m20800 (SynchronizedWriter_t5319 * __this, CharU5BU5D_t583* ___buffer, int32_t ___index, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.SynchronizedWriter::WriteLine()
extern "C" void SynchronizedWriter_WriteLine_m20801 (SynchronizedWriter_t5319 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.SynchronizedWriter::WriteLine(System.Object)
extern "C" void SynchronizedWriter_WriteLine_m20802 (SynchronizedWriter_t5319 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.SynchronizedWriter::WriteLine(System.String)
extern "C" void SynchronizedWriter_WriteLine_m20803 (SynchronizedWriter_t5319 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.SynchronizedWriter::WriteLine(System.String,System.Object)
extern "C" void SynchronizedWriter_WriteLine_m20804 (SynchronizedWriter_t5319 * __this, String_t* ___format, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding System.IO.SynchronizedWriter::get_Encoding()
extern "C" Encoding_t680 * SynchronizedWriter_get_Encoding_m20805 (SynchronizedWriter_t5319 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.SynchronizedWriter::get_NewLine()
extern "C" String_t* SynchronizedWriter_get_NewLine_m20806 (SynchronizedWriter_t5319 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
