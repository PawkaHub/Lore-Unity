#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.GUI
struct GUI_t645;
// UnityEngine.GUISkin
struct GUISkin_t197;
// System.String
struct String_t;
// UnityEngine.Material
struct Material_t48;
// UnityEngine.Texture
struct Texture_t802;
// UnityEngine.GUIStyle
struct GUIStyle_t303;
// UnityEngine.GUIContent
struct GUIContent_t566;
// UnityEngine.TextEditor
struct TextEditor_t795;
// UnityEngine.GUIContent[]
struct GUIContentU5BU5D_t4897;
// UnityEngine.Rect[]
struct RectU5BU5D_t4898;
// UnityEngine.GUI/WindowFunction
struct WindowFunction_t644;
// System.DateTime
#include "mscorlib_System_DateTime.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.ScaleMode
#include "UnityEngine_UnityEngine_ScaleMode.h"
// UnityEngine.FocusType
#include "UnityEngine_UnityEngine_FocusType.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void UnityEngine.GUI::.cctor()
extern "C" void GUI__cctor_m16696 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime UnityEngine.GUI::get_nextScrollStepTime()
extern "C" DateTime_t1953  GUI_get_nextScrollStepTime_m16697 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::set_nextScrollStepTime(System.DateTime)
extern "C" void GUI_set_nextScrollStepTime_m16698 (Object_t * __this /* static, unused */, DateTime_t1953  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.GUI::get_scrollTroughSide()
extern "C" int32_t GUI_get_scrollTroughSide_m16699 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::set_scrollTroughSide(System.Int32)
extern "C" void GUI_set_scrollTroughSide_m16700 (Object_t * __this /* static, unused */, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::set_skin(UnityEngine.GUISkin)
extern "C" void GUI_set_skin_m2899 (Object_t * __this /* static, unused */, GUISkin_t197 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUISkin UnityEngine.GUI::get_skin()
extern "C" GUISkin_t197 * GUI_get_skin_m2609 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::INTERNAL_get_color(UnityEngine.Color&)
extern "C" void GUI_INTERNAL_get_color_m16701 (Object_t * __this /* static, unused */, Color_t121 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::INTERNAL_set_color(UnityEngine.Color&)
extern "C" void GUI_INTERNAL_set_color_m16702 (Object_t * __this /* static, unused */, Color_t121 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.GUI::get_color()
extern "C" Color_t121  GUI_get_color_m7857 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::set_color(UnityEngine.Color)
extern "C" void GUI_set_color_m3335 (Object_t * __this /* static, unused */, Color_t121  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::INTERNAL_set_contentColor(UnityEngine.Color&)
extern "C" void GUI_INTERNAL_set_contentColor_m16703 (Object_t * __this /* static, unused */, Color_t121 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::set_contentColor(UnityEngine.Color)
extern "C" void GUI_set_contentColor_m3610 (Object_t * __this /* static, unused */, Color_t121  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::get_changed()
extern "C" bool GUI_get_changed_m3383 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::set_changed(System.Boolean)
extern "C" void GUI_set_changed_m16704 (Object_t * __this /* static, unused */, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::get_enabled()
extern "C" bool GUI_get_enabled_m2615 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::set_enabled(System.Boolean)
extern "C" void GUI_set_enabled_m2612 (Object_t * __this /* static, unused */, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::set_tooltip(System.String)
extern "C" void GUI_set_tooltip_m16705 (Object_t * __this /* static, unused */, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::Internal_SetTooltip(System.String)
extern "C" void GUI_Internal_SetTooltip_m16706 (Object_t * __this /* static, unused */, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::Label(UnityEngine.Rect,System.String)
extern "C" void GUI_Label_m2608 (Object_t * __this /* static, unused */, Rect_t201  ___position, String_t* ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::Label(UnityEngine.Rect,UnityEngine.Texture)
extern "C" void GUI_Label_m3182 (Object_t * __this /* static, unused */, Rect_t201  ___position, Texture_t802 * ___image, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::Label(UnityEngine.Rect,System.String,UnityEngine.GUIStyle)
extern "C" void GUI_Label_m3341 (Object_t * __this /* static, unused */, Rect_t201  ___position, String_t* ___text, GUIStyle_t303 * ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::Label(UnityEngine.Rect,UnityEngine.Texture,UnityEngine.GUIStyle)
extern "C" void GUI_Label_m7863 (Object_t * __this /* static, unused */, Rect_t201  ___position, Texture_t802 * ___image, GUIStyle_t303 * ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::Label(UnityEngine.Rect,UnityEngine.GUIContent,UnityEngine.GUIStyle)
extern "C" void GUI_Label_m16707 (Object_t * __this /* static, unused */, Rect_t201  ___position, GUIContent_t566 * ___content, GUIStyle_t303 * ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::DoLabel(UnityEngine.Rect,UnityEngine.GUIContent,System.IntPtr)
extern "C" void GUI_DoLabel_m16708 (Object_t * __this /* static, unused */, Rect_t201  ___position, GUIContent_t566 * ___content, IntPtr_t ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::INTERNAL_CALL_DoLabel(UnityEngine.Rect&,UnityEngine.GUIContent,System.IntPtr)
extern "C" void GUI_INTERNAL_CALL_DoLabel_m16709 (Object_t * __this /* static, unused */, Rect_t201 * ___position, GUIContent_t566 * ___content, IntPtr_t ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::DrawTexture(UnityEngine.Rect,UnityEngine.Texture)
extern "C" void GUI_DrawTexture_m7864 (Object_t * __this /* static, unused */, Rect_t201  ___position, Texture_t802 * ___image, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::DrawTexture(UnityEngine.Rect,UnityEngine.Texture,UnityEngine.ScaleMode,System.Boolean,System.Single)
extern "C" void GUI_DrawTexture_m7859 (Object_t * __this /* static, unused */, Rect_t201  ___position, Texture_t802 * ___image, int32_t ___scaleMode, bool ___alphaBlend, float ___imageAspect, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::DrawTextureWithTexCoords(UnityEngine.Rect,UnityEngine.Texture,UnityEngine.Rect)
extern "C" void GUI_DrawTextureWithTexCoords_m7865 (Object_t * __this /* static, unused */, Rect_t201  ___position, Texture_t802 * ___image, Rect_t201  ___texCoords, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::DrawTextureWithTexCoords(UnityEngine.Rect,UnityEngine.Texture,UnityEngine.Rect,System.Boolean)
extern "C" void GUI_DrawTextureWithTexCoords_m7858 (Object_t * __this /* static, unused */, Rect_t201  ___position, Texture_t802 * ___image, Rect_t201  ___texCoords, bool ___alphaBlend, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityEngine.GUI::get_blendMaterial()
extern "C" Material_t48 * GUI_get_blendMaterial_m16710 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityEngine.GUI::get_blitMaterial()
extern "C" Material_t48 * GUI_get_blitMaterial_m16711 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::Box(UnityEngine.Rect,System.String)
extern "C" void GUI_Box_m3382 (Object_t * __this /* static, unused */, Rect_t201  ___position, String_t* ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::Box(UnityEngine.Rect,UnityEngine.GUIContent,UnityEngine.GUIStyle)
extern "C" void GUI_Box_m16712 (Object_t * __this /* static, unused */, Rect_t201  ___position, GUIContent_t566 * ___content, GUIStyle_t303 * ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::Button(UnityEngine.Rect,System.String)
extern "C" bool GUI_Button_m2901 (Object_t * __this /* static, unused */, Rect_t201  ___position, String_t* ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::Button(UnityEngine.Rect,System.String,UnityEngine.GUIStyle)
extern "C" bool GUI_Button_m2613 (Object_t * __this /* static, unused */, Rect_t201  ___position, String_t* ___text, GUIStyle_t303 * ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::Button(UnityEngine.Rect,UnityEngine.Texture,UnityEngine.GUIStyle)
extern "C" bool GUI_Button_m3326 (Object_t * __this /* static, unused */, Rect_t201  ___position, Texture_t802 * ___image, GUIStyle_t303 * ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::Button(UnityEngine.Rect,UnityEngine.GUIContent,UnityEngine.GUIStyle)
extern "C" bool GUI_Button_m16713 (Object_t * __this /* static, unused */, Rect_t201  ___position, GUIContent_t566 * ___content, GUIStyle_t303 * ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::DoButton(UnityEngine.Rect,UnityEngine.GUIContent,System.IntPtr)
extern "C" bool GUI_DoButton_m16714 (Object_t * __this /* static, unused */, Rect_t201  ___position, GUIContent_t566 * ___content, IntPtr_t ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::INTERNAL_CALL_DoButton(UnityEngine.Rect&,UnityEngine.GUIContent,System.IntPtr)
extern "C" bool GUI_INTERNAL_CALL_DoButton_m16715 (Object_t * __this /* static, unused */, Rect_t201 * ___position, GUIContent_t566 * ___content, IntPtr_t ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::DoRepeatButton(UnityEngine.Rect,UnityEngine.GUIContent,UnityEngine.GUIStyle,UnityEngine.FocusType)
extern "C" bool GUI_DoRepeatButton_m16716 (Object_t * __this /* static, unused */, Rect_t201  ___position, GUIContent_t566 * ___content, GUIStyle_t303 * ___style, int32_t ___focusType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.GUI::TextField(UnityEngine.Rect,System.String,UnityEngine.GUIStyle)
extern "C" String_t* GUI_TextField_m7873 (Object_t * __this /* static, unused */, Rect_t201  ___position, String_t* ___text, GUIStyle_t303 * ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.GUI::TextField(UnityEngine.Rect,System.String,System.Int32,UnityEngine.GUIStyle)
extern "C" String_t* GUI_TextField_m7874 (Object_t * __this /* static, unused */, Rect_t201  ___position, String_t* ___text, int32_t ___maxLength, GUIStyle_t303 * ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.GUI::PasswordFieldGetStrToShow(System.String,System.Char)
extern "C" String_t* GUI_PasswordFieldGetStrToShow_m16717 (Object_t * __this /* static, unused */, String_t* ___password, uint16_t ___maskChar, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::DoTextField(UnityEngine.Rect,System.Int32,UnityEngine.GUIContent,System.Boolean,System.Int32,UnityEngine.GUIStyle,System.String,System.Char)
extern "C" void GUI_DoTextField_m16718 (Object_t * __this /* static, unused */, Rect_t201  ___position, int32_t ___id, GUIContent_t566 * ___content, bool ___multiline, int32_t ___maxLength, GUIStyle_t303 * ___style, String_t* ___secureText, uint16_t ___maskChar, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::HandleTextFieldEventForTouchscreen(UnityEngine.Rect,System.Int32,UnityEngine.GUIContent,System.Boolean,System.Int32,UnityEngine.GUIStyle,System.String,System.Char,UnityEngine.TextEditor)
extern "C" void GUI_HandleTextFieldEventForTouchscreen_m16719 (Object_t * __this /* static, unused */, Rect_t201  ___position, int32_t ___id, GUIContent_t566 * ___content, bool ___multiline, int32_t ___maxLength, GUIStyle_t303 * ___style, String_t* ___secureText, uint16_t ___maskChar, TextEditor_t795 * ___editor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::SetNextControlName(System.String)
extern "C" void GUI_SetNextControlName_m3293 (Object_t * __this /* static, unused */, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.GUI::GetNameOfFocusedControl()
extern "C" String_t* GUI_GetNameOfFocusedControl_m3291 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::FocusControl(System.String)
extern "C" void GUI_FocusControl_m3292 (Object_t * __this /* static, unused */, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::Toggle(UnityEngine.Rect,System.Boolean,UnityEngine.GUIContent,UnityEngine.GUIStyle)
extern "C" bool GUI_Toggle_m16720 (Object_t * __this /* static, unused */, Rect_t201  ___position, bool ___value, GUIContent_t566 * ___content, GUIStyle_t303 * ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::DoToggle(UnityEngine.Rect,System.Int32,System.Boolean,UnityEngine.GUIContent,System.IntPtr)
extern "C" bool GUI_DoToggle_m16721 (Object_t * __this /* static, unused */, Rect_t201  ___position, int32_t ___id, bool ___value, GUIContent_t566 * ___content, IntPtr_t ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::INTERNAL_CALL_DoToggle(UnityEngine.Rect&,System.Int32,System.Boolean,UnityEngine.GUIContent,System.IntPtr)
extern "C" bool GUI_INTERNAL_CALL_DoToggle_m16722 (Object_t * __this /* static, unused */, Rect_t201 * ___position, int32_t ___id, bool ___value, GUIContent_t566 * ___content, IntPtr_t ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.GUI::Toolbar(UnityEngine.Rect,System.Int32,UnityEngine.GUIContent[],UnityEngine.GUIStyle)
extern "C" int32_t GUI_Toolbar_m16723 (Object_t * __this /* static, unused */, Rect_t201  ___position, int32_t ___selected, GUIContentU5BU5D_t4897* ___contents, GUIStyle_t303 * ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::FindStyles(UnityEngine.GUIStyle&,UnityEngine.GUIStyle&,UnityEngine.GUIStyle&,UnityEngine.GUIStyle&,System.String,System.String,System.String)
extern "C" void GUI_FindStyles_m16724 (Object_t * __this /* static, unused */, GUIStyle_t303 ** ___style, GUIStyle_t303 ** ___firstStyle, GUIStyle_t303 ** ___midStyle, GUIStyle_t303 ** ___lastStyle, String_t* ___first, String_t* ___mid, String_t* ___last, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.GUI::CalcTotalHorizSpacing(System.Int32,UnityEngine.GUIStyle,UnityEngine.GUIStyle,UnityEngine.GUIStyle,UnityEngine.GUIStyle)
extern "C" int32_t GUI_CalcTotalHorizSpacing_m16725 (Object_t * __this /* static, unused */, int32_t ___xCount, GUIStyle_t303 * ___style, GUIStyle_t303 * ___firstStyle, GUIStyle_t303 * ___midStyle, GUIStyle_t303 * ___lastStyle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.GUI::DoButtonGrid(UnityEngine.Rect,System.Int32,UnityEngine.GUIContent[],System.Int32,UnityEngine.GUIStyle,UnityEngine.GUIStyle,UnityEngine.GUIStyle,UnityEngine.GUIStyle)
extern "C" int32_t GUI_DoButtonGrid_m16726 (Object_t * __this /* static, unused */, Rect_t201  ___position, int32_t ___selected, GUIContentU5BU5D_t4897* ___contents, int32_t ___xCount, GUIStyle_t303 * ___style, GUIStyle_t303 * ___firstStyle, GUIStyle_t303 * ___midStyle, GUIStyle_t303 * ___lastStyle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect[] UnityEngine.GUI::CalcMouseRects(UnityEngine.Rect,System.Int32,System.Int32,System.Single,System.Single,UnityEngine.GUIStyle,UnityEngine.GUIStyle,UnityEngine.GUIStyle,UnityEngine.GUIStyle,System.Boolean)
extern "C" RectU5BU5D_t4898* GUI_CalcMouseRects_m16727 (Object_t * __this /* static, unused */, Rect_t201  ___position, int32_t ___count, int32_t ___xCount, float ___elemWidth, float ___elemHeight, GUIStyle_t303 * ___style, GUIStyle_t303 * ___firstStyle, GUIStyle_t303 * ___midStyle, GUIStyle_t303 * ___lastStyle, bool ___addBorders, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.GUI::GetButtonGridMouseSelection(UnityEngine.Rect[],UnityEngine.Vector2,System.Boolean)
extern "C" int32_t GUI_GetButtonGridMouseSelection_m16728 (Object_t * __this /* static, unused */, RectU5BU5D_t4898* ___buttonRects, Vector2_t97  ___mousePos, bool ___findNearest, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.GUI::HorizontalSlider(UnityEngine.Rect,System.Single,System.Single,System.Single,UnityEngine.GUIStyle,UnityEngine.GUIStyle)
extern "C" float GUI_HorizontalSlider_m16729 (Object_t * __this /* static, unused */, Rect_t201  ___position, float ___value, float ___leftValue, float ___rightValue, GUIStyle_t303 * ___slider, GUIStyle_t303 * ___thumb, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.GUI::Slider(UnityEngine.Rect,System.Single,System.Single,System.Single,System.Single,UnityEngine.GUIStyle,UnityEngine.GUIStyle,System.Boolean,System.Int32)
extern "C" float GUI_Slider_m16730 (Object_t * __this /* static, unused */, Rect_t201  ___position, float ___value, float ___size, float ___start, float ___end, GUIStyle_t303 * ___slider, GUIStyle_t303 * ___thumb, bool ___horiz, int32_t ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::get_usePageScrollbars()
extern "C" bool GUI_get_usePageScrollbars_m16731 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.GUI::HorizontalScrollbar(UnityEngine.Rect,System.Single,System.Single,System.Single,System.Single,UnityEngine.GUIStyle)
extern "C" float GUI_HorizontalScrollbar_m16732 (Object_t * __this /* static, unused */, Rect_t201  ___position, float ___value, float ___size, float ___leftValue, float ___rightValue, GUIStyle_t303 * ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::InternalRepaintEditorWindow()
extern "C" void GUI_InternalRepaintEditorWindow_m16733 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::ScrollerRepeatButton(System.Int32,UnityEngine.Rect,UnityEngine.GUIStyle)
extern "C" bool GUI_ScrollerRepeatButton_m16734 (Object_t * __this /* static, unused */, int32_t ___scrollerID, Rect_t201  ___rect, GUIStyle_t303 * ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.GUI::VerticalScrollbar(UnityEngine.Rect,System.Single,System.Single,System.Single,System.Single,UnityEngine.GUIStyle)
extern "C" float GUI_VerticalScrollbar_m16735 (Object_t * __this /* static, unused */, Rect_t201  ___position, float ___value, float ___size, float ___topValue, float ___bottomValue, GUIStyle_t303 * ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.GUI::Scroller(UnityEngine.Rect,System.Single,System.Single,System.Single,System.Single,UnityEngine.GUIStyle,UnityEngine.GUIStyle,UnityEngine.GUIStyle,UnityEngine.GUIStyle,System.Boolean)
extern "C" float GUI_Scroller_m16736 (Object_t * __this /* static, unused */, Rect_t201  ___position, float ___value, float ___size, float ___leftValue, float ___rightValue, GUIStyle_t303 * ___slider, GUIStyle_t303 * ___thumb, GUIStyle_t303 * ___leftButton, GUIStyle_t303 * ___rightButton, bool ___horiz, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::BeginGroup(UnityEngine.Rect)
extern "C" void GUI_BeginGroup_m7848 (Object_t * __this /* static, unused */, Rect_t201  ___position, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::BeginGroup(UnityEngine.Rect,UnityEngine.GUIContent,UnityEngine.GUIStyle)
extern "C" void GUI_BeginGroup_m16737 (Object_t * __this /* static, unused */, Rect_t201  ___position, GUIContent_t566 * ___content, GUIStyle_t303 * ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::EndGroup()
extern "C" void GUI_EndGroup_m7852 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.GUI::BeginScrollView(UnityEngine.Rect,UnityEngine.Vector2,UnityEngine.Rect,UnityEngine.GUIStyle,UnityEngine.GUIStyle)
extern "C" Vector2_t97  GUI_BeginScrollView_m7868 (Object_t * __this /* static, unused */, Rect_t201  ___position, Vector2_t97  ___scrollPosition, Rect_t201  ___viewRect, GUIStyle_t303 * ___horizontalScrollbar, GUIStyle_t303 * ___verticalScrollbar, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.GUI::BeginScrollView(UnityEngine.Rect,UnityEngine.Vector2,UnityEngine.Rect,System.Boolean,System.Boolean,UnityEngine.GUIStyle,UnityEngine.GUIStyle,UnityEngine.GUIStyle)
extern "C" Vector2_t97  GUI_BeginScrollView_m16738 (Object_t * __this /* static, unused */, Rect_t201  ___position, Vector2_t97  ___scrollPosition, Rect_t201  ___viewRect, bool ___alwaysShowHorizontal, bool ___alwaysShowVertical, GUIStyle_t303 * ___horizontalScrollbar, GUIStyle_t303 * ___verticalScrollbar, GUIStyle_t303 * ___background, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::EndScrollView()
extern "C" void GUI_EndScrollView_m7869 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::EndScrollView(System.Boolean)
extern "C" void GUI_EndScrollView_m16739 (Object_t * __this /* static, unused */, bool ___handleScrollWheel, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.GUI::Window(System.Int32,UnityEngine.Rect,UnityEngine.GUI/WindowFunction,System.String)
extern "C" Rect_t201  GUI_Window_m2599 (Object_t * __this /* static, unused */, int32_t ___id, Rect_t201  ___clientRect, WindowFunction_t644 * ___func, String_t* ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.GUI::Window(System.Int32,UnityEngine.Rect,UnityEngine.GUI/WindowFunction,System.String,UnityEngine.GUIStyle)
extern "C" Rect_t201  GUI_Window_m7879 (Object_t * __this /* static, unused */, int32_t ___id, Rect_t201  ___clientRect, WindowFunction_t644 * ___func, String_t* ___text, GUIStyle_t303 * ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.GUI::Window(System.Int32,UnityEngine.Rect,UnityEngine.GUI/WindowFunction,UnityEngine.GUIContent,UnityEngine.GUIStyle)
extern "C" Rect_t201  GUI_Window_m16740 (Object_t * __this /* static, unused */, int32_t ___id, Rect_t201  ___clientRect, WindowFunction_t644 * ___func, GUIContent_t566 * ___title, GUIStyle_t303 * ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::CallWindowDelegate(UnityEngine.GUI/WindowFunction,System.Int32,UnityEngine.GUISkin,System.Int32,System.Single,System.Single,UnityEngine.GUIStyle)
extern "C" void GUI_CallWindowDelegate_m16741 (Object_t * __this /* static, unused */, WindowFunction_t644 * ___func, int32_t ___id, GUISkin_t197 * ____skin, int32_t ___forceRect, float ___width, float ___height, GUIStyle_t303 * ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.GUI::DoWindow(System.Int32,UnityEngine.Rect,UnityEngine.GUI/WindowFunction,UnityEngine.GUIContent,UnityEngine.GUIStyle,UnityEngine.GUISkin,System.Boolean)
extern "C" Rect_t201  GUI_DoWindow_m16742 (Object_t * __this /* static, unused */, int32_t ___id, Rect_t201  ___clientRect, WindowFunction_t644 * ___func, GUIContent_t566 * ___title, GUIStyle_t303 * ___style, GUISkin_t197 * ___skin, bool ___forceRectOnLayout, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.GUI::INTERNAL_CALL_DoWindow(System.Int32,UnityEngine.Rect&,UnityEngine.GUI/WindowFunction,UnityEngine.GUIContent,UnityEngine.GUIStyle,UnityEngine.GUISkin,System.Boolean)
extern "C" Rect_t201  GUI_INTERNAL_CALL_DoWindow_m16743 (Object_t * __this /* static, unused */, int32_t ___id, Rect_t201 * ___clientRect, WindowFunction_t644 * ___func, GUIContent_t566 * ___title, GUIStyle_t303 * ___style, GUISkin_t197 * ___skin, bool ___forceRectOnLayout, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::DragWindow(UnityEngine.Rect)
extern "C" void GUI_DragWindow_m3613 (Object_t * __this /* static, unused */, Rect_t201  ___position, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::INTERNAL_CALL_DragWindow(UnityEngine.Rect&)
extern "C" void GUI_INTERNAL_CALL_DragWindow_m16744 (Object_t * __this /* static, unused */, Rect_t201 * ___position, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::DragWindow()
extern "C" void GUI_DragWindow_m3504 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
