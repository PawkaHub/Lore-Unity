#pragma once
#include <stdint.h>
// System.Collections.Generic.List`1<System.String>
struct List_1_t1;
// System.String
struct String_t;
// Photon.MonoBehaviour
#include "AssemblyU2DCSharp_Photon_MonoBehaviour.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// InRoomChat
struct  InRoomChat_t529  : public MonoBehaviour_t357
{
	// UnityEngine.Rect InRoomChat::GuiRect
	Rect_t201  ___GuiRect_2;
	// System.Boolean InRoomChat::IsVisible
	bool ___IsVisible_3;
	// System.Boolean InRoomChat::AlignBottom
	bool ___AlignBottom_4;
	// System.Collections.Generic.List`1<System.String> InRoomChat::messages
	List_1_t1 * ___messages_5;
	// System.String InRoomChat::inputLine
	String_t* ___inputLine_6;
	// UnityEngine.Vector2 InRoomChat::scrollPos
	Vector2_t97  ___scrollPos_7;
};
struct InRoomChat_t529_StaticFields{
	// System.String InRoomChat::ChatRPC
	String_t* ___ChatRPC_8;
};
