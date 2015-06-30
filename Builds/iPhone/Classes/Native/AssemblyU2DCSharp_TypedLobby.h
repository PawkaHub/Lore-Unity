#pragma once
#include <stdint.h>
// System.String
struct String_t;
// TypedLobby
struct TypedLobby_t431;
// System.Object
#include "mscorlib_System_Object.h"
// LobbyType
#include "AssemblyU2DCSharp_LobbyType.h"
// TypedLobby
struct  TypedLobby_t431  : public Object_t
{
	// System.String TypedLobby::Name
	String_t* ___Name_0;
	// LobbyType TypedLobby::Type
	uint8_t ___Type_1;
};
struct TypedLobby_t431_StaticFields{
	// TypedLobby TypedLobby::Default
	TypedLobby_t431 * ___Default_2;
};
