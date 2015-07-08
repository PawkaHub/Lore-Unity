#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.ParseFile
struct ParseFile_t1827;
// System.String
struct String_t;
// System.Uri
struct Uri_t32;
// System.Byte[]
struct ByteU5BU5D_t25;
// System.IO.Stream
struct Stream_t1751;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t1810;
// System.Threading.Tasks.Task
struct Task_t344;
// System.IProgress`1<Parse.ParseUploadProgressEventArgs>
struct IProgress_1_t1828;
// System.Threading.CancellationToken
#include "Parse_Unity_System_Threading_CancellationToken.h"

// System.Void Parse.ParseFile::.ctor(System.String,System.Uri,System.String)
extern "C" void ParseFile__ctor_m8335 (ParseFile_t1827 * __this, String_t* ___name, Uri_t32 * ___uri, String_t* ___mimeType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseFile::.ctor(System.String,System.Byte[],System.String)
extern "C" void ParseFile__ctor_m8336 (ParseFile_t1827 * __this, String_t* ___name, ByteU5BU5D_t25* ___data, String_t* ___mimeType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseFile::.ctor(System.String,System.IO.Stream,System.String)
extern "C" void ParseFile__ctor_m8337 (ParseFile_t1827 * __this, String_t* ___name, Stream_t1751 * ___data, String_t* ___mimeType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseFile::get_IsDirty()
extern "C" bool ParseFile_get_IsDirty_m8338 (ParseFile_t1827 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.ParseFile::get_Name()
extern "C" String_t* ParseFile_get_Name_m8339 (ParseFile_t1827 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.ParseFile::get_MimeType()
extern "C" String_t* ParseFile_get_MimeType_m8340 (ParseFile_t1827 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri Parse.ParseFile::get_Url()
extern "C" Uri_t32 * ParseFile_get_Url_m8341 (ParseFile_t1827 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.ParseFile::ToJSON()
extern "C" Object_t* ParseFile_ToJSON_m8342 (ParseFile_t1827 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseFile::MergeFromJSON(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C" void ParseFile_MergeFromJSON_m8343 (ParseFile_t1827 * __this, Object_t* ___jsonData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseFile::SaveAsync()
extern "C" Task_t344 * ParseFile_SaveAsync_m8344 (ParseFile_t1827 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseFile::SaveAsync(System.Threading.CancellationToken)
extern "C" Task_t344 * ParseFile_SaveAsync_m8345 (ParseFile_t1827 * __this, CancellationToken_t1753  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseFile::SaveAsync(System.IProgress`1<Parse.ParseUploadProgressEventArgs>)
extern "C" Task_t344 * ParseFile_SaveAsync_m8346 (ParseFile_t1827 * __this, Object_t* ___progress, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseFile::SaveAsync(System.IProgress`1<Parse.ParseUploadProgressEventArgs>,System.Threading.CancellationToken)
extern "C" Task_t344 * ParseFile_SaveAsync_m8347 (ParseFile_t1827 * __this, Object_t* ___progress, CancellationToken_t1753  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseFile::SaveAsync(System.Threading.Tasks.Task,System.IProgress`1<Parse.ParseUploadProgressEventArgs>,System.Threading.CancellationToken)
extern "C" Task_t344 * ParseFile_SaveAsync_m8348 (ParseFile_t1827 * __this, Task_t344 * ___toAwait, Object_t* ___progress, CancellationToken_t1753  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
