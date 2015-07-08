#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PhotonAnimatorView
struct PhotonAnimatorView_t377;
// System.String
struct String_t;
// System.Collections.Generic.List`1<PhotonAnimatorView/SynchronizedLayer>
struct List_1_t513;
// System.Collections.Generic.List`1<PhotonAnimatorView/SynchronizedParameter>
struct List_1_t512;
// PhotonStream
struct PhotonStream_t467;
// PhotonMessageInfo
struct PhotonMessageInfo_t463;
// PhotonAnimatorView/SynchronizeType
#include "AssemblyU2DCSharp_PhotonAnimatorView_SynchronizeType.h"
// PhotonAnimatorView/ParameterType
#include "AssemblyU2DCSharp_PhotonAnimatorView_ParameterType.h"

// System.Void PhotonAnimatorView::.ctor()
extern "C" void PhotonAnimatorView__ctor_m2145 (PhotonAnimatorView_t377 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonAnimatorView::Awake()
extern "C" void PhotonAnimatorView_Awake_m2146 (PhotonAnimatorView_t377 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonAnimatorView::Update()
extern "C" void PhotonAnimatorView_Update_m2147 (PhotonAnimatorView_t377 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonAnimatorView::DoesLayerSynchronizeTypeExist(System.Int32)
extern "C" bool PhotonAnimatorView_DoesLayerSynchronizeTypeExist_m2148 (PhotonAnimatorView_t377 * __this, int32_t ___layerIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonAnimatorView::DoesParameterSynchronizeTypeExist(System.String)
extern "C" bool PhotonAnimatorView_DoesParameterSynchronizeTypeExist_m2149 (PhotonAnimatorView_t377 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<PhotonAnimatorView/SynchronizedLayer> PhotonAnimatorView::GetSynchronizedLayers()
extern "C" List_1_t513 * PhotonAnimatorView_GetSynchronizedLayers_m2150 (PhotonAnimatorView_t377 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<PhotonAnimatorView/SynchronizedParameter> PhotonAnimatorView::GetSynchronizedParameters()
extern "C" List_1_t512 * PhotonAnimatorView_GetSynchronizedParameters_m2151 (PhotonAnimatorView_t377 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PhotonAnimatorView/SynchronizeType PhotonAnimatorView::GetLayerSynchronizeType(System.Int32)
extern "C" int32_t PhotonAnimatorView_GetLayerSynchronizeType_m2152 (PhotonAnimatorView_t377 * __this, int32_t ___layerIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PhotonAnimatorView/SynchronizeType PhotonAnimatorView::GetParameterSynchronizeType(System.String)
extern "C" int32_t PhotonAnimatorView_GetParameterSynchronizeType_m2153 (PhotonAnimatorView_t377 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonAnimatorView::SetLayerSynchronized(System.Int32,PhotonAnimatorView/SynchronizeType)
extern "C" void PhotonAnimatorView_SetLayerSynchronized_m2154 (PhotonAnimatorView_t377 * __this, int32_t ___layerIndex, int32_t ___synchronizeType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonAnimatorView::SetParameterSynchronized(System.String,PhotonAnimatorView/ParameterType,PhotonAnimatorView/SynchronizeType)
extern "C" void PhotonAnimatorView_SetParameterSynchronized_m2155 (PhotonAnimatorView_t377 * __this, String_t* ___name, int32_t ___type, int32_t ___synchronizeType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonAnimatorView::SerializeDataContinuously()
extern "C" void PhotonAnimatorView_SerializeDataContinuously_m2156 (PhotonAnimatorView_t377 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonAnimatorView::DeserializeDataContinuously()
extern "C" void PhotonAnimatorView_DeserializeDataContinuously_m2157 (PhotonAnimatorView_t377 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonAnimatorView::SerializeDataDiscretly(PhotonStream)
extern "C" void PhotonAnimatorView_SerializeDataDiscretly_m2158 (PhotonAnimatorView_t377 * __this, PhotonStream_t467 * ___stream, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonAnimatorView::DeserializeDataDiscretly(PhotonStream)
extern "C" void PhotonAnimatorView_DeserializeDataDiscretly_m2159 (PhotonAnimatorView_t377 * __this, PhotonStream_t467 * ___stream, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonAnimatorView::SerializeSynchronizationTypeState(PhotonStream)
extern "C" void PhotonAnimatorView_SerializeSynchronizationTypeState_m2160 (PhotonAnimatorView_t377 * __this, PhotonStream_t467 * ___stream, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonAnimatorView::DeserializeSynchronizationTypeState(PhotonStream)
extern "C" void PhotonAnimatorView_DeserializeSynchronizationTypeState_m2161 (PhotonAnimatorView_t377 * __this, PhotonStream_t467 * ___stream, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonAnimatorView::OnPhotonSerializeView(PhotonStream,PhotonMessageInfo)
extern "C" void PhotonAnimatorView_OnPhotonSerializeView_m2162 (PhotonAnimatorView_t377 * __this, PhotonStream_t467 * ___stream, PhotonMessageInfo_t463 * ___info, const MethodInfo* method) IL2CPP_METHOD_ATTR;
