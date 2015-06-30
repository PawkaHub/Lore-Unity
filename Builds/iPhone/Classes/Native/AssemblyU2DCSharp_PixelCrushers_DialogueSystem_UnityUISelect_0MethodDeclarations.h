#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PixelCrushers.DialogueSystem.UnityUISelectorDisplay
struct UnityUISelectorDisplay_t281;
// PixelCrushers.DialogueSystem.Usable
struct Usable_t279;
// System.String
struct String_t;
// UnityEngine.Transform
struct Transform_t54;

// System.Void PixelCrushers.DialogueSystem.UnityUISelectorDisplay::.ctor()
extern "C" void UnityUISelectorDisplay__ctor_m1053 (UnityUISelectorDisplay_t281 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single PixelCrushers.DialogueSystem.UnityUISelectorDisplay::get_CurrentDistance()
extern "C" float UnityUISelectorDisplay_get_CurrentDistance_m1054 (UnityUISelectorDisplay_t281 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.UnityUISelectorDisplay::Awake()
extern "C" void UnityUISelectorDisplay_Awake_m1055 (UnityUISelectorDisplay_t281 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.UnityUISelectorDisplay::Start()
extern "C" void UnityUISelectorDisplay_Start_m1056 (UnityUISelectorDisplay_t281 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.UnityUISelectorDisplay::OnEnable()
extern "C" void UnityUISelectorDisplay_OnEnable_m1057 (UnityUISelectorDisplay_t281 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.UnityUISelectorDisplay::OnDisable()
extern "C" void UnityUISelectorDisplay_OnDisable_m1058 (UnityUISelectorDisplay_t281 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.UnityUISelectorDisplay::ConnectDelegates()
extern "C" void UnityUISelectorDisplay_ConnectDelegates_m1059 (UnityUISelectorDisplay_t281 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.UnityUISelectorDisplay::DisconnectDelegates()
extern "C" void UnityUISelectorDisplay_DisconnectDelegates_m1060 (UnityUISelectorDisplay_t281 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.UnityUISelectorDisplay::OnSelectedUsable(PixelCrushers.DialogueSystem.Usable)
extern "C" void UnityUISelectorDisplay_OnSelectedUsable_m1061 (UnityUISelectorDisplay_t281 * __this, Usable_t279 * ___usable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.UnityUISelectorDisplay::OnDeselectedUsable(PixelCrushers.DialogueSystem.Usable)
extern "C" void UnityUISelectorDisplay_OnDeselectedUsable_m1062 (UnityUISelectorDisplay_t281 * __this, Usable_t279 * ___usable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PixelCrushers.DialogueSystem.UnityUISelectorDisplay::GetUseMessage()
extern "C" String_t* UnityUISelectorDisplay_GetUseMessage_m1063 (UnityUISelectorDisplay_t281 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.UnityUISelectorDisplay::ShowControls()
extern "C" void UnityUISelectorDisplay_ShowControls_m1064 (UnityUISelectorDisplay_t281 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.UnityUISelectorDisplay::HideControls()
extern "C" void UnityUISelectorDisplay_HideControls_m1065 (UnityUISelectorDisplay_t281 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.UnityUISelectorDisplay::DeactivateControls()
extern "C" void UnityUISelectorDisplay_DeactivateControls_m1066 (UnityUISelectorDisplay_t281 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.UnityUISelectorDisplay::IsUsableInRange()
extern "C" bool UnityUISelectorDisplay_IsUsableInRange_m1067 (UnityUISelectorDisplay_t281 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.UnityUISelectorDisplay::Update()
extern "C" void UnityUISelectorDisplay_Update_m1068 (UnityUISelectorDisplay_t281 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.UnityUISelectorDisplay::OnConversationStart(UnityEngine.Transform)
extern "C" void UnityUISelectorDisplay_OnConversationStart_m1069 (UnityUISelectorDisplay_t281 * __this, Transform_t54 * ___actor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.UnityUISelectorDisplay::OnConversationEnd(UnityEngine.Transform)
extern "C" void UnityUISelectorDisplay_OnConversationEnd_m1070 (UnityUISelectorDisplay_t281 * __this, Transform_t54 * ___actor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.UnityUISelectorDisplay::UpdateDisplay(System.Boolean)
extern "C" void UnityUISelectorDisplay_UpdateDisplay_m1071 (UnityUISelectorDisplay_t281 * __this, bool ___inRange, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.UnityUISelectorDisplay::UpdateText(System.Boolean)
extern "C" void UnityUISelectorDisplay_UpdateText_m1072 (UnityUISelectorDisplay_t281 * __this, bool ___inRange, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.UnityUISelectorDisplay::UpdateReticle(System.Boolean)
extern "C" void UnityUISelectorDisplay_UpdateReticle_m1073 (UnityUISelectorDisplay_t281 * __this, bool ___inRange, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.UnityUISelectorDisplay::CanTriggerAnimations()
extern "C" bool UnityUISelectorDisplay_CanTriggerAnimations_m1074 (UnityUISelectorDisplay_t281 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
