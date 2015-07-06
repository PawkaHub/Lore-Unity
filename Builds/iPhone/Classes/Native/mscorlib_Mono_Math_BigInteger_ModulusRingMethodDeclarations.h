#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Math.BigInteger/ModulusRing
struct ModulusRing_t4968;
// Mono.Math.BigInteger
struct BigInteger_t4967;

// System.Void Mono.Math.BigInteger/ModulusRing::.ctor(Mono.Math.BigInteger)
extern "C" void ModulusRing__ctor_m19235 (ModulusRing_t4968 * __this, BigInteger_t4967 * ___modulus, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger/ModulusRing::BarrettReduction(Mono.Math.BigInteger)
extern "C" void ModulusRing_BarrettReduction_m19236 (ModulusRing_t4968 * __this, BigInteger_t4967 * ___x, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Multiply(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t4967 * ModulusRing_Multiply_m19237 (ModulusRing_t4968 * __this, BigInteger_t4967 * ___a, BigInteger_t4967 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Difference(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t4967 * ModulusRing_Difference_m19238 (ModulusRing_t4968 * __this, BigInteger_t4967 * ___a, BigInteger_t4967 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t4967 * ModulusRing_Pow_m19239 (ModulusRing_t4968 * __this, BigInteger_t4967 * ___a, BigInteger_t4967 * ___k, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(System.UInt32,Mono.Math.BigInteger)
extern "C" BigInteger_t4967 * ModulusRing_Pow_m19240 (ModulusRing_t4968 * __this, uint32_t ___b, BigInteger_t4967 * ___exp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
