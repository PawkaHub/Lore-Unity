#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PlaygroundSplines.PlaygroundSpline
struct PlaygroundSpline_t67;
// UnityEngine.Transform
struct Transform_t54;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t92;
// UnityEngine.Transform[]
struct TransformU5BU5D_t95;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_Quaternion.h"
// PlaygroundSplines.BezierControlPointMode
#include "AssemblyU2DCSharp_PlaygroundSplines_BezierControlPointMode.h"

// System.Void PlaygroundSplines.PlaygroundSpline::.ctor()
extern "C" void PlaygroundSpline__ctor_m207 (PlaygroundSpline_t67 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlaygroundSplines.PlaygroundSpline::.cctor()
extern "C" void PlaygroundSpline__cctor_m208 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PlaygroundSplines.PlaygroundSpline::IsReady()
extern "C" bool PlaygroundSpline_IsReady_m209 (PlaygroundSpline_t67 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PlaygroundSplines.PlaygroundSpline::AddUser(UnityEngine.Transform)
extern "C" bool PlaygroundSpline_AddUser_m210 (PlaygroundSpline_t67 * __this, Transform_t54 * ___thisTransform, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PlaygroundSplines.PlaygroundSpline::RemoveUser(UnityEngine.Transform)
extern "C" bool PlaygroundSpline_RemoveUser_m211 (PlaygroundSpline_t67 * __this, Transform_t54 * ___thisTransform, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PlaygroundSplines.PlaygroundSpline::HasUser(UnityEngine.Transform)
extern "C" bool PlaygroundSpline_HasUser_m212 (PlaygroundSpline_t67 * __this, Transform_t54 * ___thisTransform, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PlaygroundSplines.PlaygroundSpline::get_Loop()
extern "C" bool PlaygroundSpline_get_Loop_m213 (PlaygroundSpline_t67 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlaygroundSplines.PlaygroundSpline::set_Loop(System.Boolean)
extern "C" void PlaygroundSpline_set_Loop_m214 (PlaygroundSpline_t67 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PlaygroundSplines.PlaygroundSpline::get_ControlPointCount()
extern "C" int32_t PlaygroundSpline_get_ControlPointCount_m215 (PlaygroundSpline_t67 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 PlaygroundSplines.PlaygroundSpline::GetControlPoint(System.Int32)
extern "C" Vector3_t53  PlaygroundSpline_GetControlPoint_m216 (PlaygroundSpline_t67 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlaygroundSplines.PlaygroundSpline::SetControlPoint(System.Int32,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" void PlaygroundSpline_SetControlPoint_m217 (PlaygroundSpline_t67 * __this, int32_t ___index, Vector3_t53  ___point, Vector3_t53  ___offset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlaygroundSplines.PlaygroundSpline::SetControlPoint(System.Int32,UnityEngine.Vector3)
extern "C" void PlaygroundSpline_SetControlPoint_m218 (PlaygroundSpline_t67 * __this, int32_t ___index, Vector3_t53  ___point, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlaygroundSplines.PlaygroundSpline::SetPoints(UnityEngine.Vector3[])
extern "C" void PlaygroundSpline_SetPoints_m219 (PlaygroundSpline_t67 * __this, Vector3U5BU5D_t92* ___vectors, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PlaygroundSplines.PlaygroundSpline::PointHasTransform(System.Int32)
extern "C" bool PlaygroundSpline_PointHasTransform_m220 (PlaygroundSpline_t67 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlaygroundSplines.PlaygroundSpline::TranslateSpline(UnityEngine.Vector3)
extern "C" void PlaygroundSpline_TranslateSpline_m221 (PlaygroundSpline_t67 * __this, Vector3_t53  ___translation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 PlaygroundSplines.PlaygroundSpline::GetTransformPosition()
extern "C" Vector3_t53  PlaygroundSpline_GetTransformPosition_m222 (PlaygroundSpline_t67 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion PlaygroundSplines.PlaygroundSpline::GetTransformRotation()
extern "C" Quaternion_t69  PlaygroundSpline_GetTransformRotation_m223 (PlaygroundSpline_t67 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 PlaygroundSplines.PlaygroundSpline::GetTransformScale()
extern "C" Vector3_t53  PlaygroundSpline_GetTransformScale_m224 (PlaygroundSpline_t67 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PlaygroundSplines.BezierControlPointMode PlaygroundSplines.PlaygroundSpline::GetControlPointMode(System.Int32)
extern "C" int32_t PlaygroundSpline_GetControlPointMode_m225 (PlaygroundSpline_t67 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlaygroundSplines.PlaygroundSpline::SetControlPointMode(System.Int32,PlaygroundSplines.BezierControlPointMode)
extern "C" void PlaygroundSpline_SetControlPointMode_m226 (PlaygroundSpline_t67 * __this, int32_t ___index, int32_t ___mode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlaygroundSplines.PlaygroundSpline::EnforceMode(System.Int32)
extern "C" void PlaygroundSpline_EnforceMode_m227 (PlaygroundSpline_t67 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PlaygroundSplines.PlaygroundSpline::get_NodeCount()
extern "C" int32_t PlaygroundSpline_get_NodeCount_m228 (PlaygroundSpline_t67 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 PlaygroundSplines.PlaygroundSpline::GetPoint(System.Single)
extern "C" Vector3_t53  PlaygroundSpline_GetPoint_m229 (PlaygroundSpline_t67 * __this, float ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 PlaygroundSplines.PlaygroundSpline::GetVelocity(System.Single)
extern "C" Vector3_t53  PlaygroundSpline_GetVelocity_m230 (PlaygroundSpline_t67 * __this, float ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 PlaygroundSplines.PlaygroundSpline::GetPoint(System.Int32)
extern "C" Vector3_t53  PlaygroundSpline_GetPoint_m231 (PlaygroundSpline_t67 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 PlaygroundSplines.PlaygroundSpline::GetInversePoint(System.Int32)
extern "C" Vector3_t53  PlaygroundSpline_GetInversePoint_m232 (PlaygroundSpline_t67 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 PlaygroundSplines.PlaygroundSpline::GetPointWorldSpace(System.Int32)
extern "C" Vector3_t53  PlaygroundSpline_GetPointWorldSpace_m233 (PlaygroundSpline_t67 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlaygroundSplines.PlaygroundSpline::SetPoint(System.Int32,UnityEngine.Vector3)
extern "C" void PlaygroundSpline_SetPoint_m234 (PlaygroundSpline_t67 * __this, int32_t ___index, Vector3_t53  ___position, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlaygroundSplines.PlaygroundSpline::TranslatePoint(System.Int32,UnityEngine.Vector3)
extern "C" void PlaygroundSpline_TranslatePoint_m235 (PlaygroundSpline_t67 * __this, int32_t ___index, Vector3_t53  ___translation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single PlaygroundSplines.PlaygroundSpline::CPOB(UnityEngine.Vector3,System.Single,System.Single,System.Int32)
extern "C" float PlaygroundSpline_CPOB_m236 (PlaygroundSpline_t67 * __this, Vector3_t53  ___aP, float ___aStart, float ___aEnd, int32_t ___aSteps, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single PlaygroundSplines.PlaygroundSpline::ClosestTimeFromPoint(UnityEngine.Vector3)
extern "C" float PlaygroundSpline_ClosestTimeFromPoint_m237 (PlaygroundSpline_t67 * __this, Vector3_t53  ___aP, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 PlaygroundSplines.PlaygroundSpline::ClosestPointFromPosition(UnityEngine.Vector3)
extern "C" Vector3_t53  PlaygroundSpline_ClosestPointFromPosition_m238 (PlaygroundSpline_t67 * __this, Vector3_t53  ___aP, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 PlaygroundSplines.PlaygroundSpline::GetDirection(System.Single)
extern "C" Vector3_t53  PlaygroundSpline_GetDirection_m239 (PlaygroundSpline_t67 * __this, float ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlaygroundSplines.PlaygroundSpline::AddNode()
extern "C" void PlaygroundSpline_AddNode_m240 (PlaygroundSpline_t67 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlaygroundSplines.PlaygroundSpline::AddNode(System.Int32)
extern "C" void PlaygroundSpline_AddNode_m241 (PlaygroundSpline_t67 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlaygroundSplines.PlaygroundSpline::RemoveFirst()
extern "C" void PlaygroundSpline_RemoveFirst_m242 (PlaygroundSpline_t67 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlaygroundSplines.PlaygroundSpline::RemoveLast()
extern "C" void PlaygroundSpline_RemoveLast_m243 (PlaygroundSpline_t67 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlaygroundSplines.PlaygroundSpline::RemoveNode(System.Int32)
extern "C" void PlaygroundSpline_RemoveNode_m244 (PlaygroundSpline_t67 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlaygroundSplines.PlaygroundSpline::ReverseAllNodes()
extern "C" void PlaygroundSpline_ReverseAllNodes_m245 (PlaygroundSpline_t67 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlaygroundSplines.PlaygroundSpline::SwapNodes(System.Int32,System.Int32)
extern "C" void PlaygroundSpline_SwapNodes_m246 (PlaygroundSpline_t67 * __this, int32_t ___from, int32_t ___to, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform[] PlaygroundSplines.PlaygroundSpline::ExportToTransforms()
extern "C" TransformU5BU5D_t95* PlaygroundSpline_ExportToTransforms_m247 (PlaygroundSpline_t67 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3[] PlaygroundSplines.PlaygroundSpline::ExportToVector3()
extern "C" Vector3U5BU5D_t92* PlaygroundSpline_ExportToVector3_m248 (PlaygroundSpline_t67 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlaygroundSplines.PlaygroundSpline::Reset()
extern "C" void PlaygroundSpline_Reset_m249 (PlaygroundSpline_t67 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlaygroundSplines.PlaygroundSpline::OnEnable()
extern "C" void PlaygroundSpline_OnEnable_m250 (PlaygroundSpline_t67 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlaygroundSplines.PlaygroundSpline::Update()
extern "C" void PlaygroundSpline_Update_m251 (PlaygroundSpline_t67 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlaygroundSplines.PlaygroundSpline::SetMatrix()
extern "C" void PlaygroundSpline_SetMatrix_m252 (PlaygroundSpline_t67 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
