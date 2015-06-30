#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.Internal.MissingExtensions
struct MissingExtensions_t1399;
// System.Type
struct Type_t;
// System.Threading.Tasks.Task`1<System.String>
struct Task_1_t1544;
// System.IO.StreamReader
struct StreamReader_t600;
// System.Threading.Tasks.Task
struct Task_t1418;
// System.IO.Stream
struct Stream_t1271;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_t1543;
// System.Byte[]
struct ByteU5BU5D_t25;
// System.Threading.CancellationToken
#include "Parse_Unity_System_Threading_CancellationToken.h"

// System.Type Parse.Internal.MissingExtensions::GetTypeInfo(System.Type)
extern "C" Type_t * MissingExtensions_GetTypeInfo_m6811 (Object_t * __this /* static, unused */, Type_t * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<System.String> Parse.Internal.MissingExtensions::ReadToEndAsync(System.IO.StreamReader)
extern "C" Task_1_t1544 * MissingExtensions_ReadToEndAsync_m6812 (Object_t * __this /* static, unused */, StreamReader_t600 * ___reader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.Internal.MissingExtensions::CopyToAsync(System.IO.Stream,System.IO.Stream)
extern "C" Task_t1418 * MissingExtensions_CopyToAsync_m6813 (Object_t * __this /* static, unused */, Stream_t1271 * ___stream, Stream_t1271 * ___destination, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.Internal.MissingExtensions::CopyToAsync(System.IO.Stream,System.IO.Stream,System.Int32,System.Threading.CancellationToken)
extern "C" Task_t1418 * MissingExtensions_CopyToAsync_m6814 (Object_t * __this /* static, unused */, Stream_t1271 * ___stream, Stream_t1271 * ___destination, int32_t ___bufferSize, CancellationToken_t1398  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<System.Int32> Parse.Internal.MissingExtensions::ReadAsync(System.IO.Stream,System.Byte[],System.Int32,System.Int32,System.Threading.CancellationToken)
extern "C" Task_1_t1543 * MissingExtensions_ReadAsync_m6815 (Object_t * __this /* static, unused */, Stream_t1271 * ___stream, ByteU5BU5D_t25* ___buffer, int32_t ___offset, int32_t ___count, CancellationToken_t1398  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.Internal.MissingExtensions::WriteAsync(System.IO.Stream,System.Byte[],System.Int32,System.Int32,System.Threading.CancellationToken)
extern "C" Task_t1418 * MissingExtensions_WriteAsync_m6816 (Object_t * __this /* static, unused */, Stream_t1271 * ___stream, ByteU5BU5D_t25* ___buffer, int32_t ___offset, int32_t ___count, CancellationToken_t1398  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
