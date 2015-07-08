#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.GUIContent
struct GUIContent_t566;
// System.String
struct String_t;
// UnityEngine.Texture
struct Texture_t802;
// UnityEngine.GUIContent[]
struct GUIContentU5BU5D_t4897;
// System.String[]
struct StringU5BU5D_t20;

// System.Void UnityEngine.GUIContent::.ctor()
extern "C" void GUIContent__ctor_m16892 (GUIContent_t566 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIContent::.ctor(System.String)
extern "C" void GUIContent__ctor_m3154 (GUIContent_t566 * __this, String_t* ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIContent::.ctor(System.String,System.String)
extern "C" void GUIContent__ctor_m3606 (GUIContent_t566 * __this, String_t* ___text, String_t* ___tooltip, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIContent::.ctor(UnityEngine.GUIContent)
extern "C" void GUIContent__ctor_m16893 (GUIContent_t566 * __this, GUIContent_t566 * ___src, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIContent::.cctor()
extern "C" void GUIContent__cctor_m16894 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.GUIContent::get_text()
extern "C" String_t* GUIContent_get_text_m3663 (GUIContent_t566 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIContent::set_text(System.String)
extern "C" void GUIContent_set_text_m16895 (GUIContent_t566 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.GUIContent::get_tooltip()
extern "C" String_t* GUIContent_get_tooltip_m16896 (GUIContent_t566 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIContent UnityEngine.GUIContent::Temp(System.String)
extern "C" GUIContent_t566 * GUIContent_Temp_m16897 (Object_t * __this /* static, unused */, String_t* ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIContent UnityEngine.GUIContent::Temp(UnityEngine.Texture)
extern "C" GUIContent_t566 * GUIContent_Temp_m16898 (Object_t * __this /* static, unused */, Texture_t802 * ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIContent::ClearStaticCache()
extern "C" void GUIContent_ClearStaticCache_m16899 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIContent[] UnityEngine.GUIContent::Temp(System.String[])
extern "C" GUIContentU5BU5D_t4897* GUIContent_Temp_m16900 (Object_t * __this /* static, unused */, StringU5BU5D_t20* ___texts, const MethodInfo* method) IL2CPP_METHOD_ATTR;
