#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Object
struct Object_t;
// System.Object
#include "mscorlib_System_Object.h"
// ExitGames.Client.Photon.Chat.CustomAuthenticationType
#include "AssemblyU2DCSharpU2Dfirstpass_ExitGames_Client_Photon_Chat_C_7.h"
// ExitGames.Client.Photon.Chat.AuthenticationValues
struct  AuthenticationValues_t7  : public Object_t
{
	// ExitGames.Client.Photon.Chat.CustomAuthenticationType ExitGames.Client.Photon.Chat.AuthenticationValues::AuthType
	uint8_t ___AuthType_0;
	// System.String ExitGames.Client.Photon.Chat.AuthenticationValues::AuthGetParameters
	String_t* ___AuthGetParameters_1;
	// System.String ExitGames.Client.Photon.Chat.AuthenticationValues::Token
	String_t* ___Token_2;
	// System.Object ExitGames.Client.Photon.Chat.AuthenticationValues::<AuthPostData>k__BackingField
	Object_t * ___U3CAuthPostDataU3Ek__BackingField_3;
	// System.String ExitGames.Client.Photon.Chat.AuthenticationValues::<UserId>k__BackingField
	String_t* ___U3CUserIdU3Ek__BackingField_4;
};
