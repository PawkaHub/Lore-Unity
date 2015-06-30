#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// ParticlePlayground.Vector3AnimationCurveC
struct Vector3AnimationCurveC_t99;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void ParticlePlayground.Vector3AnimationCurveC::.ctor()
extern "C" void Vector3AnimationCurveC__ctor_m445 (Vector3AnimationCurveC_t99 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 ParticlePlayground.Vector3AnimationCurveC::Evaluate(System.Single)
extern "C" Vector3_t53  Vector3AnimationCurveC_Evaluate_m446 (Vector3AnimationCurveC_t99 * __this, float ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 ParticlePlayground.Vector3AnimationCurveC::Evaluate(System.Single,System.Single)
extern "C" Vector3_t53  Vector3AnimationCurveC_Evaluate_m447 (Vector3AnimationCurveC_t99 * __this, float ___time, float ___scale, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ParticlePlayground.Vector3AnimationCurveC::HasKeys()
extern "C" bool Vector3AnimationCurveC_HasKeys_m448 (Vector3AnimationCurveC_t99 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ParticlePlayground.Vector3AnimationCurveC::SetKeyValues(System.Int32,System.Single)
extern "C" void Vector3AnimationCurveC_SetKeyValues_m449 (Vector3AnimationCurveC_t99 * __this, int32_t ___key, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ParticlePlayground.Vector3AnimationCurveC::SetKeyValues(System.Int32,UnityEngine.Vector3,System.Single,System.Single)
extern "C" void Vector3AnimationCurveC_SetKeyValues_m450 (Vector3AnimationCurveC_t99 * __this, int32_t ___key, Vector3_t53  ___value, float ___inTangent, float ___outTangent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ParticlePlayground.Vector3AnimationCurveC::Reset()
extern "C" void Vector3AnimationCurveC_Reset_m451 (Vector3AnimationCurveC_t99 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ParticlePlayground.Vector3AnimationCurveC::Reset1()
extern "C" void Vector3AnimationCurveC_Reset1_m452 (Vector3AnimationCurveC_t99 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ParticlePlayground.Vector3AnimationCurveC::ResetWithMidKey()
extern "C" void Vector3AnimationCurveC_ResetWithMidKey_m453 (Vector3AnimationCurveC_t99 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ParticlePlayground.Vector3AnimationCurveC::CheckNull()
extern "C" void Vector3AnimationCurveC_CheckNull_m454 (Vector3AnimationCurveC_t99 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ParticlePlayground.Vector3AnimationCurveC ParticlePlayground.Vector3AnimationCurveC::Clone()
extern "C" Vector3AnimationCurveC_t99 * Vector3AnimationCurveC_Clone_m455 (Vector3AnimationCurveC_t99 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
