#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PhotonView
struct PhotonView_t353;
// System.Object[]
struct ObjectU5BU5D_t21;
// PhotonPlayer
struct PhotonPlayer_t460;
// PhotonStream
struct PhotonStream_t467;
// PhotonMessageInfo
struct PhotonMessageInfo_t463;
// UnityEngine.Component
struct Component_t490;
// System.String
struct String_t;
// UnityEngine.GameObject
struct GameObject_t49;
// PhotonTargets
#include "AssemblyU2DCSharp_PhotonTargets.h"

// System.Void PhotonView::.ctor()
extern "C" void PhotonView__ctor_m2036 (PhotonView_t353 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PhotonView::get_prefix()
extern "C" int32_t PhotonView_get_prefix_m2037 (PhotonView_t353 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonView::set_prefix(System.Int32)
extern "C" void PhotonView_set_prefix_m2038 (PhotonView_t353 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] PhotonView::get_instantiationData()
extern "C" ObjectU5BU5D_t21* PhotonView_get_instantiationData_m2039 (PhotonView_t353 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonView::set_instantiationData(System.Object[])
extern "C" void PhotonView_set_instantiationData_m2040 (PhotonView_t353 * __this, ObjectU5BU5D_t21* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PhotonView::get_viewID()
extern "C" int32_t PhotonView_get_viewID_m2041 (PhotonView_t353 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonView::set_viewID(System.Int32)
extern "C" void PhotonView_set_viewID_m2042 (PhotonView_t353 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonView::get_isSceneView()
extern "C" bool PhotonView_get_isSceneView_m2043 (PhotonView_t353 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PhotonPlayer PhotonView::get_owner()
extern "C" PhotonPlayer_t460 * PhotonView_get_owner_m2044 (PhotonView_t353 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PhotonView::get_OwnerActorNr()
extern "C" int32_t PhotonView_get_OwnerActorNr_m2045 (PhotonView_t353 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonView::get_isOwnerActive()
extern "C" bool PhotonView_get_isOwnerActive_m2046 (PhotonView_t353 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PhotonView::get_CreatorActorNr()
extern "C" int32_t PhotonView_get_CreatorActorNr_m2047 (PhotonView_t353 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonView::get_isMine()
extern "C" bool PhotonView_get_isMine_m2048 (PhotonView_t353 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonView::Awake()
extern "C" void PhotonView_Awake_m2049 (PhotonView_t353 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonView::RequestOwnership()
extern "C" void PhotonView_RequestOwnership_m2050 (PhotonView_t353 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonView::TransferOwnership(PhotonPlayer)
extern "C" void PhotonView_TransferOwnership_m2051 (PhotonView_t353 * __this, PhotonPlayer_t460 * ___newOwner, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonView::TransferOwnership(System.Int32)
extern "C" void PhotonView_TransferOwnership_m2052 (PhotonView_t353 * __this, int32_t ___newOwnerId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonView::OnApplicationQuit()
extern "C" void PhotonView_OnApplicationQuit_m2053 (PhotonView_t353 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonView::OnDestroy()
extern "C" void PhotonView_OnDestroy_m2054 (PhotonView_t353 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonView::SerializeView(PhotonStream,PhotonMessageInfo)
extern "C" void PhotonView_SerializeView_m2055 (PhotonView_t353 * __this, PhotonStream_t467 * ___stream, PhotonMessageInfo_t463 * ___info, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonView::DeserializeView(PhotonStream,PhotonMessageInfo)
extern "C" void PhotonView_DeserializeView_m2056 (PhotonView_t353 * __this, PhotonStream_t467 * ___stream, PhotonMessageInfo_t463 * ___info, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonView::DeserializeComponent(UnityEngine.Component,PhotonStream,PhotonMessageInfo)
extern "C" void PhotonView_DeserializeComponent_m2057 (PhotonView_t353 * __this, Component_t490 * ___component, PhotonStream_t467 * ___stream, PhotonMessageInfo_t463 * ___info, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonView::SerializeComponent(UnityEngine.Component,PhotonStream,PhotonMessageInfo)
extern "C" void PhotonView_SerializeComponent_m2058 (PhotonView_t353 * __this, Component_t490 * ___component, PhotonStream_t467 * ___stream, PhotonMessageInfo_t463 * ___info, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonView::ExecuteComponentOnSerialize(UnityEngine.Component,PhotonStream,PhotonMessageInfo)
extern "C" void PhotonView_ExecuteComponentOnSerialize_m2059 (PhotonView_t353 * __this, Component_t490 * ___component, PhotonStream_t467 * ___stream, PhotonMessageInfo_t463 * ___info, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonView::RefreshRpcMonoBehaviourCache()
extern "C" void PhotonView_RefreshRpcMonoBehaviourCache_m2060 (PhotonView_t353 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonView::RPC(System.String,PhotonTargets,System.Object[])
extern "C" void PhotonView_RPC_m2061 (PhotonView_t353 * __this, String_t* ___methodName, int32_t ___target, ObjectU5BU5D_t21* ___parameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonView::RpcSecure(System.String,PhotonTargets,System.Boolean,System.Object[])
extern "C" void PhotonView_RpcSecure_m2062 (PhotonView_t353 * __this, String_t* ___methodName, int32_t ___target, bool ___encrypt, ObjectU5BU5D_t21* ___parameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonView::RPC(System.String,PhotonPlayer,System.Object[])
extern "C" void PhotonView_RPC_m2063 (PhotonView_t353 * __this, String_t* ___methodName, PhotonPlayer_t460 * ___targetPlayer, ObjectU5BU5D_t21* ___parameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonView::RpcSecure(System.String,PhotonPlayer,System.Boolean,System.Object[])
extern "C" void PhotonView_RpcSecure_m2064 (PhotonView_t353 * __this, String_t* ___methodName, PhotonPlayer_t460 * ___targetPlayer, bool ___encrypt, ObjectU5BU5D_t21* ___parameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PhotonView PhotonView::Get(UnityEngine.Component)
extern "C" PhotonView_t353 * PhotonView_Get_m2065 (Object_t * __this /* static, unused */, Component_t490 * ___component, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PhotonView PhotonView::Get(UnityEngine.GameObject)
extern "C" PhotonView_t353 * PhotonView_Get_m2066 (Object_t * __this /* static, unused */, GameObject_t49 * ___gameObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PhotonView PhotonView::Find(System.Int32)
extern "C" PhotonView_t353 * PhotonView_Find_m2067 (Object_t * __this /* static, unused */, int32_t ___viewID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PhotonView::ToString()
extern "C" String_t* PhotonView_ToString_m2068 (PhotonView_t353 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
