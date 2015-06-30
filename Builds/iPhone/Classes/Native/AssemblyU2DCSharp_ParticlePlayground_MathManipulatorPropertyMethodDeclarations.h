#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// ParticlePlayground.MathManipulatorProperty
struct MathManipulatorProperty_t116;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void ParticlePlayground.MathManipulatorProperty::.ctor()
extern "C" void MathManipulatorProperty__ctor_m517 (MathManipulatorProperty_t116 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ParticlePlayground.MathManipulatorProperty::Update(UnityEngine.Vector3)
extern "C" void MathManipulatorProperty_Update_m518 (MathManipulatorProperty_t116 * __this, Vector3_t53  ___position, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 ParticlePlayground.MathManipulatorProperty::Evaluate(UnityEngine.Vector3,System.Single)
extern "C" Vector3_t53  MathManipulatorProperty_Evaluate_m519 (MathManipulatorProperty_t116 * __this, Vector3_t53  ___inValue, float ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 ParticlePlayground.MathManipulatorProperty::EvaluatePosition(UnityEngine.Vector3,System.Single)
extern "C" Vector3_t53  MathManipulatorProperty_EvaluatePosition_m520 (MathManipulatorProperty_t116 * __this, Vector3_t53  ___inValue, float ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single ParticlePlayground.MathManipulatorProperty::Evaluate(System.Single,System.Single)
extern "C" float MathManipulatorProperty_Evaluate_m521 (MathManipulatorProperty_t116 * __this, float ___inValue, float ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single ParticlePlayground.MathManipulatorProperty::Clamp(System.Single)
extern "C" float MathManipulatorProperty_Clamp_m522 (MathManipulatorProperty_t116 * __this, float ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 ParticlePlayground.MathManipulatorProperty::Clamp(UnityEngine.Vector3)
extern "C" Vector3_t53  MathManipulatorProperty_Clamp_m523 (MathManipulatorProperty_t116 * __this, Vector3_t53  ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 ParticlePlayground.MathManipulatorProperty::ClampPosition(UnityEngine.Vector3)
extern "C" Vector3_t53  MathManipulatorProperty_ClampPosition_m524 (MathManipulatorProperty_t116 * __this, Vector3_t53  ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single ParticlePlayground.MathManipulatorProperty::ClampOut(System.Single)
extern "C" float MathManipulatorProperty_ClampOut_m525 (MathManipulatorProperty_t116 * __this, float ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 ParticlePlayground.MathManipulatorProperty::ClampOut(UnityEngine.Vector3)
extern "C" Vector3_t53  MathManipulatorProperty_ClampOut_m526 (MathManipulatorProperty_t116 * __this, Vector3_t53  ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ParticlePlayground.MathManipulatorProperty ParticlePlayground.MathManipulatorProperty::Clone()
extern "C" MathManipulatorProperty_t116 * MathManipulatorProperty_Clone_m527 (MathManipulatorProperty_t116 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
