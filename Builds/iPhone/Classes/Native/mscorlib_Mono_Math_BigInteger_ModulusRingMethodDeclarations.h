#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Math.BigInteger/ModulusRing
struct ModulusRing_t5206;
// Mono.Math.BigInteger
struct BigInteger_t5205;

// System.Void Mono.Math.BigInteger/ModulusRing::.ctor(Mono.Math.BigInteger)
extern "C" void ModulusRing__ctor_m19652 (ModulusRing_t5206 * __this, BigInteger_t5205 * ___modulus, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger/ModulusRing::BarrettReduction(Mono.Math.BigInteger)
extern "C" void ModulusRing_BarrettReduction_m19653 (ModulusRing_t5206 * __this, BigInteger_t5205 * ___x, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Multiply(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t5205 * ModulusRing_Multiply_m19654 (ModulusRing_t5206 * __this, BigInteger_t5205 * ___a, BigInteger_t5205 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Difference(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t5205 * ModulusRing_Difference_m19655 (ModulusRing_t5206 * __this, BigInteger_t5205 * ___a, BigInteger_t5205 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t5205 * ModulusRing_Pow_m19656 (ModulusRing_t5206 * __this, BigInteger_t5205 * ___a, BigInteger_t5205 * ___k, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(System.UInt32,Mono.Math.BigInteger)
extern "C" BigInteger_t5205 * ModulusRing_Pow_m19657 (ModulusRing_t5206 * __this, uint32_t ___b, BigInteger_t5205 * ___exp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
