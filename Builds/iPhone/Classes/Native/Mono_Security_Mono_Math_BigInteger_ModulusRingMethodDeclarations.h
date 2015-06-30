#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Math.BigInteger/ModulusRing
struct ModulusRing_t1180;
// Mono.Math.BigInteger
struct BigInteger_t1179;

// System.Void Mono.Math.BigInteger/ModulusRing::.ctor(Mono.Math.BigInteger)
extern "C" void ModulusRing__ctor_m5694 (ModulusRing_t1180 * __this, BigInteger_t1179 * ___modulus, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger/ModulusRing::BarrettReduction(Mono.Math.BigInteger)
extern "C" void ModulusRing_BarrettReduction_m5695 (ModulusRing_t1180 * __this, BigInteger_t1179 * ___x, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Multiply(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t1179 * ModulusRing_Multiply_m5696 (ModulusRing_t1180 * __this, BigInteger_t1179 * ___a, BigInteger_t1179 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Difference(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t1179 * ModulusRing_Difference_m5697 (ModulusRing_t1180 * __this, BigInteger_t1179 * ___a, BigInteger_t1179 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t1179 * ModulusRing_Pow_m5698 (ModulusRing_t1180 * __this, BigInteger_t1179 * ___a, BigInteger_t1179 * ___k, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(System.UInt32,Mono.Math.BigInteger)
extern "C" BigInteger_t1179 * ModulusRing_Pow_m5699 (ModulusRing_t1180 * __this, uint32_t ___b, BigInteger_t1179 * ___exp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
