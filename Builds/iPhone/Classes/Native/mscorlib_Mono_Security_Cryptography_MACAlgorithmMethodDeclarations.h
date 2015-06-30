#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Cryptography.MACAlgorithm
struct MACAlgorithm_t3886;
// System.Security.Cryptography.SymmetricAlgorithm
struct SymmetricAlgorithm_t1207;
// System.Byte[]
struct ByteU5BU5D_t25;

// System.Void Mono.Security.Cryptography.MACAlgorithm::.ctor(System.Security.Cryptography.SymmetricAlgorithm)
extern "C" void MACAlgorithm__ctor_m18087 (MACAlgorithm_t3886 * __this, SymmetricAlgorithm_t1207 * ___algorithm, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.MACAlgorithm::Initialize(System.Byte[])
extern "C" void MACAlgorithm_Initialize_m18088 (MACAlgorithm_t3886 * __this, ByteU5BU5D_t25* ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.MACAlgorithm::Core(System.Byte[],System.Int32,System.Int32)
extern "C" void MACAlgorithm_Core_m18089 (MACAlgorithm_t3886 * __this, ByteU5BU5D_t25* ___rgb, int32_t ___ib, int32_t ___cb, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.MACAlgorithm::Final()
extern "C" ByteU5BU5D_t25* MACAlgorithm_Final_m18090 (MACAlgorithm_t3886 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
