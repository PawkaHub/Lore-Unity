#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.SkinnedMeshRenderer
struct SkinnedMeshRenderer_t105;
// UnityEngine.Transform[]
struct TransformU5BU5D_t95;
// UnityEngine.Mesh
struct Mesh_t93;

// UnityEngine.Transform[] UnityEngine.SkinnedMeshRenderer::get_bones()
extern "C" TransformU5BU5D_t95* SkinnedMeshRenderer_get_bones_m2519 (SkinnedMeshRenderer_t105 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Mesh UnityEngine.SkinnedMeshRenderer::get_sharedMesh()
extern "C" Mesh_t93 * SkinnedMeshRenderer_get_sharedMesh_m2517 (SkinnedMeshRenderer_t105 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SkinnedMeshRenderer::BakeMesh(UnityEngine.Mesh)
extern "C" void SkinnedMeshRenderer_BakeMesh_m2525 (SkinnedMeshRenderer_t105 * __this, Mesh_t93 * ___mesh, const MethodInfo* method) IL2CPP_METHOD_ATTR;
