#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PhotonAnimatorView
struct PhotonAnimatorView_t349;
// System.String
struct String_t;
// System.Collections.Generic.List`1<PhotonAnimatorView/SynchronizedLayer>
struct List_1_t486;
// System.Collections.Generic.List`1<PhotonAnimatorView/SynchronizedParameter>
struct List_1_t485;
// PhotonStream
struct PhotonStream_t439;
// PhotonMessageInfo
struct PhotonMessageInfo_t435;
// PhotonAnimatorView/SynchronizeType
#include "AssemblyU2DCSharp_PhotonAnimatorView_SynchronizeType.h"
// PhotonAnimatorView/ParameterType
#include "AssemblyU2DCSharp_PhotonAnimatorView_ParameterType.h"

// System.Void PhotonAnimatorView::.ctor()
extern "C" void PhotonAnimatorView__ctor_m2099 (PhotonAnimatorView_t349 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonAnimatorView::Awake()
extern "C" void PhotonAnimatorView_Awake_m2100 (PhotonAnimatorView_t349 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonAnimatorView::Update()
extern "C" void PhotonAnimatorView_Update_m2101 (PhotonAnimatorView_t349 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonAnimatorView::DoesLayerSynchronizeTypeExist(System.Int32)
extern "C" bool PhotonAnimatorView_DoesLayerSynchronizeTypeExist_m2102 (PhotonAnimatorView_t349 * __this, int32_t ___layerIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonAnimatorView::DoesParameterSynchronizeTypeExist(System.String)
extern "C" bool PhotonAnimatorView_DoesParameterSynchronizeTypeExist_m2103 (PhotonAnimatorView_t349 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<PhotonAnimatorView/SynchronizedLayer> PhotonAnimatorView::GetSynchronizedLayers()
extern "C" List_1_t486 * PhotonAnimatorView_GetSynchronizedLayers_m2104 (PhotonAnimatorView_t349 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<PhotonAnimatorView/SynchronizedParameter> PhotonAnimatorView::GetSynchronizedParameters()
extern "C" List_1_t485 * PhotonAnimatorView_GetSynchronizedParameters_m2105 (PhotonAnimatorView_t349 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PhotonAnimatorView/SynchronizeType PhotonAnimatorView::GetLayerSynchronizeType(System.Int32)
extern "C" int32_t PhotonAnimatorView_GetLayerSynchronizeType_m2106 (PhotonAnimatorView_t349 * __this, int32_t ___layerIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PhotonAnimatorView/SynchronizeType PhotonAnimatorView::GetParameterSynchronizeType(System.String)
extern "C" int32_t PhotonAnimatorView_GetParameterSynchronizeType_m2107 (PhotonAnimatorView_t349 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonAnimatorView::SetLayerSynchronized(System.Int32,PhotonAnimatorView/SynchronizeType)
extern "C" void PhotonAnimatorView_SetLayerSynchronized_m2108 (PhotonAnimatorView_t349 * __this, int32_t ___layerIndex, int32_t ___synchronizeType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonAnimatorView::SetParameterSynchronized(System.String,PhotonAnimatorView/ParameterType,PhotonAnimatorView/SynchronizeType)
extern "C" void PhotonAnimatorView_SetParameterSynchronized_m2109 (PhotonAnimatorView_t349 * __this, String_t* ___name, int32_t ___type, int32_t ___synchronizeType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonAnimatorView::SerializeDataContinuously()
extern "C" void PhotonAnimatorView_SerializeDataContinuously_m2110 (PhotonAnimatorView_t349 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonAnimatorView::DeserializeDataContinuously()
extern "C" void PhotonAnimatorView_DeserializeDataContinuously_m2111 (PhotonAnimatorView_t349 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonAnimatorView::SerializeDataDiscretly(PhotonStream)
extern "C" void PhotonAnimatorView_SerializeDataDiscretly_m2112 (PhotonAnimatorView_t349 * __this, PhotonStream_t439 * ___stream, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonAnimatorView::DeserializeDataDiscretly(PhotonStream)
extern "C" void PhotonAnimatorView_DeserializeDataDiscretly_m2113 (PhotonAnimatorView_t349 * __this, PhotonStream_t439 * ___stream, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonAnimatorView::SerializeSynchronizationTypeState(PhotonStream)
extern "C" void PhotonAnimatorView_SerializeSynchronizationTypeState_m2114 (PhotonAnimatorView_t349 * __this, PhotonStream_t439 * ___stream, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonAnimatorView::DeserializeSynchronizationTypeState(PhotonStream)
extern "C" void PhotonAnimatorView_DeserializeSynchronizationTypeState_m2115 (PhotonAnimatorView_t349 * __this, PhotonStream_t439 * ___stream, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonAnimatorView::OnPhotonSerializeView(PhotonStream,PhotonMessageInfo)
extern "C" void PhotonAnimatorView_OnPhotonSerializeView_m2116 (PhotonAnimatorView_t349 * __this, PhotonStream_t439 * ___stream, PhotonMessageInfo_t435 * ___info, const MethodInfo* method) IL2CPP_METHOD_ATTR;
