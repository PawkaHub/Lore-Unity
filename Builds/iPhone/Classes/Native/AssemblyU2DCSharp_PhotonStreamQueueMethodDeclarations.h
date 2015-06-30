#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PhotonStreamQueue
struct PhotonStreamQueue_t457;
// System.Object
struct Object_t;
// PhotonStream
struct PhotonStream_t439;

// System.Void PhotonStreamQueue::.ctor(System.Int32)
extern "C" void PhotonStreamQueue__ctor_m1982 (PhotonStreamQueue_t457 * __this, int32_t ___sampleRate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonStreamQueue::BeginWritePackage()
extern "C" void PhotonStreamQueue_BeginWritePackage_m1983 (PhotonStreamQueue_t457 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonStreamQueue::Reset()
extern "C" void PhotonStreamQueue_Reset_m1984 (PhotonStreamQueue_t457 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonStreamQueue::SendNext(System.Object)
extern "C" void PhotonStreamQueue_SendNext_m1985 (PhotonStreamQueue_t457 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonStreamQueue::HasQueuedObjects()
extern "C" bool PhotonStreamQueue_HasQueuedObjects_m1986 (PhotonStreamQueue_t457 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object PhotonStreamQueue::ReceiveNext()
extern "C" Object_t * PhotonStreamQueue_ReceiveNext_m1987 (PhotonStreamQueue_t457 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonStreamQueue::Serialize(PhotonStream)
extern "C" void PhotonStreamQueue_Serialize_m1988 (PhotonStreamQueue_t457 * __this, PhotonStream_t439 * ___stream, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonStreamQueue::Deserialize(PhotonStream)
extern "C" void PhotonStreamQueue_Deserialize_m1989 (PhotonStreamQueue_t457 * __this, PhotonStream_t439 * ___stream, const MethodInfo* method) IL2CPP_METHOD_ATTR;
