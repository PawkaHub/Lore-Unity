#pragma once
#include <stdint.h>
// System.Byte[]
struct ByteU5BU5D_t25;
// System.Object
#include "mscorlib_System_Object.h"
// ExitGames.Client.Photon.NCommand
struct  NCommand_t5094  : public Object_t
{
	// System.Byte ExitGames.Client.Photon.NCommand::commandFlags
	uint8_t ___commandFlags_26;
	// System.Byte ExitGames.Client.Photon.NCommand::commandType
	uint8_t ___commandType_27;
	// System.Byte ExitGames.Client.Photon.NCommand::commandChannelID
	uint8_t ___commandChannelID_28;
	// System.Int32 ExitGames.Client.Photon.NCommand::reliableSequenceNumber
	int32_t ___reliableSequenceNumber_29;
	// System.Int32 ExitGames.Client.Photon.NCommand::unreliableSequenceNumber
	int32_t ___unreliableSequenceNumber_30;
	// System.Int32 ExitGames.Client.Photon.NCommand::unsequencedGroupNumber
	int32_t ___unsequencedGroupNumber_31;
	// System.Byte ExitGames.Client.Photon.NCommand::reservedByte
	uint8_t ___reservedByte_32;
	// System.Int32 ExitGames.Client.Photon.NCommand::startSequenceNumber
	int32_t ___startSequenceNumber_33;
	// System.Int32 ExitGames.Client.Photon.NCommand::fragmentCount
	int32_t ___fragmentCount_34;
	// System.Int32 ExitGames.Client.Photon.NCommand::fragmentNumber
	int32_t ___fragmentNumber_35;
	// System.Int32 ExitGames.Client.Photon.NCommand::totalLength
	int32_t ___totalLength_36;
	// System.Int32 ExitGames.Client.Photon.NCommand::fragmentOffset
	int32_t ___fragmentOffset_37;
	// System.Int32 ExitGames.Client.Photon.NCommand::fragmentsRemaining
	int32_t ___fragmentsRemaining_38;
	// System.Byte[] ExitGames.Client.Photon.NCommand::Payload
	ByteU5BU5D_t25* ___Payload_39;
	// System.Int32 ExitGames.Client.Photon.NCommand::commandSentTime
	int32_t ___commandSentTime_40;
	// System.Byte ExitGames.Client.Photon.NCommand::commandSentCount
	uint8_t ___commandSentCount_41;
	// System.Int32 ExitGames.Client.Photon.NCommand::roundTripTimeout
	int32_t ___roundTripTimeout_42;
	// System.Int32 ExitGames.Client.Photon.NCommand::timeoutTime
	int32_t ___timeoutTime_43;
	// System.Int32 ExitGames.Client.Photon.NCommand::ackReceivedReliableSequenceNumber
	int32_t ___ackReceivedReliableSequenceNumber_44;
	// System.Int32 ExitGames.Client.Photon.NCommand::ackReceivedSentTime
	int32_t ___ackReceivedSentTime_45;
	// System.Byte[] ExitGames.Client.Photon.NCommand::completeCommand
	ByteU5BU5D_t25* ___completeCommand_46;
	// System.Int32 ExitGames.Client.Photon.NCommand::Size
	int32_t ___Size_47;
};
