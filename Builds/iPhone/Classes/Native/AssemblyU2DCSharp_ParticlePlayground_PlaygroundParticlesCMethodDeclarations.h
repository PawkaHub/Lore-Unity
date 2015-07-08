#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// ParticlePlayground.PlaygroundParticlesC
struct PlaygroundParticlesC_t126;
// ParticlePlayground.SimplexNoise
struct SimplexNoise_t120;
// UnityEngine.Transform
struct Transform_t54;
// ParticlePlayground.ManipulatorObjectC
struct ManipulatorObjectC_t115;
// UnityEngine.Texture2D[]
struct Texture2DU5BU5D_t618;
// System.String
struct String_t;
// UnityEngine.Material
struct Material_t48;
// ParticlePlayground.WorldObject
struct WorldObject_t104;
// ParticlePlayground.SkinnedWorldObject
struct SkinnedWorldObject_t109;
// ParticlePlayground.PaintObjectC
struct PaintObjectC_t86;
// ParticlePlayground.ParticleProjectionC
struct ParticleProjectionC_t96;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t92;
// ParticlePlayground.ParticleStateC
struct ParticleStateC_t94;
// UnityEngine.Texture2D
struct Texture2D_t90;
// System.Random
struct Random_t81;
// ParticlePlayground.PlaygroundParticlesC[]
struct PlaygroundParticlesCU5BU5D_t178;
// UnityEngine.AnimationCurve
struct AnimationCurve_t98;
struct AnimationCurve_t98_marshaled;
// ParticlePlayground.ManipulatorPropertyC
struct ManipulatorPropertyC_t110;
// System.Single[]
struct SingleU5BU5D_t168;
// UnityEngine.Collider
struct Collider_t194;
// UnityEngine.Collider2D
struct Collider2D_t195;
// ParticlePlayground.PlaygroundEventParticle
struct PlaygroundEventParticle_t114;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Color32
#include "UnityEngine_UnityEngine_Color32.h"
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_Quaternion.h"
// ParticlePlayground.MANIPULATORTYPEC
#include "AssemblyU2DCSharp_ParticlePlayground_MANIPULATORTYPEC.h"
// UnityEngine.LayerMask
#include "UnityEngine_UnityEngine_LayerMask.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// ParticlePlayground.SORTINGC
#include "AssemblyU2DCSharp_ParticlePlayground_SORTINGC.h"
// ParticlePlayground.TURBULENCETYPE
#include "AssemblyU2DCSharp_ParticlePlayground_TURBULENCETYPE.h"
// ParticlePlayground.EVENTTYPEC
#include "AssemblyU2DCSharp_ParticlePlayground_EVENTTYPEC.h"
// ParticlePlayground.INDIVIDUALTRANSITIONTYPEC
#include "AssemblyU2DCSharp_ParticlePlayground_INDIVIDUALTRANSITIONTYP.h"

