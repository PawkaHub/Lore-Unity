#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.ParseFile
struct ParseFile_t1441;
// System.String
struct String_t;
// System.Uri
struct Uri_t32;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t1430;
// System.Threading.Tasks.Task
struct Task_t1418;
// System.IProgress`1<Parse.ParseUploadProgressEventArgs>
struct IProgress_1_t1442;
// System.Threading.CancellationToken
#include "Parse_Unity_System_Threading_CancellationToken.h"

// System.Void Parse.ParseFile::.ctor(System.String,System.Uri,System.String)
extern "C" void ParseFile__ctor_m6956 (ParseFile_t1441 * __this, String_t* ___name, Uri_t32 * ___uri, String_t* ___mimeType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseFile::get_IsDirty()
extern "C" bool ParseFile_get_IsDirty_m6957 (ParseFile_t1441 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.ParseFile::get_Name()
extern "C" String_t* ParseFile_get_Name_m6958 (ParseFile_t1441 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri Parse.ParseFile::get_Url()
extern "C" Uri_t32 * ParseFile_get_Url_m6959 (ParseFile_t1441 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.ParseFile::ToJSON()
extern "C" Object_t* ParseFile_ToJSON_m6960 (ParseFile_t1441 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseFile::MergeFromJSON(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C" void ParseFile_MergeFromJSON_m6961 (ParseFile_t1441 * __this, Object_t* ___jsonData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseFile::SaveAsync(System.Threading.CancellationToken)
extern "C" Task_t1418 * ParseFile_SaveAsync_m6962 (ParseFile_t1441 * __this, CancellationToken_t1398  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseFile::SaveAsync(System.IProgress`1<Parse.ParseUploadProgressEventArgs>,System.Threading.CancellationToken)
extern "C" Task_t1418 * ParseFile_SaveAsync_m6963 (ParseFile_t1441 * __this, Object_t* ___progress, CancellationToken_t1398  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseFile::SaveAsync(System.Threading.Tasks.Task,System.IProgress`1<Parse.ParseUploadProgressEventArgs>,System.Threading.CancellationToken)
extern "C" Task_t1418 * ParseFile_SaveAsync_m6964 (ParseFile_t1441 * __this, Task_t1418 * ___toAwait, Object_t* ___progress, CancellationToken_t1398  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
