#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.MissingExtensions
struct MissingExtensions_t1754;
// System.Type
struct Type_t;
// System.Enum
struct Enum_t44;
// System.Threading.Tasks.Task`1<System.String>
struct Task_1_t1950;
// System.IO.StreamReader
struct StreamReader_t678;
// System.Threading.Tasks.Task
struct Task_t344;
// System.IO.Stream
struct Stream_t1751;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_t1949;
// System.Byte[]
struct ByteU5BU5D_t25;
// System.Threading.CancellationToken
#include "Parse_Unity_System_Threading_CancellationToken.h"

// System.Type Parse.Internal.MissingExtensions::GetTypeInfo(System.Type)
extern "C" Type_t * MissingExtensions_GetTypeInfo_m7989 (Object_t * __this /* static, unused */, Type_t * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.Internal.MissingExtensions::HasFlag(System.Enum,System.Enum)
extern "C" bool MissingExtensions_HasFlag_m7990 (Object_t * __this /* static, unused */, Enum_t44 * ___enumValue, Enum_t44 * ___flag, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<System.String> Parse.Internal.MissingExtensions::ReadToEndAsync(System.IO.StreamReader)
extern "C" Task_1_t1950 * MissingExtensions_ReadToEndAsync_m7991 (Object_t * __this /* static, unused */, StreamReader_t678 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.Internal.MissingExtensions::CopyToAsync(System.IO.Stream,System.IO.Stream)
extern "C" Task_t344 * MissingExtensions_CopyToAsync_m7992 (Object_t * __this /* static, unused */, Stream_t1751 * ___stream, Stream_t1751 * ___destination, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.Internal.MissingExtensions::CopyToAsync(System.IO.Stream,System.IO.Stream,System.Int32,System.Threading.CancellationToken)
extern "C" Task_t344 * MissingExtensions_CopyToAsync_m7993 (Object_t * __this /* static, unused */, Stream_t1751 * ___stream, Stream_t1751 * ___destination, int32_t ___bufferSize, CancellationToken_t1753  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<System.Int32> Parse.Internal.MissingExtensions::ReadAsync(System.IO.Stream,System.Byte[],System.Int32,System.Int32,System.Threading.CancellationToken)
extern "C" Task_1_t1949 * MissingExtensions_ReadAsync_m7994 (Object_t * __this /* static, unused */, Stream_t1751 * ___stream, ByteU5BU5D_t25* ___buffer, int32_t ___offset, int32_t ___count, CancellationToken_t1753  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.Internal.MissingExtensions::WriteAsync(System.IO.Stream,System.Byte[],System.Int32,System.Int32,System.Threading.CancellationToken)
extern "C" Task_t344 * MissingExtensions_WriteAsync_m7995 (Object_t * __this /* static, unused */, Stream_t1751 * ___stream, ByteU5BU5D_t25* ___buffer, int32_t ___offset, int32_t ___count, CancellationToken_t1753  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
