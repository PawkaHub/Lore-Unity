#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.Scrollbar
struct Scrollbar_t240;
// UnityEngine.RectTransform
struct RectTransform_t259;
// UnityEngine.UI.Scrollbar/ScrollEvent
struct ScrollEvent_t1166;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t580;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// UnityEngine.EventSystems.AxisEventData
struct AxisEventData_t1105;
// UnityEngine.UI.Selectable
struct Selectable_t591;
// UnityEngine.Transform
struct Transform_t54;
// UnityEngine.UI.Scrollbar/Direction
#include "UnityEngine_UI_UnityEngine_UI_Scrollbar_Direction.h"
// UnityEngine.UI.Scrollbar/Axis
#include "UnityEngine_UI_UnityEngine_UI_Scrollbar_Axis.h"
// UnityEngine.UI.CanvasUpdate
#include "UnityEngine_UI_UnityEngine_UI_CanvasUpdate.h"

// System.Void UnityEngine.UI.Scrollbar::.ctor()
extern "C" void Scrollbar__ctor_m4730 (Scrollbar_t240 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RectTransform UnityEngine.UI.Scrollbar::get_handleRect()
extern "C" RectTransform_t259 * Scrollbar_get_handleRect_m4731 (Scrollbar_t240 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Scrollbar::set_handleRect(UnityEngine.RectTransform)
extern "C" void Scrollbar_set_handleRect_m4732 (Scrollbar_t240 * __this, RectTransform_t259 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Scrollbar/Direction UnityEngine.UI.Scrollbar::get_direction()
extern "C" int32_t Scrollbar_get_direction_m4733 (Scrollbar_t240 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Scrollbar::set_direction(UnityEngine.UI.Scrollbar/Direction)
extern "C" void Scrollbar_set_direction_m4734 (Scrollbar_t240 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.Scrollbar::get_value()
extern "C" float Scrollbar_get_value_m4735 (Scrollbar_t240 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Scrollbar::set_value(System.Single)
extern "C" void Scrollbar_set_value_m3006 (Scrollbar_t240 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.Scrollbar::get_size()
extern "C" float Scrollbar_get_size_m4736 (Scrollbar_t240 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Scrollbar::set_size(System.Single)
extern "C" void Scrollbar_set_size_m4737 (Scrollbar_t240 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.Scrollbar::get_numberOfSteps()
extern "C" int32_t Scrollbar_get_numberOfSteps_m4738 (Scrollbar_t240 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Scrollbar::set_numberOfSteps(System.Int32)
extern "C" void Scrollbar_set_numberOfSteps_m4739 (Scrollbar_t240 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Scrollbar/ScrollEvent UnityEngine.UI.Scrollbar::get_onValueChanged()
extern "C" ScrollEvent_t1166 * Scrollbar_get_onValueChanged_m4740 (Scrollbar_t240 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Scrollbar::set_onValueChanged(UnityEngine.UI.Scrollbar/ScrollEvent)
extern "C" void Scrollbar_set_onValueChanged_m4741 (Scrollbar_t240 * __this, ScrollEvent_t1166 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.Scrollbar::get_stepSize()
extern "C" float Scrollbar_get_stepSize_m4742 (Scrollbar_t240 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Scrollbar::Rebuild(UnityEngine.UI.CanvasUpdate)
extern "C" void Scrollbar_Rebuild_m4743 (Scrollbar_t240 * __this, int32_t ___executing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Scrollbar::OnEnable()
extern "C" void Scrollbar_OnEnable_m4744 (Scrollbar_t240 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Scrollbar::OnDisable()
extern "C" void Scrollbar_OnDisable_m4745 (Scrollbar_t240 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Scrollbar::UpdateCachedReferences()
extern "C" void Scrollbar_UpdateCachedReferences_m4746 (Scrollbar_t240 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Scrollbar::Set(System.Single)
extern "C" void Scrollbar_Set_m4747 (Scrollbar_t240 * __this, float ___input, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Scrollbar::Set(System.Single,System.Boolean)
extern "C" void Scrollbar_Set_m4748 (Scrollbar_t240 * __this, float ___input, bool ___sendCallback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Scrollbar::OnRectTransformDimensionsChange()
extern "C" void Scrollbar_OnRectTransformDimensionsChange_m4749 (Scrollbar_t240 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Scrollbar/Axis UnityEngine.UI.Scrollbar::get_axis()
extern "C" int32_t Scrollbar_get_axis_m4750 (Scrollbar_t240 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Scrollbar::get_reverseValue()
extern "C" bool Scrollbar_get_reverseValue_m4751 (Scrollbar_t240 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Scrollbar::UpdateVisuals()
extern "C" void Scrollbar_UpdateVisuals_m4752 (Scrollbar_t240 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Scrollbar::UpdateDrag(UnityEngine.EventSystems.PointerEventData)
extern "C" void Scrollbar_UpdateDrag_m4753 (Scrollbar_t240 * __this, PointerEventData_t580 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Scrollbar::MayDrag(UnityEngine.EventSystems.PointerEventData)
extern "C" bool Scrollbar_MayDrag_m4754 (Scrollbar_t240 * __this, PointerEventData_t580 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Scrollbar::OnBeginDrag(UnityEngine.EventSystems.PointerEventData)
extern "C" void Scrollbar_OnBeginDrag_m4755 (Scrollbar_t240 * __this, PointerEventData_t580 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Scrollbar::OnDrag(UnityEngine.EventSystems.PointerEventData)
extern "C" void Scrollbar_OnDrag_m4756 (Scrollbar_t240 * __this, PointerEventData_t580 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Scrollbar::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
extern "C" void Scrollbar_OnPointerDown_m4757 (Scrollbar_t240 * __this, PointerEventData_t580 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator UnityEngine.UI.Scrollbar::ClickRepeat(UnityEngine.EventSystems.PointerEventData)
extern "C" Object_t * Scrollbar_ClickRepeat_m4758 (Scrollbar_t240 * __this, PointerEventData_t580 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Scrollbar::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
extern "C" void Scrollbar_OnPointerUp_m4759 (Scrollbar_t240 * __this, PointerEventData_t580 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Scrollbar::OnMove(UnityEngine.EventSystems.AxisEventData)
extern "C" void Scrollbar_OnMove_m4760 (Scrollbar_t240 * __this, AxisEventData_t1105 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Selectable UnityEngine.UI.Scrollbar::FindSelectableOnLeft()
extern "C" Selectable_t591 * Scrollbar_FindSelectableOnLeft_m4761 (Scrollbar_t240 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Selectable UnityEngine.UI.Scrollbar::FindSelectableOnRight()
extern "C" Selectable_t591 * Scrollbar_FindSelectableOnRight_m4762 (Scrollbar_t240 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Selectable UnityEngine.UI.Scrollbar::FindSelectableOnUp()
extern "C" Selectable_t591 * Scrollbar_FindSelectableOnUp_m4763 (Scrollbar_t240 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Selectable UnityEngine.UI.Scrollbar::FindSelectableOnDown()
extern "C" Selectable_t591 * Scrollbar_FindSelectableOnDown_m4764 (Scrollbar_t240 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Scrollbar::OnInitializePotentialDrag(UnityEngine.EventSystems.PointerEventData)
extern "C" void Scrollbar_OnInitializePotentialDrag_m4765 (Scrollbar_t240 * __this, PointerEventData_t580 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Scrollbar::SetDirection(UnityEngine.UI.Scrollbar/Direction,System.Boolean)
extern "C" void Scrollbar_SetDirection_m4766 (Scrollbar_t240 * __this, int32_t ___direction, bool ___includeRectLayouts, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Scrollbar::UnityEngine.UI.ICanvasElement.IsDestroyed()
extern "C" bool Scrollbar_UnityEngine_UI_ICanvasElement_IsDestroyed_m4767 (Scrollbar_t240 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.UI.Scrollbar::UnityEngine.UI.ICanvasElement.get_transform()
extern "C" Transform_t54 * Scrollbar_UnityEngine_UI_ICanvasElement_get_transform_m4768 (Scrollbar_t240 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
