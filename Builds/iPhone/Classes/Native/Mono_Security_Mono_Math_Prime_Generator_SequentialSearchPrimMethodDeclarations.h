#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Math.Prime.Generator.SequentialSearchPrimeGeneratorBase
struct SequentialSearchPrimeGeneratorBase_t4558;
// Mono.Math.BigInteger
struct BigInteger_t4552;
// System.Object
struct Object_t;

// System.Void Mono.Math.Prime.Generator.SequentialSearchPrimeGeneratorBase::.ctor()
extern "C" void SequentialSearchPrimeGeneratorBase__ctor_m15732 (SequentialSearchPrimeGeneratorBase_t4558 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.Prime.Generator.SequentialSearchPrimeGeneratorBase::GenerateSearchBase(System.Int32,System.Object)
extern "C" BigInteger_t4552 * SequentialSearchPrimeGeneratorBase_GenerateSearchBase_m15733 (SequentialSearchPrimeGeneratorBase_t4558 * __this, int32_t ___bits, Object_t * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.Prime.Generator.SequentialSearchPrimeGeneratorBase::GenerateNewPrime(System.Int32)
extern "C" BigInteger_t4552 * SequentialSearchPrimeGeneratorBase_GenerateNewPrime_m15734 (SequentialSearchPrimeGeneratorBase_t4558 * __this, int32_t ___bits, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.Prime.Generator.SequentialSearchPrimeGeneratorBase::GenerateNewPrime(System.Int32,System.Object)
extern "C" BigInteger_t4552 * SequentialSearchPrimeGeneratorBase_GenerateNewPrime_m15735 (SequentialSearchPrimeGeneratorBase_t4558 * __this, int32_t ___bits, Object_t * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Math.Prime.Generator.SequentialSearchPrimeGeneratorBase::IsPrimeAcceptable(Mono.Math.BigInteger,System.Object)
extern "C" bool SequentialSearchPrimeGeneratorBase_IsPrimeAcceptable_m15736 (SequentialSearchPrimeGeneratorBase_t4558 * __this, BigInteger_t4552 * ___bi, Object_t * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
