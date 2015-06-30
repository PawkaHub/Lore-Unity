#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Math.BigInteger/ModulusRing
struct ModulusRing_t3878;
// Mono.Math.BigInteger
struct BigInteger_t3877;

// System.Void Mono.Math.BigInteger/ModulusRing::.ctor(Mono.Math.BigInteger)
extern "C" void ModulusRing__ctor_m17950 (ModulusRing_t3878 * __this, BigInteger_t3877 * ___modulus, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger/ModulusRing::BarrettReduction(Mono.Math.BigInteger)
extern "C" void ModulusRing_BarrettReduction_m17951 (ModulusRing_t3878 * __this, BigInteger_t3877 * ___x, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Multiply(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t3877 * ModulusRing_Multiply_m17952 (ModulusRing_t3878 * __this, BigInteger_t3877 * ___a, BigInteger_t3877 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Difference(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t3877 * ModulusRing_Difference_m17953 (ModulusRing_t3878 * __this, BigInteger_t3877 * ___a, BigInteger_t3877 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t3877 * ModulusRing_Pow_m17954 (ModulusRing_t3878 * __this, BigInteger_t3877 * ___a, BigInteger_t3877 * ___k, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(System.UInt32,Mono.Math.BigInteger)
extern "C" BigInteger_t3877 * ModulusRing_Pow_m17955 (ModulusRing_t3878 * __this, uint32_t ___b, BigInteger_t3877 * ___exp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
