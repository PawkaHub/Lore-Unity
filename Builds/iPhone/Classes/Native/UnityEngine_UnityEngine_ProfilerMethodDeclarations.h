#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Profiler
struct Profiler_t4680;
// System.String
struct String_t;

// System.Void UnityEngine.Profiler::BeginSample(System.String)
extern "C" void Profiler_BeginSample_m3484 (Object_t * __this /* static, unused */, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Profiler::BeginSampleOnly(System.String)
extern "C" void Profiler_BeginSampleOnly_m16580 (Object_t * __this /* static, unused */, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Profiler::EndSample()
extern "C" void Profiler_EndSample_m3485 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
