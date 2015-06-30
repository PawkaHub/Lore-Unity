#pragma once
#include <stdint.h>
// System.Object[]
struct ObjectU5BU5D_t21;
// UnityEngine.Component
struct Component_t462;
// System.Collections.Generic.List`1<UnityEngine.Component>
struct List_1_t463;
// System.Collections.Generic.Dictionary`2<UnityEngine.Component,System.Reflection.MethodInfo>
struct Dictionary_2_t464;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour[]
struct MonoBehaviourU5BU5D_t465;
// Photon.MonoBehaviour
#include "AssemblyU2DCSharp_Photon_MonoBehaviour.h"
// ViewSynchronization
#include "AssemblyU2DCSharp_ViewSynchronization.h"
// OnSerializeTransform
#include "AssemblyU2DCSharp_OnSerializeTransform.h"
// OnSerializeRigidBody
#include "AssemblyU2DCSharp_OnSerializeRigidBody.h"
// OwnershipOption
#include "AssemblyU2DCSharp_OwnershipOption.h"
// PhotonView
struct  PhotonView_t325  : public MonoBehaviour_t329
{
	// System.Int32 PhotonView::ownerId
	int32_t ___ownerId_2;
	// System.Int32 PhotonView::group
	int32_t ___group_3;
	// System.Boolean PhotonView::mixedModeIsReliable
	bool ___mixedModeIsReliable_4;
	// System.Int32 PhotonView::prefixBackup
	int32_t ___prefixBackup_5;
	// System.Object[] PhotonView::instantiationDataField
	ObjectU5BU5D_t21* ___instantiationDataField_6;
	// System.Object[] PhotonView::lastOnSerializeDataSent
	ObjectU5BU5D_t21* ___lastOnSerializeDataSent_7;
	// System.Object[] PhotonView::lastOnSerializeDataReceived
	ObjectU5BU5D_t21* ___lastOnSerializeDataReceived_8;
	// UnityEngine.Component PhotonView::observed
	Component_t462 * ___observed_9;
	// ViewSynchronization PhotonView::synchronization
	int32_t ___synchronization_10;
	// OnSerializeTransform PhotonView::onSerializeTransformOption
	int32_t ___onSerializeTransformOption_11;
	// OnSerializeRigidBody PhotonView::onSerializeRigidBodyOption
	int32_t ___onSerializeRigidBodyOption_12;
	// OwnershipOption PhotonView::ownershipTransfer
	int32_t ___ownershipTransfer_13;
	// System.Collections.Generic.List`1<UnityEngine.Component> PhotonView::ObservedComponents
	List_1_t463 * ___ObservedComponents_14;
	// System.Collections.Generic.Dictionary`2<UnityEngine.Component,System.Reflection.MethodInfo> PhotonView::m_OnSerializeMethodInfos
	Dictionary_2_t464 * ___m_OnSerializeMethodInfos_15;
	// System.Boolean PhotonView::ObservedComponentsFoldoutOpen
	bool ___ObservedComponentsFoldoutOpen_16;
	// System.Int32 PhotonView::viewIdField
	int32_t ___viewIdField_17;
	// System.Int32 PhotonView::instantiationId
	int32_t ___instantiationId_18;
	// System.Boolean PhotonView::didAwake
	bool ___didAwake_19;
	// System.Boolean PhotonView::isRuntimeInstantiated
	bool ___isRuntimeInstantiated_20;
	// System.Boolean PhotonView::destroyedByPhotonNetworkOrQuit
	bool ___destroyedByPhotonNetworkOrQuit_21;
	// System.Reflection.MethodInfo PhotonView::OnSerializeMethodInfo
	MethodInfo_t * ___OnSerializeMethodInfo_22;
	// System.Boolean PhotonView::failedToFindOnSerialize
	bool ___failedToFindOnSerialize_23;
	// UnityEngine.MonoBehaviour[] PhotonView::RpcMonoBehaviours
	MonoBehaviourU5BU5D_t465* ___RpcMonoBehaviours_24;
};
