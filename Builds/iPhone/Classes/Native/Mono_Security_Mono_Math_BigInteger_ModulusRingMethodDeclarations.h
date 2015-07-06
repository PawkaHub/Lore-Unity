#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Math.BigInteger/ModulusRing
struct ModulusRing_t4315;
// Mono.Math.BigInteger
struct BigInteger_t4314;

// System.Void Mono.Math.BigInteger/ModulusRing::.ctor(Mono.Math.BigInteger)
extern "C" void ModulusRing__ctor_m15242 (ModulusRing_t4315 * __this, BigInteger_t4314 * ___modulus, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger/ModulusRing::BarrettReduction(Mono.Math.BigInteger)
extern "C" void ModulusRing_BarrettReduction_m15243 (ModulusRing_t4315 * __this, BigInteger_t4314 * ___x, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Multiply(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t4314 * ModulusRing_Multiply_m15244 (ModulusRing_t4315 * __this, BigInteger_t4314 * ___a, BigInteger_t4314 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Difference(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t4314 * ModulusRing_Difference_m15245 (ModulusRing_t4315 * __this, BigInteger_t4314 * ___a, BigInteger_t4314 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t4314 * ModulusRing_Pow_m15246 (ModulusRing_t4315 * __this, BigInteger_t4314 * ___a, BigInteger_t4314 * ___k, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(System.UInt32,Mono.Math.BigInteger)
extern "C" BigInteger_t4314 * ModulusRing_Pow_m15247 (ModulusRing_t4315 * __this, uint32_t ___b, BigInteger_t4314 * ___exp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
