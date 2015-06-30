#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PlaygroundSplines.TransformNode
struct TransformNode_t71;
// UnityEngine.Transform
struct Transform_t54;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void PlaygroundSplines.TransformNode::.ctor()
extern "C" void TransformNode__ctor_m257 (TransformNode_t71 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PlaygroundSplines.TransformNode::Update(UnityEngine.Transform)
extern "C" bool TransformNode_Update_m258 (TransformNode_t71 * __this, Transform_t54 * ___splineTransform, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PlaygroundSplines.TransformNode::IsAvailable()
extern "C" bool TransformNode_IsAvailable_m259 (TransformNode_t71 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 PlaygroundSplines.TransformNode::GetPosition()
extern "C" Vector3_t53  TransformNode_GetPosition_m260 (TransformNode_t71 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 PlaygroundSplines.TransformNode::GetInvsersePosition()
extern "C" Vector3_t53  TransformNode_GetInvsersePosition_m261 (TransformNode_t71 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlaygroundSplines.TransformNode::SetPosition(UnityEngine.Vector3)
extern "C" void TransformNode_SetPosition_m262 (TransformNode_t71 * __this, Vector3_t53  ___newPosition, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlaygroundSplines.TransformNode::Translate(UnityEngine.Vector3)
extern "C" void TransformNode_Translate_m263 (TransformNode_t71 * __this, Vector3_t53  ___translation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 PlaygroundSplines.TransformNode::GetPositionDelta()
extern "C" Vector3_t53  TransformNode_GetPositionDelta_m264 (TransformNode_t71 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
