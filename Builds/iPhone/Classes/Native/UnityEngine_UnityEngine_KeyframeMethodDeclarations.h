#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Keyframe
struct Keyframe_t601;

// System.Void UnityEngine.Keyframe::.ctor(System.Single,System.Single)
extern "C" void Keyframe__ctor_m2672 (Keyframe_t601 * __this, float ___time, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Keyframe::.ctor(System.Single,System.Single,System.Single,System.Single)
extern "C" void Keyframe__ctor_m3343 (Keyframe_t601 * __this, float ___time, float ___value, float ___inTangent, float ___outTangent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Keyframe::set_time(System.Single)
extern "C" void Keyframe_set_time_m2594 (Keyframe_t601 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Keyframe::set_value(System.Single)
extern "C" void Keyframe_set_value_m2590 (Keyframe_t601 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Keyframe::set_inTangent(System.Single)
extern "C" void Keyframe_set_inTangent_m2591 (Keyframe_t601 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Keyframe::set_outTangent(System.Single)
extern "C" void Keyframe_set_outTangent_m2592 (Keyframe_t601 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
