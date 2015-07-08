#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PhotonStream
struct PhotonStream_t467;
// System.Object[]
struct ObjectU5BU5D_t21;
// System.Object
struct Object_t;
// System.String
struct String_t;
// PhotonPlayer
struct PhotonPlayer_t460;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_Quaternion.h"

// System.Void PhotonStream::.ctor(System.Boolean,System.Object[])
extern "C" void PhotonStream__ctor_m1813 (PhotonStream_t467 * __this, bool ___write, ObjectU5BU5D_t21* ___incomingData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonStream::get_isWriting()
extern "C" bool PhotonStream_get_isWriting_m1814 (PhotonStream_t467 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonStream::get_isReading()
extern "C" bool PhotonStream_get_isReading_m1815 (PhotonStream_t467 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PhotonStream::get_Count()
extern "C" int32_t PhotonStream_get_Count_m1816 (PhotonStream_t467 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object PhotonStream::ReceiveNext()
extern "C" Object_t * PhotonStream_ReceiveNext_m1817 (PhotonStream_t467 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object PhotonStream::PeekNext()
extern "C" Object_t * PhotonStream_PeekNext_m1818 (PhotonStream_t467 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonStream::SendNext(System.Object)
extern "C" void PhotonStream_SendNext_m1819 (PhotonStream_t467 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] PhotonStream::ToArray()
extern "C" ObjectU5BU5D_t21* PhotonStream_ToArray_m1820 (PhotonStream_t467 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonStream::Serialize(System.Boolean&)
extern "C" void PhotonStream_Serialize_m1821 (PhotonStream_t467 * __this, bool* ___myBool, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonStream::Serialize(System.Int32&)
extern "C" void PhotonStream_Serialize_m1822 (PhotonStream_t467 * __this, int32_t* ___myInt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonStream::Serialize(System.String&)
extern "C" void PhotonStream_Serialize_m1823 (PhotonStream_t467 * __this, String_t** ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonStream::Serialize(System.Char&)
extern "C" void PhotonStream_Serialize_m1824 (PhotonStream_t467 * __this, uint16_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonStream::Serialize(System.Int16&)
extern "C" void PhotonStream_Serialize_m1825 (PhotonStream_t467 * __this, int16_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonStream::Serialize(System.Single&)
extern "C" void PhotonStream_Serialize_m1826 (PhotonStream_t467 * __this, float* ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonStream::Serialize(PhotonPlayer&)
extern "C" void PhotonStream_Serialize_m1827 (PhotonStream_t467 * __this, PhotonPlayer_t460 ** ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonStream::Serialize(UnityEngine.Vector3&)
extern "C" void PhotonStream_Serialize_m1828 (PhotonStream_t467 * __this, Vector3_t53 * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonStream::Serialize(UnityEngine.Vector2&)
extern "C" void PhotonStream_Serialize_m1829 (PhotonStream_t467 * __this, Vector2_t97 * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonStream::Serialize(UnityEngine.Quaternion&)
extern "C" void PhotonStream_Serialize_m1830 (PhotonStream_t467 * __this, Quaternion_t69 * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
