#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.GUIStyleState
struct GUIStyleState_t637;
// UnityEngine.Texture2D
struct Texture2D_t90;
// UnityEngine.GUIStyle
struct GUIStyle_t303;
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.GUIStyleState::.ctor()
extern "C" void GUIStyleState__ctor_m12603 (GUIStyleState_t637 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyleState::.ctor(UnityEngine.GUIStyle,System.IntPtr)
extern "C" void GUIStyleState__ctor_m12604 (GUIStyleState_t637 * __this, GUIStyle_t303 * ___sourceStyle, IntPtr_t ___source, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyleState::Finalize()
extern "C" void GUIStyleState_Finalize_m12605 (GUIStyleState_t637 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyleState::Init()
extern "C" void GUIStyleState_Init_m12606 (GUIStyleState_t637 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyleState::Cleanup()
extern "C" void GUIStyleState_Cleanup_m12607 (GUIStyleState_t637 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture2D UnityEngine.GUIStyleState::GetBackgroundInternal()
extern "C" Texture2D_t90 * GUIStyleState_GetBackgroundInternal_m12608 (GUIStyleState_t637 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture2D UnityEngine.GUIStyleState::get_background()
extern "C" Texture2D_t90 * GUIStyleState_get_background_m5584 (GUIStyleState_t637 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyleState::INTERNAL_get_textColor(UnityEngine.Color&)
extern "C" void GUIStyleState_INTERNAL_get_textColor_m12609 (GUIStyleState_t637 * __this, Color_t121 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyleState::INTERNAL_set_textColor(UnityEngine.Color&)
extern "C" void GUIStyleState_INTERNAL_set_textColor_m12610 (GUIStyleState_t637 * __this, Color_t121 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.GUIStyleState::get_textColor()
extern "C" Color_t121  GUIStyleState_get_textColor_m5600 (GUIStyleState_t637 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIStyleState::set_textColor(UnityEngine.Color)
extern "C" void GUIStyleState_set_textColor_m2902 (GUIStyleState_t637 * __this, Color_t121  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
