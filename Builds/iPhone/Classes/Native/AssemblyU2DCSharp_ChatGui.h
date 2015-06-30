#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t20;
// ExitGames.Client.Photon.Chat.ChatChannel
struct ChatChannel_t3;
// ExitGames.Client.Photon.Chat.ChatClient
struct ChatClient_t8;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// ChatGui
struct  ChatGui_t338  : public MonoBehaviour_t47
{
	// System.String ChatGui::ChatAppId
	String_t* ___ChatAppId_2;
	// System.String[] ChatGui::ChannelsToJoinOnConnect
	StringU5BU5D_t20* ___ChannelsToJoinOnConnect_3;
	// System.Int32 ChatGui::HistoryLengthToFetch
	int32_t ___HistoryLengthToFetch_4;
	// System.Boolean ChatGui::DemoPublishOnSubscribe
	bool ___DemoPublishOnSubscribe_5;
	// ExitGames.Client.Photon.Chat.ChatChannel ChatGui::selectedChannel
	ChatChannel_t3 * ___selectedChannel_6;
	// System.String ChatGui::selectedChannelName
	String_t* ___selectedChannelName_7;
	// System.Int32 ChatGui::selectedChannelIndex
	int32_t ___selectedChannelIndex_8;
	// System.Boolean ChatGui::doingPrivateChat
	bool ___doingPrivateChat_9;
	// ExitGames.Client.Photon.Chat.ChatClient ChatGui::chatClient
	ChatClient_t8 * ___chatClient_10;
	// UnityEngine.Rect ChatGui::GuiRect
	Rect_t201  ___GuiRect_11;
	// System.Boolean ChatGui::IsVisible
	bool ___IsVisible_12;
	// System.Boolean ChatGui::AlignBottom
	bool ___AlignBottom_13;
	// System.Boolean ChatGui::FullScreen
	bool ___FullScreen_14;
	// System.String ChatGui::inputLine
	String_t* ___inputLine_15;
	// System.String ChatGui::userIdInput
	String_t* ___userIdInput_16;
	// UnityEngine.Vector2 ChatGui::scrollPos
	Vector2_t97  ___scrollPos_17;
	// System.String ChatGui::<UserName>k__BackingField
	String_t* ___U3CUserNameU3Ek__BackingField_20;
};
struct ChatGui_t338_StaticFields{
	// System.String ChatGui::WelcomeText
	String_t* ___WelcomeText_18;
	// System.String ChatGui::HelpText
	String_t* ___HelpText_19;
};
