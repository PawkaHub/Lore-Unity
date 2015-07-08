#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Mesh
struct Mesh_t93;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t92;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_t657;
// UnityEngine.BoneWeight[]
struct BoneWeightU5BU5D_t106;
// UnityEngine.Matrix4x4[]
struct Matrix4x4U5BU5D_t108;

// System.Void UnityEngine.Mesh::.ctor()
extern "C" void Mesh__ctor_m2783 (Mesh_t93 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::Internal_Create(UnityEngine.Mesh)
extern "C" void Mesh_Internal_Create_m16653 (Object_t * __this /* static, unused */, Mesh_t93 * ___mono, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3[] UnityEngine.Mesh::get_vertices()
extern "C" Vector3U5BU5D_t92* Mesh_get_vertices_m2753 (Mesh_t93 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3[] UnityEngine.Mesh::get_normals()
extern "C" Vector3U5BU5D_t92* Mesh_get_normals_m2754 (Mesh_t93 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2[] UnityEngine.Mesh::get_uv()
extern "C" Vector2U5BU5D_t657* Mesh_get_uv_m2755 (Mesh_t93 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Mesh::get_vertexCount()
extern "C" int32_t Mesh_get_vertexCount_m2891 (Mesh_t93 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.BoneWeight[] UnityEngine.Mesh::get_boneWeights()
extern "C" BoneWeightU5BU5D_t106* Mesh_get_boneWeights_m2777 (Mesh_t93 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4[] UnityEngine.Mesh::get_bindposes()
extern "C" Matrix4x4U5BU5D_t108* Mesh_get_bindposes_m2779 (Mesh_t93 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
