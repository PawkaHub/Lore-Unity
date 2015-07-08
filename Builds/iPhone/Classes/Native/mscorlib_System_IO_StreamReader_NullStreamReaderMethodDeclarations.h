#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.IO.StreamReader/NullStreamReader
struct NullStreamReader_t5314;
// System.IO.Stream
struct Stream_t1751;
// System.Char[]
struct CharU5BU5D_t583;
// System.String
struct String_t;

// System.Void System.IO.StreamReader/NullStreamReader::.ctor()
extern "C" void NullStreamReader__ctor_m20690 (NullStreamReader_t5314 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.StreamReader/NullStreamReader::Peek()
extern "C" int32_t NullStreamReader_Peek_m20691 (NullStreamReader_t5314 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.StreamReader/NullStreamReader::Read()
extern "C" int32_t NullStreamReader_Read_m20692 (NullStreamReader_t5314 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.StreamReader/NullStreamReader::Read(System.Char[],System.Int32,System.Int32)
extern "C" int32_t NullStreamReader_Read_m20693 (NullStreamReader_t5314 * __this, CharU5BU5D_t583* ___buffer, int32_t ___index, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.StreamReader/NullStreamReader::ReadLine()
extern "C" String_t* NullStreamReader_ReadLine_m20694 (NullStreamReader_t5314 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.StreamReader/NullStreamReader::ReadToEnd()
extern "C" String_t* NullStreamReader_ReadToEnd_m20695 (NullStreamReader_t5314 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream System.IO.StreamReader/NullStreamReader::get_BaseStream()
extern "C" Stream_t1751 * NullStreamReader_get_BaseStream_m20696 (NullStreamReader_t5314 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
