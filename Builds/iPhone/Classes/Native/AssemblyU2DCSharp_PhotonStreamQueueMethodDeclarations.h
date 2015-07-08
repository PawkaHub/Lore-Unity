#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PhotonStreamQueue
struct PhotonStreamQueue_t485;
// System.Object
struct Object_t;
// PhotonStream
struct PhotonStream_t467;

// System.Void PhotonStreamQueue::.ctor(System.Int32)
extern "C" void PhotonStreamQueue__ctor_m2028 (PhotonStreamQueue_t485 * __this, int32_t ___sampleRate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonStreamQueue::BeginWritePackage()
extern "C" void PhotonStreamQueue_BeginWritePackage_m2029 (PhotonStreamQueue_t485 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonStreamQueue::Reset()
extern "C" void PhotonStreamQueue_Reset_m2030 (PhotonStreamQueue_t485 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonStreamQueue::SendNext(System.Object)
extern "C" void PhotonStreamQueue_SendNext_m2031 (PhotonStreamQueue_t485 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonStreamQueue::HasQueuedObjects()
extern "C" bool PhotonStreamQueue_HasQueuedObjects_m2032 (PhotonStreamQueue_t485 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object PhotonStreamQueue::ReceiveNext()
extern "C" Object_t * PhotonStreamQueue_ReceiveNext_m2033 (PhotonStreamQueue_t485 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonStreamQueue::Serialize(PhotonStream)
extern "C" void PhotonStreamQueue_Serialize_m2034 (PhotonStreamQueue_t485 * __this, PhotonStream_t467 * ___stream, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonStreamQueue::Deserialize(PhotonStream)
extern "C" void PhotonStreamQueue_Deserialize_m2035 (PhotonStreamQueue_t485 * __this, PhotonStream_t467 * ___stream, const MethodInfo* method) IL2CPP_METHOD_ATTR;
