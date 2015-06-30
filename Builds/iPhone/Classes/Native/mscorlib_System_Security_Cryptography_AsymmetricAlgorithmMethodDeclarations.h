#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t1309;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t25;

// System.Void System.Security.Cryptography.AsymmetricAlgorithm::.ctor()
extern "C" void AsymmetricAlgorithm__ctor_m20065 (AsymmetricAlgorithm_t1309 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.AsymmetricAlgorithm::System.IDisposable.Dispose()
extern "C" void AsymmetricAlgorithm_System_IDisposable_Dispose_m6751 (AsymmetricAlgorithm_t1309 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.AsymmetricAlgorithm::get_KeySize()
extern "C" int32_t AsymmetricAlgorithm_get_KeySize_m6604 (AsymmetricAlgorithm_t1309 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.AsymmetricAlgorithm::set_KeySize(System.Int32)
extern "C" void AsymmetricAlgorithm_set_KeySize_m6603 (AsymmetricAlgorithm_t1309 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.AsymmetricAlgorithm::Clear()
extern "C" void AsymmetricAlgorithm_Clear_m6695 (AsymmetricAlgorithm_t1309 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.AsymmetricAlgorithm::Dispose(System.Boolean)
// System.Void System.Security.Cryptography.AsymmetricAlgorithm::FromXmlString(System.String)
// System.String System.Security.Cryptography.AsymmetricAlgorithm::ToXmlString(System.Boolean)
// System.Byte[] System.Security.Cryptography.AsymmetricAlgorithm::GetNamedParam(System.String,System.String)
extern "C" ByteU5BU5D_t25* AsymmetricAlgorithm_GetNamedParam_m20066 (Object_t * __this /* static, unused */, String_t* ___xml, String_t* ___param, const MethodInfo* method) IL2CPP_METHOD_ATTR;
