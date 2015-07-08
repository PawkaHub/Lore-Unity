#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Renderer
struct Renderer_t103;
// UnityEngine.Material
struct Material_t48;
// UnityEngine.Bounds
#include "UnityEngine_UnityEngine_Bounds.h"

// System.Boolean UnityEngine.Renderer::get_enabled()
extern "C" bool Renderer_get_enabled_m7813 (Renderer_t103 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Renderer::set_enabled(System.Boolean)
extern "C" void Renderer_set_enabled_m3174 (Renderer_t103 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityEngine.Renderer::get_material()
extern "C" Material_t48 * Renderer_get_material_m2588 (Renderer_t103 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Renderer::set_material(UnityEngine.Material)
extern "C" void Renderer_set_material_m3279 (Renderer_t103 * __this, Material_t48 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityEngine.Renderer::get_sharedMaterial()
extern "C" Material_t48 * Renderer_get_sharedMaterial_m2816 (Renderer_t103 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Renderer::set_sharedMaterial(UnityEngine.Material)
extern "C" void Renderer_set_sharedMaterial_m2817 (Renderer_t103 * __this, Material_t48 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Bounds UnityEngine.Renderer::get_bounds()
extern "C" Bounds_t56  Renderer_get_bounds_m2623 (Renderer_t103 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Renderer::get_isVisible()
extern "C" bool Renderer_get_isVisible_m2859 (Renderer_t103 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Renderer::get_sortingLayerID()
extern "C" int32_t Renderer_get_sortingLayerID_m5297 (Renderer_t103 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Renderer::get_sortingOrder()
extern "C" int32_t Renderer_get_sortingOrder_m5298 (Renderer_t103 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
