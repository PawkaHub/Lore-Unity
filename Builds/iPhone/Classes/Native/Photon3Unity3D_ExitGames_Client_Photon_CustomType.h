#pragma once
#include <stdint.h>
// System.Type
struct Type_t;
// ExitGames.Client.Photon.SerializeMethod
struct SerializeMethod_t4875;
// ExitGames.Client.Photon.DeserializeMethod
struct DeserializeMethod_t4876;
// ExitGames.Client.Photon.SerializeStreamMethod
struct SerializeStreamMethod_t674;
// ExitGames.Client.Photon.DeserializeStreamMethod
struct DeserializeStreamMethod_t675;
// System.Object
#include "mscorlib_System_Object.h"
// ExitGames.Client.Photon.CustomType
struct  CustomType_t4877  : public Object_t
{
	// System.Byte ExitGames.Client.Photon.CustomType::Code
	uint8_t ___Code_0;
	// System.Type ExitGames.Client.Photon.CustomType::Type
	Type_t * ___Type_1;
	// ExitGames.Client.Photon.SerializeMethod ExitGames.Client.Photon.CustomType::SerializeFunction
	SerializeMethod_t4875 * ___SerializeFunction_2;
	// ExitGames.Client.Photon.DeserializeMethod ExitGames.Client.Photon.CustomType::DeserializeFunction
	DeserializeMethod_t4876 * ___DeserializeFunction_3;
	// ExitGames.Client.Photon.SerializeStreamMethod ExitGames.Client.Photon.CustomType::SerializeStreamFunction
	SerializeStreamMethod_t674 * ___SerializeStreamFunction_4;
	// ExitGames.Client.Photon.DeserializeStreamMethod ExitGames.Client.Photon.CustomType::DeserializeStreamFunction
	DeserializeStreamMethod_t675 * ___DeserializeStreamFunction_5;
};
