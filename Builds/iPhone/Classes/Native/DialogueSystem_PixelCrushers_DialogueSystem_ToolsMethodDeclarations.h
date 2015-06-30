#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PixelCrushers.DialogueSystem.Tools
struct Tools_t609;
// UnityEngine.GameObject
struct GameObject_t49;
// System.String
struct String_t;
// System.Object
struct Object_t;
// UnityEngine.Object
struct Object_t563;
struct Object_t563_marshaled;
// UnityEngine.Component
struct Component_t462;
// UnityEngine.Transform
struct Transform_t54;
// UnityEngine.Transform[]
struct TransformU5BU5D_t95;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t47;
// UnityEngine.MonoBehaviour[]
struct MonoBehaviourU5BU5D_t465;
// UnityEngine.Animation
struct Animation_t298;
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// PixelCrushers.DialogueSystem.Toggle
#include "DialogueSystem_PixelCrushers_DialogueSystem_Toggle.h"

// System.Void PixelCrushers.DialogueSystem.Tools::.cctor()
extern "C" void Tools__cctor_m4402 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.Tools::IsPrefab(UnityEngine.GameObject)
extern "C" bool Tools_IsPrefab_m4403 (Object_t * __this /* static, unused */, GameObject_t49 * ___go, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte PixelCrushers.DialogueSystem.Tools::HexToByte(System.String)
extern "C" uint8_t Tools_HexToByte_m4404 (Object_t * __this /* static, unused */, String_t* ___hex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.Tools::IsNumber(System.Object)
extern "C" bool Tools_IsNumber_m4405 (Object_t * __this /* static, unused */, Object_t * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PixelCrushers.DialogueSystem.Tools::StringToInt(System.String)
extern "C" int32_t Tools_StringToInt_m4406 (Object_t * __this /* static, unused */, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single PixelCrushers.DialogueSystem.Tools::StringToFloat(System.String)
extern "C" float Tools_StringToFloat_m4407 (Object_t * __this /* static, unused */, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.Tools::StringToBool(System.String)
extern "C" bool Tools_StringToBool_m4408 (Object_t * __this /* static, unused */, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.Tools::IsStringNullOrEmptyOrWhitespace(System.String)
extern "C" bool Tools_IsStringNullOrEmptyOrWhitespace_m4409 (Object_t * __this /* static, unused */, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PixelCrushers.DialogueSystem.Tools::GetObjectName(UnityEngine.Object)
extern "C" String_t* Tools_GetObjectName_m4410 (Object_t * __this /* static, unused */, Object_t563 * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PixelCrushers.DialogueSystem.Tools::GetGameObjectName(UnityEngine.Component)
extern "C" String_t* Tools_GetGameObjectName_m4411 (Object_t * __this /* static, unused */, Component_t462 * ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PixelCrushers.DialogueSystem.Tools::GetFullName(UnityEngine.GameObject)
extern "C" String_t* Tools_GetFullName_m4412 (Object_t * __this /* static, unused */, GameObject_t49 * ___go, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform PixelCrushers.DialogueSystem.Tools::Select(UnityEngine.Transform[])
extern "C" Transform_t54 * Tools_Select_m4413 (Object_t * __this /* static, unused */, TransformU5BU5D_t95* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.MonoBehaviour PixelCrushers.DialogueSystem.Tools::Select(UnityEngine.MonoBehaviour[])
extern "C" MonoBehaviour_t47 * Tools_Select_m4414 (Object_t * __this /* static, unused */, MonoBehaviourU5BU5D_t465* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.Tools::SendMessageToEveryone(System.String)
extern "C" void Tools_SendMessageToEveryone_m4415 (Object_t * __this /* static, unused */, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.Tools::SetGameObjectActive(UnityEngine.Component,System.Boolean)
extern "C" void Tools_SetGameObjectActive_m2705 (Object_t * __this /* static, unused */, Component_t462 * ___component, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.Tools::ApproximatelyZero(System.Single)
extern "C" bool Tools_ApproximatelyZero_m4416 (Object_t * __this /* static, unused */, float ___x, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color PixelCrushers.DialogueSystem.Tools::WebColor(System.String)
extern "C" Color_t121  Tools_WebColor_m4417 (Object_t * __this /* static, unused */, String_t* ___colorCode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PixelCrushers.DialogueSystem.Tools::ToWebColor(UnityEngine.Color)
extern "C" String_t* Tools_ToWebColor_m2856 (Object_t * __this /* static, unused */, Color_t121  ___color, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.Tools::IsClipInAnimations(UnityEngine.Animation,System.String)
extern "C" bool Tools_IsClipInAnimations_m4418 (Object_t * __this /* static, unused */, Animation_t298 * ___animation, String_t* ___clipName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject PixelCrushers.DialogueSystem.Tools::GameObjectHardFind(System.String)
extern "C" GameObject_t49 * Tools_GameObjectHardFind_m4419 (Object_t * __this /* static, unused */, String_t* ___str, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject PixelCrushers.DialogueSystem.Tools::GameObjectHardFind(System.String,System.String)
extern "C" GameObject_t49 * Tools_GameObjectHardFind_m4420 (Object_t * __this /* static, unused */, String_t* ___str, String_t* ___tag, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject PixelCrushers.DialogueSystem.Tools::GameObjectHardFind(UnityEngine.GameObject,System.String,System.Int32)
extern "C" GameObject_t49 * Tools_GameObjectHardFind_m4421 (Object_t * __this /* static, unused */, GameObject_t49 * ___item, String_t* ___str, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single PixelCrushers.DialogueSystem.Tools::GetGameObjectHeight(UnityEngine.GameObject)
extern "C" float Tools_GetGameObjectHeight_m2928 (Object_t * __this /* static, unused */, GameObject_t49 * ___gameObject, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.Tools::SetComponentEnabled(UnityEngine.Component,PixelCrushers.DialogueSystem.Toggle)
extern "C" void Tools_SetComponentEnabled_m4422 (Object_t * __this /* static, unused */, Component_t462 * ___component, int32_t ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.Tools::IsCursorActive()
extern "C" bool Tools_IsCursorActive_m4423 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.Tools::SetCursorActive(System.Boolean)
extern "C" void Tools_SetCursorActive_m4424 (Object_t * __this /* static, unused */, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.Tools::IsCursorVisible()
extern "C" bool Tools_IsCursorVisible_m4425 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.Tools::IsCursorLocked()
extern "C" bool Tools_IsCursorLocked_m4426 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.Tools::ShowCursor(System.Boolean)
extern "C" void Tools_ShowCursor_m4427 (Object_t * __this /* static, unused */, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.Tools::LockCursor(System.Boolean)
extern "C" void Tools_LockCursor_m4428 (Object_t * __this /* static, unused */, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
