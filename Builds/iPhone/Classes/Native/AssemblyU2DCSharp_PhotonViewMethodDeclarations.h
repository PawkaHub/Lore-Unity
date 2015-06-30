#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PhotonView
struct PhotonView_t325;
// System.Object[]
struct ObjectU5BU5D_t21;
// PhotonPlayer
struct PhotonPlayer_t432;
// PhotonStream
struct PhotonStream_t439;
// PhotonMessageInfo
struct PhotonMessageInfo_t435;
// UnityEngine.Component
struct Component_t462;
// System.String
struct String_t;
// UnityEngine.GameObject
struct GameObject_t49;
// PhotonTargets
#include "AssemblyU2DCSharp_PhotonTargets.h"

// System.Void PhotonView::.ctor()
extern "C" void PhotonView__ctor_m1990 (PhotonView_t325 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PhotonView::get_prefix()
extern "C" int32_t PhotonView_get_prefix_m1991 (PhotonView_t325 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonView::set_prefix(System.Int32)
extern "C" void PhotonView_set_prefix_m1992 (PhotonView_t325 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] PhotonView::get_instantiationData()
extern "C" ObjectU5BU5D_t21* PhotonView_get_instantiationData_m1993 (PhotonView_t325 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonView::set_instantiationData(System.Object[])
extern "C" void PhotonView_set_instantiationData_m1994 (PhotonView_t325 * __this, ObjectU5BU5D_t21* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PhotonView::get_viewID()
extern "C" int32_t PhotonView_get_viewID_m1995 (PhotonView_t325 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonView::set_viewID(System.Int32)
extern "C" void PhotonView_set_viewID_m1996 (PhotonView_t325 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonView::get_isSceneView()
extern "C" bool PhotonView_get_isSceneView_m1997 (PhotonView_t325 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PhotonPlayer PhotonView::get_owner()
extern "C" PhotonPlayer_t432 * PhotonView_get_owner_m1998 (PhotonView_t325 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PhotonView::get_OwnerActorNr()
extern "C" int32_t PhotonView_get_OwnerActorNr_m1999 (PhotonView_t325 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonView::get_isOwnerActive()
extern "C" bool PhotonView_get_isOwnerActive_m2000 (PhotonView_t325 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PhotonView::get_CreatorActorNr()
extern "C" int32_t PhotonView_get_CreatorActorNr_m2001 (PhotonView_t325 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonView::get_isMine()
extern "C" bool PhotonView_get_isMine_m2002 (PhotonView_t325 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonView::Awake()
extern "C" void PhotonView_Awake_m2003 (PhotonView_t325 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonView::RequestOwnership()
extern "C" void PhotonView_RequestOwnership_m2004 (PhotonView_t325 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonView::TransferOwnership(PhotonPlayer)
extern "C" void PhotonView_TransferOwnership_m2005 (PhotonView_t325 * __this, PhotonPlayer_t432 * ___newOwner, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonView::TransferOwnership(System.Int32)
extern "C" void PhotonView_TransferOwnership_m2006 (PhotonView_t325 * __this, int32_t ___newOwnerId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonView::OnApplicationQuit()
extern "C" void PhotonView_OnApplicationQuit_m2007 (PhotonView_t325 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonView::OnDestroy()
extern "C" void PhotonView_OnDestroy_m2008 (PhotonView_t325 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonView::SerializeView(PhotonStream,PhotonMessageInfo)
extern "C" void PhotonView_SerializeView_m2009 (PhotonView_t325 * __this, PhotonStream_t439 * ___stream, PhotonMessageInfo_t435 * ___info, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonView::DeserializeView(PhotonStream,PhotonMessageInfo)
extern "C" void PhotonView_DeserializeView_m2010 (PhotonView_t325 * __this, PhotonStream_t439 * ___stream, PhotonMessageInfo_t435 * ___info, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonView::DeserializeComponent(UnityEngine.Component,PhotonStream,PhotonMessageInfo)
extern "C" void PhotonView_DeserializeComponent_m2011 (PhotonView_t325 * __this, Component_t462 * ___component, PhotonStream_t439 * ___stream, PhotonMessageInfo_t435 * ___info, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonView::SerializeComponent(UnityEngine.Component,PhotonStream,PhotonMessageInfo)
extern "C" void PhotonView_SerializeComponent_m2012 (PhotonView_t325 * __this, Component_t462 * ___component, PhotonStream_t439 * ___stream, PhotonMessageInfo_t435 * ___info, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonView::ExecuteComponentOnSerialize(UnityEngine.Component,PhotonStream,PhotonMessageInfo)
extern "C" void PhotonView_ExecuteComponentOnSerialize_m2013 (PhotonView_t325 * __this, Component_t462 * ___component, PhotonStream_t439 * ___stream, PhotonMessageInfo_t435 * ___info, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonView::RefreshRpcMonoBehaviourCache()
extern "C" void PhotonView_RefreshRpcMonoBehaviourCache_m2014 (PhotonView_t325 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonView::RPC(System.String,PhotonTargets,System.Object[])
extern "C" void PhotonView_RPC_m2015 (PhotonView_t325 * __this, String_t* ___methodName, int32_t ___target, ObjectU5BU5D_t21* ___parameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonView::RpcSecure(System.String,PhotonTargets,System.Boolean,System.Object[])
extern "C" void PhotonView_RpcSecure_m2016 (PhotonView_t325 * __this, String_t* ___methodName, int32_t ___target, bool ___encrypt, ObjectU5BU5D_t21* ___parameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonView::RPC(System.String,PhotonPlayer,System.Object[])
extern "C" void PhotonView_RPC_m2017 (PhotonView_t325 * __this, String_t* ___methodName, PhotonPlayer_t432 * ___targetPlayer, ObjectU5BU5D_t21* ___parameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonView::RpcSecure(System.String,PhotonPlayer,System.Boolean,System.Object[])
extern "C" void PhotonView_RpcSecure_m2018 (PhotonView_t325 * __this, String_t* ___methodName, PhotonPlayer_t432 * ___targetPlayer, bool ___encrypt, ObjectU5BU5D_t21* ___parameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PhotonView PhotonView::Get(UnityEngine.Component)
extern "C" PhotonView_t325 * PhotonView_Get_m2019 (Object_t * __this /* static, unused */, Component_t462 * ___component, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PhotonView PhotonView::Get(UnityEngine.GameObject)
extern "C" PhotonView_t325 * PhotonView_Get_m2020 (Object_t * __this /* static, unused */, GameObject_t49 * ___gameObj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PhotonView PhotonView::Find(System.Int32)
extern "C" PhotonView_t325 * PhotonView_Find_m2021 (Object_t * __this /* static, unused */, int32_t ___viewID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PhotonView::ToString()
extern "C" String_t* PhotonView_ToString_m2022 (PhotonView_t325 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
