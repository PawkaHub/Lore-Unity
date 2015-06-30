#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Collections.Generic.List`1<System.String>
struct List_1_t1;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t2;
// System.Object
#include "mscorlib_System_Object.h"
// ExitGames.Client.Photon.Chat.ChatChannel
struct  ChatChannel_t3  : public Object_t
{
	// System.String ExitGames.Client.Photon.Chat.ChatChannel::Name
	String_t* ___Name_0;
	// System.Collections.Generic.List`1<System.String> ExitGames.Client.Photon.Chat.ChatChannel::Senders
	List_1_t1 * ___Senders_1;
	// System.Collections.Generic.List`1<System.Object> ExitGames.Client.Photon.Chat.ChatChannel::Messages
	List_1_t2 * ___Messages_2;
	// System.Boolean ExitGames.Client.Photon.Chat.ChatChannel::<IsPrivate>k__BackingField
	bool ___U3CIsPrivateU3Ek__BackingField_3;
};
