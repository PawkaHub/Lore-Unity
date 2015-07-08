#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.CanvasUpdateRegistry
struct CanvasUpdateRegistry_t794;
// UnityEngine.UI.ICanvasElement
struct ICanvasElement_t1048;
// UnityEngine.Transform
struct Transform_t54;

// System.Void UnityEngine.UI.CanvasUpdateRegistry::.ctor()
extern "C" void CanvasUpdateRegistry__ctor_m4383 (CanvasUpdateRegistry_t794 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.CanvasUpdateRegistry::.cctor()
extern "C" void CanvasUpdateRegistry__cctor_m4384 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.CanvasUpdateRegistry UnityEngine.UI.CanvasUpdateRegistry::get_instance()
extern "C" CanvasUpdateRegistry_t794 * CanvasUpdateRegistry_get_instance_m4385 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.CanvasUpdateRegistry::ObjectValidForUpdate(UnityEngine.UI.ICanvasElement)
extern "C" bool CanvasUpdateRegistry_ObjectValidForUpdate_m4386 (CanvasUpdateRegistry_t794 * __this, Object_t * ___element, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.CanvasUpdateRegistry::PerformUpdate()
extern "C" void CanvasUpdateRegistry_PerformUpdate_m4387 (CanvasUpdateRegistry_t794 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.CanvasUpdateRegistry::ParentCount(UnityEngine.Transform)
extern "C" int32_t CanvasUpdateRegistry_ParentCount_m4388 (Object_t * __this /* static, unused */, Transform_t54 * ___child, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.CanvasUpdateRegistry::SortLayoutList(UnityEngine.UI.ICanvasElement,UnityEngine.UI.ICanvasElement)
extern "C" int32_t CanvasUpdateRegistry_SortLayoutList_m4389 (Object_t * __this /* static, unused */, Object_t * ___x, Object_t * ___y, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.CanvasUpdateRegistry::RegisterCanvasElementForLayoutRebuild(UnityEngine.UI.ICanvasElement)
extern "C" void CanvasUpdateRegistry_RegisterCanvasElementForLayoutRebuild_m4390 (Object_t * __this /* static, unused */, Object_t * ___element, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.CanvasUpdateRegistry::InternalRegisterCanvasElementForLayoutRebuild(UnityEngine.UI.ICanvasElement)
extern "C" void CanvasUpdateRegistry_InternalRegisterCanvasElementForLayoutRebuild_m4391 (CanvasUpdateRegistry_t794 * __this, Object_t * ___element, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.CanvasUpdateRegistry::RegisterCanvasElementForGraphicRebuild(UnityEngine.UI.ICanvasElement)
extern "C" void CanvasUpdateRegistry_RegisterCanvasElementForGraphicRebuild_m3700 (Object_t * __this /* static, unused */, Object_t * ___element, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.CanvasUpdateRegistry::InternalRegisterCanvasElementForGraphicRebuild(UnityEngine.UI.ICanvasElement)
extern "C" void CanvasUpdateRegistry_InternalRegisterCanvasElementForGraphicRebuild_m4392 (CanvasUpdateRegistry_t794 * __this, Object_t * ___element, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.CanvasUpdateRegistry::UnRegisterCanvasElementForRebuild(UnityEngine.UI.ICanvasElement)
extern "C" void CanvasUpdateRegistry_UnRegisterCanvasElementForRebuild_m3658 (Object_t * __this /* static, unused */, Object_t * ___element, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.CanvasUpdateRegistry::InternalUnRegisterCanvasElementForLayoutRebuild(UnityEngine.UI.ICanvasElement)
extern "C" void CanvasUpdateRegistry_InternalUnRegisterCanvasElementForLayoutRebuild_m4393 (CanvasUpdateRegistry_t794 * __this, Object_t * ___element, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.CanvasUpdateRegistry::InternalUnRegisterCanvasElementForGraphicRebuild(UnityEngine.UI.ICanvasElement)
extern "C" void CanvasUpdateRegistry_InternalUnRegisterCanvasElementForGraphicRebuild_m4394 (CanvasUpdateRegistry_t794 * __this, Object_t * ___element, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.CanvasUpdateRegistry::IsRebuildingLayout()
extern "C" bool CanvasUpdateRegistry_IsRebuildingLayout_m4395 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.CanvasUpdateRegistry::IsRebuildingGraphics()
extern "C" bool CanvasUpdateRegistry_IsRebuildingGraphics_m4396 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.CanvasUpdateRegistry::<PerformUpdate>m__2(UnityEngine.UI.ICanvasElement)
extern "C" bool CanvasUpdateRegistry_U3CPerformUpdateU3Em__2_m4397 (Object_t * __this /* static, unused */, Object_t * ___x, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.CanvasUpdateRegistry::<PerformUpdate>m__3(UnityEngine.UI.ICanvasElement)
extern "C" bool CanvasUpdateRegistry_U3CPerformUpdateU3Em__3_m4398 (Object_t * __this /* static, unused */, Object_t * ___x, const MethodInfo* method) IL2CPP_METHOD_ATTR;
