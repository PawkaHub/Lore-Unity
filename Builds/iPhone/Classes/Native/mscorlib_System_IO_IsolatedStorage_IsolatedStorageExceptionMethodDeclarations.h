#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.IO.IsolatedStorage.IsolatedStorageException
struct IsolatedStorageException_t5291;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3296;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.IO.IsolatedStorage.IsolatedStorageException::.ctor()
extern "C" void IsolatedStorageException__ctor_m20498 (IsolatedStorageException_t5291 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.IsolatedStorage.IsolatedStorageException::.ctor(System.String)
extern "C" void IsolatedStorageException__ctor_m20499 (IsolatedStorageException_t5291 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.IsolatedStorage.IsolatedStorageException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void IsolatedStorageException__ctor_m20500 (IsolatedStorageException_t5291 * __this, SerializationInfo_t3296 * ___info, StreamingContext_t3297  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