// System.Void ParticlePlayground.PlaygroundParticlesC::.ctor()
extern "C" void PlaygroundParticlesC__ctor_m610 (PlaygroundParticlesC_t126 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ParticlePlayground.PlaygroundParticlesC::CopyTo(ParticlePlayground.PlaygroundParticlesC)
extern "C" void PlaygroundParticlesC_CopyTo_m611 (PlaygroundParticlesC_t126 * __this, PlaygroundParticlesC_t126 * ___playgroundParticles, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ParticlePlayground.PlaygroundParticlesC::CopySaveDataTo(ParticlePlayground.PlaygroundParticlesC)
extern "C" void PlaygroundParticlesC_CopySaveDataTo_m612 (PlaygroundParticlesC_t126 * __this, PlaygroundParticlesC_t126 * ___playgroundParticles, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ParticlePlayground.PlaygroundParticlesC::Emit(System.Boolean)
extern "C" void PlaygroundParticlesC_Emit_m613 (PlaygroundParticlesC_t126 * __this, bool ___setEmission, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ParticlePlayground.PlaygroundParticlesC::Emit()
extern "C" int32_t PlaygroundParticlesC_Emit_m614 (PlaygroundParticlesC_t126 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ParticlePlayground.PlaygroundParticlesC::Emit(UnityEngine.Vector3)
extern "C" int32_t PlaygroundParticlesC_Emit_m615 (PlaygroundParticlesC_t126 * __this, Vector3_t53  ___givePosition, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ParticlePlayground.PlaygroundParticlesC::Emit(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" int32_t PlaygroundParticlesC_Emit_m616 (PlaygroundParticlesC_t126 * __this, Vector3_t53  ___givePosition, Vector3_t53  ___giveVelocity, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ParticlePlayground.PlaygroundParticlesC::Emit(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Color32)
extern "C" int32_t PlaygroundParticlesC_Emit_m617 (PlaygroundParticlesC_t126 * __this, Vector3_t53  ___givePosition, Vector3_t53  ___giveVelocity, Color32_t89  ___giveColor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ParticlePlayground.PlaygroundParticlesC::Emit(System.Int32)
extern "C" void PlaygroundParticlesC_Emit_m618 (PlaygroundParticlesC_t126 * __this, int32_t ___quantity, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ParticlePlayground.PlaygroundParticlesC::Emit(System.Int32,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Color32)
extern "C" void PlaygroundParticlesC_Emit_m619 (PlaygroundParticlesC_t126 * __this, int32_t ___quantity, Vector3_t53  ___givePosition, Vector3_t53  ___randomVelocityMin, Vector3_t53  ___randomVelocityMax, Color32_t89  ___giveColor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ParticlePlayground.PlaygroundParticlesC::Emit(System.Int32,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Color32)
extern "C" void PlaygroundParticlesC_Emit_m620 (PlaygroundParticlesC_t126 * __this, int32_t ___quantity, Vector3_t53  ___randomPositionMin, Vector3_t53  ___randomPositionMax, Vector3_t53  ___randomVelocityMin, Vector3_t53  ___randomVelocityMax, Color32_t89  ___giveColor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ParticlePlayground.PlaygroundParticlesC::Emit(System.Single)
extern "C" int32_t PlaygroundParticlesC_Emit_m621 (PlaygroundParticlesC_t126 * __this, float ___giveLifetime, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ParticlePlayground.PlaygroundParticlesC::Emit(UnityEngine.Vector3,System.Single)
extern "C" int32_t PlaygroundParticlesC_Emit_m622 (PlaygroundParticlesC_t126 * __this, Vector3_t53  ___givePosition, float ___giveLifetime, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ParticlePlayground.PlaygroundParticlesC::Emit(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
extern "C" int32_t PlaygroundParticlesC_Emit_m623 (PlaygroundParticlesC_t126 * __this, Vector3_t53  ___givePosition, Vector3_t53  ___giveVelocity, float ___giveLifetime, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ParticlePlayground.PlaygroundParticlesC::Emit(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,UnityEngine.Color32)
extern "C" int32_t PlaygroundParticlesC_Emit_m624 (PlaygroundParticlesC_t126 * __this, Vector3_t53  ___givePosition, Vector3_t53  ___giveVelocity, float ___giveLifetime, Color32_t89  ___giveColor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ParticlePlayground.PlaygroundParticlesC::ThreadSafeEmit(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Color32)
extern "C" void PlaygroundParticlesC_ThreadSafeEmit_m625 (PlaygroundParticlesC_t126 * __this, Vector3_t53  ___givePosition, Vector3_t53  ___giveVelocity, Color32_t89  ___giveColor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ParticlePlayground.PlaygroundParticlesC::ThreadSafeEmit(System.Int32,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Color32)
extern "C" void PlaygroundParticlesC_ThreadSafeEmit_m626 (PlaygroundParticlesC_t126 * __this, int32_t ___quantity, Vector3_t53  ___givePosition, Vector3_t53  ___randomVelocityMin, Vector3_t53  ___randomVelocityMax, Color32_t89  ___giveColor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ParticlePlayground.PlaygroundParticlesC::EmitProcedure(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Color32)
extern "C" void PlaygroundParticlesC_EmitProcedure_m627 (PlaygroundParticlesC_t126 * __this, Vector3_t53  ___givePosition, Vector3_t53  ___giveVelocity, Color32_t89  ___giveColor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ParticlePlayground.PlaygroundParticlesC::IsAlive()
extern "C" bool PlaygroundParticlesC_IsAlive_m628 (PlaygroundParticlesC_t126 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ParticlePlayground.PlaygroundParticlesC::IsLocalSpace()
extern "C" bool PlaygroundParticlesC_IsLocalSpace_m629 (PlaygroundParticlesC_t126 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ParticlePlayground.PlaygroundParticlesC::InTransition()
extern "C" bool PlaygroundParticlesC_InTransition_m630 (PlaygroundParticlesC_t126 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ParticlePlayground.PlaygroundParticlesC::IsLoading()
extern "C" bool PlaygroundParticlesC_IsLoading_m631 (PlaygroundParticlesC_t126 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ParticlePlayground.PlaygroundParticlesC::IsSaving()
extern "C" bool PlaygroundParticlesC_IsSaving_m632 (PlaygroundParticlesC_t126 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ParticlePlayground.PlaygroundParticlesC::IsReady()
extern "C" bool PlaygroundParticlesC_IsReady_m633 (PlaygroundParticlesC_t126 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ParticlePlayground.PlaygroundParticlesC::Initialized()
extern "C" bool PlaygroundParticlesC_Initialized_m634 (PlaygroundParticlesC_t126 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ParticlePlayground.PlaygroundParticlesC::IsYieldRefreshing()
extern "C" bool PlaygroundParticlesC_IsYieldRefreshing_m635 (PlaygroundParticlesC_t126 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ParticlePlayground.PlaygroundParticlesC::IsSettingParticleTime()
extern "C" bool PlaygroundParticlesC_IsSettingParticleTime_m636 (PlaygroundParticlesC_t126 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ParticlePlayground.PlaygroundParticlesC::get_IsDoneThread()
extern "C" bool PlaygroundParticlesC_get_IsDoneThread_m637 (PlaygroundParticlesC_t126 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ParticlePlayground.PlaygroundParticlesC::set_IsDoneThread(System.Boolean)
extern "C" void PlaygroundParticlesC_set_IsDoneThread_m638 (PlaygroundParticlesC_t126 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ParticlePlayground.PlaygroundParticlesC::IsSkinnedWorldObjectReady()
extern "C" bool PlaygroundParticlesC_IsSkinnedWorldObjectReady_m639 (PlaygroundParticlesC_t126 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ParticlePlayground.PlaygroundParticlesC::HasTurbulence()
extern "C" bool PlaygroundParticlesC_HasTurbulence_m640 (PlaygroundParticlesC_t126 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ParticlePlayground.PlaygroundParticlesC::HasOverflow()
extern "C" bool PlaygroundParticlesC_HasOverflow_m641 (PlaygroundParticlesC_t126 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ParticlePlayground.PlaygroundParticlesC::HasGlobalManipulator()
extern "C" bool PlaygroundParticlesC_HasGlobalManipulator_m642 (PlaygroundParticlesC_t126 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ParticlePlayground.PlaygroundParticlesC::GetLayer()
extern "C" int32_t PlaygroundParticlesC_GetLayer_m643 (PlaygroundParticlesC_t126 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ParticlePlayground.PlaygroundParticlesC::IsReportingBadUpdateRate()
extern "C" bool PlaygroundParticlesC_IsReportingBadUpdateRate_m644 (PlaygroundParticlesC_t126 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single ParticlePlayground.PlaygroundParticlesC::GetDeltaTime()
extern "C" float PlaygroundParticlesC_GetDeltaTime_m645 (PlaygroundParticlesC_t126 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single ParticlePlayground.PlaygroundParticlesC::get_LastTimeUpdated()
extern "C" float PlaygroundParticlesC_get_LastTimeUpdated_m646 (PlaygroundParticlesC_t126 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ParticlePlayground.PlaygroundParticlesC::set_LastTimeUpdated(System.Single)
extern "C" void PlaygroundParticlesC_set_LastTimeUpdated_m647 (PlaygroundParticlesC_t126 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ParticlePlayground.SimplexNoise ParticlePlayground.PlaygroundParticlesC::GetSimplex()
extern "C" SimplexNoise_t120 * PlaygroundParticlesC_GetSimplex_m648 (PlaygroundParticlesC_t126 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ParticlePlayground.PlaygroundParticlesC::Kill(System.Int32)
extern "C" void PlaygroundParticlesC_Kill_m649 (PlaygroundParticlesC_t126 * __this, int32_t ___p, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ParticlePlayground.PlaygroundParticlesC::KillAndSendManipulatorDeathEvents(System.Int32)
extern "C" void PlaygroundParticlesC_KillAndSendManipulatorDeathEvents_m650 (PlaygroundParticlesC_t126 * __this, int32_t ___p, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ParticlePlayground.PlaygroundParticlesC::SetNoForce(System.Int32,System.Boolean)
extern "C" void PlaygroundParticlesC_SetNoForce_m651 (PlaygroundParticlesC_t126 * __this, int32_t ___p, bool ___noForce, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ParticlePlayground.PlaygroundParticlesC::NoForce(System.Int32)
extern "C" bool PlaygroundParticlesC_NoForce_m652 (PlaygroundParticlesC_t126 * __this, int32_t ___p, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ParticlePlayground.PlaygroundParticlesC::Translate(System.Int32,UnityEngine.Vector3)
extern "C" void PlaygroundParticlesC_Translate_m653 (PlaygroundParticlesC_t126 * __this, int32_t ___p, Vector3_t53  ___translation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ParticlePlayground.PlaygroundParticlesC::Position(System.Int32,UnityEngine.Vector3)
extern "C" void PlaygroundParticlesC_Position_m654 (PlaygroundParticlesC_t126 * __this, int32_t ___p, Vector3_t53  ___position, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ParticlePlayground.PlaygroundParticlesC::PositionToTransformPoint(System.Int32,UnityEngine.Vector3,UnityEngine.Transform)
extern "C" void PlaygroundParticlesC_PositionToTransformPoint_m655 (PlaygroundParticlesC_t126 * __this, int32_t ___p, Vector3_t53  ___position, Transform_t54 * ___targetTransform, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ParticlePlayground.PlaygroundParticlesC::PositionToInverseTransformPoint(System.Int32,UnityEngine.Vector3,UnityEngine.Transform)
extern "C" void PlaygroundParticlesC_PositionToInverseTransformPoint_m656 (PlaygroundParticlesC_t126 * __this, int32_t ___p, Vector3_t53  ___position, Transform_t54 * ___targetTransform, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 ParticlePlayground.PlaygroundParticlesC::GetParticlePosition(System.Int32)
extern "C" Vector3_t53  PlaygroundParticlesC_GetParticlePosition_m657 (PlaygroundParticlesC_t126 * __this, int32_t ___p, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ParticlePlayground.PlaygroundParticlesC::SetHasActiveParticles()
extern "C" void PlaygroundParticlesC_SetHasActiveParticles_m658 (PlaygroundParticlesC_t126 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ParticlePlayground.PlaygroundParticlesC::HasSeveralManipulatorEvents()
extern "C" bool PlaygroundParticlesC_HasSeveralManipulatorEvents_m659 (PlaygroundParticlesC_t126 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ParticlePlayground.PlaygroundParticlesC::ProtectParticleFromManipulator(System.Int32,ParticlePlayground.ManipulatorObjectC)
extern "C" void PlaygroundParticlesC_ProtectParticleFromManipulator_m660 (PlaygroundParticlesC_t126 * __this, int32_t ___particle, ManipulatorObjectC_t115 * ___manipulator, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ParticlePlayground.PlaygroundParticlesC::RemoveParticleProtection(System.Int32)
extern "C" void PlaygroundParticlesC_RemoveParticleProtection_m661 (PlaygroundParticlesC_t126 * __this, int32_t ___particle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ParticlePlayground.PlaygroundParticlesC::IsSettingLifetime()
extern "C" bool PlaygroundParticlesC_IsSettingLifetime_m662 (PlaygroundParticlesC_t126 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ParticlePlayground.PlaygroundParticlesC::IsPrewarming()
extern "C" bool PlaygroundParticlesC_IsPrewarming_m663 (PlaygroundParticlesC_t126 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ParticlePlayground.PlaygroundParticlesC::IsParticleInsideManipulator(System.Int32,ParticlePlayground.ManipulatorObjectC)
extern "C" bool PlaygroundParticlesC_IsParticleInsideManipulator_m664 (PlaygroundParticlesC_t126 * __this, int32_t ___particleId, ManipulatorObjectC_t115 * ___manipulator, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ParticlePlayground.PlaygroundParticlesC::GetSplineIndex()
extern "C" int32_t PlaygroundParticlesC_GetSplineIndex_m665 (PlaygroundParticlesC_t126 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ParticlePlayground.PlaygroundParticlesC::GetTransformIndex()
extern "C" int32_t PlaygroundParticlesC_GetTransformIndex_m666 (PlaygroundParticlesC_t126 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ParticlePlayground.PlaygroundParticlesC::RefreshMaskSorting()
extern "C" void PlaygroundParticlesC_RefreshMaskSorting_m667 (PlaygroundParticlesC_t126 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ParticlePlayground.PlaygroundParticlesC ParticlePlayground.PlaygroundParticlesC::CreatePlaygroundParticles(UnityEngine.Texture2D[],System.String,UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.Vector3,System.Single,System.Single,UnityEngine.Material)
extern "C" PlaygroundParticlesC_t126 * PlaygroundParticlesC_CreatePlaygroundParticles_m668 (Object_t * __this /* static, unused */, Texture2DU5BU5D_t618* ___images, String_t* ___name, Vector3_t53  ___position, Quaternion_t69  ___rotation, Vector3_t53  ___offset, float ___particleSize, float ___scale, Material_t48 * ___material, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ParticlePlayground.PlaygroundParticlesC::OnCreatePlaygroundParticles(ParticlePlayground.PlaygroundParticlesC)
extern "C" void PlaygroundParticlesC_OnCreatePlaygroundParticles_m669 (Object_t * __this /* static, unused */, PlaygroundParticlesC_t126 * ___playgroundParticles, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ParticlePlayground.PlaygroundParticlesC ParticlePlayground.PlaygroundParticlesC::CreateParticleObject(System.String,UnityEngine.Vector3,UnityEngine.Quaternion,System.Single,UnityEngine.Material)
extern "C" PlaygroundParticlesC_t126 * PlaygroundParticlesC_CreateParticleObject_m670 (Object_t * __this /* static, unused */, String_t* ___name, Vector3_t53  ___position, Quaternion_t69  ___rotation, float ___particleSize, Material_t48 * ___material, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ParticlePlayground.WorldObject ParticlePlayground.PlaygroundParticlesC::NewWorldObject(UnityEngine.Transform)
extern "C" WorldObject_t104 * PlaygroundParticlesC_NewWorldObject_m671 (Object_t * __this /* static, unused */, Transform_t54 * ___meshTransform, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ParticlePlayground.SkinnedWorldObject ParticlePlayground.PlaygroundParticlesC::NewSkinnedWorldObject(UnityEngine.Transform)
extern "C" SkinnedWorldObject_t109 * PlaygroundParticlesC_NewSkinnedWorldObject_m672 (Object_t * __this /* static, unused */, Transform_t54 * ___meshTransform, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ParticlePlayground.SkinnedWorldObject ParticlePlayground.PlaygroundParticlesC::NewSkinnedWorldObject(UnityEngine.Transform,System.Int32)
extern "C" SkinnedWorldObject_t109 * PlaygroundParticlesC_NewSkinnedWorldObject_m673 (Object_t * __this /* static, unused */, Transform_t54 * ___meshTransform, int32_t ___downResolution, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ParticlePlayground.PaintObjectC ParticlePlayground.PlaygroundParticlesC::NewPaintObject(ParticlePlayground.PlaygroundParticlesC)
extern "C" PaintObjectC_t86 * PlaygroundParticlesC_NewPaintObject_m674 (Object_t * __this /* static, unused */, PlaygroundParticlesC_t126 * ___playgroundParticles, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ParticlePlayground.ParticleProjectionC ParticlePlayground.PlaygroundParticlesC::NewProjectionObject(ParticlePlayground.PlaygroundParticlesC)
extern "C" ParticleProjectionC_t96 * PlaygroundParticlesC_NewProjectionObject_m675 (Object_t * __this /* static, unused */, PlaygroundParticlesC_t126 * ___playgroundParticles, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ParticlePlayground.ManipulatorObjectC ParticlePlayground.PlaygroundParticlesC::NewManipulatorObject(ParticlePlayground.MANIPULATORTYPEC,UnityEngine.LayerMask,UnityEngine.Transform,System.Single,System.Single,ParticlePlayground.PlaygroundParticlesC)
extern "C" ManipulatorObjectC_t115 * PlaygroundParticlesC_NewManipulatorObject_m676 (Object_t * __this /* static, unused */, int32_t ___type, LayerMask_t87  ___affects, Transform_t54 * ___manipulatorTransform, float ___size, float ___strength, PlaygroundParticlesC_t126 * ___playgroundParticles, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ParticlePlayground.PlaygroundParticlesC::SetColor(ParticlePlayground.PlaygroundParticlesC,System.Int32)
extern "C" void PlaygroundParticlesC_SetColor_m677 (Object_t * __this /* static, unused */, PlaygroundParticlesC_t126 * ___playgroundParticles, int32_t ___to, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ParticlePlayground.PlaygroundParticlesC::SetColor(ParticlePlayground.PlaygroundParticlesC,UnityEngine.Color)
extern "C" void PlaygroundParticlesC_SetColor_m678 (Object_t * __this /* static, unused */, PlaygroundParticlesC_t126 * ___playgroundParticles, Color_t121  ___color, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ParticlePlayground.PlaygroundParticlesC::GetPosition(ParticlePlayground.SkinnedWorldObject,System.Boolean)
extern "C" void PlaygroundParticlesC_GetPosition_m679 (Object_t * __this /* static, unused */, SkinnedWorldObject_t109 * ___particleStateWorldObject, bool ___updateNormals, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ParticlePlayground.PlaygroundParticlesC::GetPosition(UnityEngine.Vector3[],ParticlePlayground.WorldObject)
extern "C" void PlaygroundParticlesC_GetPosition_m680 (Object_t * __this /* static, unused */, Vector3U5BU5D_t92* ___v3, WorldObject_t104 * ___particleStateWorldObject, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ParticlePlayground.PlaygroundParticlesC::GetProceduralPosition(UnityEngine.Vector3[],ParticlePlayground.WorldObject)
extern "C" void PlaygroundParticlesC_GetProceduralPosition_m681 (Object_t * __this /* static, unused */, Vector3U5BU5D_t92* ___v3, WorldObject_t104 * ___particleStateWorldObject, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ParticlePlayground.PlaygroundParticlesC::GetNormals(UnityEngine.Vector3[],ParticlePlayground.WorldObject)
extern "C" void PlaygroundParticlesC_GetNormals_m682 (Object_t * __this /* static, unused */, Vector3U5BU5D_t92* ___v3, WorldObject_t104 * ___particleStateWorldObject, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ParticlePlayground.PlaygroundParticlesC::SetSize(ParticlePlayground.PlaygroundParticlesC,System.Single)
extern "C" void PlaygroundParticlesC_SetSize_m683 (Object_t * __this /* static, unused */, PlaygroundParticlesC_t126 * ___playgroundParticles, float ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ParticlePlayground.PlaygroundParticlesC::RefreshSystemRandom()
extern "C" void PlaygroundParticlesC_RefreshSystemRandom_m684 (PlaygroundParticlesC_t126 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ParticlePlayground.PlaygroundParticlesC::SetSizeRandom(ParticlePlayground.PlaygroundParticlesC,System.Single,System.Single)
extern "C" void PlaygroundParticlesC_SetSizeRandom_m685 (Object_t * __this /* static, unused */, PlaygroundParticlesC_t126 * ___playgroundParticles, float ___sizeMinimum, float ___sizeMaximum, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ParticlePlayground.PlaygroundParticlesC::SetRotationRandom(ParticlePlayground.PlaygroundParticlesC,System.Single,System.Single)
extern "C" void PlaygroundParticlesC_SetRotationRandom_m686 (Object_t * __this /* static, unused */, PlaygroundParticlesC_t126 * ___playgroundParticles, float ___rotationMinimum, float ___rotationMaximum, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ParticlePlayground.PlaygroundParticlesC::SetInitialRotationRandom(ParticlePlayground.PlaygroundParticlesC,System.Single,System.Single)
extern "C" void PlaygroundParticlesC_SetInitialRotationRandom_m687 (Object_t * __this /* static, unused */, PlaygroundParticlesC_t126 * ___playgroundParticles, float ___rotationMinimum, float ___rotationMaximum, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ParticlePlayground.PlaygroundParticlesC::SetVelocityRandom(ParticlePlayground.PlaygroundParticlesC,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" void PlaygroundParticlesC_SetVelocityRandom_m688 (Object_t * __this /* static, unused */, PlaygroundParticlesC_t126 * ___playgroundParticles, Vector3_t53  ___velocityMinimum, Vector3_t53  ___velocityMaximum, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ParticlePlayground.PlaygroundParticlesC::SetLocalVelocityRandom(ParticlePlayground.PlaygroundParticlesC,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" void PlaygroundParticlesC_SetLocalVelocityRandom_m689 (Object_t * __this /* static, unused */, PlaygroundParticlesC_t126 * ___playgroundParticles, Vector3_t53  ___velocityMinimum, Vector3_t53  ___velocityMaximum, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ParticlePlayground.PlaygroundParticlesC::SetMaterial(ParticlePlayground.PlaygroundParticlesC,UnityEngine.Material)
extern "C" void PlaygroundParticlesC_SetMaterial_m690 (Object_t * __this /* static, unused */, PlaygroundParticlesC_t126 * ___playgroundParticles, Material_t48 * ___particleMaterial, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ParticlePlayground.PlaygroundParticlesC::SetAlpha(ParticlePlayground.PlaygroundParticlesC,System.Single)
extern "C" void PlaygroundParticlesC_SetAlpha_m691 (Object_t * __this /* static, unused */, PlaygroundParticlesC_t126 * ___playgroundParticles, float ___alpha, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ParticlePlayground.PlaygroundParticlesC::Translate(ParticlePlayground.PlaygroundParticlesC,UnityEngine.Vector3)
extern "C" void PlaygroundParticlesC_Translate_m692 (Object_t * __this /* static, unused */, PlaygroundParticlesC_t126 * ___playgroundParticles, Vector3_t53  ___direction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ParticlePlayground.PlaygroundParticlesC::Add(ParticlePlayground.PlaygroundParticlesC,ParticlePlayground.ParticleStateC)
extern "C" void PlaygroundParticlesC_Add_m693 (Object_t * __this /* static, unused */, PlaygroundParticlesC_t126 * ___playgroundParticles, ParticleStateC_t94 * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ParticlePlayground.PlaygroundParticlesC::Add(ParticlePlayground.PlaygroundParticlesC,UnityEngine.Texture2D,System.Single,UnityEngine.Vector3,System.String,UnityEngine.Transform)
extern "C" void PlaygroundParticlesC_Add_m694 (Object_t * __this /* static, unused */, PlaygroundParticlesC_t126 * ___playgroundParticles, Texture2D_t90 * ___image, float ___scale, Vector3_t53  ___offset, String_t* ___stateName, Transform_t54 * ___stateTransform, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ParticlePlayground.PlaygroundParticlesC::Add(ParticlePlayground.PlaygroundParticlesC,UnityEngine.Texture2D,UnityEngine.Texture2D,System.Single,System.Single,UnityEngine.Vector3,System.String,UnityEngine.Transform)
extern "C" void PlaygroundParticlesC_Add_m695 (Object_t * __this /* static, unused */, PlaygroundParticlesC_t126 * ___playgroundParticles, Texture2D_t90 * ___image, Texture2D_t90 * ___depthmap, float ___depthmapStrength, float ___scale, Vector3_t53  ___offset, String_t* ___stateName, Transform_t54 * ___stateTransform, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ParticlePlayground.PlaygroundParticlesC::Destroy(ParticlePlayground.PlaygroundParticlesC)
extern "C" void PlaygroundParticlesC_Destroy_m696 (Object_t * __this /* static, unused */, PlaygroundParticlesC_t126 * ___playgroundParticles, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ParticlePlayground.PlaygroundParticlesC::SetLifetime(ParticlePlayground.PlaygroundParticlesC,ParticlePlayground.SORTINGC,System.Single)
extern "C" void PlaygroundParticlesC_SetLifetime_m697 (Object_t * __this /* static, unused */, PlaygroundParticlesC_t126 * ___playgroundParticles, int32_t ___sorting, float ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ParticlePlayground.PlaygroundParticlesC::SetLifetimeThreadSafe(ParticlePlayground.PlaygroundParticlesC,ParticlePlayground.SORTINGC,System.Single)
extern "C" void PlaygroundParticlesC_SetLifetimeThreadSafe_m698 (Object_t * __this /* static, unused */, PlaygroundParticlesC_t126 * ___playgroundParticles, int32_t ___sorting, float ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ParticlePlayground.PlaygroundParticlesC::SetLifetimeSubtraction(ParticlePlayground.PlaygroundParticlesC)
extern "C" void PlaygroundParticlesC_SetLifetimeSubtraction_m699 (Object_t * __this /* static, unused */, PlaygroundParticlesC_t126 * ___playgroundParticles, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ParticlePlayground.PlaygroundParticlesC::SetEmissionRate(ParticlePlayground.PlaygroundParticlesC)
extern "C" void PlaygroundParticlesC_SetEmissionRate_m700 (Object_t * __this /* static, unused */, PlaygroundParticlesC_t126 * ___playgroundParticles, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ParticlePlayground.PlaygroundParticlesC::SetParticleTimeNow(ParticlePlayground.PlaygroundParticlesC)
extern "C" void PlaygroundParticlesC_SetParticleTimeNow_m701 (Object_t * __this /* static, unused */, PlaygroundParticlesC_t126 * ___playgroundParticles, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ParticlePlayground.PlaygroundParticlesC::SetParticleTimeNowWithRestEmission(ParticlePlayground.PlaygroundParticlesC)
extern "C" void PlaygroundParticlesC_SetParticleTimeNowWithRestEmission_m702 (Object_t * __this /* static, unused */, PlaygroundParticlesC_t126 * ___playgroundParticles, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color32 ParticlePlayground.PlaygroundParticlesC::GetColorAtLifetime(ParticlePlayground.PlaygroundParticlesC,System.Single)
extern "C" Color32_t89  PlaygroundParticlesC_GetColorAtLifetime_m703 (Object_t * __this /* static, unused */, PlaygroundParticlesC_t126 * ___playgroundParticles, float ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ParticlePlayground.PlaygroundParticlesC::SetColorAtLifetime(ParticlePlayground.PlaygroundParticlesC,System.Single)
extern "C" void PlaygroundParticlesC_SetColorAtLifetime_m704 (Object_t * __this /* static, unused */, PlaygroundParticlesC_t126 * ___playgroundParticles, float ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ParticlePlayground.PlaygroundParticlesC::SetColorWithLifetimeSorting(ParticlePlayground.PlaygroundParticlesC)
extern "C" void PlaygroundParticlesC_SetColorWithLifetimeSorting_m705 (Object_t * __this /* static, unused */, PlaygroundParticlesC_t126 * ___playgroundParticles, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ParticlePlayground.PlaygroundParticlesC::IsSettingParticleCount()
extern "C" bool PlaygroundParticlesC_IsSettingParticleCount_m706 (PlaygroundParticlesC_t126 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ParticlePlayground.PlaygroundParticlesC::SetParticleCount(ParticlePlayground.PlaygroundParticlesC,System.Int32)
extern "C" void PlaygroundParticlesC_SetParticleCount_m707 (Object_t * __this /* static, unused */, PlaygroundParticlesC_t126 * ___playgroundParticles, int32_t ___amount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ParticlePlayground.PlaygroundParticlesC::UpdateSystem()
extern "C" bool PlaygroundParticlesC_UpdateSystem_m708 (PlaygroundParticlesC_t126 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ParticlePlayground.PlaygroundParticlesC::UpdateShuriken()
extern "C" void PlaygroundParticlesC_UpdateShuriken_m709 (PlaygroundParticlesC_t126 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ParticlePlayground.PlaygroundParticlesC::SetInitialTargetPosition(ParticlePlayground.PlaygroundParticlesC,UnityEngine.Vector3,System.Boolean)
extern "C" void PlaygroundParticlesC_SetInitialTargetPosition_m710 (Object_t * __this /* static, unused */, PlaygroundParticlesC_t126 * ___playgroundParticles, Vector3_t53  ___position, bool ___refreshParticleSystem, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ParticlePlayground.PlaygroundParticlesC::Emission(ParticlePlayground.PlaygroundParticlesC,System.Boolean,System.Boolean)
extern "C" void PlaygroundParticlesC_Emission_m711 (Object_t * __this /* static, unused */, PlaygroundParticlesC_t126 * ___playgroundParticles, bool ___emission, bool ___callRestEmission, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single ParticlePlayground.PlaygroundParticlesC::SignedAngle(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" float PlaygroundParticlesC_SignedAngle_m712 (Object_t * __this /* static, unused */, Vector3_t53  ___a, Vector3_t53  ___b, Vector3_t53  ___n, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 ParticlePlayground.PlaygroundParticlesC::RandomVector3(System.Random,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" Vector3_t53  PlaygroundParticlesC_RandomVector3_m713 (Object_t * __this /* static, unused */, Random_t81 * ___random, Vector3_t53  ___v1, Vector3_t53  ___v2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ParticlePlayground.PlaygroundParticlesC::PrepareThreadedCalculations()
extern "C" bool PlaygroundParticlesC_PrepareThreadedCalculations_m714 (PlaygroundParticlesC_t126 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ParticlePlayground.PlaygroundParticlesC::NewCalculatedThread(ParticlePlayground.PlaygroundParticlesC)
extern "C" void PlaygroundParticlesC_NewCalculatedThread_m715 (Object_t * __this /* static, unused */, PlaygroundParticlesC_t126 * ___playgroundParticles, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ParticlePlayground.PlaygroundParticlesC::NewCalculatedThread(ParticlePlayground.PlaygroundParticlesC[])
extern "C" void PlaygroundParticlesC_NewCalculatedThread_m716 (Object_t * __this /* static, unused */, PlaygroundParticlesCU5BU5D_t178* ___playgroundParticles, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color32 ParticlePlayground.PlaygroundParticlesC::GetParticleColor(System.Int32,System.Single,System.Single)
extern "C" Color32_t89  PlaygroundParticlesC_GetParticleColor_m717 (PlaygroundParticlesC_t126 * __this, int32_t ___p, float ___normalizedLife, float ___normalizedP, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ParticlePlayground.PlaygroundParticlesC::SetSourcePosition(System.Int32)
extern "C" void PlaygroundParticlesC_SetSourcePosition_m718 (PlaygroundParticlesC_t126 * __this, int32_t ___p, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ParticlePlayground.PlaygroundParticlesC::ThreadedCalculations(ParticlePlayground.PlaygroundParticlesC)
extern "C" void PlaygroundParticlesC_ThreadedCalculations_m719 (Object_t * __this /* static, unused */, PlaygroundParticlesC_t126 * ___playgroundParticles, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ParticlePlayground.PlaygroundParticlesC::SendDeathEvents(ParticlePlayground.PlaygroundParticlesC,System.Int32)
extern "C" void PlaygroundParticlesC_SendDeathEvents_m720 (Object_t * __this /* static, unused */, PlaygroundParticlesC_t126 * ___playgroundParticles, int32_t ___p, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ParticlePlayground.PlaygroundParticlesC::Turbulence(ParticlePlayground.PlaygroundParticlesC,ParticlePlayground.SimplexNoise,System.Int32,System.Single,ParticlePlayground.TURBULENCETYPE,System.Single,System.Single,System.Single,System.Boolean,UnityEngine.AnimationCurve)
extern "C" void PlaygroundParticlesC_Turbulence_m721 (Object_t * __this /* static, unused */, PlaygroundParticlesC_t126 * ___playgroundParticles, SimplexNoise_t120 * ___turbulenceSimplex, int32_t ___p, float ___t, int32_t ___turbulenceType, float ___turbulenceTimeScale, float ___turbulenceScale, float ___turbulenceStrength, bool ___turbulenceApplyLifetimeStrength, AnimationCurve_t98 * ___turbulenceLifetimeStrength, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ParticlePlayground.PlaygroundParticlesC::Collisions(ParticlePlayground.PlaygroundParticlesC)
extern "C" void PlaygroundParticlesC_Collisions_m722 (Object_t * __this /* static, unused */, PlaygroundParticlesC_t126 * ___playgroundParticles, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 ParticlePlayground.PlaygroundParticlesC::GetOverflow2(UnityEngine.Vector3,System.Int32,System.Int32)
extern "C" Vector3_t53  PlaygroundParticlesC_GetOverflow2_m723 (Object_t * __this /* static, unused */, Vector3_t53  ___overflow, int32_t ___currentVal, int32_t ___maxVal, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 ParticlePlayground.PlaygroundParticlesC::GetOverflow2(UnityEngine.Vector3,UnityEngine.Vector3,System.Int32,System.Int32)
extern "C" Vector3_t53  PlaygroundParticlesC_GetOverflow2_m724 (Object_t * __this /* static, unused */, Vector3_t53  ___overflow, Vector3_t53  ___direction, int32_t ___currentVal, int32_t ___maxVal, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 ParticlePlayground.PlaygroundParticlesC::Vector3Scale(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" Vector3_t53  PlaygroundParticlesC_Vector3Scale_m725 (Object_t * __this /* static, unused */, Vector3_t53  ___v1, Vector3_t53  ___v2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ParticlePlayground.PlaygroundParticlesC::CalculateManipulator(ParticlePlayground.PlaygroundParticlesC,ParticlePlayground.ManipulatorObjectC,System.Int32,System.Single,System.Single,UnityEngine.Vector3,UnityEngine.Vector3,System.Boolean)
extern "C" void PlaygroundParticlesC_CalculateManipulator_m726 (Object_t * __this /* static, unused */, PlaygroundParticlesC_t126 * ___playgroundParticles, ManipulatorObjectC_t115 * ___thisManipulator, int32_t ___p, float ___t, float ___life, Vector3_t53  ___particlePosition, Vector3_t53  ___manipulatorPosition, bool ___localSpace, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ParticlePlayground.PlaygroundParticlesC::PropertyManipulator(ParticlePlayground.PlaygroundParticlesC,ParticlePlayground.ManipulatorObjectC,ParticlePlayground.ManipulatorPropertyC,System.Int32,System.Single,UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Boolean,System.Boolean)
extern "C" void PlaygroundParticlesC_PropertyManipulator_m727 (Object_t * __this /* static, unused */, PlaygroundParticlesC_t126 * ___playgroundParticles, ManipulatorObjectC_t115 * ___thisManipulator, ManipulatorPropertyC_t110 * ___thisManipulatorProperty, int32_t ___p, float ___t, Vector3_t53  ___particlePosition, Vector3_t53  ___manipulatorPosition, float ___manipulatorDistance, bool ___localSpace, bool ___contains, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ParticlePlayground.PlaygroundParticlesC::RefreshScatter()
extern "C" void PlaygroundParticlesC_RefreshScatter_m728 (PlaygroundParticlesC_t126 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single ParticlePlayground.PlaygroundParticlesC::RandomRange(System.Random,System.Single,System.Single)
extern "C" float PlaygroundParticlesC_RandomRange_m729 (Object_t * __this /* static, unused */, Random_t81 * ___random, float ___min, float ___max, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 ParticlePlayground.PlaygroundParticlesC::RandomRange(System.Random,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" Vector3_t53  PlaygroundParticlesC_RandomRange_m730 (Object_t * __this /* static, unused */, Random_t81 * ___random, Vector3_t53  ___min, Vector3_t53  ___max, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 ParticlePlayground.PlaygroundParticlesC::RandomRangeSpherical(System.Random,System.Single,System.Single)
extern "C" Vector3_t53  PlaygroundParticlesC_RandomRangeSpherical_m731 (Object_t * __this /* static, unused */, Random_t81 * ___random, float ___min, float ___max, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 ParticlePlayground.PlaygroundParticlesC::RandomRangeSpherical(System.Random,System.Single,System.Single,System.Single)
extern "C" Vector3_t53  PlaygroundParticlesC_RandomRangeSpherical_m732 (Object_t * __this /* static, unused */, Random_t81 * ___random, float ___min, float ___max, float ___step, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 ParticlePlayground.PlaygroundParticlesC::RandomRangeSpherical(System.Random,System.Single,System.Single,System.Single,System.Single)
extern "C" Vector3_t53  PlaygroundParticlesC_RandomRangeSpherical_m733 (Object_t * __this /* static, unused */, Random_t81 * ___random, float ___min, float ___max, float ___sectorA, float ___sectorB, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 ParticlePlayground.PlaygroundParticlesC::RandomRangeSpherical(System.Random,System.Single,System.Single,System.Single,System.Single,System.Single)
extern "C" Vector3_t53  PlaygroundParticlesC_RandomRangeSpherical_m734 (Object_t * __this /* static, unused */, Random_t81 * ___random, float ___min, float ___max, float ___sectorA, float ___sectorB, float ___step, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single[] ParticlePlayground.PlaygroundParticlesC::RandomFloat(System.Int32,System.Single,System.Single,System.Random)
extern "C" SingleU5BU5D_t168* PlaygroundParticlesC_RandomFloat_m735 (Object_t * __this /* static, unused */, int32_t ___length, float ___min, float ___max, Random_t81 * ___random, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ParticlePlayground.PlaygroundParticlesC::InactivateParticle(System.Int32)
extern "C" void PlaygroundParticlesC_InactivateParticle_m736 (PlaygroundParticlesC_t126 * __this, int32_t ___particleId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ParticlePlayground.PlaygroundParticlesC::InactivateParticles()
extern "C" void PlaygroundParticlesC_InactivateParticles_m737 (PlaygroundParticlesC_t126 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ParticlePlayground.PlaygroundParticlesC::Rebirth(ParticlePlayground.PlaygroundParticlesC,System.Int32,System.Random)
extern "C" void PlaygroundParticlesC_Rebirth_m738 (Object_t * __this /* static, unused */, PlaygroundParticlesC_t126 * ___playgroundParticles, int32_t ___p, Random_t81 * ___random, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ParticlePlayground.PlaygroundParticlesC::SendEvent(ParticlePlayground.EVENTTYPEC,System.Int32)
extern "C" void PlaygroundParticlesC_SendEvent_m739 (PlaygroundParticlesC_t126 * __this, int32_t ___eventType, int32_t ___p, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ParticlePlayground.PlaygroundParticlesC::SendEvent(ParticlePlayground.EVENTTYPEC,System.Int32,UnityEngine.Vector3)
extern "C" void PlaygroundParticlesC_SendEvent_m740 (PlaygroundParticlesC_t126 * __this, int32_t ___eventType, int32_t ___p, Vector3_t53  ___preEventVelocity, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ParticlePlayground.PlaygroundParticlesC::SendEvent(ParticlePlayground.EVENTTYPEC,System.Int32,UnityEngine.Vector3,UnityEngine.Transform)
extern "C" void PlaygroundParticlesC_SendEvent_m741 (PlaygroundParticlesC_t126 * __this, int32_t ___eventType, int32_t ___p, Vector3_t53  ___preEventVelocity, Transform_t54 * ___collisionTransform, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ParticlePlayground.PlaygroundParticlesC::SendEvent(ParticlePlayground.EVENTTYPEC,System.Int32,UnityEngine.Vector3,UnityEngine.Transform,UnityEngine.Collider)
extern "C" void PlaygroundParticlesC_SendEvent_m742 (PlaygroundParticlesC_t126 * __this, int32_t ___eventType, int32_t ___p, Vector3_t53  ___preEventVelocity, Transform_t54 * ___collisionTransform, Collider_t194 * ___collisionCollider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ParticlePlayground.PlaygroundParticlesC::SendEvent(ParticlePlayground.EVENTTYPEC,System.Int32,UnityEngine.Vector3,UnityEngine.Transform,UnityEngine.Collider2D)
extern "C" void PlaygroundParticlesC_SendEvent_m743 (PlaygroundParticlesC_t126 * __this, int32_t ___eventType, int32_t ___p, Vector3_t53  ___preEventVelocity, Transform_t54 * ___collisionTransform, Collider2D_t195 * ___collisionCollider2D, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ParticlePlayground.PlaygroundParticlesC::SendEvent(ParticlePlayground.EVENTTYPEC,System.Int32,UnityEngine.Vector3,UnityEngine.Transform,UnityEngine.Collider,UnityEngine.Collider2D)
extern "C" void PlaygroundParticlesC_SendEvent_m744 (PlaygroundParticlesC_t126 * __this, int32_t ___eventType, int32_t ___p, Vector3_t53  ___preEventVelocity, Transform_t54 * ___collisionTransform, Collider_t194 * ___collisionCollider, Collider2D_t195 * ___collisionCollider2D, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ParticlePlayground.PlaygroundParticlesC::UpdateEventParticle(ParticlePlayground.PlaygroundEventParticle,System.Int32)
extern "C" bool PlaygroundParticlesC_UpdateEventParticle_m745 (PlaygroundParticlesC_t126 * __this, PlaygroundEventParticle_t114 * ___eParticle, int32_t ___p, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ParticlePlayground.PlaygroundParticlesC::RemoveState(System.Int32)
extern "C" void PlaygroundParticlesC_RemoveState_m746 (PlaygroundParticlesC_t126 * __this, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ParticlePlayground.PlaygroundParticlesC::Clear(ParticlePlayground.PlaygroundParticlesC)
extern "C" void PlaygroundParticlesC_Clear_m747 (Object_t * __this /* static, unused */, PlaygroundParticlesC_t126 * ___playgroundParticles, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ParticlePlayground.PlaygroundParticlesC::Save()
extern "C" void PlaygroundParticlesC_Save_m748 (PlaygroundParticlesC_t126 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ParticlePlayground.PlaygroundParticlesC::Save(System.String)
extern "C" void PlaygroundParticlesC_Save_m749 (PlaygroundParticlesC_t126 * __this, String_t* ___saveName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator ParticlePlayground.PlaygroundParticlesC::SaveRoutine(System.String)
extern "C" Object_t * PlaygroundParticlesC_SaveRoutine_m750 (PlaygroundParticlesC_t126 * __this, String_t* ___saveName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ParticlePlayground.PlaygroundParticlesC::Load(System.Int32)
extern "C" void PlaygroundParticlesC_Load_m751 (PlaygroundParticlesC_t126 * __this, int32_t ___loadPointer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ParticlePlayground.PlaygroundParticlesC::Load(System.String)
extern "C" void PlaygroundParticlesC_Load_m752 (PlaygroundParticlesC_t126 * __this, String_t* ___loadName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ParticlePlayground.PlaygroundParticlesC::LoadAndApplyMask(System.Int32,System.Int32)
extern "C" void PlaygroundParticlesC_LoadAndApplyMask_m753 (PlaygroundParticlesC_t126 * __this, int32_t ___loadPointer, int32_t ___loadMask, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator ParticlePlayground.PlaygroundParticlesC::LoadRoutine(System.Int32,System.Int32)
extern "C" Object_t * PlaygroundParticlesC_LoadRoutine_m754 (PlaygroundParticlesC_t126 * __this, int32_t ___loadPointer, int32_t ___mask, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator ParticlePlayground.PlaygroundParticlesC::LoadTransition(System.Int32)
extern "C" Object_t * PlaygroundParticlesC_LoadTransition_m755 (PlaygroundParticlesC_t126 * __this, int32_t ___loadPointer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single ParticlePlayground.PlaygroundParticlesC::TransitionType(ParticlePlayground.INDIVIDUALTRANSITIONTYPEC,System.Single)
extern "C" float PlaygroundParticlesC_TransitionType_m756 (PlaygroundParticlesC_t126 * __this, int32_t ___thisTransitionType, float ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ParticlePlayground.PlaygroundParticlesC::CheckReferences()
extern "C" void PlaygroundParticlesC_CheckReferences_m757 (PlaygroundParticlesC_t126 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator ParticlePlayground.PlaygroundParticlesC::YieldedRefresh()
extern "C" Object_t * PlaygroundParticlesC_YieldedRefresh_m758 (PlaygroundParticlesC_t126 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator ParticlePlayground.PlaygroundParticlesC::Prewarm(System.Single,System.Int32)
extern "C" Object_t * PlaygroundParticlesC_Prewarm_m759 (PlaygroundParticlesC_t126 * __this, float ___time, int32_t ___resolution, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ParticlePlayground.PlaygroundParticlesC::PrewarmStepper(System.Single,System.Int32)
extern "C" void PlaygroundParticlesC_PrewarmStepper_m760 (PlaygroundParticlesC_t126 * __this, float ___time, int32_t ___resolution, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ParticlePlayground.PlaygroundParticlesC::Awake()
extern "C" void PlaygroundParticlesC_Awake_m761 (PlaygroundParticlesC_t126 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ParticlePlayground.PlaygroundParticlesC::OnEnable()
extern "C" void PlaygroundParticlesC_OnEnable_m762 (PlaygroundParticlesC_t126 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ParticlePlayground.PlaygroundParticlesC::Start()
extern "C" void PlaygroundParticlesC_Start_m763 (PlaygroundParticlesC_t126 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator ParticlePlayground.PlaygroundParticlesC::Boot()
extern "C" Object_t * PlaygroundParticlesC_Boot_m764 (PlaygroundParticlesC_t126 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ParticlePlayground.PlaygroundParticlesC::OnDestroy()
extern "C" void PlaygroundParticlesC_OnDestroy_m765 (PlaygroundParticlesC_t126 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ParticlePlayground.PlaygroundParticlesC::OnDisable()
extern "C" void PlaygroundParticlesC_OnDisable_m766 (PlaygroundParticlesC_t126 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
