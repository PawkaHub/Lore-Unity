#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Random
struct Random_t81;

// System.Void System.Random::.ctor()
extern "C" void Random__ctor_m2691 (Random_t81 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Random::.ctor(System.Int32)
extern "C" void Random__ctor_m11398 (Random_t81 * __this, int32_t ___Seed, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Random::Sample()
extern "C" double Random_Sample_m23222 (Random_t81 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Random::Next()
extern "C" int32_t Random_Next_m23223 (Random_t81 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Random::Next(System.Int32)
extern "C" int32_t Random_Next_m23224 (Random_t81 * __this, int32_t ___maxValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Random::Next(System.Int32,System.Int32)
extern "C" int32_t Random_Next_m23225 (Random_t81 * __this, int32_t ___minValue, int32_t ___maxValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Random::NextDouble()
extern "C" double Random_NextDouble_m23226 (Random_t81 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
