#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.FileWebResponse
struct FileWebResponse_t3607;
// System.Net.WebHeaderCollection
struct WebHeaderCollection_t3590;
// System.Uri
struct Uri_t32;
// System.IO.FileStream
struct FileStream_t1348;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1322;
// System.IO.Stream
struct Stream_t1271;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Net.FileWebResponse::.ctor(System.Uri,System.IO.FileStream)
extern "C" void FileWebResponse__ctor_m15538 (FileWebResponse_t3607 * __this, Uri_t32 * ___responseUri, FileStream_t1348 * ___fileStream, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FileWebResponse::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void FileWebResponse__ctor_m15539 (FileWebResponse_t3607 * __this, SerializationInfo_t1322 * ___serializationInfo, StreamingContext_t1323  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FileWebResponse::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void FileWebResponse_System_Runtime_Serialization_ISerializable_GetObjectData_m15540 (FileWebResponse_t3607 * __this, SerializationInfo_t1322 * ___serializationInfo, StreamingContext_t1323  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FileWebResponse::System.IDisposable.Dispose()
extern "C" void FileWebResponse_System_IDisposable_Dispose_m15541 (FileWebResponse_t3607 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebHeaderCollection System.Net.FileWebResponse::get_Headers()
extern "C" WebHeaderCollection_t3590 * FileWebResponse_get_Headers_m15542 (FileWebResponse_t3607 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FileWebResponse::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void FileWebResponse_GetObjectData_m15543 (FileWebResponse_t3607 * __this, SerializationInfo_t1322 * ___serializationInfo, StreamingContext_t1323  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream System.Net.FileWebResponse::GetResponseStream()
extern "C" Stream_t1271 * FileWebResponse_GetResponseStream_m15544 (FileWebResponse_t3607 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FileWebResponse::Finalize()
extern "C" void FileWebResponse_Finalize_m15545 (FileWebResponse_t3607 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FileWebResponse::Close()
extern "C" void FileWebResponse_Close_m15546 (FileWebResponse_t3607 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FileWebResponse::Dispose(System.Boolean)
extern "C" void FileWebResponse_Dispose_m15547 (FileWebResponse_t3607 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FileWebResponse::CheckDisposed()
extern "C" void FileWebResponse_CheckDisposed_m15548 (FileWebResponse_t3607 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
