#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// ParticlePlayground.ManipulatorPropertyC
struct ManipulatorPropertyC_t110;
// UnityEngine.GameObject
struct GameObject_t49;
// UnityEngine.Transform
struct Transform_t54;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_Quaternion.h"

// System.Void ParticlePlayground.ManipulatorPropertyC::.ctor()
extern "C" void ManipulatorPropertyC__ctor_m503 (ManipulatorPropertyC_t110 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ParticlePlayground.ManipulatorPropertyC::Update()
extern "C" void ManipulatorPropertyC_Update_m504 (ManipulatorPropertyC_t110 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ParticlePlayground.ManipulatorPropertyC::UpdateMathProperty(UnityEngine.Vector3)
extern "C" void ManipulatorPropertyC_UpdateMathProperty_m505 (ManipulatorPropertyC_t110 * __this, Vector3_t53  ___manipulatorPosition, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ParticlePlayground.ManipulatorPropertyC::UpdateMeshTarget()
extern "C" void ManipulatorPropertyC_UpdateMeshTarget_m506 (ManipulatorPropertyC_t110 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ParticlePlayground.ManipulatorPropertyC::UpdateSkinnedMeshTarget()
extern "C" void ManipulatorPropertyC_UpdateSkinnedMeshTarget_m507 (ManipulatorPropertyC_t110 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ParticlePlayground.ManipulatorPropertyC::SetMeshTarget(UnityEngine.GameObject)
extern "C" void ManipulatorPropertyC_SetMeshTarget_m508 (ManipulatorPropertyC_t110 * __this, GameObject_t49 * ___gameObject, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ParticlePlayground.ManipulatorPropertyC::SetSkinnedMeshTarget(UnityEngine.GameObject)
extern "C" void ManipulatorPropertyC_SetSkinnedMeshTarget_m509 (ManipulatorPropertyC_t110 * __this, GameObject_t49 * ___gameObject, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ParticlePlayground.ManipulatorPropertyC::SplineTargetIsReady()
extern "C" bool ManipulatorPropertyC_SplineTargetIsReady_m510 (ManipulatorPropertyC_t110 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ParticlePlayground.ManipulatorPropertyC::TargetSorting()
extern "C" void ManipulatorPropertyC_TargetSorting_m511 (ManipulatorPropertyC_t110 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ParticlePlayground.ManipulatorPropertyC::SetLocalVelocity(UnityEngine.Quaternion,UnityEngine.Vector3)
extern "C" void ManipulatorPropertyC_SetLocalVelocity_m512 (ManipulatorPropertyC_t110 * __this, Quaternion_t69  ___rotation, Vector3_t53  ___newVelocity, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ParticlePlayground.ManipulatorPropertyC::SetLocalTargetsPosition(UnityEngine.Transform)
extern "C" void ManipulatorPropertyC_SetLocalTargetsPosition_m513 (ManipulatorPropertyC_t110 * __this, Transform_t54 * ___otherTransform, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ParticlePlayground.ManipulatorPropertyC::UpdateTarget(System.Int32)
extern "C" bool ManipulatorPropertyC_UpdateTarget_m514 (ManipulatorPropertyC_t110 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ParticlePlayground.ManipulatorPropertyC ParticlePlayground.ManipulatorPropertyC::Clone()
extern "C" ManipulatorPropertyC_t110 * ManipulatorPropertyC_Clone_m515 (ManipulatorPropertyC_t110 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ParticlePlayground.ManipulatorPropertyC::<Update>m__5()
extern "C" void ManipulatorPropertyC_U3CUpdateU3Em__5_m516 (ManipulatorPropertyC_t110 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
