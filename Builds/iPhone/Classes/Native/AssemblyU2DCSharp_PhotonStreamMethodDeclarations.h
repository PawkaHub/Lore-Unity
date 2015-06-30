#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PhotonStream
struct PhotonStream_t439;
// System.Object[]
struct ObjectU5BU5D_t21;
// System.Object
struct Object_t;
// System.String
struct String_t;
// PhotonPlayer
struct PhotonPlayer_t432;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_Quaternion.h"

// System.Void PhotonStream::.ctor(System.Boolean,System.Object[])
extern "C" void PhotonStream__ctor_m1767 (PhotonStream_t439 * __this, bool ___write, ObjectU5BU5D_t21* ___incomingData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonStream::get_isWriting()
extern "C" bool PhotonStream_get_isWriting_m1768 (PhotonStream_t439 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonStream::get_isReading()
extern "C" bool PhotonStream_get_isReading_m1769 (PhotonStream_t439 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PhotonStream::get_Count()
extern "C" int32_t PhotonStream_get_Count_m1770 (PhotonStream_t439 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object PhotonStream::ReceiveNext()
extern "C" Object_t * PhotonStream_ReceiveNext_m1771 (PhotonStream_t439 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object PhotonStream::PeekNext()
extern "C" Object_t * PhotonStream_PeekNext_m1772 (PhotonStream_t439 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonStream::SendNext(System.Object)
extern "C" void PhotonStream_SendNext_m1773 (PhotonStream_t439 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] PhotonStream::ToArray()
extern "C" ObjectU5BU5D_t21* PhotonStream_ToArray_m1774 (PhotonStream_t439 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonStream::Serialize(System.Boolean&)
extern "C" void PhotonStream_Serialize_m1775 (PhotonStream_t439 * __this, bool* ___myBool, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonStream::Serialize(System.Int32&)
extern "C" void PhotonStream_Serialize_m1776 (PhotonStream_t439 * __this, int32_t* ___myInt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonStream::Serialize(System.String&)
extern "C" void PhotonStream_Serialize_m1777 (PhotonStream_t439 * __this, String_t** ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonStream::Serialize(System.Char&)
extern "C" void PhotonStream_Serialize_m1778 (PhotonStream_t439 * __this, uint16_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonStream::Serialize(System.Int16&)
extern "C" void PhotonStream_Serialize_m1779 (PhotonStream_t439 * __this, int16_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonStream::Serialize(System.Single&)
extern "C" void PhotonStream_Serialize_m1780 (PhotonStream_t439 * __this, float* ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonStream::Serialize(PhotonPlayer&)
extern "C" void PhotonStream_Serialize_m1781 (PhotonStream_t439 * __this, PhotonPlayer_t432 ** ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonStream::Serialize(UnityEngine.Vector3&)
extern "C" void PhotonStream_Serialize_m1782 (PhotonStream_t439 * __this, Vector3_t53 * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonStream::Serialize(UnityEngine.Vector2&)
extern "C" void PhotonStream_Serialize_m1783 (PhotonStream_t439 * __this, Vector2_t97 * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonStream::Serialize(UnityEngine.Quaternion&)
extern "C" void PhotonStream_Serialize_m1784 (PhotonStream_t439 * __this, Quaternion_t69 * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
