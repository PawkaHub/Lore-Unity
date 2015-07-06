#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.ParseFile
struct ParseFile_t1574;
// System.String
struct String_t;
// System.Uri
struct Uri_t32;
// System.Byte[]
struct ByteU5BU5D_t25;
// System.IO.Stream
struct Stream_t1494;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t1555;
// System.Threading.Tasks.Task
struct Task_t723;
// System.IProgress`1<Parse.ParseUploadProgressEventArgs>
struct IProgress_1_t1575;
// System.Threading.CancellationToken
#include "Parse_Unity_System_Threading_CancellationToken.h"

// System.Void Parse.ParseFile::.ctor(System.String,System.Uri,System.String)
extern "C" void ParseFile__ctor_m7888 (ParseFile_t1574 * __this, String_t* ___name, Uri_t32 * ___uri, String_t* ___mimeType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseFile::.ctor(System.String,System.Byte[],System.String)
extern "C" void ParseFile__ctor_m7889 (ParseFile_t1574 * __this, String_t* ___name, ByteU5BU5D_t25* ___data, String_t* ___mimeType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseFile::.ctor(System.String,System.IO.Stream,System.String)
extern "C" void ParseFile__ctor_m7890 (ParseFile_t1574 * __this, String_t* ___name, Stream_t1494 * ___data, String_t* ___mimeType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseFile::get_IsDirty()
extern "C" bool ParseFile_get_IsDirty_m7891 (ParseFile_t1574 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.ParseFile::get_Name()
extern "C" String_t* ParseFile_get_Name_m7892 (ParseFile_t1574 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.ParseFile::get_MimeType()
extern "C" String_t* ParseFile_get_MimeType_m7893 (ParseFile_t1574 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri Parse.ParseFile::get_Url()
extern "C" Uri_t32 * ParseFile_get_Url_m7894 (ParseFile_t1574 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.ParseFile::ToJSON()
extern "C" Object_t* ParseFile_ToJSON_m7895 (ParseFile_t1574 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseFile::MergeFromJSON(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C" void ParseFile_MergeFromJSON_m7896 (ParseFile_t1574 * __this, Object_t* ___jsonData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseFile::SaveAsync()
extern "C" Task_t723 * ParseFile_SaveAsync_m7897 (ParseFile_t1574 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseFile::SaveAsync(System.Threading.CancellationToken)
extern "C" Task_t723 * ParseFile_SaveAsync_m7898 (ParseFile_t1574 * __this, CancellationToken_t1496  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseFile::SaveAsync(System.IProgress`1<Parse.ParseUploadProgressEventArgs>)
extern "C" Task_t723 * ParseFile_SaveAsync_m7899 (ParseFile_t1574 * __this, Object_t* ___progress, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseFile::SaveAsync(System.IProgress`1<Parse.ParseUploadProgressEventArgs>,System.Threading.CancellationToken)
extern "C" Task_t723 * ParseFile_SaveAsync_m7900 (ParseFile_t1574 * __this, Object_t* ___progress, CancellationToken_t1496  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseFile::SaveAsync(System.Threading.Tasks.Task,System.IProgress`1<Parse.ParseUploadProgressEventArgs>,System.Threading.CancellationToken)
extern "C" Task_t723 * ParseFile_SaveAsync_m7901 (ParseFile_t1574 * __this, Task_t723 * ___toAwait, Object_t* ___progress, CancellationToken_t1496  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
