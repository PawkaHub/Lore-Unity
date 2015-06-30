#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// ParticlePlayground.SimplexNoise
struct SimplexNoise_t120;
// System.Int32[]
struct Int32U5BU5D_t119;

// System.Void ParticlePlayground.SimplexNoise::.ctor()
extern "C" void SimplexNoise__ctor_m785 (SimplexNoise_t120 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ParticlePlayground.SimplexNoise::.cctor()
extern "C" void SimplexNoise__cctor_m786 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ParticlePlayground.SimplexNoise::fastfloor(System.Double)
extern "C" int32_t SimplexNoise_fastfloor_m787 (Object_t * __this /* static, unused */, double ___x, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double ParticlePlayground.SimplexNoise::dot(System.Int32[],System.Double,System.Double)
extern "C" double SimplexNoise_dot_m788 (Object_t * __this /* static, unused */, Int32U5BU5D_t119* ___g, double ___x, double ___y, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double ParticlePlayground.SimplexNoise::dot(System.Int32[],System.Double,System.Double,System.Double)
extern "C" double SimplexNoise_dot_m789 (Object_t * __this /* static, unused */, Int32U5BU5D_t119* ___g, double ___x, double ___y, double ___z, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double ParticlePlayground.SimplexNoise::dot(System.Int32[],System.Double,System.Double,System.Double,System.Double)
extern "C" double SimplexNoise_dot_m790 (Object_t * __this /* static, unused */, Int32U5BU5D_t119* ___g, double ___x, double ___y, double ___z, double ___w, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double ParticlePlayground.SimplexNoise::noise(System.Double,System.Double,System.Double)
extern "C" double SimplexNoise_noise_m791 (SimplexNoise_t120 * __this, double ___xin, double ___yin, double ___zin, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double ParticlePlayground.SimplexNoise::noise(System.Double,System.Double,System.Double,System.Double)
extern "C" double SimplexNoise_noise_m792 (SimplexNoise_t120 * __this, double ___x, double ___y, double ___z, double ___w, const MethodInfo* method) IL2CPP_METHOD_ATTR;
