﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.HashAlgorithm
struct HashAlgorithm_t1200;
// System.Byte[]
struct ByteU5BU5D_t25;
// System.String
struct String_t;

// System.Void System.Security.Cryptography.HashAlgorithm::.ctor()
extern "C" void HashAlgorithm__ctor_m6590 (HashAlgorithm_t1200 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.HashAlgorithm::System.IDisposable.Dispose()
extern "C" void HashAlgorithm_System_IDisposable_Dispose_m6741 (HashAlgorithm_t1200 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.HashAlgorithm::get_CanReuseTransform()
extern "C" bool HashAlgorithm_get_CanReuseTransform_m6742 (HashAlgorithm_t1200 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.HashAlgorithm::ComputeHash(System.Byte[])
extern "C" ByteU5BU5D_t25* HashAlgorithm_ComputeHash_m6635 (HashAlgorithm_t1200 * __this, ByteU5BU5D_t25* ___buffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.HashAlgorithm::ComputeHash(System.Byte[],System.Int32,System.Int32)
extern "C" ByteU5BU5D_t25* HashAlgorithm_ComputeHash_m6608 (HashAlgorithm_t1200 * __this, ByteU5BU5D_t25* ___buffer, int32_t ___offset, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.HashAlgorithm System.Security.Cryptography.HashAlgorithm::Create(System.String)
extern "C" HashAlgorithm_t1200 * HashAlgorithm_Create_m6607 (Object_t * __this /* static, unused */, String_t* ___hashName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.HashAlgorithm::get_Hash()
extern "C" ByteU5BU5D_t25* HashAlgorithm_get_Hash_m6745 (HashAlgorithm_t1200 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.HashAlgorithm::HashCore(System.Byte[],System.Int32,System.Int32)
// System.Byte[] System.Security.Cryptography.HashAlgorithm::HashFinal()
// System.Int32 System.Security.Cryptography.HashAlgorithm::get_HashSize()
extern "C" int32_t HashAlgorithm_get_HashSize_m6746 (HashAlgorithm_t1200 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.HashAlgorithm::Initialize()
// System.Void System.Security.Cryptography.HashAlgorithm::Dispose(System.Boolean)
extern "C" void HashAlgorithm_Dispose_m6747 (HashAlgorithm_t1200 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.HashAlgorithm::TransformBlock(System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32)
extern "C" int32_t HashAlgorithm_TransformBlock_m6743 (HashAlgorithm_t1200 * __this, ByteU5BU5D_t25* ___inputBuffer, int32_t ___inputOffset, int32_t ___inputCount, ByteU5BU5D_t25* ___outputBuffer, int32_t ___outputOffset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.HashAlgorithm::TransformFinalBlock(System.Byte[],System.Int32,System.Int32)
extern "C" ByteU5BU5D_t25* HashAlgorithm_TransformFinalBlock_m6744 (HashAlgorithm_t1200 * __this, ByteU5BU5D_t25* ___inputBuffer, int32_t ___inputOffset, int32_t ___inputCount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
