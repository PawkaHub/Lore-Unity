#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// ParticlePlayground.PaintObjectC
struct PaintObjectC_t86;
// UnityEngine.Transform
struct Transform_t54;
// UnityEngine.Ray
#include "UnityEngine_UnityEngine_Ray.h"
// UnityEngine.Color32
#include "UnityEngine_UnityEngine_Color32.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_Quaternion.h"

// System.Void ParticlePlayground.PaintObjectC::.ctor()
extern "C" void PaintObjectC__ctor_m389 (PaintObjectC_t86 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ParticlePlayground.PaintObjectC::Initialize()
extern "C" void PaintObjectC_Initialize_m390 (PaintObjectC_t86 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ParticlePlayground.PaintObjectC::Paint(UnityEngine.Ray,UnityEngine.Color32)
extern "C" bool PaintObjectC_Paint_m391 (PaintObjectC_t86 * __this, Ray_t319  ___ray, Color32_t89  ___color, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ParticlePlayground.PaintObjectC::Paint(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Transform,UnityEngine.Color32)
extern "C" int32_t PaintObjectC_Paint_m392 (PaintObjectC_t86 * __this, Vector3_t53  ___pos, Vector3_t53  ___norm, Transform_t54 * ___parent, Color32_t89  ___color, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ParticlePlayground.PaintObjectC::Erase(UnityEngine.Vector3,System.Single)
extern "C" bool PaintObjectC_Erase_m393 (PaintObjectC_t86 * __this, Vector3_t53  ___pos, float ___radius, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ParticlePlayground.PaintObjectC::Erase(System.Int32)
extern "C" bool PaintObjectC_Erase_m394 (PaintObjectC_t86 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 ParticlePlayground.PaintObjectC::GetPosition(System.Int32)
extern "C" Vector3_t53  PaintObjectC_GetPosition_m395 (PaintObjectC_t86 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color32 ParticlePlayground.PaintObjectC::GetColor(System.Int32)
extern "C" Color32_t89  PaintObjectC_GetColor_m396 (PaintObjectC_t86 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 ParticlePlayground.PaintObjectC::GetNormal(System.Int32)
extern "C" Vector3_t53  PaintObjectC_GetNormal_m397 (PaintObjectC_t86 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform ParticlePlayground.PaintObjectC::GetParent(System.Int32)
extern "C" Transform_t54 * PaintObjectC_GetParent_m398 (PaintObjectC_t86 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion ParticlePlayground.PaintObjectC::GetRotation(System.Int32)
extern "C" Quaternion_t69  PaintObjectC_GetRotation_m399 (PaintObjectC_t86 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ParticlePlayground.PaintObjectC::Update()
extern "C" void PaintObjectC_Update_m400 (PaintObjectC_t86 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ParticlePlayground.PaintObjectC::Update(System.Int32)
extern "C" void PaintObjectC_Update_m401 (PaintObjectC_t86 * __this, int32_t ___thisPosition, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ParticlePlayground.PaintObjectC::RemoveNonParented()
extern "C" void PaintObjectC_RemoveNonParented_m402 (PaintObjectC_t86 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ParticlePlayground.PaintObjectC::RemoveNonParented(System.Int32)
extern "C" bool PaintObjectC_RemoveNonParented_m403 (PaintObjectC_t86 * __this, int32_t ___thisPosition, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ParticlePlayground.PaintObjectC::ClearPaint()
extern "C" void PaintObjectC_ClearPaint_m404 (PaintObjectC_t86 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ParticlePlayground.PaintObjectC ParticlePlayground.PaintObjectC::Clone()
extern "C" PaintObjectC_t86 * PaintObjectC_Clone_m405 (PaintObjectC_t86 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
