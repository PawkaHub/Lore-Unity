#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.GUILayout
struct GUILayout_t4709;
// System.String
struct String_t;
// UnityEngine.GUILayoutOption[]
struct GUILayoutOptionU5BU5D_t714;
// UnityEngine.GUIStyle
struct GUIStyle_t303;
// UnityEngine.GUIContent
struct GUIContent_t566;
// System.String[]
struct StringU5BU5D_t20;
// UnityEngine.GUIContent[]
struct GUIContentU5BU5D_t4897;
// UnityEngine.GUI/WindowFunction
struct WindowFunction_t644;
// UnityEngine.GUILayoutOption
struct GUILayoutOption_t734;
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void UnityEngine.GUILayout::Label(System.String,UnityEngine.GUILayoutOption[])
extern "C" void GUILayout_Label_m3273 (Object_t * __this /* static, unused */, String_t* ___text, GUILayoutOptionU5BU5D_t714* ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::Label(System.String,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
extern "C" void GUILayout_Label_m3170 (Object_t * __this /* static, unused */, String_t* ___text, GUIStyle_t303 * ___style, GUILayoutOptionU5BU5D_t714* ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::DoLabel(UnityEngine.GUIContent,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
extern "C" void GUILayout_DoLabel_m16747 (Object_t * __this /* static, unused */, GUIContent_t566 * ___content, GUIStyle_t303 * ___style, GUILayoutOptionU5BU5D_t714* ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUILayout::Button(System.String,UnityEngine.GUILayoutOption[])
extern "C" bool GUILayout_Button_m3274 (Object_t * __this /* static, unused */, String_t* ___text, GUILayoutOptionU5BU5D_t714* ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUILayout::Button(UnityEngine.GUIContent,UnityEngine.GUILayoutOption[])
extern "C" bool GUILayout_Button_m3611 (Object_t * __this /* static, unused */, GUIContent_t566 * ___content, GUILayoutOptionU5BU5D_t714* ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUILayout::DoButton(UnityEngine.GUIContent,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
extern "C" bool GUILayout_DoButton_m16748 (Object_t * __this /* static, unused */, GUIContent_t566 * ___content, GUIStyle_t303 * ___style, GUILayoutOptionU5BU5D_t714* ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.GUILayout::TextField(System.String,UnityEngine.GUILayoutOption[])
extern "C" String_t* GUILayout_TextField_m3305 (Object_t * __this /* static, unused */, String_t* ___text, GUILayoutOptionU5BU5D_t714* ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.GUILayout::TextArea(System.String,UnityEngine.GUILayoutOption[])
extern "C" String_t* GUILayout_TextArea_m7541 (Object_t * __this /* static, unused */, String_t* ___text, GUILayoutOptionU5BU5D_t714* ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.GUILayout::DoTextField(System.String,System.Int32,System.Boolean,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
extern "C" String_t* GUILayout_DoTextField_m16749 (Object_t * __this /* static, unused */, String_t* ___text, int32_t ___maxLength, bool ___multiline, GUIStyle_t303 * ___style, GUILayoutOptionU5BU5D_t714* ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUILayout::Toggle(System.Boolean,System.String,UnityEngine.GUILayoutOption[])
extern "C" bool GUILayout_Toggle_m3492 (Object_t * __this /* static, unused */, bool ___value, String_t* ___text, GUILayoutOptionU5BU5D_t714* ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUILayout::Toggle(System.Boolean,UnityEngine.GUIContent,UnityEngine.GUILayoutOption[])
extern "C" bool GUILayout_Toggle_m3612 (Object_t * __this /* static, unused */, bool ___value, GUIContent_t566 * ___content, GUILayoutOptionU5BU5D_t714* ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUILayout::DoToggle(System.Boolean,UnityEngine.GUIContent,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
extern "C" bool GUILayout_DoToggle_m16750 (Object_t * __this /* static, unused */, bool ___value, GUIContent_t566 * ___content, GUIStyle_t303 * ___style, GUILayoutOptionU5BU5D_t714* ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.GUILayout::Toolbar(System.Int32,System.String[],UnityEngine.GUILayoutOption[])
extern "C" int32_t GUILayout_Toolbar_m3299 (Object_t * __this /* static, unused */, int32_t ___selected, StringU5BU5D_t20* ___texts, GUILayoutOptionU5BU5D_t714* ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.GUILayout::Toolbar(System.Int32,UnityEngine.GUIContent[],UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
extern "C" int32_t GUILayout_Toolbar_m16751 (Object_t * __this /* static, unused */, int32_t ___selected, GUIContentU5BU5D_t4897* ___contents, GUIStyle_t303 * ___style, GUILayoutOptionU5BU5D_t714* ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.GUILayout::HorizontalSlider(System.Single,System.Single,System.Single,UnityEngine.GUILayoutOption[])
extern "C" float GUILayout_HorizontalSlider_m3495 (Object_t * __this /* static, unused */, float ___value, float ___leftValue, float ___rightValue, GUILayoutOptionU5BU5D_t714* ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.GUILayout::DoHorizontalSlider(System.Single,System.Single,System.Single,UnityEngine.GUIStyle,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
extern "C" float GUILayout_DoHorizontalSlider_m16752 (Object_t * __this /* static, unused */, float ___value, float ___leftValue, float ___rightValue, GUIStyle_t303 * ___slider, GUIStyle_t303 * ___thumb, GUILayoutOptionU5BU5D_t714* ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::Space(System.Single)
extern "C" void GUILayout_Space_m3312 (Object_t * __this /* static, unused */, float ___pixels, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::FlexibleSpace()
extern "C" void GUILayout_FlexibleSpace_m3294 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::BeginHorizontal(UnityEngine.GUILayoutOption[])
extern "C" void GUILayout_BeginHorizontal_m3303 (Object_t * __this /* static, unused */, GUILayoutOptionU5BU5D_t714* ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::BeginHorizontal(UnityEngine.GUIContent,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
extern "C" void GUILayout_BeginHorizontal_m16753 (Object_t * __this /* static, unused */, GUIContent_t566 * ___content, GUIStyle_t303 * ___style, GUILayoutOptionU5BU5D_t714* ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::EndHorizontal()
extern "C" void GUILayout_EndHorizontal_m3306 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::BeginVertical(UnityEngine.GUILayoutOption[])
extern "C" void GUILayout_BeginVertical_m3322 (Object_t * __this /* static, unused */, GUILayoutOptionU5BU5D_t714* ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::BeginVertical(UnityEngine.GUIContent,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
extern "C" void GUILayout_BeginVertical_m16754 (Object_t * __this /* static, unused */, GUIContent_t566 * ___content, GUIStyle_t303 * ___style, GUILayoutOptionU5BU5D_t714* ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::EndVertical()
extern "C" void GUILayout_EndVertical_m3323 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::BeginArea(UnityEngine.Rect)
extern "C" void GUILayout_BeginArea_m3166 (Object_t * __this /* static, unused */, Rect_t201  ___screenRect, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::BeginArea(UnityEngine.Rect,UnityEngine.GUIStyle)
extern "C" void GUILayout_BeginArea_m3333 (Object_t * __this /* static, unused */, Rect_t201  ___screenRect, GUIStyle_t303 * ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::BeginArea(UnityEngine.Rect,UnityEngine.GUIContent,UnityEngine.GUIStyle)
extern "C" void GUILayout_BeginArea_m16755 (Object_t * __this /* static, unused */, Rect_t201  ___screenRect, GUIContent_t566 * ___content, GUIStyle_t303 * ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::EndArea()
extern "C" void GUILayout_EndArea_m3172 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.GUILayout::BeginScrollView(UnityEngine.Vector2,UnityEngine.GUILayoutOption[])
extern "C" Vector2_t97  GUILayout_BeginScrollView_m3300 (Object_t * __this /* static, unused */, Vector2_t97  ___scrollPosition, GUILayoutOptionU5BU5D_t714* ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.GUILayout::BeginScrollView(UnityEngine.Vector2,System.Boolean,System.Boolean,UnityEngine.GUIStyle,UnityEngine.GUIStyle,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
extern "C" Vector2_t97  GUILayout_BeginScrollView_m16756 (Object_t * __this /* static, unused */, Vector2_t97  ___scrollPosition, bool ___alwaysShowHorizontal, bool ___alwaysShowVertical, GUIStyle_t303 * ___horizontalScrollbar, GUIStyle_t303 * ___verticalScrollbar, GUIStyle_t303 * ___background, GUILayoutOptionU5BU5D_t714* ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::EndScrollView()
extern "C" void GUILayout_EndScrollView_m3302 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUILayout::EndScrollView(System.Boolean)
extern "C" void GUILayout_EndScrollView_m16757 (Object_t * __this /* static, unused */, bool ___handleScrollWheel, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.GUILayout::Window(System.Int32,UnityEngine.Rect,UnityEngine.GUI/WindowFunction,System.String,UnityEngine.GUILayoutOption[])
extern "C" Rect_t201  GUILayout_Window_m3489 (Object_t * __this /* static, unused */, int32_t ___id, Rect_t201  ___screenRect, WindowFunction_t644 * ___func, String_t* ___text, GUILayoutOptionU5BU5D_t714* ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.GUILayout::DoWindow(System.Int32,UnityEngine.Rect,UnityEngine.GUI/WindowFunction,UnityEngine.GUIContent,UnityEngine.GUIStyle,UnityEngine.GUILayoutOption[])
extern "C" Rect_t201  GUILayout_DoWindow_m16758 (Object_t * __this /* static, unused */, int32_t ___id, Rect_t201  ___screenRect, WindowFunction_t644 * ___func, GUIContent_t566 * ___content, GUIStyle_t303 * ___style, GUILayoutOptionU5BU5D_t714* ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUILayoutOption UnityEngine.GUILayout::Width(System.Single)
extern "C" GUILayoutOption_t734 * GUILayout_Width_m3313 (Object_t * __this /* static, unused */, float ___width, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUILayoutOption UnityEngine.GUILayout::MinWidth(System.Single)
extern "C" GUILayoutOption_t734 * GUILayout_MinWidth_m3304 (Object_t * __this /* static, unused */, float ___minWidth, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUILayoutOption UnityEngine.GUILayout::Height(System.Single)
extern "C" GUILayoutOption_t734 * GUILayout_Height_m3342 (Object_t * __this /* static, unused */, float ___height, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUILayoutOption UnityEngine.GUILayout::ExpandWidth(System.Boolean)
extern "C" GUILayoutOption_t734 * GUILayout_ExpandWidth_m3298 (Object_t * __this /* static, unused */, bool ___expand, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUILayoutOption UnityEngine.GUILayout::ExpandHeight(System.Boolean)
extern "C" GUILayoutOption_t734 * GUILayout_ExpandHeight_m16759 (Object_t * __this /* static, unused */, bool ___expand, const MethodInfo* method) IL2CPP_METHOD_ATTR;
