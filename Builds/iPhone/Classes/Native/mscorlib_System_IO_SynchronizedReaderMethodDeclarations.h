#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.IO.SynchronizedReader
struct SynchronizedReader_t5316;
// System.IO.TextReader
struct TextReader_t3795;
// System.Char[]
struct CharU5BU5D_t583;
// System.String
struct String_t;

// System.Void System.IO.SynchronizedReader::.ctor(System.IO.TextReader)
extern "C" void SynchronizedReader__ctor_m20761 (SynchronizedReader_t5316 * __this, TextReader_t3795 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.SynchronizedReader::Close()
extern "C" void SynchronizedReader_Close_m20762 (SynchronizedReader_t5316 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.SynchronizedReader::Peek()
extern "C" int32_t SynchronizedReader_Peek_m20763 (SynchronizedReader_t5316 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.SynchronizedReader::ReadBlock(System.Char[],System.Int32,System.Int32)
extern "C" int32_t SynchronizedReader_ReadBlock_m20764 (SynchronizedReader_t5316 * __this, CharU5BU5D_t583* ___buffer, int32_t ___index, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.SynchronizedReader::ReadLine()
extern "C" String_t* SynchronizedReader_ReadLine_m20765 (SynchronizedReader_t5316 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.SynchronizedReader::ReadToEnd()
extern "C" String_t* SynchronizedReader_ReadToEnd_m20766 (SynchronizedReader_t5316 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.SynchronizedReader::Read()
extern "C" int32_t SynchronizedReader_Read_m20767 (SynchronizedReader_t5316 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.SynchronizedReader::Read(System.Char[],System.Int32,System.Int32)
extern "C" int32_t SynchronizedReader_Read_m20768 (SynchronizedReader_t5316 * __this, CharU5BU5D_t583* ___buffer, int32_t ___index, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
