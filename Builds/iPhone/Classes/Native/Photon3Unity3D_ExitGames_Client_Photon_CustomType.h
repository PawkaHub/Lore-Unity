#pragma once
#include <stdint.h>
// System.Type
struct Type_t;
// ExitGames.Client.Photon.SerializeMethod
struct SerializeMethod_t3148;
// ExitGames.Client.Photon.DeserializeMethod
struct DeserializeMethod_t3149;
// ExitGames.Client.Photon.SerializeStreamMethod
struct SerializeStreamMethod_t655;
// ExitGames.Client.Photon.DeserializeStreamMethod
struct DeserializeStreamMethod_t656;
// System.Object
#include "mscorlib_System_Object.h"
// ExitGames.Client.Photon.CustomType
struct  CustomType_t3150  : public Object_t
{
	// System.Byte ExitGames.Client.Photon.CustomType::Code
	uint8_t ___Code_0;
	// System.Type ExitGames.Client.Photon.CustomType::Type
	Type_t * ___Type_1;
	// ExitGames.Client.Photon.SerializeMethod ExitGames.Client.Photon.CustomType::SerializeFunction
	SerializeMethod_t3148 * ___SerializeFunction_2;
	// ExitGames.Client.Photon.DeserializeMethod ExitGames.Client.Photon.CustomType::DeserializeFunction
	DeserializeMethod_t3149 * ___DeserializeFunction_3;
	// ExitGames.Client.Photon.SerializeStreamMethod ExitGames.Client.Photon.CustomType::SerializeStreamFunction
	SerializeStreamMethod_t655 * ___SerializeStreamFunction_4;
	// ExitGames.Client.Photon.DeserializeStreamMethod ExitGames.Client.Photon.CustomType::DeserializeStreamFunction
	DeserializeStreamMethod_t656 * ___DeserializeStreamFunction_5;
};
