#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Type
struct Type_t;
// ExitGames.Client.Photon.IPhotonSocket
struct IPhotonSocket_t5093;
// ExitGames.Client.Photon.NCommand
struct NCommand_t5094;
// ExitGames.Client.Photon.TrafficStats
struct TrafficStats_t777;
// ExitGames.Client.Photon.TrafficStatsGameLevel
struct TrafficStatsGameLevel_t775;
// System.Diagnostics.Stopwatch
struct Stopwatch_t495;
// System.Collections.Generic.Queue`1<ExitGames.Client.Photon.PeerBase/MyAction>
struct Queue_1_t5095;
// Photon.SocketServer.Security.DiffieHellmanCryptoProvider
struct DiffieHellmanCryptoProvider_t5083;
// System.Random
struct Random_t81;
// System.Collections.Generic.LinkedList`1<ExitGames.Client.Photon.SimulationItem>
struct LinkedList_1_t5096;
// ExitGames.Client.Photon.NetworkSimulationSet
struct NetworkSimulationSet_t771;
// System.Byte[]
struct ByteU5BU5D_t25;
// System.IO.MemoryStream
struct MemoryStream_t632;
// ExitGames.Client.Photon.IPhotonPeerListener
struct IPhotonPeerListener_t24;
// System.Object
#include "mscorlib_System_Object.h"
// ExitGames.Client.Photon.ConnectionProtocol
#include "Photon3Unity3D_ExitGames_Client_Photon_ConnectionProtocol.h"
// ExitGames.Client.Photon.DebugLevel
#include "Photon3Unity3D_ExitGames_Client_Photon_DebugLevel.h"
// ExitGames.Client.Photon.PeerBase/ConnectionStateValue
#include "Photon3Unity3D_ExitGames_Client_Photon_PeerBase_ConnectionSt.h"
// ExitGames.Client.Photon.PeerBase
struct  PeerBase_t5090  : public Object_t
{
	// System.Type ExitGames.Client.Photon.PeerBase::SocketImplementation
	Type_t * ___SocketImplementation_4;
	// ExitGames.Client.Photon.IPhotonSocket ExitGames.Client.Photon.PeerBase::rt
	IPhotonSocket_t5093 * ___rt_5;
	// System.Int32 ExitGames.Client.Photon.PeerBase::ByteCountLastOperation
	int32_t ___ByteCountLastOperation_6;
	// System.Int32 ExitGames.Client.Photon.PeerBase::ByteCountCurrentDispatch
	int32_t ___ByteCountCurrentDispatch_7;
	// ExitGames.Client.Photon.NCommand ExitGames.Client.Photon.PeerBase::CommandInCurrentDispatch
	NCommand_t5094 * ___CommandInCurrentDispatch_8;
	// System.Int32 ExitGames.Client.Photon.PeerBase::TrafficPackageHeaderSize
	int32_t ___TrafficPackageHeaderSize_9;
	// ExitGames.Client.Photon.TrafficStats ExitGames.Client.Photon.PeerBase::TrafficStatsIncoming
	TrafficStats_t777 * ___TrafficStatsIncoming_10;
	// ExitGames.Client.Photon.TrafficStats ExitGames.Client.Photon.PeerBase::TrafficStatsOutgoing
	TrafficStats_t777 * ___TrafficStatsOutgoing_11;
	// ExitGames.Client.Photon.TrafficStatsGameLevel ExitGames.Client.Photon.PeerBase::TrafficStatsGameLevel
	TrafficStatsGameLevel_t775 * ___TrafficStatsGameLevel_12;
	// System.Diagnostics.Stopwatch ExitGames.Client.Photon.PeerBase::trafficStatsStopwatch
	Stopwatch_t495 * ___trafficStatsStopwatch_13;
	// System.Boolean ExitGames.Client.Photon.PeerBase::trafficStatsEnabled
	bool ___trafficStatsEnabled_14;
	// ExitGames.Client.Photon.ConnectionProtocol ExitGames.Client.Photon.PeerBase::usedProtocol
	uint8_t ___usedProtocol_15;
	// System.Boolean ExitGames.Client.Photon.PeerBase::crcEnabled
	bool ___crcEnabled_16;
	// System.Int32 ExitGames.Client.Photon.PeerBase::packetLossByCrc
	int32_t ___packetLossByCrc_17;
	// ExitGames.Client.Photon.DebugLevel ExitGames.Client.Photon.PeerBase::debugOut
	uint8_t ___debugOut_18;
	// System.Collections.Generic.Queue`1<ExitGames.Client.Photon.PeerBase/MyAction> ExitGames.Client.Photon.PeerBase::ActionQueue
	Queue_1_t5095 * ___ActionQueue_19;
	// System.Int16 ExitGames.Client.Photon.PeerBase::peerID
	int16_t ___peerID_20;
	// ExitGames.Client.Photon.PeerBase/ConnectionStateValue ExitGames.Client.Photon.PeerBase::peerConnectionState
	uint8_t ___peerConnectionState_21;
	// System.Int32 ExitGames.Client.Photon.PeerBase::serverTimeOffset
	int32_t ___serverTimeOffset_22;
	// System.Boolean ExitGames.Client.Photon.PeerBase::serverTimeOffsetIsAvailable
	bool ___serverTimeOffsetIsAvailable_23;
	// System.Int32 ExitGames.Client.Photon.PeerBase::roundTripTime
	int32_t ___roundTripTime_24;
	// System.Int32 ExitGames.Client.Photon.PeerBase::roundTripTimeVariance
	int32_t ___roundTripTimeVariance_25;
	// System.Int32 ExitGames.Client.Photon.PeerBase::lastRoundTripTime
	int32_t ___lastRoundTripTime_26;
	// System.Int32 ExitGames.Client.Photon.PeerBase::lowestRoundTripTime
	int32_t ___lowestRoundTripTime_27;
	// System.Int32 ExitGames.Client.Photon.PeerBase::lastRoundTripTimeVariance
	int32_t ___lastRoundTripTimeVariance_28;
	// System.Int32 ExitGames.Client.Photon.PeerBase::highestRoundTripTimeVariance
	int32_t ___highestRoundTripTimeVariance_29;
	// System.Int32 ExitGames.Client.Photon.PeerBase::timestampOfLastReceive
	int32_t ___timestampOfLastReceive_30;
	// System.Int32 ExitGames.Client.Photon.PeerBase::packetThrottleInterval
	int32_t ___packetThrottleInterval_31;
	// System.Int64 ExitGames.Client.Photon.PeerBase::bytesOut
	int64_t ___bytesOut_33;
	// System.Int64 ExitGames.Client.Photon.PeerBase::bytesIn
	int64_t ___bytesIn_34;
	// System.Int32 ExitGames.Client.Photon.PeerBase::commandBufferSize
	int32_t ___commandBufferSize_35;
	// System.Int32 ExitGames.Client.Photon.PeerBase::warningSize
	int32_t ___warningSize_36;
	// System.Int32 ExitGames.Client.Photon.PeerBase::sentCountAllowance
	int32_t ___sentCountAllowance_37;
	// System.Int32 ExitGames.Client.Photon.PeerBase::DisconnectTimeout
	int32_t ___DisconnectTimeout_38;
	// System.Int32 ExitGames.Client.Photon.PeerBase::timePingInterval
	int32_t ___timePingInterval_39;
	// System.Byte ExitGames.Client.Photon.PeerBase::ChannelCount
	uint8_t ___ChannelCount_40;
	// System.Int32 ExitGames.Client.Photon.PeerBase::limitOfUnreliableCommands
	int32_t ___limitOfUnreliableCommands_41;
	// Photon.SocketServer.Security.DiffieHellmanCryptoProvider ExitGames.Client.Photon.PeerBase::CryptoProvider
	DiffieHellmanCryptoProvider_t5083 * ___CryptoProvider_42;
	// System.Random ExitGames.Client.Photon.PeerBase::lagRandomizer
	Random_t81 * ___lagRandomizer_43;
	// System.Collections.Generic.LinkedList`1<ExitGames.Client.Photon.SimulationItem> ExitGames.Client.Photon.PeerBase::NetSimListOutgoing
	LinkedList_1_t5096 * ___NetSimListOutgoing_44;
	// System.Collections.Generic.LinkedList`1<ExitGames.Client.Photon.SimulationItem> ExitGames.Client.Photon.PeerBase::NetSimListIncoming
	LinkedList_1_t5096 * ___NetSimListIncoming_45;
	// ExitGames.Client.Photon.NetworkSimulationSet ExitGames.Client.Photon.PeerBase::networkSimulationSettings
	NetworkSimulationSet_t771 * ___networkSimulationSettings_46;
	// System.Byte[] ExitGames.Client.Photon.PeerBase::INIT_BYTES
	ByteU5BU5D_t25* ___INIT_BYTES_47;
	// System.Int32 ExitGames.Client.Photon.PeerBase::timeBase
	int32_t ___timeBase_48;
	// System.Int32 ExitGames.Client.Photon.PeerBase::timeInt
	int32_t ___timeInt_49;
	// System.Int32 ExitGames.Client.Photon.PeerBase::timeoutInt
	int32_t ___timeoutInt_50;
	// System.Int32 ExitGames.Client.Photon.PeerBase::timeLastAckReceive
	int32_t ___timeLastAckReceive_51;
	// System.Boolean ExitGames.Client.Photon.PeerBase::ApplicationIsInitialized
	bool ___ApplicationIsInitialized_52;
	// System.Boolean ExitGames.Client.Photon.PeerBase::isEncryptionAvailable
	bool ___isEncryptionAvailable_53;
	// System.Int32 ExitGames.Client.Photon.PeerBase::outgoingCommandsInStream
	int32_t ___outgoingCommandsInStream_55;
	// System.Int32 ExitGames.Client.Photon.PeerBase::mtu
	int32_t ___mtu_56;
	// System.Int32 ExitGames.Client.Photon.PeerBase::rhttpMinConnections
	int32_t ___rhttpMinConnections_57;
	// System.Int32 ExitGames.Client.Photon.PeerBase::rhttpMaxConnections
	int32_t ___rhttpMaxConnections_58;
	// System.IO.MemoryStream ExitGames.Client.Photon.PeerBase::SerializeMemStream
	MemoryStream_t632 * ___SerializeMemStream_59;
	// System.String ExitGames.Client.Photon.PeerBase::<ServerAddress>k__BackingField
	String_t* ___U3CServerAddressU3Ek__BackingField_60;
	// System.String ExitGames.Client.Photon.PeerBase::<HttpUrlParameters>k__BackingField
	String_t* ___U3CHttpUrlParametersU3Ek__BackingField_61;
	// ExitGames.Client.Photon.IPhotonPeerListener ExitGames.Client.Photon.PeerBase::<Listener>k__BackingField
	Object_t * ___U3CListenerU3Ek__BackingField_62;
	// System.Byte ExitGames.Client.Photon.PeerBase::<QuickResendAttempts>k__BackingField
	uint8_t ___U3CQuickResendAttemptsU3Ek__BackingField_63;
	// System.Byte[] ExitGames.Client.Photon.PeerBase::<TcpConnectionPrefix>k__BackingField
	ByteU5BU5D_t25* ___U3CTcpConnectionPrefixU3Ek__BackingField_64;
	// System.Boolean ExitGames.Client.Photon.PeerBase::<IsSendingOnlyAcks>k__BackingField
	bool ___U3CIsSendingOnlyAcksU3Ek__BackingField_65;
};
struct PeerBase_t5090_StaticFields{
	// System.Int16 ExitGames.Client.Photon.PeerBase::peerCount
	int16_t ___peerCount_32;
	// System.Int32 ExitGames.Client.Photon.PeerBase::outgoingStreamBufferSize
	int32_t ___outgoingStreamBufferSize_54;
};
