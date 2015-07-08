#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Math.BigInteger/ModulusRing
struct ModulusRing_t4553;
// Mono.Math.BigInteger
struct BigInteger_t4552;

// System.Void Mono.Math.BigInteger/ModulusRing::.ctor(Mono.Math.BigInteger)
extern "C" void ModulusRing__ctor_m15661 (ModulusRing_t4553 * __this, BigInteger_t4552 * ___modulus, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger/ModulusRing::BarrettReduction(Mono.Math.BigInteger)
extern "C" void ModulusRing_BarrettReduction_m15662 (ModulusRing_t4553 * __this, BigInteger_t4552 * ___x, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Multiply(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t4552 * ModulusRing_Multiply_m15663 (ModulusRing_t4553 * __this, BigInteger_t4552 * ___a, BigInteger_t4552 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Difference(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t4552 * ModulusRing_Difference_m15664 (ModulusRing_t4553 * __this, BigInteger_t4552 * ___a, BigInteger_t4552 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t4552 * ModulusRing_Pow_m15665 (ModulusRing_t4553 * __this, BigInteger_t4552 * ___a, BigInteger_t4552 * ___k, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(System.UInt32,Mono.Math.BigInteger)
extern "C" BigInteger_t4552 * ModulusRing_Pow_m15666 (ModulusRing_t4553 * __this, uint32_t ___b, BigInteger_t4552 * ___exp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
