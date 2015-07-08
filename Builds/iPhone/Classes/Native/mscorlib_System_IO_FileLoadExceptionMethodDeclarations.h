#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.IO.FileLoadException
struct FileLoadException_t5300;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3296;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.IO.FileLoadException::.ctor()
extern "C" void FileLoadException__ctor_m20551 (FileLoadException_t5300 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileLoadException::.ctor(System.String)
extern "C" void FileLoadException__ctor_m20552 (FileLoadException_t5300 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileLoadException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void FileLoadException__ctor_m20553 (FileLoadException_t5300 * __this, SerializationInfo_t3296 * ___info, StreamingContext_t3297  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.FileLoadException::get_Message()
extern "C" String_t* FileLoadException_get_Message_m20554 (FileLoadException_t5300 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileLoadException::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void FileLoadException_GetObjectData_m20555 (FileLoadException_t5300 * __this, SerializationInfo_t3296 * ___info, StreamingContext_t3297  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.FileLoadException::ToString()
extern "C" String_t* FileLoadException_ToString_m20556 (FileLoadException_t5300 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
