﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PixelCrushers.DialogueSystem.Emphasis
struct Emphasis_t615;
struct Emphasis_t615_marshaled;
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"

// System.Void PixelCrushers.DialogueSystem.Emphasis::.ctor(System.Int32,System.Int32,UnityEngine.Color,System.Boolean,System.Boolean,System.Boolean)
extern "C" void Emphasis__ctor_m4057 (Emphasis_t615 * __this, int32_t ___startIndex, int32_t ___length, Color_t121  ___color, bool ___bold, bool ___italic, bool ___underline, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PixelCrushers.DialogueSystem.Emphasis::get_startIndex()
extern "C" int32_t Emphasis_get_startIndex_m4058 (Emphasis_t615 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.Emphasis::set_startIndex(System.Int32)
extern "C" void Emphasis_set_startIndex_m4059 (Emphasis_t615 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PixelCrushers.DialogueSystem.Emphasis::get_length()
extern "C" int32_t Emphasis_get_length_m4060 (Emphasis_t615 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.Emphasis::set_length(System.Int32)
extern "C" void Emphasis_set_length_m4061 (Emphasis_t615 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color PixelCrushers.DialogueSystem.Emphasis::get_color()
extern "C" Color_t121  Emphasis_get_color_m2732 (Emphasis_t615 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.Emphasis::set_color(UnityEngine.Color)
extern "C" void Emphasis_set_color_m4062 (Emphasis_t615 * __this, Color_t121  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.Emphasis::get_bold()
extern "C" bool Emphasis_get_bold_m4063 (Emphasis_t615 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.Emphasis::set_bold(System.Boolean)
extern "C" void Emphasis_set_bold_m4064 (Emphasis_t615 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.Emphasis::get_italic()
extern "C" bool Emphasis_get_italic_m4065 (Emphasis_t615 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.Emphasis::set_italic(System.Boolean)
extern "C" void Emphasis_set_italic_m4066 (Emphasis_t615 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.Emphasis::get_underline()
extern "C" bool Emphasis_get_underline_m4067 (Emphasis_t615 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.Emphasis::set_underline(System.Boolean)
extern "C" void Emphasis_set_underline_m4068 (Emphasis_t615 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void Emphasis_t615_marshal(const Emphasis_t615& unmarshaled, Emphasis_t615_marshaled& marshaled);
void Emphasis_t615_marshal_back(const Emphasis_t615_marshaled& marshaled, Emphasis_t615& unmarshaled);
void Emphasis_t615_marshal_cleanup(Emphasis_t615_marshaled& marshaled);