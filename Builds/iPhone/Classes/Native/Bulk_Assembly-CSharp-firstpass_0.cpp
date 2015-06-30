#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
// <Module>
#include "AssemblyU2DCSharpU2Dfirstpass_U3CModuleU3E.h"
#include <cstring>
#include <string.h>
#include <stdio.h>
#ifndef _MSC_VER
#include <alloca.h>
#else
#include <malloc.h>
#endif
#include <cmath>
#include <limits>
#include <assert.h>
// <Module>
#include "AssemblyU2DCSharpU2Dfirstpass_U3CModuleU3EMethodDeclarations.h"


// System.Array
#include "mscorlib_System_Array.h"

// ExitGames.Client.Photon.Chat.ChatChannel
#include "AssemblyU2DCSharpU2Dfirstpass_ExitGames_Client_Photon_Chat_C.h"
#ifndef _MSC_VER
#else
#endif
// ExitGames.Client.Photon.Chat.ChatChannel
#include "AssemblyU2DCSharpU2Dfirstpass_ExitGames_Client_Photon_Chat_CMethodDeclarations.h"

// System.Boolean
#include "mscorlib_System_Boolean.h"
// System.Void
#include "mscorlib_System_Void.h"
// System.Int32
#include "mscorlib_System_Int32.h"
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen.h"
// System.String
#include "mscorlib_System_String.h"
// System.Collections.Generic.List`1<System.String>
#include "mscorlib_System_Collections_Generic_List_1_gen_0.h"
// System.Object
#include "mscorlib_System_Object.h"
#include "mscorlib_ArrayTypes.h"
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_genMethodDeclarations.h"
// System.Collections.Generic.List`1<System.String>
#include "mscorlib_System_Collections_Generic_List_1_gen_0MethodDeclarations.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"


// System.Void ExitGames.Client.Photon.Chat.ChatChannel::.ctor(System.String)
extern TypeInfo* List_1_t1_il2cpp_TypeInfo_var;
extern TypeInfo* List_1_t2_il2cpp_TypeInfo_var;
extern const MethodInfo* List_1__ctor_m83_MethodInfo_var;
extern const MethodInfo* List_1__ctor_m84_MethodInfo_var;
extern "C" void ChatChannel__ctor_m0 (ChatChannel_t3 * __this, String_t* ___name, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_t1_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		List_1_t2_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		List_1__ctor_m83_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483649);
		List_1__ctor_m84_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483650);
		s_Il2CppMethodIntialized = true;
	}
	{
		List_1_t1 * L_0 = (List_1_t1 *)il2cpp_codegen_object_new (List_1_t1_il2cpp_TypeInfo_var);
		List_1__ctor_m83(L_0, /*hidden argument*/List_1__ctor_m83_MethodInfo_var);
		__this->___Senders_1 = L_0;
		List_1_t2 * L_1 = (List_1_t2 *)il2cpp_codegen_object_new (List_1_t2_il2cpp_TypeInfo_var);
		List_1__ctor_m84(L_1, /*hidden argument*/List_1__ctor_m84_MethodInfo_var);
		__this->___Messages_2 = L_1;
		Object__ctor_m85(__this, /*hidden argument*/NULL);
		String_t* L_2 = ___name;
		__this->___Name_0 = L_2;
		return;
	}
}
// System.Boolean ExitGames.Client.Photon.Chat.ChatChannel::get_IsPrivate()
extern "C" bool ChatChannel_get_IsPrivate_m1 (ChatChannel_t3 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___U3CIsPrivateU3Ek__BackingField_3);
		return L_0;
	}
}
// System.Void ExitGames.Client.Photon.Chat.ChatChannel::set_IsPrivate(System.Boolean)
extern "C" void ChatChannel_set_IsPrivate_m2 (ChatChannel_t3 * __this, bool ___value, const MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->___U3CIsPrivateU3Ek__BackingField_3 = L_0;
		return;
	}
}
// System.Int32 ExitGames.Client.Photon.Chat.ChatChannel::get_MessageCount()
extern "C" int32_t ChatChannel_get_MessageCount_m3 (ChatChannel_t3 * __this, const MethodInfo* method)
{
	{
		List_1_t2 * L_0 = (__this->___Messages_2);
		NullCheck(L_0);
		int32_t L_1 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count() */, L_0);
		return L_1;
	}
}
// System.Void ExitGames.Client.Photon.Chat.ChatChannel::Add(System.String,System.Object)
extern "C" void ChatChannel_Add_m4 (ChatChannel_t3 * __this, String_t* ___sender, Object_t * ___message, const MethodInfo* method)
{
	{
		List_1_t1 * L_0 = (__this->___Senders_1);
		String_t* L_1 = ___sender;
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.String>::Add(!0) */, L_0, L_1);
		List_1_t2 * L_2 = (__this->___Messages_2);
		Object_t * L_3 = ___message;
		NullCheck(L_2);
		VirtActionInvoker1< Object_t * >::Invoke(22 /* System.Void System.Collections.Generic.List`1<System.Object>::Add(!0) */, L_2, L_3);
		return;
	}
}
// System.Void ExitGames.Client.Photon.Chat.ChatChannel::Add(System.String[],System.Object[])
extern const MethodInfo* List_1_AddRange_m86_MethodInfo_var;
extern const MethodInfo* List_1_AddRange_m87_MethodInfo_var;
extern "C" void ChatChannel_Add_m5 (ChatChannel_t3 * __this, StringU5BU5D_t20* ___senders, ObjectU5BU5D_t21* ___messages, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		List_1_AddRange_m86_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483651);
		List_1_AddRange_m87_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483652);
		s_Il2CppMethodIntialized = true;
	}
	{
		List_1_t1 * L_0 = (__this->___Senders_1);
		StringU5BU5D_t20* L_1 = ___senders;
		NullCheck(L_0);
		List_1_AddRange_m86(L_0, (Object_t*)(Object_t*)L_1, /*hidden argument*/List_1_AddRange_m86_MethodInfo_var);
		List_1_t2 * L_2 = (__this->___Messages_2);
		ObjectU5BU5D_t21* L_3 = ___messages;
		NullCheck(L_2);
		List_1_AddRange_m87(L_2, (Object_t*)(Object_t*)L_3, /*hidden argument*/List_1_AddRange_m87_MethodInfo_var);
		return;
	}
}
// System.Void ExitGames.Client.Photon.Chat.ChatChannel::ClearMessages()
extern "C" void ChatChannel_ClearMessages_m6 (ChatChannel_t3 * __this, const MethodInfo* method)
{
	{
		List_1_t1 * L_0 = (__this->___Senders_1);
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(23 /* System.Void System.Collections.Generic.List`1<System.String>::Clear() */, L_0);
		List_1_t2 * L_1 = (__this->___Messages_2);
		NullCheck(L_1);
		VirtActionInvoker0::Invoke(23 /* System.Void System.Collections.Generic.List`1<System.Object>::Clear() */, L_1);
		return;
	}
}
// ExitGames.Client.Photon.Chat.ChatClient
#include "AssemblyU2DCSharpU2Dfirstpass_ExitGames_Client_Photon_Chat_C_0.h"
#ifndef _MSC_VER
#else
#endif
// ExitGames.Client.Photon.Chat.ChatClient
#include "AssemblyU2DCSharpU2Dfirstpass_ExitGames_Client_Photon_Chat_C_0MethodDeclarations.h"

// ExitGames.Client.Photon.Chat.ChatState
#include "AssemblyU2DCSharpU2Dfirstpass_ExitGames_Client_Photon_Chat_C_1.h"
// ExitGames.Client.Photon.Chat.ChatDisconnectCause
#include "AssemblyU2DCSharpU2Dfirstpass_ExitGames_Client_Photon_Chat_C_2.h"
// ExitGames.Client.Photon.Chat.ChatPeer
#include "AssemblyU2DCSharpU2Dfirstpass_ExitGames_Client_Photon_Chat_C_6.h"
// ExitGames.Client.Photon.Chat.AuthenticationValues
#include "AssemblyU2DCSharpU2Dfirstpass_ExitGames_Client_Photon_Chat_A.h"
// ExitGames.Client.Photon.DebugLevel
#include "Photon3Unity3D_ExitGames_Client_Photon_DebugLevel.h"
// ExitGames.Client.Photon.ConnectionProtocol
#include "Photon3Unity3D_ExitGames_Client_Photon_ConnectionProtocol.h"
// System.Collections.Generic.Dictionary`2<System.String,ExitGames.Client.Photon.Chat.ChatChannel>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen.h"
// ExitGames.Client.Photon.EventData
#include "Photon3Unity3D_ExitGames_Client_Photon_EventData.h"
// System.Byte
#include "mscorlib_System_Byte.h"
// ExitGames.Client.Photon.OperationResponse
#include "Photon3Unity3D_ExitGames_Client_Photon_OperationResponse.h"
// System.Int16
#include "mscorlib_System_Int16.h"
// ExitGames.Client.Photon.StatusCode
#include "Photon3Unity3D_ExitGames_Client_Photon_StatusCode.h"
// ExitGames.Client.Photon.PhotonPeer
#include "Photon3Unity3D_ExitGames_Client_Photon_PhotonPeer.h"
// ExitGames.Client.Photon.PeerStateValue
#include "Photon3Unity3D_ExitGames_Client_Photon_PeerStateValue.h"
// System.Collections.Generic.Dictionary`2<System.Byte,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_0.h"
// ExitGames.Client.Photon.Chat.AuthenticationValues
#include "AssemblyU2DCSharpU2Dfirstpass_ExitGames_Client_Photon_Chat_AMethodDeclarations.h"
// ExitGames.Client.Photon.PhotonPeer
#include "Photon3Unity3D_ExitGames_Client_Photon_PhotonPeerMethodDeclarations.h"
// ExitGames.Client.Photon.Chat.ChatPeer
#include "AssemblyU2DCSharpU2Dfirstpass_ExitGames_Client_Photon_Chat_C_6MethodDeclarations.h"
// System.Collections.Generic.Dictionary`2<System.String,ExitGames.Client.Photon.Chat.ChatChannel>
#include "mscorlib_System_Collections_Generic_Dictionary_2_genMethodDeclarations.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
// UnityEngine.Debug
#include "UnityEngine_UnityEngine_DebugMethodDeclarations.h"
// System.Environment
#include "mscorlib_System_EnvironmentMethodDeclarations.h"
// System.Collections.Generic.Dictionary`2<System.Byte,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_0MethodDeclarations.h"
// ExitGames.Client.Photon.EventData
#include "Photon3Unity3D_ExitGames_Client_Photon_EventDataMethodDeclarations.h"
// ExitGames.Client.Photon.OperationResponse
#include "Photon3Unity3D_ExitGames_Client_Photon_OperationResponseMethodDeclarations.h"
// System.Diagnostics.Debug
#include "System_System_Diagnostics_DebugMethodDeclarations.h"


// System.Void ExitGames.Client.Photon.Chat.ChatClient::.ctor(ExitGames.Client.Photon.Chat.IChatClientListener,ExitGames.Client.Photon.ConnectionProtocol)
extern TypeInfo* ChatPeer_t6_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2_t4_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m88_MethodInfo_var;
extern "C" void ChatClient__ctor_m7 (ChatClient_t8 * __this, Object_t * ___listener, uint8_t ___protocol, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ChatPeer_t6_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5);
		Dictionary_2_t4_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		Dictionary_2__ctor_m88_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483653);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->___chatRegion_1 = (String_t*) &_stringLiteral1;
		__this->___msDeltaForServiceCalls_7 = ((int32_t)50);
		Object__ctor_m85(__this, /*hidden argument*/NULL);
		Object_t * L_0 = ___listener;
		__this->___listener_4 = L_0;
		ChatClient_set_State_m19(__this, 0, /*hidden argument*/NULL);
		uint8_t L_1 = ___protocol;
		ChatPeer_t6 * L_2 = (ChatPeer_t6 *)il2cpp_codegen_object_new (ChatPeer_t6_il2cpp_TypeInfo_var);
		ChatPeer__ctor_m64(L_2, __this, L_1, /*hidden argument*/NULL);
		__this->___chatPeer_5 = L_2;
		Dictionary_2_t4 * L_3 = (Dictionary_2_t4 *)il2cpp_codegen_object_new (Dictionary_2_t4_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m88(L_3, /*hidden argument*/Dictionary_2__ctor_m88_MethodInfo_var);
		__this->___PublicChannels_2 = L_3;
		Dictionary_2_t4 * L_4 = (Dictionary_2_t4 *)il2cpp_codegen_object_new (Dictionary_2_t4_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m88(L_4, /*hidden argument*/Dictionary_2__ctor_m88_MethodInfo_var);
		__this->___PrivateChannels_3 = L_4;
		return;
	}
}
// System.Void ExitGames.Client.Photon.Chat.ChatClient::ExitGames.Client.Photon.IPhotonPeerListener.DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String)
extern TypeInfo* IChatClientListener_t5_il2cpp_TypeInfo_var;
extern "C" void ChatClient_ExitGames_Client_Photon_IPhotonPeerListener_DebugReturn_m8 (ChatClient_t8 * __this, uint8_t ___level, String_t* ___message, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IChatClientListener_t5_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = (__this->___listener_4);
		uint8_t L_1 = ___level;
		String_t* L_2 = ___message;
		NullCheck(L_0);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void ExitGames.Client.Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_t5_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		return;
	}
}
// System.Void ExitGames.Client.Photon.Chat.ChatClient::ExitGames.Client.Photon.IPhotonPeerListener.OnEvent(ExitGames.Client.Photon.EventData)
extern "C" void ChatClient_ExitGames_Client_Photon_IPhotonPeerListener_OnEvent_m9 (ChatClient_t8 * __this, EventData_t22 * ___eventData, const MethodInfo* method)
{
	uint8_t V_0 = 0x0;
	{
		EventData_t22 * L_0 = ___eventData;
		NullCheck(L_0);
		uint8_t L_1 = (L_0->___Code_0);
		V_0 = L_1;
		uint8_t L_2 = V_0;
		if (L_2 == 0)
		{
			goto IL_002e;
		}
		if (L_2 == 1)
		{
			goto IL_006a;
		}
		if (L_2 == 2)
		{
			goto IL_003a;
		}
		if (L_2 == 3)
		{
			goto IL_006a;
		}
		if (L_2 == 4)
		{
			goto IL_0046;
		}
		if (L_2 == 5)
		{
			goto IL_0052;
		}
		if (L_2 == 6)
		{
			goto IL_005e;
		}
	}
	{
		goto IL_006a;
	}

IL_002e:
	{
		EventData_t22 * L_3 = ___eventData;
		ChatClient_HandleChatMessagesEvent_m54(__this, L_3, /*hidden argument*/NULL);
		goto IL_006a;
	}

IL_003a:
	{
		EventData_t22 * L_4 = ___eventData;
		ChatClient_HandlePrivateMessageEvent_m53(__this, L_4, /*hidden argument*/NULL);
		goto IL_006a;
	}

IL_0046:
	{
		EventData_t22 * L_5 = ___eventData;
		ChatClient_HandleStatusUpdate_m58(__this, L_5, /*hidden argument*/NULL);
		goto IL_006a;
	}

IL_0052:
	{
		EventData_t22 * L_6 = ___eventData;
		ChatClient_HandleSubscribeEvent_m55(__this, L_6, /*hidden argument*/NULL);
		goto IL_006a;
	}

IL_005e:
	{
		EventData_t22 * L_7 = ___eventData;
		ChatClient_HandleUnsubscribeEvent_m56(__this, L_7, /*hidden argument*/NULL);
		goto IL_006a;
	}

IL_006a:
	{
		return;
	}
}
// System.Void ExitGames.Client.Photon.Chat.ChatClient::ExitGames.Client.Photon.IPhotonPeerListener.OnOperationResponse(ExitGames.Client.Photon.OperationResponse)
extern TypeInfo* Byte_t26_il2cpp_TypeInfo_var;
extern TypeInfo* Int16_t27_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* IChatClientListener_t5_il2cpp_TypeInfo_var;
extern "C" void ChatClient_ExitGames_Client_Photon_IPhotonPeerListener_OnOperationResponse_m10 (ChatClient_t8 * __this, OperationResponse_t23 * ___operationResponse, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Byte_t26_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		Int16_t27_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		IChatClientListener_t5_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7);
		s_Il2CppMethodIntialized = true;
	}
	uint8_t V_0 = 0x0;
	{
		OperationResponse_t23 * L_0 = ___operationResponse;
		NullCheck(L_0);
		uint8_t L_1 = (L_0->___OperationCode_0);
		V_0 = L_1;
		uint8_t L_2 = V_0;
		if (L_2 == 0)
		{
			goto IL_0039;
		}
		if (L_2 == 1)
		{
			goto IL_0039;
		}
		if (L_2 == 2)
		{
			goto IL_0039;
		}
		if (L_2 == 3)
		{
			goto IL_0039;
		}
	}
	{
		uint8_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)230))))
		{
			goto IL_002d;
		}
	}
	{
		goto IL_0039;
	}

IL_002d:
	{
		OperationResponse_t23 * L_4 = ___operationResponse;
		ChatClient_HandleAuthResponse_m57(__this, L_4, /*hidden argument*/NULL);
		goto IL_007b;
	}

IL_0039:
	{
		OperationResponse_t23 * L_5 = ___operationResponse;
		NullCheck(L_5);
		int16_t L_6 = (L_5->___ReturnCode_1);
		if (!L_6)
		{
			goto IL_0076;
		}
	}
	{
		Object_t * L_7 = (__this->___listener_4);
		OperationResponse_t23 * L_8 = ___operationResponse;
		NullCheck(L_8);
		uint8_t L_9 = (L_8->___OperationCode_0);
		uint8_t L_10 = L_9;
		Object_t * L_11 = Box(Byte_t26_il2cpp_TypeInfo_var, &L_10);
		OperationResponse_t23 * L_12 = ___operationResponse;
		NullCheck(L_12);
		int16_t L_13 = (L_12->___ReturnCode_1);
		int16_t L_14 = L_13;
		Object_t * L_15 = Box(Int16_t27_il2cpp_TypeInfo_var, &L_14);
		OperationResponse_t23 * L_16 = ___operationResponse;
		NullCheck(L_16);
		String_t* L_17 = (L_16->___DebugMessage_2);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_18 = String_Format_m89(NULL /*static, unused*/, (String_t*) &_stringLiteral2, L_11, L_15, L_17, /*hidden argument*/NULL);
		NullCheck(L_7);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void ExitGames.Client.Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_t5_il2cpp_TypeInfo_var, L_7, 1, L_18);
	}

IL_0076:
	{
		goto IL_007b;
	}

IL_007b:
	{
		return;
	}
}
// System.Void ExitGames.Client.Photon.Chat.ChatClient::ExitGames.Client.Photon.IPhotonPeerListener.OnStatusChanged(ExitGames.Client.Photon.StatusCode)
extern TypeInfo* ChatState_t18_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* IPhotonPeerListener_t24_il2cpp_TypeInfo_var;
extern TypeInfo* IChatClientListener_t5_il2cpp_TypeInfo_var;
extern "C" void ChatClient_ExitGames_Client_Photon_IPhotonPeerListener_OnStatusChanged_m11 (ChatClient_t8 * __this, int32_t ___statusCode, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ChatState_t18_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(10);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		IPhotonPeerListener_t24_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(11);
		IChatClientListener_t5_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = {0};
	{
		int32_t L_0 = ___statusCode;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)1024))))
		{
			goto IL_0033;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)((int32_t)1025))))
		{
			goto IL_017c;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)1048))))
		{
			goto IL_0104;
		}
	}
	{
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)1049))))
		{
			goto IL_0164;
		}
	}
	{
		goto IL_01b8;
	}

IL_0033:
	{
		ChatPeer_t6 * L_5 = (__this->___chatPeer_5);
		NullCheck(L_5);
		bool L_6 = (bool)VirtFuncInvoker0< bool >::Invoke(17 /* System.Boolean ExitGames.Client.Photon.Chat.ChatPeer::get_IsProtocolSecure() */, L_5);
		if (L_6)
		{
			goto IL_005e;
		}
	}
	{
		Debug_Log_m90(NULL /*static, unused*/, (String_t*) &_stringLiteral3, /*hidden argument*/NULL);
		ChatPeer_t6 * L_7 = (__this->___chatPeer_5);
		NullCheck(L_7);
		PhotonPeer_EstablishEncryption_m91(L_7, /*hidden argument*/NULL);
		goto IL_00c3;
	}

IL_005e:
	{
		Debug_Log_m90(NULL /*static, unused*/, (String_t*) &_stringLiteral4, /*hidden argument*/NULL);
		bool L_8 = (__this->___didAuthenticate_6);
		if (L_8)
		{
			goto IL_00c3;
		}
	}
	{
		ChatPeer_t6 * L_9 = (__this->___chatPeer_5);
		String_t* L_10 = ChatClient_get_AppId_m26(__this, /*hidden argument*/NULL);
		String_t* L_11 = ChatClient_get_AppVersion_m24(__this, /*hidden argument*/NULL);
		String_t* L_12 = (__this->___chatRegion_1);
		AuthenticationValues_t7 * L_13 = ChatClient_get_AuthValues_m28(__this, /*hidden argument*/NULL);
		NullCheck(L_9);
		bool L_14 = ChatPeer_AuthenticateOnNameServer_m70(L_9, L_10, L_11, L_12, L_13, /*hidden argument*/NULL);
		__this->___didAuthenticate_6 = L_14;
		bool L_15 = (__this->___didAuthenticate_6);
		if (L_15)
		{
			goto IL_00c3;
		}
	}
	{
		int32_t L_16 = ChatClient_get_State_m18(__this, /*hidden argument*/NULL);
		int32_t L_17 = L_16;
		Object_t * L_18 = Box(ChatState_t18_il2cpp_TypeInfo_var, &L_17);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_19 = String_Concat_m92(NULL /*static, unused*/, (String_t*) &_stringLiteral5, L_18, /*hidden argument*/NULL);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void ExitGames.Client.Photon.IPhotonPeerListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IPhotonPeerListener_t24_il2cpp_TypeInfo_var, __this, 1, L_19);
	}

IL_00c3:
	{
		int32_t L_20 = ChatClient_get_State_m18(__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_20) == ((uint32_t)1))))
		{
			goto IL_00ec;
		}
	}
	{
		ChatClient_set_State_m19(__this, 2, /*hidden argument*/NULL);
		Object_t * L_21 = (__this->___listener_4);
		int32_t L_22 = ChatClient_get_State_m18(__this, /*hidden argument*/NULL);
		NullCheck(L_21);
		InterfaceActionInvoker1< int32_t >::Invoke(3 /* System.Void ExitGames.Client.Photon.Chat.IChatClientListener::OnChatStateChange(ExitGames.Client.Photon.Chat.ChatState) */, IChatClientListener_t5_il2cpp_TypeInfo_var, L_21, L_22);
		goto IL_00ff;
	}

IL_00ec:
	{
		int32_t L_23 = ChatClient_get_State_m18(__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_23) == ((uint32_t)6))))
		{
			goto IL_00ff;
		}
	}
	{
		ChatClient_AuthenticateOnFrontEnd_m60(__this, /*hidden argument*/NULL);
	}

IL_00ff:
	{
		goto IL_01b8;
	}

IL_0104:
	{
		bool L_24 = (__this->___didAuthenticate_6);
		if (L_24)
		{
			goto IL_015f;
		}
	}
	{
		ChatPeer_t6 * L_25 = (__this->___chatPeer_5);
		String_t* L_26 = ChatClient_get_AppId_m26(__this, /*hidden argument*/NULL);
		String_t* L_27 = ChatClient_get_AppVersion_m24(__this, /*hidden argument*/NULL);
		String_t* L_28 = (__this->___chatRegion_1);
		AuthenticationValues_t7 * L_29 = ChatClient_get_AuthValues_m28(__this, /*hidden argument*/NULL);
		NullCheck(L_25);
		bool L_30 = ChatPeer_AuthenticateOnNameServer_m70(L_25, L_26, L_27, L_28, L_29, /*hidden argument*/NULL);
		__this->___didAuthenticate_6 = L_30;
		bool L_31 = (__this->___didAuthenticate_6);
		if (L_31)
		{
			goto IL_015f;
		}
	}
	{
		int32_t L_32 = ChatClient_get_State_m18(__this, /*hidden argument*/NULL);
		int32_t L_33 = L_32;
		Object_t * L_34 = Box(ChatState_t18_il2cpp_TypeInfo_var, &L_33);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_35 = String_Concat_m92(NULL /*static, unused*/, (String_t*) &_stringLiteral5, L_34, /*hidden argument*/NULL);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void ExitGames.Client.Photon.IPhotonPeerListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IPhotonPeerListener_t24_il2cpp_TypeInfo_var, __this, 1, L_35);
	}

IL_015f:
	{
		goto IL_01b8;
	}

IL_0164:
	{
		ChatClient_set_State_m19(__this, ((int32_t)10), /*hidden argument*/NULL);
		ChatPeer_t6 * L_36 = (__this->___chatPeer_5);
		NullCheck(L_36);
		VirtActionInvoker0::Invoke(7 /* System.Void ExitGames.Client.Photon.PhotonPeer::Disconnect() */, L_36);
		goto IL_01b8;
	}

IL_017c:
	{
		int32_t L_37 = ChatClient_get_State_m18(__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_37) == ((uint32_t)4))))
		{
			goto IL_0193;
		}
	}
	{
		ChatClient_ConnectToFrontEnd_m59(__this, /*hidden argument*/NULL);
		goto IL_01b3;
	}

IL_0193:
	{
		ChatClient_set_State_m19(__this, ((int32_t)11), /*hidden argument*/NULL);
		Object_t * L_38 = (__this->___listener_4);
		NullCheck(L_38);
		InterfaceActionInvoker1< int32_t >::Invoke(3 /* System.Void ExitGames.Client.Photon.Chat.IChatClientListener::OnChatStateChange(ExitGames.Client.Photon.Chat.ChatState) */, IChatClientListener_t5_il2cpp_TypeInfo_var, L_38, ((int32_t)11));
		Object_t * L_39 = (__this->___listener_4);
		NullCheck(L_39);
		InterfaceActionInvoker0::Invoke(1 /* System.Void ExitGames.Client.Photon.Chat.IChatClientListener::OnDisconnected() */, IChatClientListener_t5_il2cpp_TypeInfo_var, L_39);
	}

IL_01b3:
	{
		goto IL_01b8;
	}

IL_01b8:
	{
		return;
	}
}
// System.String ExitGames.Client.Photon.Chat.ChatClient::get_NameServerAddress()
extern "C" String_t* ChatClient_get_NameServerAddress_m12 (ChatClient_t8 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___U3CNameServerAddressU3Ek__BackingField_9);
		return L_0;
	}
}
// System.Void ExitGames.Client.Photon.Chat.ChatClient::set_NameServerAddress(System.String)
extern "C" void ChatClient_set_NameServerAddress_m13 (ChatClient_t8 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___U3CNameServerAddressU3Ek__BackingField_9 = L_0;
		return;
	}
}
// System.String ExitGames.Client.Photon.Chat.ChatClient::get_FrontendAddress()
extern "C" String_t* ChatClient_get_FrontendAddress_m14 (ChatClient_t8 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___U3CFrontendAddressU3Ek__BackingField_10);
		return L_0;
	}
}
// System.Void ExitGames.Client.Photon.Chat.ChatClient::set_FrontendAddress(System.String)
extern "C" void ChatClient_set_FrontendAddress_m15 (ChatClient_t8 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___U3CFrontendAddressU3Ek__BackingField_10 = L_0;
		return;
	}
}
// System.String ExitGames.Client.Photon.Chat.ChatClient::get_ChatRegion()
extern "C" String_t* ChatClient_get_ChatRegion_m16 (ChatClient_t8 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___chatRegion_1);
		return L_0;
	}
}
// System.Void ExitGames.Client.Photon.Chat.ChatClient::set_ChatRegion(System.String)
extern "C" void ChatClient_set_ChatRegion_m17 (ChatClient_t8 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___chatRegion_1 = L_0;
		return;
	}
}
// ExitGames.Client.Photon.Chat.ChatState ExitGames.Client.Photon.Chat.ChatClient::get_State()
extern "C" int32_t ChatClient_get_State_m18 (ChatClient_t8 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___U3CStateU3Ek__BackingField_11);
		return L_0;
	}
}
// System.Void ExitGames.Client.Photon.Chat.ChatClient::set_State(ExitGames.Client.Photon.Chat.ChatState)
extern "C" void ChatClient_set_State_m19 (ChatClient_t8 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___U3CStateU3Ek__BackingField_11 = L_0;
		return;
	}
}
// ExitGames.Client.Photon.Chat.ChatDisconnectCause ExitGames.Client.Photon.Chat.ChatClient::get_DisconnectedCause()
extern "C" int32_t ChatClient_get_DisconnectedCause_m20 (ChatClient_t8 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___U3CDisconnectedCauseU3Ek__BackingField_12);
		return L_0;
	}
}
// System.Void ExitGames.Client.Photon.Chat.ChatClient::set_DisconnectedCause(ExitGames.Client.Photon.Chat.ChatDisconnectCause)
extern "C" void ChatClient_set_DisconnectedCause_m21 (ChatClient_t8 * __this, int32_t ___value, const MethodInfo* method)
{
	{
		int32_t L_0 = ___value;
		__this->___U3CDisconnectedCauseU3Ek__BackingField_12 = L_0;
		return;
	}
}
// System.Boolean ExitGames.Client.Photon.Chat.ChatClient::get_CanChat()
extern "C" bool ChatClient_get_CanChat_m22 (ChatClient_t8 * __this, const MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = ChatClient_get_State_m18(__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)7))))
		{
			goto IL_0014;
		}
	}
	{
		bool L_1 = ChatClient_get_HasPeer_m23(__this, /*hidden argument*/NULL);
		G_B3_0 = ((int32_t)(L_1));
		goto IL_0015;
	}

IL_0014:
	{
		G_B3_0 = 0;
	}

IL_0015:
	{
		return G_B3_0;
	}
}
// System.Boolean ExitGames.Client.Photon.Chat.ChatClient::get_HasPeer()
extern "C" bool ChatClient_get_HasPeer_m23 (ChatClient_t8 * __this, const MethodInfo* method)
{
	{
		ChatPeer_t6 * L_0 = (__this->___chatPeer_5);
		return ((((int32_t)((((Object_t*)(ChatPeer_t6 *)L_0) == ((Object_t*)(Object_t *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.String ExitGames.Client.Photon.Chat.ChatClient::get_AppVersion()
extern "C" String_t* ChatClient_get_AppVersion_m24 (ChatClient_t8 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___U3CAppVersionU3Ek__BackingField_13);
		return L_0;
	}
}
// System.Void ExitGames.Client.Photon.Chat.ChatClient::set_AppVersion(System.String)
extern "C" void ChatClient_set_AppVersion_m25 (ChatClient_t8 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___U3CAppVersionU3Ek__BackingField_13 = L_0;
		return;
	}
}
// System.String ExitGames.Client.Photon.Chat.ChatClient::get_AppId()
extern "C" String_t* ChatClient_get_AppId_m26 (ChatClient_t8 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___U3CAppIdU3Ek__BackingField_14);
		return L_0;
	}
}
// System.Void ExitGames.Client.Photon.Chat.ChatClient::set_AppId(System.String)
extern "C" void ChatClient_set_AppId_m27 (ChatClient_t8 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___U3CAppIdU3Ek__BackingField_14 = L_0;
		return;
	}
}
// ExitGames.Client.Photon.Chat.AuthenticationValues ExitGames.Client.Photon.Chat.ChatClient::get_AuthValues()
extern "C" AuthenticationValues_t7 * ChatClient_get_AuthValues_m28 (ChatClient_t8 * __this, const MethodInfo* method)
{
	{
		AuthenticationValues_t7 * L_0 = (__this->___U3CAuthValuesU3Ek__BackingField_15);
		return L_0;
	}
}
// System.Void ExitGames.Client.Photon.Chat.ChatClient::set_AuthValues(ExitGames.Client.Photon.Chat.AuthenticationValues)
extern "C" void ChatClient_set_AuthValues_m29 (ChatClient_t8 * __this, AuthenticationValues_t7 * ___value, const MethodInfo* method)
{
	{
		AuthenticationValues_t7 * L_0 = ___value;
		__this->___U3CAuthValuesU3Ek__BackingField_15 = L_0;
		return;
	}
}
// System.String ExitGames.Client.Photon.Chat.ChatClient::get_UserId()
extern "C" String_t* ChatClient_get_UserId_m30 (ChatClient_t8 * __this, const MethodInfo* method)
{
	String_t* G_B3_0 = {0};
	{
		AuthenticationValues_t7 * L_0 = ChatClient_get_AuthValues_m28(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		AuthenticationValues_t7 * L_1 = ChatClient_get_AuthValues_m28(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2 = AuthenticationValues_get_UserId_m75(L_1, /*hidden argument*/NULL);
		G_B3_0 = L_2;
		goto IL_001c;
	}

IL_001b:
	{
		G_B3_0 = ((String_t*)(NULL));
	}

IL_001c:
	{
		return G_B3_0;
	}
}
// System.Void ExitGames.Client.Photon.Chat.ChatClient::set_UserId(System.String)
extern TypeInfo* AuthenticationValues_t7_il2cpp_TypeInfo_var;
extern "C" void ChatClient_set_UserId_m31 (ChatClient_t8 * __this, String_t* ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AuthenticationValues_t7_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(12);
		s_Il2CppMethodIntialized = true;
	}
	{
		AuthenticationValues_t7 * L_0 = ChatClient_get_AuthValues_m28(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		AuthenticationValues_t7 * L_1 = (AuthenticationValues_t7 *)il2cpp_codegen_object_new (AuthenticationValues_t7_il2cpp_TypeInfo_var);
		AuthenticationValues__ctor_m71(L_1, /*hidden argument*/NULL);
		ChatClient_set_AuthValues_m29(__this, L_1, /*hidden argument*/NULL);
	}

IL_0016:
	{
		AuthenticationValues_t7 * L_2 = ChatClient_get_AuthValues_m28(__this, /*hidden argument*/NULL);
		String_t* L_3 = ___value;
		NullCheck(L_2);
		AuthenticationValues_set_UserId_m76(L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean ExitGames.Client.Photon.Chat.ChatClient::Connect(System.String,System.String,ExitGames.Client.Photon.Chat.AuthenticationValues)
extern "C" bool ChatClient_Connect_m32 (ChatClient_t8 * __this, String_t* ___appId, String_t* ___appVersion, AuthenticationValues_t7 * ___authValues, const MethodInfo* method)
{
	bool V_0 = false;
	{
		ChatPeer_t6 * L_0 = (__this->___chatPeer_5);
		NullCheck(L_0);
		PhotonPeer_set_TimePingInterval_m93(L_0, ((int32_t)3000), /*hidden argument*/NULL);
		ChatClient_set_DisconnectedCause_m21(__this, 0, /*hidden argument*/NULL);
		AuthenticationValues_t7 * L_1 = ___authValues;
		ChatClient_set_AuthValues_m29(__this, L_1, /*hidden argument*/NULL);
		String_t* L_2 = ___appId;
		ChatClient_set_AppId_m27(__this, L_2, /*hidden argument*/NULL);
		String_t* L_3 = ___appVersion;
		ChatClient_set_AppVersion_m25(__this, L_3, /*hidden argument*/NULL);
		__this->___didAuthenticate_6 = 0;
		__this->___msDeltaForServiceCalls_7 = ((int32_t)100);
		Dictionary_2_t4 * L_4 = (__this->___PublicChannels_2);
		NullCheck(L_4);
		VirtActionInvoker0::Invoke(13 /* System.Void System.Collections.Generic.Dictionary`2<System.String,ExitGames.Client.Photon.Chat.ChatChannel>::Clear() */, L_4);
		Dictionary_2_t4 * L_5 = (__this->___PrivateChannels_3);
		NullCheck(L_5);
		VirtActionInvoker0::Invoke(13 /* System.Void System.Collections.Generic.Dictionary`2<System.String,ExitGames.Client.Photon.Chat.ChatChannel>::Clear() */, L_5);
		ChatPeer_t6 * L_6 = (__this->___chatPeer_5);
		NullCheck(L_6);
		String_t* L_7 = ChatPeer_get_NameServerAddress_m66(L_6, /*hidden argument*/NULL);
		ChatClient_set_NameServerAddress_m13(__this, L_7, /*hidden argument*/NULL);
		ChatPeer_t6 * L_8 = (__this->___chatPeer_5);
		NullCheck(L_8);
		bool L_9 = ChatPeer_Connect_m69(L_8, /*hidden argument*/NULL);
		V_0 = L_9;
		bool L_10 = V_0;
		if (!L_10)
		{
			goto IL_007b;
		}
	}
	{
		ChatClient_set_State_m19(__this, 1, /*hidden argument*/NULL);
	}

IL_007b:
	{
		bool L_11 = V_0;
		return L_11;
	}
}
// System.Void ExitGames.Client.Photon.Chat.ChatClient::Service()
extern "C" void ChatClient_Service_m33 (ChatClient_t8 * __this, const MethodInfo* method)
{
	{
		bool L_0 = ChatClient_get_HasPeer_m23(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0043;
		}
	}
	{
		int32_t L_1 = Environment_get_TickCount_m94(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_2 = (__this->___msTimestampOfLastServiceCall_8);
		int32_t L_3 = (__this->___msDeltaForServiceCalls_7);
		if ((((int32_t)((int32_t)((int32_t)L_1-(int32_t)L_2))) > ((int32_t)L_3)))
		{
			goto IL_002d;
		}
	}
	{
		int32_t L_4 = (__this->___msTimestampOfLastServiceCall_8);
		if (L_4)
		{
			goto IL_0043;
		}
	}

IL_002d:
	{
		int32_t L_5 = Environment_get_TickCount_m94(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->___msTimestampOfLastServiceCall_8 = L_5;
		ChatPeer_t6 * L_6 = (__this->___chatPeer_5);
		NullCheck(L_6);
		VirtActionInvoker0::Invoke(10 /* System.Void ExitGames.Client.Photon.PhotonPeer::Service() */, L_6);
	}

IL_0043:
	{
		return;
	}
}
// System.Void ExitGames.Client.Photon.Chat.ChatClient::Disconnect()
extern "C" void ChatClient_Disconnect_m34 (ChatClient_t8 * __this, const MethodInfo* method)
{
	{
		bool L_0 = ChatClient_get_HasPeer_m23(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0026;
		}
	}
	{
		ChatPeer_t6 * L_1 = (__this->___chatPeer_5);
		NullCheck(L_1);
		uint8_t L_2 = PhotonPeer_get_PeerState_m95(L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		ChatPeer_t6 * L_3 = (__this->___chatPeer_5);
		NullCheck(L_3);
		VirtActionInvoker0::Invoke(7 /* System.Void ExitGames.Client.Photon.PhotonPeer::Disconnect() */, L_3);
	}

IL_0026:
	{
		return;
	}
}
// System.Void ExitGames.Client.Photon.Chat.ChatClient::StopThread()
extern "C" void ChatClient_StopThread_m35 (ChatClient_t8 * __this, const MethodInfo* method)
{
	{
		bool L_0 = ChatClient_get_HasPeer_m23(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		ChatPeer_t6 * L_1 = (__this->___chatPeer_5);
		NullCheck(L_1);
		VirtActionInvoker0::Invoke(8 /* System.Void ExitGames.Client.Photon.PhotonPeer::StopThread() */, L_1);
	}

IL_0016:
	{
		return;
	}
}
// System.Boolean ExitGames.Client.Photon.Chat.ChatClient::Subscribe(System.String[])
extern "C" bool ChatClient_Subscribe_m36 (ChatClient_t8 * __this, StringU5BU5D_t20* ___channels, const MethodInfo* method)
{
	{
		StringU5BU5D_t20* L_0 = ___channels;
		bool L_1 = ChatClient_Subscribe_m37(__this, L_0, 0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean ExitGames.Client.Photon.Chat.ChatClient::Subscribe(System.String[],System.Int32)
extern TypeInfo* IChatClientListener_t5_il2cpp_TypeInfo_var;
extern "C" bool ChatClient_Subscribe_m37 (ChatClient_t8 * __this, StringU5BU5D_t20* ___channels, int32_t ___messagesFromHistory, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IChatClientListener_t5_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = ChatClient_get_CanChat_m22(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		return 0;
	}

IL_000d:
	{
		StringU5BU5D_t20* L_1 = ___channels;
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		StringU5BU5D_t20* L_2 = ___channels;
		NullCheck(L_2);
		if ((((int32_t)(((Array_t *)L_2)->max_length))))
		{
			goto IL_002e;
		}
	}

IL_001b:
	{
		Object_t * L_3 = (__this->___listener_4);
		NullCheck(L_3);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void ExitGames.Client.Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_t5_il2cpp_TypeInfo_var, L_3, 2, (String_t*) &_stringLiteral6);
		return 0;
	}

IL_002e:
	{
		StringU5BU5D_t20* L_4 = ___channels;
		int32_t L_5 = ___messagesFromHistory;
		bool L_6 = ChatClient_SendChannelOperation_m52(__this, L_4, 0, L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// System.Boolean ExitGames.Client.Photon.Chat.ChatClient::Unsubscribe(System.String[])
extern TypeInfo* IChatClientListener_t5_il2cpp_TypeInfo_var;
extern "C" bool ChatClient_Unsubscribe_m38 (ChatClient_t8 * __this, StringU5BU5D_t20* ___channels, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IChatClientListener_t5_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = ChatClient_get_CanChat_m22(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		return 0;
	}

IL_000d:
	{
		StringU5BU5D_t20* L_1 = ___channels;
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		StringU5BU5D_t20* L_2 = ___channels;
		NullCheck(L_2);
		if ((((int32_t)(((Array_t *)L_2)->max_length))))
		{
			goto IL_002e;
		}
	}

IL_001b:
	{
		Object_t * L_3 = (__this->___listener_4);
		NullCheck(L_3);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void ExitGames.Client.Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_t5_il2cpp_TypeInfo_var, L_3, 2, (String_t*) &_stringLiteral7);
		return 0;
	}

IL_002e:
	{
		StringU5BU5D_t20* L_4 = ___channels;
		bool L_5 = ChatClient_SendChannelOperation_m52(__this, L_4, 1, 0, /*hidden argument*/NULL);
		return L_5;
	}
}
// System.Boolean ExitGames.Client.Photon.Chat.ChatClient::PublishMessage(System.String,System.Object)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* IChatClientListener_t5_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2_t28_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m97_MethodInfo_var;
extern "C" bool ChatClient_PublishMessage_m39 (ChatClient_t8 * __this, String_t* ___channelName, Object_t * ___message, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		IChatClientListener_t5_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7);
		Dictionary_2_t28_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(13);
		Dictionary_2__ctor_m97_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483654);
		s_Il2CppMethodIntialized = true;
	}
	Dictionary_2_t28 * V_0 = {0};
	Dictionary_2_t28 * V_1 = {0};
	{
		bool L_0 = ChatClient_get_CanChat_m22(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		return 0;
	}

IL_000d:
	{
		String_t* L_1 = ___channelName;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_2 = String_IsNullOrEmpty_m96(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_001e;
		}
	}
	{
		Object_t * L_3 = ___message;
		if (L_3)
		{
			goto IL_0031;
		}
	}

IL_001e:
	{
		Object_t * L_4 = (__this->___listener_4);
		NullCheck(L_4);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void ExitGames.Client.Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_t5_il2cpp_TypeInfo_var, L_4, 2, (String_t*) &_stringLiteral8);
		return 0;
	}

IL_0031:
	{
		Dictionary_2_t28 * L_5 = (Dictionary_2_t28 *)il2cpp_codegen_object_new (Dictionary_2_t28_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m97(L_5, /*hidden argument*/Dictionary_2__ctor_m97_MethodInfo_var);
		V_1 = L_5;
		Dictionary_2_t28 * L_6 = V_1;
		String_t* L_7 = ___channelName;
		NullCheck(L_6);
		VirtActionInvoker2< uint8_t, Object_t * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::Add(!0,!1) */, L_6, 1, L_7);
		Dictionary_2_t28 * L_8 = V_1;
		Object_t * L_9 = ___message;
		NullCheck(L_8);
		VirtActionInvoker2< uint8_t, Object_t * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::Add(!0,!1) */, L_8, 3, L_9);
		Dictionary_2_t28 * L_10 = V_1;
		V_0 = L_10;
		ChatPeer_t6 * L_11 = (__this->___chatPeer_5);
		Dictionary_2_t28 * L_12 = V_0;
		NullCheck(L_11);
		bool L_13 = (bool)VirtFuncInvoker3< bool, uint8_t, Dictionary_2_t28 *, bool >::Invoke(14 /* System.Boolean ExitGames.Client.Photon.PhotonPeer::OpCustom(System.Byte,System.Collections.Generic.Dictionary`2<System.Byte,System.Object>,System.Boolean) */, L_11, 2, L_12, 1);
		return L_13;
	}
}
// System.Boolean ExitGames.Client.Photon.Chat.ChatClient::SendPrivateMessage(System.String,System.Object)
extern "C" bool ChatClient_SendPrivateMessage_m40 (ChatClient_t8 * __this, String_t* ___target, Object_t * ___message, const MethodInfo* method)
{
	{
		String_t* L_0 = ___target;
		Object_t * L_1 = ___message;
		bool L_2 = ChatClient_SendPrivateMessage_m41(__this, L_0, L_1, 0, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Boolean ExitGames.Client.Photon.Chat.ChatClient::SendPrivateMessage(System.String,System.Object,System.Boolean)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* IChatClientListener_t5_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2_t28_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m97_MethodInfo_var;
extern "C" bool ChatClient_SendPrivateMessage_m41 (ChatClient_t8 * __this, String_t* ___target, Object_t * ___message, bool ___encrypt, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		IChatClientListener_t5_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7);
		Dictionary_2_t28_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(13);
		Dictionary_2__ctor_m97_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483654);
		s_Il2CppMethodIntialized = true;
	}
	Dictionary_2_t28 * V_0 = {0};
	bool V_1 = false;
	Dictionary_2_t28 * V_2 = {0};
	{
		bool L_0 = ChatClient_get_CanChat_m22(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		return 0;
	}

IL_000d:
	{
		String_t* L_1 = ___target;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_2 = String_IsNullOrEmpty_m96(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_001e;
		}
	}
	{
		Object_t * L_3 = ___message;
		if (L_3)
		{
			goto IL_0031;
		}
	}

IL_001e:
	{
		Object_t * L_4 = (__this->___listener_4);
		NullCheck(L_4);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void ExitGames.Client.Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_t5_il2cpp_TypeInfo_var, L_4, 2, (String_t*) &_stringLiteral9);
		return 0;
	}

IL_0031:
	{
		Dictionary_2_t28 * L_5 = (Dictionary_2_t28 *)il2cpp_codegen_object_new (Dictionary_2_t28_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m97(L_5, /*hidden argument*/Dictionary_2__ctor_m97_MethodInfo_var);
		V_2 = L_5;
		Dictionary_2_t28 * L_6 = V_2;
		String_t* L_7 = ___target;
		NullCheck(L_6);
		VirtActionInvoker2< uint8_t, Object_t * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::Add(!0,!1) */, L_6, ((int32_t)225), L_7);
		Dictionary_2_t28 * L_8 = V_2;
		Object_t * L_9 = ___message;
		NullCheck(L_8);
		VirtActionInvoker2< uint8_t, Object_t * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::Add(!0,!1) */, L_8, 3, L_9);
		Dictionary_2_t28 * L_10 = V_2;
		V_0 = L_10;
		ChatPeer_t6 * L_11 = (__this->___chatPeer_5);
		Dictionary_2_t28 * L_12 = V_0;
		bool L_13 = ___encrypt;
		NullCheck(L_11);
		bool L_14 = (bool)VirtFuncInvoker5< bool, uint8_t, Dictionary_2_t28 *, bool, uint8_t, bool >::Invoke(16 /* System.Boolean ExitGames.Client.Photon.PhotonPeer::OpCustom(System.Byte,System.Collections.Generic.Dictionary`2<System.Byte,System.Object>,System.Boolean,System.Byte,System.Boolean) */, L_11, 3, L_12, 1, 0, L_13);
		V_1 = L_14;
		bool L_15 = V_1;
		return L_15;
	}
}
// System.Boolean ExitGames.Client.Photon.Chat.ChatClient::SetOnlineStatus(System.Int32,System.Object,System.Boolean)
extern TypeInfo* Dictionary_2_t28_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t29_il2cpp_TypeInfo_var;
extern TypeInfo* Boolean_t30_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m97_MethodInfo_var;
extern "C" bool ChatClient_SetOnlineStatus_m42 (ChatClient_t8 * __this, int32_t ___status, Object_t * ___message, bool ___skipMessage, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Dictionary_2_t28_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(13);
		Int32_t29_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		Boolean_t30_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(15);
		Dictionary_2__ctor_m97_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483654);
		s_Il2CppMethodIntialized = true;
	}
	Dictionary_2_t28 * V_0 = {0};
	Dictionary_2_t28 * V_1 = {0};
	{
		bool L_0 = ChatClient_get_CanChat_m22(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		return 0;
	}

IL_000d:
	{
		Dictionary_2_t28 * L_1 = (Dictionary_2_t28 *)il2cpp_codegen_object_new (Dictionary_2_t28_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m97(L_1, /*hidden argument*/Dictionary_2__ctor_m97_MethodInfo_var);
		V_1 = L_1;
		Dictionary_2_t28 * L_2 = V_1;
		int32_t L_3 = ___status;
		int32_t L_4 = L_3;
		Object_t * L_5 = Box(Int32_t29_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_2);
		VirtActionInvoker2< uint8_t, Object_t * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::Add(!0,!1) */, L_2, ((int32_t)10), L_5);
		Dictionary_2_t28 * L_6 = V_1;
		V_0 = L_6;
		bool L_7 = ___skipMessage;
		if (!L_7)
		{
			goto IL_003c;
		}
	}
	{
		Dictionary_2_t28 * L_8 = V_0;
		bool L_9 = 1;
		Object_t * L_10 = Box(Boolean_t30_il2cpp_TypeInfo_var, &L_9);
		NullCheck(L_8);
		VirtActionInvoker2< uint8_t, Object_t * >::Invoke(23 /* System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::set_Item(!0,!1) */, L_8, ((int32_t)12), L_10);
		goto IL_0044;
	}

IL_003c:
	{
		Dictionary_2_t28 * L_11 = V_0;
		Object_t * L_12 = ___message;
		NullCheck(L_11);
		VirtActionInvoker2< uint8_t, Object_t * >::Invoke(23 /* System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::set_Item(!0,!1) */, L_11, 3, L_12);
	}

IL_0044:
	{
		ChatPeer_t6 * L_13 = (__this->___chatPeer_5);
		Dictionary_2_t28 * L_14 = V_0;
		NullCheck(L_13);
		bool L_15 = (bool)VirtFuncInvoker3< bool, uint8_t, Dictionary_2_t28 *, bool >::Invoke(14 /* System.Boolean ExitGames.Client.Photon.PhotonPeer::OpCustom(System.Byte,System.Collections.Generic.Dictionary`2<System.Byte,System.Object>,System.Boolean) */, L_13, 5, L_14, 1);
		return L_15;
	}
}
// System.Boolean ExitGames.Client.Photon.Chat.ChatClient::SetOnlineStatus(System.Int32)
extern "C" bool ChatClient_SetOnlineStatus_m43 (ChatClient_t8 * __this, int32_t ___status, const MethodInfo* method)
{
	{
		int32_t L_0 = ___status;
		bool L_1 = ChatClient_SetOnlineStatus_m42(__this, L_0, NULL, 1, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean ExitGames.Client.Photon.Chat.ChatClient::SetOnlineStatus(System.Int32,System.Object)
extern "C" bool ChatClient_SetOnlineStatus_m44 (ChatClient_t8 * __this, int32_t ___status, Object_t * ___message, const MethodInfo* method)
{
	{
		int32_t L_0 = ___status;
		Object_t * L_1 = ___message;
		bool L_2 = ChatClient_SetOnlineStatus_m42(__this, L_0, L_1, 0, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Boolean ExitGames.Client.Photon.Chat.ChatClient::AddFriends(System.String[])
extern TypeInfo* IChatClientListener_t5_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2_t28_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m97_MethodInfo_var;
extern "C" bool ChatClient_AddFriends_m45 (ChatClient_t8 * __this, StringU5BU5D_t20* ___friends, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IChatClientListener_t5_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7);
		Dictionary_2_t28_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(13);
		Dictionary_2__ctor_m97_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483654);
		s_Il2CppMethodIntialized = true;
	}
	Dictionary_2_t28 * V_0 = {0};
	Dictionary_2_t28 * V_1 = {0};
	{
		bool L_0 = ChatClient_get_CanChat_m22(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		return 0;
	}

IL_000d:
	{
		StringU5BU5D_t20* L_1 = ___friends;
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		StringU5BU5D_t20* L_2 = ___friends;
		NullCheck(L_2);
		if ((((int32_t)(((Array_t *)L_2)->max_length))))
		{
			goto IL_002e;
		}
	}

IL_001b:
	{
		Object_t * L_3 = (__this->___listener_4);
		NullCheck(L_3);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void ExitGames.Client.Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_t5_il2cpp_TypeInfo_var, L_3, 2, (String_t*) &_stringLiteral10);
		return 0;
	}

IL_002e:
	{
		Dictionary_2_t28 * L_4 = (Dictionary_2_t28 *)il2cpp_codegen_object_new (Dictionary_2_t28_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m97(L_4, /*hidden argument*/Dictionary_2__ctor_m97_MethodInfo_var);
		V_1 = L_4;
		Dictionary_2_t28 * L_5 = V_1;
		StringU5BU5D_t20* L_6 = ___friends;
		NullCheck(L_5);
		VirtActionInvoker2< uint8_t, Object_t * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::Add(!0,!1) */, L_5, ((int32_t)11), (Object_t *)(Object_t *)L_6);
		Dictionary_2_t28 * L_7 = V_1;
		V_0 = L_7;
		ChatPeer_t6 * L_8 = (__this->___chatPeer_5);
		Dictionary_2_t28 * L_9 = V_0;
		NullCheck(L_8);
		bool L_10 = (bool)VirtFuncInvoker3< bool, uint8_t, Dictionary_2_t28 *, bool >::Invoke(14 /* System.Boolean ExitGames.Client.Photon.PhotonPeer::OpCustom(System.Byte,System.Collections.Generic.Dictionary`2<System.Byte,System.Object>,System.Boolean) */, L_8, 6, L_9, 1);
		return L_10;
	}
}
// System.Boolean ExitGames.Client.Photon.Chat.ChatClient::RemoveFriends(System.String[])
extern TypeInfo* IChatClientListener_t5_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2_t28_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m97_MethodInfo_var;
extern "C" bool ChatClient_RemoveFriends_m46 (ChatClient_t8 * __this, StringU5BU5D_t20* ___friends, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IChatClientListener_t5_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7);
		Dictionary_2_t28_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(13);
		Dictionary_2__ctor_m97_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483654);
		s_Il2CppMethodIntialized = true;
	}
	Dictionary_2_t28 * V_0 = {0};
	Dictionary_2_t28 * V_1 = {0};
	{
		bool L_0 = ChatClient_get_CanChat_m22(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		return 0;
	}

IL_000d:
	{
		StringU5BU5D_t20* L_1 = ___friends;
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		StringU5BU5D_t20* L_2 = ___friends;
		NullCheck(L_2);
		if ((((int32_t)(((Array_t *)L_2)->max_length))))
		{
			goto IL_002e;
		}
	}

IL_001b:
	{
		Object_t * L_3 = (__this->___listener_4);
		NullCheck(L_3);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void ExitGames.Client.Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_t5_il2cpp_TypeInfo_var, L_3, 2, (String_t*) &_stringLiteral11);
		return 0;
	}

IL_002e:
	{
		Dictionary_2_t28 * L_4 = (Dictionary_2_t28 *)il2cpp_codegen_object_new (Dictionary_2_t28_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m97(L_4, /*hidden argument*/Dictionary_2__ctor_m97_MethodInfo_var);
		V_1 = L_4;
		Dictionary_2_t28 * L_5 = V_1;
		StringU5BU5D_t20* L_6 = ___friends;
		NullCheck(L_5);
		VirtActionInvoker2< uint8_t, Object_t * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::Add(!0,!1) */, L_5, ((int32_t)11), (Object_t *)(Object_t *)L_6);
		Dictionary_2_t28 * L_7 = V_1;
		V_0 = L_7;
		ChatPeer_t6 * L_8 = (__this->___chatPeer_5);
		Dictionary_2_t28 * L_9 = V_0;
		NullCheck(L_8);
		bool L_10 = (bool)VirtFuncInvoker3< bool, uint8_t, Dictionary_2_t28 *, bool >::Invoke(14 /* System.Boolean ExitGames.Client.Photon.PhotonPeer::OpCustom(System.Byte,System.Collections.Generic.Dictionary`2<System.Byte,System.Object>,System.Boolean) */, L_8, 7, L_9, 1);
		return L_10;
	}
}
// System.String ExitGames.Client.Photon.Chat.ChatClient::GetPrivateChannelNameByUser(System.String)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* ChatClient_GetPrivateChannelNameByUser_m47 (ChatClient_t8 * __this, String_t* ___userName, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ChatClient_get_UserId_m30(__this, /*hidden argument*/NULL);
		String_t* L_1 = ___userName;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = String_Format_m98(NULL /*static, unused*/, (String_t*) &_stringLiteral12, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Boolean ExitGames.Client.Photon.Chat.ChatClient::TryGetChannel(System.String,System.Boolean,ExitGames.Client.Photon.Chat.ChatChannel&)
extern "C" bool ChatClient_TryGetChannel_m48 (ChatClient_t8 * __this, String_t* ___channelName, bool ___isPrivate, ChatChannel_t3 ** ___channel, const MethodInfo* method)
{
	{
		bool L_0 = ___isPrivate;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		Dictionary_2_t4 * L_1 = (__this->___PublicChannels_2);
		String_t* L_2 = ___channelName;
		ChatChannel_t3 ** L_3 = ___channel;
		NullCheck(L_1);
		bool L_4 = (bool)VirtFuncInvoker2< bool, String_t*, ChatChannel_t3 ** >::Invoke(21 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,ExitGames.Client.Photon.Chat.ChatChannel>::TryGetValue(!0,!1&) */, L_1, L_2, L_3);
		return L_4;
	}

IL_0014:
	{
		Dictionary_2_t4 * L_5 = (__this->___PrivateChannels_3);
		String_t* L_6 = ___channelName;
		ChatChannel_t3 ** L_7 = ___channel;
		NullCheck(L_5);
		bool L_8 = (bool)VirtFuncInvoker2< bool, String_t*, ChatChannel_t3 ** >::Invoke(21 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,ExitGames.Client.Photon.Chat.ChatChannel>::TryGetValue(!0,!1&) */, L_5, L_6, L_7);
		return L_8;
	}
}
// System.Void ExitGames.Client.Photon.Chat.ChatClient::SendAcksOnly()
extern "C" void ChatClient_SendAcksOnly_m49 (ChatClient_t8 * __this, const MethodInfo* method)
{
	{
		ChatPeer_t6 * L_0 = (__this->___chatPeer_5);
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		ChatPeer_t6 * L_1 = (__this->___chatPeer_5);
		NullCheck(L_1);
		VirtFuncInvoker0< bool >::Invoke(12 /* System.Boolean ExitGames.Client.Photon.PhotonPeer::SendAcksOnly() */, L_1);
	}

IL_0017:
	{
		return;
	}
}
// System.Void ExitGames.Client.Photon.Chat.ChatClient::set_DebugOut(ExitGames.Client.Photon.DebugLevel)
extern "C" void ChatClient_set_DebugOut_m50 (ChatClient_t8 * __this, uint8_t ___value, const MethodInfo* method)
{
	{
		ChatPeer_t6 * L_0 = (__this->___chatPeer_5);
		uint8_t L_1 = ___value;
		NullCheck(L_0);
		PhotonPeer_set_DebugOut_m99(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// ExitGames.Client.Photon.DebugLevel ExitGames.Client.Photon.Chat.ChatClient::get_DebugOut()
extern "C" uint8_t ChatClient_get_DebugOut_m51 (ChatClient_t8 * __this, const MethodInfo* method)
{
	{
		ChatPeer_t6 * L_0 = (__this->___chatPeer_5);
		NullCheck(L_0);
		uint8_t L_1 = PhotonPeer_get_DebugOut_m100(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean ExitGames.Client.Photon.Chat.ChatClient::SendChannelOperation(System.String[],System.Byte,System.Int32)
extern TypeInfo* Dictionary_2_t28_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t29_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m97_MethodInfo_var;
extern "C" bool ChatClient_SendChannelOperation_m52 (ChatClient_t8 * __this, StringU5BU5D_t20* ___channels, uint8_t ___operation, int32_t ___historyLength, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Dictionary_2_t28_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(13);
		Int32_t29_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		Dictionary_2__ctor_m97_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483654);
		s_Il2CppMethodIntialized = true;
	}
	Dictionary_2_t28 * V_0 = {0};
	Dictionary_2_t28 * V_1 = {0};
	{
		Dictionary_2_t28 * L_0 = (Dictionary_2_t28 *)il2cpp_codegen_object_new (Dictionary_2_t28_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m97(L_0, /*hidden argument*/Dictionary_2__ctor_m97_MethodInfo_var);
		V_1 = L_0;
		Dictionary_2_t28 * L_1 = V_1;
		StringU5BU5D_t20* L_2 = ___channels;
		NullCheck(L_1);
		VirtActionInvoker2< uint8_t, Object_t * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::Add(!0,!1) */, L_1, 0, (Object_t *)(Object_t *)L_2);
		Dictionary_2_t28 * L_3 = V_1;
		V_0 = L_3;
		int32_t L_4 = ___historyLength;
		if (!L_4)
		{
			goto IL_0024;
		}
	}
	{
		Dictionary_2_t28 * L_5 = V_0;
		int32_t L_6 = ___historyLength;
		int32_t L_7 = L_6;
		Object_t * L_8 = Box(Int32_t29_il2cpp_TypeInfo_var, &L_7);
		NullCheck(L_5);
		VirtActionInvoker2< uint8_t, Object_t * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::Add(!0,!1) */, L_5, ((int32_t)14), L_8);
	}

IL_0024:
	{
		ChatPeer_t6 * L_9 = (__this->___chatPeer_5);
		uint8_t L_10 = ___operation;
		Dictionary_2_t28 * L_11 = V_0;
		NullCheck(L_9);
		bool L_12 = (bool)VirtFuncInvoker3< bool, uint8_t, Dictionary_2_t28 *, bool >::Invoke(14 /* System.Boolean ExitGames.Client.Photon.PhotonPeer::OpCustom(System.Byte,System.Collections.Generic.Dictionary`2<System.Byte,System.Object>,System.Boolean) */, L_9, L_10, L_11, 1);
		return L_12;
	}
}
// System.Void ExitGames.Client.Photon.Chat.ChatClient::HandlePrivateMessageEvent(ExitGames.Client.Photon.EventData)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* ChatChannel_t3_il2cpp_TypeInfo_var;
extern TypeInfo* IChatClientListener_t5_il2cpp_TypeInfo_var;
extern "C" void ChatClient_HandlePrivateMessageEvent_m53 (ChatClient_t8 * __this, EventData_t22 * ___eventData, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		ChatChannel_t3_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4);
		IChatClientListener_t5_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	String_t* V_1 = {0};
	String_t* V_2 = {0};
	String_t* V_3 = {0};
	ChatChannel_t3 * V_4 = {0};
	{
		EventData_t22 * L_0 = ___eventData;
		NullCheck(L_0);
		Dictionary_2_t28 * L_1 = (L_0->___Parameters_1);
		NullCheck(L_1);
		Object_t * L_2 = (Object_t *)VirtFuncInvoker1< Object_t *, uint8_t >::Invoke(22 /* !1 System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::get_Item(!0) */, L_1, 3);
		V_0 = L_2;
		EventData_t22 * L_3 = ___eventData;
		NullCheck(L_3);
		Dictionary_2_t28 * L_4 = (L_3->___Parameters_1);
		NullCheck(L_4);
		Object_t * L_5 = (Object_t *)VirtFuncInvoker1< Object_t *, uint8_t >::Invoke(22 /* !1 System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::get_Item(!0) */, L_4, 5);
		V_1 = ((String_t*)Castclass(L_5, String_t_il2cpp_TypeInfo_var));
		String_t* L_6 = ChatClient_get_UserId_m30(__this, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_005e;
		}
	}
	{
		String_t* L_7 = ChatClient_get_UserId_m30(__this, /*hidden argument*/NULL);
		String_t* L_8 = V_1;
		NullCheck(L_7);
		bool L_9 = (bool)VirtFuncInvoker1< bool, String_t* >::Invoke(23 /* System.Boolean System.String::Equals(System.String) */, L_7, L_8);
		if (!L_9)
		{
			goto IL_005e;
		}
	}
	{
		EventData_t22 * L_10 = ___eventData;
		NullCheck(L_10);
		Dictionary_2_t28 * L_11 = (L_10->___Parameters_1);
		NullCheck(L_11);
		Object_t * L_12 = (Object_t *)VirtFuncInvoker1< Object_t *, uint8_t >::Invoke(22 /* !1 System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::get_Item(!0) */, L_11, ((int32_t)225));
		V_3 = ((String_t*)Castclass(L_12, String_t_il2cpp_TypeInfo_var));
		String_t* L_13 = V_3;
		String_t* L_14 = ChatClient_GetPrivateChannelNameByUser_m47(__this, L_13, /*hidden argument*/NULL);
		V_2 = L_14;
		goto IL_0066;
	}

IL_005e:
	{
		String_t* L_15 = V_1;
		String_t* L_16 = ChatClient_GetPrivateChannelNameByUser_m47(__this, L_15, /*hidden argument*/NULL);
		V_2 = L_16;
	}

IL_0066:
	{
		Dictionary_2_t4 * L_17 = (__this->___PrivateChannels_3);
		String_t* L_18 = V_2;
		NullCheck(L_17);
		bool L_19 = (bool)VirtFuncInvoker2< bool, String_t*, ChatChannel_t3 ** >::Invoke(21 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,ExitGames.Client.Photon.Chat.ChatChannel>::TryGetValue(!0,!1&) */, L_17, L_18, (&V_4));
		if (L_19)
		{
			goto IL_009d;
		}
	}
	{
		String_t* L_20 = V_2;
		ChatChannel_t3 * L_21 = (ChatChannel_t3 *)il2cpp_codegen_object_new (ChatChannel_t3_il2cpp_TypeInfo_var);
		ChatChannel__ctor_m0(L_21, L_20, /*hidden argument*/NULL);
		V_4 = L_21;
		ChatChannel_t3 * L_22 = V_4;
		NullCheck(L_22);
		ChatChannel_set_IsPrivate_m2(L_22, 1, /*hidden argument*/NULL);
		Dictionary_2_t4 * L_23 = (__this->___PrivateChannels_3);
		ChatChannel_t3 * L_24 = V_4;
		NullCheck(L_24);
		String_t* L_25 = (L_24->___Name_0);
		ChatChannel_t3 * L_26 = V_4;
		NullCheck(L_23);
		VirtActionInvoker2< String_t*, ChatChannel_t3 * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,ExitGames.Client.Photon.Chat.ChatChannel>::Add(!0,!1) */, L_23, L_25, L_26);
	}

IL_009d:
	{
		ChatChannel_t3 * L_27 = V_4;
		String_t* L_28 = V_1;
		Object_t * L_29 = V_0;
		NullCheck(L_27);
		ChatChannel_Add_m4(L_27, L_28, L_29, /*hidden argument*/NULL);
		Object_t * L_30 = (__this->___listener_4);
		String_t* L_31 = V_1;
		Object_t * L_32 = V_0;
		String_t* L_33 = V_2;
		NullCheck(L_30);
		InterfaceActionInvoker3< String_t*, Object_t *, String_t* >::Invoke(5 /* System.Void ExitGames.Client.Photon.Chat.IChatClientListener::OnPrivateMessage(System.String,System.Object,System.String) */, IChatClientListener_t5_il2cpp_TypeInfo_var, L_30, L_31, L_32, L_33);
		return;
	}
}
// System.Void ExitGames.Client.Photon.Chat.ChatClient::HandleChatMessagesEvent(ExitGames.Client.Photon.EventData)
extern TypeInfo* ObjectU5BU5D_t21_il2cpp_TypeInfo_var;
extern TypeInfo* StringU5BU5D_t20_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* IChatClientListener_t5_il2cpp_TypeInfo_var;
extern "C" void ChatClient_HandleChatMessagesEvent_m54 (ChatClient_t8 * __this, EventData_t22 * ___eventData, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectU5BU5D_t21_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(16);
		StringU5BU5D_t20_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(17);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		IChatClientListener_t5_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7);
		s_Il2CppMethodIntialized = true;
	}
	ObjectU5BU5D_t21* V_0 = {0};
	StringU5BU5D_t20* V_1 = {0};
	String_t* V_2 = {0};
	ChatChannel_t3 * V_3 = {0};
	{
		EventData_t22 * L_0 = ___eventData;
		NullCheck(L_0);
		Dictionary_2_t28 * L_1 = (L_0->___Parameters_1);
		NullCheck(L_1);
		Object_t * L_2 = (Object_t *)VirtFuncInvoker1< Object_t *, uint8_t >::Invoke(22 /* !1 System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::get_Item(!0) */, L_1, 2);
		V_0 = ((ObjectU5BU5D_t21*)Castclass(L_2, ObjectU5BU5D_t21_il2cpp_TypeInfo_var));
		EventData_t22 * L_3 = ___eventData;
		NullCheck(L_3);
		Dictionary_2_t28 * L_4 = (L_3->___Parameters_1);
		NullCheck(L_4);
		Object_t * L_5 = (Object_t *)VirtFuncInvoker1< Object_t *, uint8_t >::Invoke(22 /* !1 System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::get_Item(!0) */, L_4, 4);
		V_1 = ((StringU5BU5D_t20*)Castclass(L_5, StringU5BU5D_t20_il2cpp_TypeInfo_var));
		EventData_t22 * L_6 = ___eventData;
		NullCheck(L_6);
		Dictionary_2_t28 * L_7 = (L_6->___Parameters_1);
		NullCheck(L_7);
		Object_t * L_8 = (Object_t *)VirtFuncInvoker1< Object_t *, uint8_t >::Invoke(22 /* !1 System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::get_Item(!0) */, L_7, 1);
		V_2 = ((String_t*)Castclass(L_8, String_t_il2cpp_TypeInfo_var));
		Dictionary_2_t4 * L_9 = (__this->___PublicChannels_2);
		String_t* L_10 = V_2;
		NullCheck(L_9);
		bool L_11 = (bool)VirtFuncInvoker2< bool, String_t*, ChatChannel_t3 ** >::Invoke(21 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,ExitGames.Client.Photon.Chat.ChatChannel>::TryGetValue(!0,!1&) */, L_9, L_10, (&V_3));
		if (L_11)
		{
			goto IL_004a;
		}
	}
	{
		return;
	}

IL_004a:
	{
		ChatChannel_t3 * L_12 = V_3;
		StringU5BU5D_t20* L_13 = V_1;
		ObjectU5BU5D_t21* L_14 = V_0;
		NullCheck(L_12);
		ChatChannel_Add_m5(L_12, L_13, L_14, /*hidden argument*/NULL);
		Object_t * L_15 = (__this->___listener_4);
		String_t* L_16 = V_2;
		StringU5BU5D_t20* L_17 = V_1;
		ObjectU5BU5D_t21* L_18 = V_0;
		NullCheck(L_15);
		InterfaceActionInvoker3< String_t*, StringU5BU5D_t20*, ObjectU5BU5D_t21* >::Invoke(4 /* System.Void ExitGames.Client.Photon.Chat.IChatClientListener::OnGetMessages(System.String,System.String[],System.Object[]) */, IChatClientListener_t5_il2cpp_TypeInfo_var, L_15, L_16, L_17, L_18);
		return;
	}
}
// System.Void ExitGames.Client.Photon.Chat.ChatClient::HandleSubscribeEvent(ExitGames.Client.Photon.EventData)
extern TypeInfo* StringU5BU5D_t20_il2cpp_TypeInfo_var;
extern TypeInfo* BooleanU5BU5D_t31_il2cpp_TypeInfo_var;
extern TypeInfo* ChatChannel_t3_il2cpp_TypeInfo_var;
extern TypeInfo* IChatClientListener_t5_il2cpp_TypeInfo_var;
extern "C" void ChatClient_HandleSubscribeEvent_m55 (ChatClient_t8 * __this, EventData_t22 * ___eventData, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		StringU5BU5D_t20_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(17);
		BooleanU5BU5D_t31_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(18);
		ChatChannel_t3_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4);
		IChatClientListener_t5_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7);
		s_Il2CppMethodIntialized = true;
	}
	StringU5BU5D_t20* V_0 = {0};
	BooleanU5BU5D_t31* V_1 = {0};
	int32_t V_2 = 0;
	String_t* V_3 = {0};
	ChatChannel_t3 * V_4 = {0};
	{
		EventData_t22 * L_0 = ___eventData;
		NullCheck(L_0);
		Dictionary_2_t28 * L_1 = (L_0->___Parameters_1);
		NullCheck(L_1);
		Object_t * L_2 = (Object_t *)VirtFuncInvoker1< Object_t *, uint8_t >::Invoke(22 /* !1 System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::get_Item(!0) */, L_1, 0);
		V_0 = ((StringU5BU5D_t20*)Castclass(L_2, StringU5BU5D_t20_il2cpp_TypeInfo_var));
		EventData_t22 * L_3 = ___eventData;
		NullCheck(L_3);
		Dictionary_2_t28 * L_4 = (L_3->___Parameters_1);
		NullCheck(L_4);
		Object_t * L_5 = (Object_t *)VirtFuncInvoker1< Object_t *, uint8_t >::Invoke(22 /* !1 System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::get_Item(!0) */, L_4, ((int32_t)15));
		V_1 = ((BooleanU5BU5D_t31*)Castclass(L_5, BooleanU5BU5D_t31_il2cpp_TypeInfo_var));
		V_2 = 0;
		goto IL_0069;
	}

IL_002c:
	{
		BooleanU5BU5D_t31* L_6 = V_1;
		int32_t L_7 = V_2;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, L_7);
		int32_t L_8 = L_7;
		if (!(*(uint8_t*)(bool*)SZArrayLdElema(L_6, L_8)))
		{
			goto IL_0065;
		}
	}
	{
		StringU5BU5D_t20* L_9 = V_0;
		int32_t L_10 = V_2;
		NullCheck(L_9);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_9, L_10);
		int32_t L_11 = L_10;
		V_3 = (*(String_t**)(String_t**)SZArrayLdElema(L_9, L_11));
		Dictionary_2_t4 * L_12 = (__this->___PublicChannels_2);
		String_t* L_13 = V_3;
		NullCheck(L_12);
		bool L_14 = (bool)VirtFuncInvoker1< bool, String_t* >::Invoke(19 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,ExitGames.Client.Photon.Chat.ChatChannel>::ContainsKey(!0) */, L_12, L_13);
		if (L_14)
		{
			goto IL_0065;
		}
	}
	{
		String_t* L_15 = V_3;
		ChatChannel_t3 * L_16 = (ChatChannel_t3 *)il2cpp_codegen_object_new (ChatChannel_t3_il2cpp_TypeInfo_var);
		ChatChannel__ctor_m0(L_16, L_15, /*hidden argument*/NULL);
		V_4 = L_16;
		Dictionary_2_t4 * L_17 = (__this->___PublicChannels_2);
		ChatChannel_t3 * L_18 = V_4;
		NullCheck(L_18);
		String_t* L_19 = (L_18->___Name_0);
		ChatChannel_t3 * L_20 = V_4;
		NullCheck(L_17);
		VirtActionInvoker2< String_t*, ChatChannel_t3 * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.String,ExitGames.Client.Photon.Chat.ChatChannel>::Add(!0,!1) */, L_17, L_19, L_20);
	}

IL_0065:
	{
		int32_t L_21 = V_2;
		V_2 = ((int32_t)((int32_t)L_21+(int32_t)1));
	}

IL_0069:
	{
		int32_t L_22 = V_2;
		StringU5BU5D_t20* L_23 = V_0;
		NullCheck(L_23);
		if ((((int32_t)L_22) < ((int32_t)(((int32_t)(((Array_t *)L_23)->max_length))))))
		{
			goto IL_002c;
		}
	}
	{
		Object_t * L_24 = (__this->___listener_4);
		StringU5BU5D_t20* L_25 = V_0;
		BooleanU5BU5D_t31* L_26 = V_1;
		NullCheck(L_24);
		InterfaceActionInvoker2< StringU5BU5D_t20*, BooleanU5BU5D_t31* >::Invoke(6 /* System.Void ExitGames.Client.Photon.Chat.IChatClientListener::OnSubscribed(System.String[],System.Boolean[]) */, IChatClientListener_t5_il2cpp_TypeInfo_var, L_24, L_25, L_26);
		return;
	}
}
// System.Void ExitGames.Client.Photon.Chat.ChatClient::HandleUnsubscribeEvent(ExitGames.Client.Photon.EventData)
extern TypeInfo* StringU5BU5D_t20_il2cpp_TypeInfo_var;
extern TypeInfo* IChatClientListener_t5_il2cpp_TypeInfo_var;
extern "C" void ChatClient_HandleUnsubscribeEvent_m56 (ChatClient_t8 * __this, EventData_t22 * ___eventData, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		StringU5BU5D_t20_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(17);
		IChatClientListener_t5_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7);
		s_Il2CppMethodIntialized = true;
	}
	StringU5BU5D_t20* V_0 = {0};
	int32_t V_1 = 0;
	String_t* V_2 = {0};
	{
		EventData_t22 * L_0 = ___eventData;
		NullCheck(L_0);
		Object_t * L_1 = EventData_get_Item_m101(L_0, 0, /*hidden argument*/NULL);
		V_0 = ((StringU5BU5D_t20*)Castclass(L_1, StringU5BU5D_t20_il2cpp_TypeInfo_var));
		V_1 = 0;
		goto IL_0029;
	}

IL_0014:
	{
		StringU5BU5D_t20* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_3);
		int32_t L_4 = L_3;
		V_2 = (*(String_t**)(String_t**)SZArrayLdElema(L_2, L_4));
		Dictionary_2_t4 * L_5 = (__this->___PublicChannels_2);
		String_t* L_6 = V_2;
		NullCheck(L_5);
		VirtFuncInvoker1< bool, String_t* >::Invoke(20 /* System.Boolean System.Collections.Generic.Dictionary`2<System.String,ExitGames.Client.Photon.Chat.ChatChannel>::Remove(!0) */, L_5, L_6);
		int32_t L_7 = V_1;
		V_1 = ((int32_t)((int32_t)L_7+(int32_t)1));
	}

IL_0029:
	{
		int32_t L_8 = V_1;
		StringU5BU5D_t20* L_9 = V_0;
		NullCheck(L_9);
		if ((((int32_t)L_8) < ((int32_t)(((int32_t)(((Array_t *)L_9)->max_length))))))
		{
			goto IL_0014;
		}
	}
	{
		Object_t * L_10 = (__this->___listener_4);
		StringU5BU5D_t20* L_11 = V_0;
		NullCheck(L_10);
		InterfaceActionInvoker1< StringU5BU5D_t20* >::Invoke(7 /* System.Void ExitGames.Client.Photon.Chat.IChatClientListener::OnUnsubscribed(System.String[]) */, IChatClientListener_t5_il2cpp_TypeInfo_var, L_10, L_11);
		return;
	}
}
// System.Void ExitGames.Client.Photon.Chat.ChatClient::HandleAuthResponse(ExitGames.Client.Photon.OperationResponse)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* IChatClientListener_t5_il2cpp_TypeInfo_var;
extern TypeInfo* AuthenticationValues_t7_il2cpp_TypeInfo_var;
extern "C" void ChatClient_HandleAuthResponse_m57 (ChatClient_t8 * __this, OperationResponse_t23 * ___operationResponse, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		IChatClientListener_t5_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7);
		AuthenticationValues_t7_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(12);
		s_Il2CppMethodIntialized = true;
	}
	int16_t V_0 = 0;
	{
		Object_t * L_0 = (__this->___listener_4);
		OperationResponse_t23 * L_1 = ___operationResponse;
		NullCheck(L_1);
		String_t* L_2 = OperationResponse_ToStringFull_m102(L_1, /*hidden argument*/NULL);
		ChatPeer_t6 * L_3 = (__this->___chatPeer_5);
		NullCheck(L_3);
		String_t* L_4 = ChatPeer_get_NameServerAddress_m66(L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = String_Concat_m103(NULL /*static, unused*/, L_2, (String_t*) &_stringLiteral13, L_4, /*hidden argument*/NULL);
		NullCheck(L_0);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void ExitGames.Client.Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_t5_il2cpp_TypeInfo_var, L_0, 3, L_5);
		OperationResponse_t23 * L_6 = ___operationResponse;
		NullCheck(L_6);
		int16_t L_7 = (L_6->___ReturnCode_1);
		if (L_7)
		{
			goto IL_0109;
		}
	}
	{
		int32_t L_8 = ChatClient_get_State_m18(__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_8) == ((uint32_t)2))))
		{
			goto IL_00c7;
		}
	}
	{
		ChatClient_set_State_m19(__this, 4, /*hidden argument*/NULL);
		Object_t * L_9 = (__this->___listener_4);
		int32_t L_10 = ChatClient_get_State_m18(__this, /*hidden argument*/NULL);
		NullCheck(L_9);
		InterfaceActionInvoker1< int32_t >::Invoke(3 /* System.Void ExitGames.Client.Photon.Chat.IChatClientListener::OnChatStateChange(ExitGames.Client.Photon.Chat.ChatState) */, IChatClientListener_t5_il2cpp_TypeInfo_var, L_9, L_10);
		OperationResponse_t23 * L_11 = ___operationResponse;
		NullCheck(L_11);
		Dictionary_2_t28 * L_12 = (L_11->___Parameters_3);
		NullCheck(L_12);
		bool L_13 = (bool)VirtFuncInvoker1< bool, uint8_t >::Invoke(19 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::ContainsKey(!0) */, L_12, ((int32_t)221));
		if (!L_13)
		{
			goto IL_00c2;
		}
	}
	{
		AuthenticationValues_t7 * L_14 = ChatClient_get_AuthValues_m28(__this, /*hidden argument*/NULL);
		if (L_14)
		{
			goto IL_0081;
		}
	}
	{
		AuthenticationValues_t7 * L_15 = (AuthenticationValues_t7 *)il2cpp_codegen_object_new (AuthenticationValues_t7_il2cpp_TypeInfo_var);
		AuthenticationValues__ctor_m71(L_15, /*hidden argument*/NULL);
		ChatClient_set_AuthValues_m29(__this, L_15, /*hidden argument*/NULL);
	}

IL_0081:
	{
		AuthenticationValues_t7 * L_16 = ChatClient_get_AuthValues_m28(__this, /*hidden argument*/NULL);
		OperationResponse_t23 * L_17 = ___operationResponse;
		NullCheck(L_17);
		Object_t * L_18 = OperationResponse_get_Item_m104(L_17, ((int32_t)221), /*hidden argument*/NULL);
		NullCheck(L_16);
		L_16->___Token_2 = ((String_t*)IsInst(L_18, String_t_il2cpp_TypeInfo_var));
		OperationResponse_t23 * L_19 = ___operationResponse;
		NullCheck(L_19);
		Object_t * L_20 = OperationResponse_get_Item_m104(L_19, ((int32_t)230), /*hidden argument*/NULL);
		ChatClient_set_FrontendAddress_m15(__this, ((String_t*)Castclass(L_20, String_t_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		ChatPeer_t6 * L_21 = (__this->___chatPeer_5);
		NullCheck(L_21);
		VirtActionInvoker0::Invoke(7 /* System.Void ExitGames.Client.Photon.PhotonPeer::Disconnect() */, L_21);
		goto IL_00c2;
	}

IL_00c2:
	{
		goto IL_0104;
	}

IL_00c7:
	{
		int32_t L_22 = ChatClient_get_State_m18(__this, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_22) == ((uint32_t)6))))
		{
			goto IL_0104;
		}
	}
	{
		int32_t L_23 = (__this->___msDeltaForServiceCalls_7);
		__this->___msDeltaForServiceCalls_7 = ((int32_t)((int32_t)L_23*(int32_t)4));
		ChatClient_set_State_m19(__this, 7, /*hidden argument*/NULL);
		Object_t * L_24 = (__this->___listener_4);
		int32_t L_25 = ChatClient_get_State_m18(__this, /*hidden argument*/NULL);
		NullCheck(L_24);
		InterfaceActionInvoker1< int32_t >::Invoke(3 /* System.Void ExitGames.Client.Photon.Chat.IChatClientListener::OnChatStateChange(ExitGames.Client.Photon.Chat.ChatState) */, IChatClientListener_t5_il2cpp_TypeInfo_var, L_24, L_25);
		Object_t * L_26 = (__this->___listener_4);
		NullCheck(L_26);
		InterfaceActionInvoker0::Invoke(2 /* System.Void ExitGames.Client.Photon.Chat.IChatClientListener::OnConnected() */, IChatClientListener_t5_il2cpp_TypeInfo_var, L_26);
	}

IL_0104:
	{
		goto IL_0191;
	}

IL_0109:
	{
		OperationResponse_t23 * L_27 = ___operationResponse;
		NullCheck(L_27);
		int16_t L_28 = (L_27->___ReturnCode_1);
		V_0 = L_28;
		int16_t L_29 = V_0;
		if (((int32_t)((int32_t)L_29-(int32_t)((int32_t)32755))) == 0)
		{
			goto IL_014c;
		}
		if (((int32_t)((int32_t)L_29-(int32_t)((int32_t)32755))) == 1)
		{
			goto IL_0159;
		}
		if (((int32_t)((int32_t)L_29-(int32_t)((int32_t)32755))) == 2)
		{
			goto IL_0165;
		}
	}
	{
		int16_t L_30 = V_0;
		if ((((int32_t)L_30) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0171;
		}
	}
	{
		int16_t L_31 = V_0;
		if ((((int32_t)L_31) == ((int32_t)((int32_t)32767))))
		{
			goto IL_0140;
		}
	}
	{
		goto IL_017e;
	}

IL_0140:
	{
		ChatClient_set_DisconnectedCause_m21(__this, 6, /*hidden argument*/NULL);
		goto IL_017e;
	}

IL_014c:
	{
		ChatClient_set_DisconnectedCause_m21(__this, ((int32_t)10), /*hidden argument*/NULL);
		goto IL_017e;
	}

IL_0159:
	{
		ChatClient_set_DisconnectedCause_m21(__this, 8, /*hidden argument*/NULL);
		goto IL_017e;
	}

IL_0165:
	{
		ChatClient_set_DisconnectedCause_m21(__this, 7, /*hidden argument*/NULL);
		goto IL_017e;
	}

IL_0171:
	{
		ChatClient_set_DisconnectedCause_m21(__this, ((int32_t)9), /*hidden argument*/NULL);
		goto IL_017e;
	}

IL_017e:
	{
		ChatClient_set_State_m19(__this, ((int32_t)10), /*hidden argument*/NULL);
		ChatPeer_t6 * L_32 = (__this->___chatPeer_5);
		NullCheck(L_32);
		VirtActionInvoker0::Invoke(7 /* System.Void ExitGames.Client.Photon.PhotonPeer::Disconnect() */, L_32);
	}

IL_0191:
	{
		return;
	}
}
// System.Void ExitGames.Client.Photon.Chat.ChatClient::HandleStatusUpdate(ExitGames.Client.Photon.EventData)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t29_il2cpp_TypeInfo_var;
extern TypeInfo* IChatClientListener_t5_il2cpp_TypeInfo_var;
extern "C" void ChatClient_HandleStatusUpdate_m58 (ChatClient_t8 * __this, EventData_t22 * ___eventData, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		Int32_t29_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		IChatClientListener_t5_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	int32_t V_1 = 0;
	Object_t * V_2 = {0};
	bool V_3 = false;
	{
		EventData_t22 * L_0 = ___eventData;
		NullCheck(L_0);
		Dictionary_2_t28 * L_1 = (L_0->___Parameters_1);
		NullCheck(L_1);
		Object_t * L_2 = (Object_t *)VirtFuncInvoker1< Object_t *, uint8_t >::Invoke(22 /* !1 System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::get_Item(!0) */, L_1, 5);
		V_0 = ((String_t*)Castclass(L_2, String_t_il2cpp_TypeInfo_var));
		EventData_t22 * L_3 = ___eventData;
		NullCheck(L_3);
		Dictionary_2_t28 * L_4 = (L_3->___Parameters_1);
		NullCheck(L_4);
		Object_t * L_5 = (Object_t *)VirtFuncInvoker1< Object_t *, uint8_t >::Invoke(22 /* !1 System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::get_Item(!0) */, L_4, ((int32_t)10));
		V_1 = ((*(int32_t*)((int32_t*)UnBox (L_5, Int32_t29_il2cpp_TypeInfo_var))));
		V_2 = NULL;
		EventData_t22 * L_6 = ___eventData;
		NullCheck(L_6);
		Dictionary_2_t28 * L_7 = (L_6->___Parameters_1);
		NullCheck(L_7);
		bool L_8 = (bool)VirtFuncInvoker1< bool, uint8_t >::Invoke(19 /* System.Boolean System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::ContainsKey(!0) */, L_7, 3);
		V_3 = L_8;
		bool L_9 = V_3;
		if (!L_9)
		{
			goto IL_0047;
		}
	}
	{
		EventData_t22 * L_10 = ___eventData;
		NullCheck(L_10);
		Dictionary_2_t28 * L_11 = (L_10->___Parameters_1);
		NullCheck(L_11);
		Object_t * L_12 = (Object_t *)VirtFuncInvoker1< Object_t *, uint8_t >::Invoke(22 /* !1 System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::get_Item(!0) */, L_11, 3);
		V_2 = L_12;
	}

IL_0047:
	{
		Object_t * L_13 = (__this->___listener_4);
		String_t* L_14 = V_0;
		int32_t L_15 = V_1;
		bool L_16 = V_3;
		Object_t * L_17 = V_2;
		NullCheck(L_13);
		InterfaceActionInvoker4< String_t*, int32_t, bool, Object_t * >::Invoke(8 /* System.Void ExitGames.Client.Photon.Chat.IChatClientListener::OnStatusUpdate(System.String,System.Int32,System.Boolean,System.Object) */, IChatClientListener_t5_il2cpp_TypeInfo_var, L_13, L_14, L_15, L_16, L_17);
		return;
	}
}
// System.Void ExitGames.Client.Photon.Chat.ChatClient::ConnectToFrontEnd()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* IChatClientListener_t5_il2cpp_TypeInfo_var;
extern "C" void ChatClient_ConnectToFrontEnd_m59 (ChatClient_t8 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		IChatClientListener_t5_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7);
		s_Il2CppMethodIntialized = true;
	}
	{
		ChatClient_set_State_m19(__this, 6, /*hidden argument*/NULL);
		Object_t * L_0 = (__this->___listener_4);
		String_t* L_1 = ChatClient_get_FrontendAddress_m14(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = String_Concat_m105(NULL /*static, unused*/, (String_t*) &_stringLiteral14, L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void ExitGames.Client.Photon.Chat.IChatClientListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IChatClientListener_t5_il2cpp_TypeInfo_var, L_0, 3, L_2);
		ChatPeer_t6 * L_3 = (__this->___chatPeer_5);
		String_t* L_4 = ChatClient_get_FrontendAddress_m14(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		VirtFuncInvoker2< bool, String_t*, String_t* >::Invoke(6 /* System.Boolean ExitGames.Client.Photon.PhotonPeer::Connect(System.String,System.String) */, L_3, L_4, (String_t*) &_stringLiteral15);
		return;
	}
}
// System.Boolean ExitGames.Client.Photon.Chat.ChatClient::AuthenticateOnFrontEnd()
extern TypeInfo* Dictionary_2_t28_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m97_MethodInfo_var;
extern "C" bool ChatClient_AuthenticateOnFrontEnd_m60 (ChatClient_t8 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Dictionary_2_t28_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(13);
		Dictionary_2__ctor_m97_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483654);
		s_Il2CppMethodIntialized = true;
	}
	Dictionary_2_t28 * V_0 = {0};
	Dictionary_2_t28 * V_1 = {0};
	{
		AuthenticationValues_t7 * L_0 = ChatClient_get_AuthValues_m28(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_003c;
		}
	}
	{
		Dictionary_2_t28 * L_1 = (Dictionary_2_t28 *)il2cpp_codegen_object_new (Dictionary_2_t28_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m97(L_1, /*hidden argument*/Dictionary_2__ctor_m97_MethodInfo_var);
		V_1 = L_1;
		Dictionary_2_t28 * L_2 = V_1;
		AuthenticationValues_t7 * L_3 = ChatClient_get_AuthValues_m28(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		String_t* L_4 = (L_3->___Token_2);
		NullCheck(L_2);
		VirtActionInvoker2< uint8_t, Object_t * >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::Add(!0,!1) */, L_2, ((int32_t)221), L_4);
		Dictionary_2_t28 * L_5 = V_1;
		V_0 = L_5;
		ChatPeer_t6 * L_6 = (__this->___chatPeer_5);
		Dictionary_2_t28 * L_7 = V_0;
		NullCheck(L_6);
		bool L_8 = (bool)VirtFuncInvoker3< bool, uint8_t, Dictionary_2_t28 *, bool >::Invoke(14 /* System.Boolean ExitGames.Client.Photon.PhotonPeer::OpCustom(System.Byte,System.Collections.Generic.Dictionary`2<System.Byte,System.Object>,System.Boolean) */, L_6, ((int32_t)230), L_7, 1);
		return L_8;
	}

IL_003c:
	{
		Debug_WriteLine_m106(NULL /*static, unused*/, (String_t*) &_stringLiteral16, /*hidden argument*/NULL);
		return 0;
	}
}
#ifndef _MSC_VER
#else
#endif
// ExitGames.Client.Photon.Chat.ChatDisconnectCause
#include "AssemblyU2DCSharpU2Dfirstpass_ExitGames_Client_Photon_Chat_C_2MethodDeclarations.h"



// ExitGames.Client.Photon.Chat.ChatEventCode
#include "AssemblyU2DCSharpU2Dfirstpass_ExitGames_Client_Photon_Chat_C_3.h"
#ifndef _MSC_VER
#else
#endif
// ExitGames.Client.Photon.Chat.ChatEventCode
#include "AssemblyU2DCSharpU2Dfirstpass_ExitGames_Client_Photon_Chat_C_3MethodDeclarations.h"



// System.Void ExitGames.Client.Photon.Chat.ChatEventCode::.ctor()
extern "C" void ChatEventCode__ctor_m61 (ChatEventCode_t10 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m85(__this, /*hidden argument*/NULL);
		return;
	}
}
// ExitGames.Client.Photon.Chat.ChatOperationCode
#include "AssemblyU2DCSharpU2Dfirstpass_ExitGames_Client_Photon_Chat_C_4.h"
#ifndef _MSC_VER
#else
#endif
// ExitGames.Client.Photon.Chat.ChatOperationCode
#include "AssemblyU2DCSharpU2Dfirstpass_ExitGames_Client_Photon_Chat_C_4MethodDeclarations.h"



// System.Void ExitGames.Client.Photon.Chat.ChatOperationCode::.ctor()
extern "C" void ChatOperationCode__ctor_m62 (ChatOperationCode_t11 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m85(__this, /*hidden argument*/NULL);
		return;
	}
}
// ExitGames.Client.Photon.Chat.ChatParameterCode
#include "AssemblyU2DCSharpU2Dfirstpass_ExitGames_Client_Photon_Chat_C_5.h"
#ifndef _MSC_VER
#else
#endif
// ExitGames.Client.Photon.Chat.ChatParameterCode
#include "AssemblyU2DCSharpU2Dfirstpass_ExitGames_Client_Photon_Chat_C_5MethodDeclarations.h"



// System.Void ExitGames.Client.Photon.Chat.ChatParameterCode::.ctor()
extern "C" void ChatParameterCode__ctor_m63 (ChatParameterCode_t12 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m85(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// System.Collections.Generic.Dictionary`2<ExitGames.Client.Photon.ConnectionProtocol,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_1.h"
// ExitGames.Client.Photon.Chat.CustomAuthenticationType
#include "AssemblyU2DCSharpU2Dfirstpass_ExitGames_Client_Photon_Chat_C_7.h"
// System.Collections.Generic.Dictionary`2<ExitGames.Client.Photon.ConnectionProtocol,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_gen_1MethodDeclarations.h"


// System.Void ExitGames.Client.Photon.Chat.ChatPeer::.ctor(ExitGames.Client.Photon.IPhotonPeerListener,ExitGames.Client.Photon.ConnectionProtocol)
extern "C" void ChatPeer__ctor_m64 (ChatPeer_t6 * __this, Object_t * ___listener, uint8_t ___protocol, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___listener;
		uint8_t L_1 = ___protocol;
		PhotonPeer__ctor_m107(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ExitGames.Client.Photon.Chat.ChatPeer::.cctor()
extern TypeInfo* Dictionary_2_t13_il2cpp_TypeInfo_var;
extern TypeInfo* ChatPeer_t6_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m108_MethodInfo_var;
extern "C" void ChatPeer__cctor_m65 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Dictionary_2_t13_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(20);
		ChatPeer_t6_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5);
		Dictionary_2__ctor_m108_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483655);
		s_Il2CppMethodIntialized = true;
	}
	Dictionary_2_t13 * V_0 = {0};
	{
		Dictionary_2_t13 * L_0 = (Dictionary_2_t13 *)il2cpp_codegen_object_new (Dictionary_2_t13_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m108(L_0, /*hidden argument*/Dictionary_2__ctor_m108_MethodInfo_var);
		V_0 = L_0;
		Dictionary_2_t13 * L_1 = V_0;
		NullCheck(L_1);
		VirtActionInvoker2< uint8_t, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<ExitGames.Client.Photon.ConnectionProtocol,System.Int32>::Add(!0,!1) */, L_1, 0, ((int32_t)5058));
		Dictionary_2_t13 * L_2 = V_0;
		NullCheck(L_2);
		VirtActionInvoker2< uint8_t, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<ExitGames.Client.Photon.ConnectionProtocol,System.Int32>::Add(!0,!1) */, L_2, 1, ((int32_t)4533));
		Dictionary_2_t13 * L_3 = V_0;
		NullCheck(L_3);
		VirtActionInvoker2< uint8_t, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<ExitGames.Client.Photon.ConnectionProtocol,System.Int32>::Add(!0,!1) */, L_3, 4, ((int32_t)9093));
		Dictionary_2_t13 * L_4 = V_0;
		NullCheck(L_4);
		VirtActionInvoker2< uint8_t, int32_t >::Invoke(18 /* System.Void System.Collections.Generic.Dictionary`2<ExitGames.Client.Photon.ConnectionProtocol,System.Int32>::Add(!0,!1) */, L_4, 5, ((int32_t)19093));
		Dictionary_2_t13 * L_5 = V_0;
		((ChatPeer_t6_StaticFields*)ChatPeer_t6_il2cpp_TypeInfo_var->static_fields)->___ProtocolToNameServerPort_7 = L_5;
		return;
	}
}
// System.String ExitGames.Client.Photon.Chat.ChatPeer::get_NameServerAddress()
extern "C" String_t* ChatPeer_get_NameServerAddress_m66 (ChatPeer_t6 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = ChatPeer_GetNameServerAddress_m68(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Boolean ExitGames.Client.Photon.Chat.ChatPeer::get_IsProtocolSecure()
extern "C" bool ChatPeer_get_IsProtocolSecure_m67 (ChatPeer_t6 * __this, const MethodInfo* method)
{
	{
		uint8_t L_0 = PhotonPeer_get_UsedProtocol_m109(__this, /*hidden argument*/NULL);
		return ((((int32_t)L_0) == ((int32_t)5))? 1 : 0);
	}
}
// System.String ExitGames.Client.Photon.Chat.ChatPeer::GetNameServerAddress()
extern TypeInfo* ChatPeer_t6_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t29_il2cpp_TypeInfo_var;
extern "C" String_t* ChatPeer_GetNameServerAddress_m68 (ChatPeer_t6 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ChatPeer_t6_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		Int32_t29_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(14);
		s_Il2CppMethodIntialized = true;
	}
	uint8_t V_0 = {0};
	int32_t V_1 = 0;
	String_t* V_2 = {0};
	{
		uint8_t L_0 = PhotonPeer_get_UsedProtocol_m109(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		V_1 = 0;
		IL2CPP_RUNTIME_CLASS_INIT(ChatPeer_t6_il2cpp_TypeInfo_var);
		Dictionary_2_t13 * L_1 = ((ChatPeer_t6_StaticFields*)ChatPeer_t6_il2cpp_TypeInfo_var->static_fields)->___ProtocolToNameServerPort_7;
		uint8_t L_2 = V_0;
		NullCheck(L_1);
		VirtFuncInvoker2< bool, uint8_t, int32_t* >::Invoke(21 /* System.Boolean System.Collections.Generic.Dictionary`2<ExitGames.Client.Photon.ConnectionProtocol,System.Int32>::TryGetValue(!0,!1&) */, L_1, L_2, (&V_1));
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		V_2 = L_3;
		uint8_t L_4 = V_0;
		if ((!(((uint32_t)L_4) == ((uint32_t)4))))
		{
			goto IL_002f;
		}
	}
	{
		V_2 = (String_t*) &_stringLiteral17;
		goto IL_003c;
	}

IL_002f:
	{
		uint8_t L_5 = V_0;
		if ((!(((uint32_t)L_5) == ((uint32_t)5))))
		{
			goto IL_003c;
		}
	}
	{
		V_2 = (String_t*) &_stringLiteral18;
	}

IL_003c:
	{
		String_t* L_6 = V_2;
		int32_t L_7 = V_1;
		int32_t L_8 = L_7;
		Object_t * L_9 = Box(Int32_t29_il2cpp_TypeInfo_var, &L_8);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_10 = String_Format_m89(NULL /*static, unused*/, (String_t*) &_stringLiteral19, L_6, (String_t*) &_stringLiteral20, L_9, /*hidden argument*/NULL);
		return L_10;
	}
}
// System.Boolean ExitGames.Client.Photon.Chat.ChatPeer::Connect()
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* IPhotonPeerListener_t24_il2cpp_TypeInfo_var;
extern "C" bool ChatPeer_Connect_m69 (ChatPeer_t6 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		IPhotonPeerListener_t24_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(11);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = PhotonPeer_get_Listener_m110(__this, /*hidden argument*/NULL);
		String_t* L_1 = ChatPeer_get_NameServerAddress_m66(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = String_Concat_m105(NULL /*static, unused*/, (String_t*) &_stringLiteral21, L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void ExitGames.Client.Photon.IPhotonPeerListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IPhotonPeerListener_t24_il2cpp_TypeInfo_var, L_0, 3, L_2);
		String_t* L_3 = ChatPeer_get_NameServerAddress_m66(__this, /*hidden argument*/NULL);
		bool L_4 = (bool)VirtFuncInvoker2< bool, String_t*, String_t* >::Invoke(6 /* System.Boolean ExitGames.Client.Photon.PhotonPeer::Connect(System.String,System.String) */, __this, L_3, (String_t*) &_stringLiteral22);
		return L_4;
	}
}
// System.Boolean ExitGames.Client.Photon.Chat.ChatPeer::AuthenticateOnNameServer(System.String,System.String,System.String,ExitGames.Client.Photon.Chat.AuthenticationValues)
extern TypeInfo* IPhotonPeerListener_t24_il2cpp_TypeInfo_var;
extern TypeInfo* Dictionary_2_t28_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Byte_t26_il2cpp_TypeInfo_var;
extern const MethodInfo* Dictionary_2__ctor_m97_MethodInfo_var;
extern "C" bool ChatPeer_AuthenticateOnNameServer_m70 (ChatPeer_t6 * __this, String_t* ___appId, String_t* ___appVersion, String_t* ___region, AuthenticationValues_t7 * ___authValues, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IPhotonPeerListener_t24_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(11);
		Dictionary_2_t28_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(13);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		Byte_t26_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		Dictionary_2__ctor_m97_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483654);
		s_Il2CppMethodIntialized = true;
	}
	Dictionary_2_t28 * V_0 = {0};
	{
		uint8_t L_0 = PhotonPeer_get_DebugOut_m100(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_0) < ((int32_t)3)))
		{
			goto IL_001d;
		}
	}
	{
		Object_t * L_1 = PhotonPeer_get_Listener_m110(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		InterfaceActionInvoker2< uint8_t, String_t* >::Invoke(0 /* System.Void ExitGames.Client.Photon.IPhotonPeerListener::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String) */, IPhotonPeerListener_t24_il2cpp_TypeInfo_var, L_1, 3, (String_t*) &_stringLiteral23);
	}

IL_001d:
	{
		Dictionary_2_t28 * L_2 = (Dictionary_2_t28 *)il2cpp_codegen_object_new (Dictionary_2_t28_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m97(L_2, /*hidden argument*/Dictionary_2__ctor_m97_MethodInfo_var);
		V_0 = L_2;
		Dictionary_2_t28 * L_3 = V_0;
		String_t* L_4 = ___appVersion;
		NullCheck(L_3);
		VirtActionInvoker2< uint8_t, Object_t * >::Invoke(23 /* System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::set_Item(!0,!1) */, L_3, ((int32_t)220), L_4);
		Dictionary_2_t28 * L_5 = V_0;
		String_t* L_6 = ___appId;
		NullCheck(L_5);
		VirtActionInvoker2< uint8_t, Object_t * >::Invoke(23 /* System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::set_Item(!0,!1) */, L_5, ((int32_t)224), L_6);
		Dictionary_2_t28 * L_7 = V_0;
		String_t* L_8 = ___region;
		NullCheck(L_7);
		VirtActionInvoker2< uint8_t, Object_t * >::Invoke(23 /* System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::set_Item(!0,!1) */, L_7, ((int32_t)210), L_8);
		AuthenticationValues_t7 * L_9 = ___authValues;
		if (!L_9)
		{
			goto IL_0109;
		}
	}
	{
		AuthenticationValues_t7 * L_10 = ___authValues;
		NullCheck(L_10);
		String_t* L_11 = AuthenticationValues_get_UserId_m75(L_10, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_12 = String_IsNullOrEmpty_m96(NULL /*static, unused*/, L_11, /*hidden argument*/NULL);
		if (L_12)
		{
			goto IL_0071;
		}
	}
	{
		Dictionary_2_t28 * L_13 = V_0;
		AuthenticationValues_t7 * L_14 = ___authValues;
		NullCheck(L_14);
		String_t* L_15 = AuthenticationValues_get_UserId_m75(L_14, /*hidden argument*/NULL);
		NullCheck(L_13);
		VirtActionInvoker2< uint8_t, Object_t * >::Invoke(23 /* System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::set_Item(!0,!1) */, L_13, ((int32_t)225), L_15);
	}

IL_0071:
	{
		AuthenticationValues_t7 * L_16 = ___authValues;
		if (!L_16)
		{
			goto IL_0109;
		}
	}
	{
		AuthenticationValues_t7 * L_17 = ___authValues;
		NullCheck(L_17);
		uint8_t L_18 = (L_17->___AuthType_0);
		if ((((int32_t)L_18) == ((int32_t)((int32_t)255))))
		{
			goto IL_0109;
		}
	}
	{
		Dictionary_2_t28 * L_19 = V_0;
		AuthenticationValues_t7 * L_20 = ___authValues;
		NullCheck(L_20);
		uint8_t L_21 = (L_20->___AuthType_0);
		uint8_t L_22 = L_21;
		Object_t * L_23 = Box(Byte_t26_il2cpp_TypeInfo_var, &L_22);
		NullCheck(L_19);
		VirtActionInvoker2< uint8_t, Object_t * >::Invoke(23 /* System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::set_Item(!0,!1) */, L_19, ((int32_t)217), L_23);
		AuthenticationValues_t7 * L_24 = ___authValues;
		NullCheck(L_24);
		String_t* L_25 = (L_24->___Token_2);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_26 = String_IsNullOrEmpty_m96(NULL /*static, unused*/, L_25, /*hidden argument*/NULL);
		if (L_26)
		{
			goto IL_00c8;
		}
	}
	{
		Dictionary_2_t28 * L_27 = V_0;
		AuthenticationValues_t7 * L_28 = ___authValues;
		NullCheck(L_28);
		String_t* L_29 = (L_28->___Token_2);
		NullCheck(L_27);
		VirtActionInvoker2< uint8_t, Object_t * >::Invoke(23 /* System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::set_Item(!0,!1) */, L_27, ((int32_t)221), L_29);
		goto IL_0109;
	}

IL_00c8:
	{
		AuthenticationValues_t7 * L_30 = ___authValues;
		NullCheck(L_30);
		String_t* L_31 = (L_30->___AuthGetParameters_1);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_32 = String_IsNullOrEmpty_m96(NULL /*static, unused*/, L_31, /*hidden argument*/NULL);
		if (L_32)
		{
			goto IL_00eb;
		}
	}
	{
		Dictionary_2_t28 * L_33 = V_0;
		AuthenticationValues_t7 * L_34 = ___authValues;
		NullCheck(L_34);
		String_t* L_35 = (L_34->___AuthGetParameters_1);
		NullCheck(L_33);
		VirtActionInvoker2< uint8_t, Object_t * >::Invoke(23 /* System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::set_Item(!0,!1) */, L_33, ((int32_t)216), L_35);
	}

IL_00eb:
	{
		AuthenticationValues_t7 * L_36 = ___authValues;
		NullCheck(L_36);
		Object_t * L_37 = AuthenticationValues_get_AuthPostData_m73(L_36, /*hidden argument*/NULL);
		if (!L_37)
		{
			goto IL_0109;
		}
	}
	{
		Dictionary_2_t28 * L_38 = V_0;
		AuthenticationValues_t7 * L_39 = ___authValues;
		NullCheck(L_39);
		Object_t * L_40 = AuthenticationValues_get_AuthPostData_m73(L_39, /*hidden argument*/NULL);
		NullCheck(L_38);
		VirtActionInvoker2< uint8_t, Object_t * >::Invoke(23 /* System.Void System.Collections.Generic.Dictionary`2<System.Byte,System.Object>::set_Item(!0,!1) */, L_38, ((int32_t)214), L_40);
	}

IL_0109:
	{
		Dictionary_2_t28 * L_41 = V_0;
		bool L_42 = PhotonPeer_get_IsEncryptionAvailable_m111(__this, /*hidden argument*/NULL);
		bool L_43 = (bool)VirtFuncInvoker5< bool, uint8_t, Dictionary_2_t28 *, bool, uint8_t, bool >::Invoke(16 /* System.Boolean ExitGames.Client.Photon.PhotonPeer::OpCustom(System.Byte,System.Collections.Generic.Dictionary`2<System.Byte,System.Object>,System.Boolean,System.Byte,System.Boolean) */, __this, ((int32_t)230), L_41, 1, 0, L_42);
		return L_43;
	}
}
#ifndef _MSC_VER
#else
#endif
// ExitGames.Client.Photon.Chat.CustomAuthenticationType
#include "AssemblyU2DCSharpU2Dfirstpass_ExitGames_Client_Photon_Chat_C_7MethodDeclarations.h"



#ifndef _MSC_VER
#else
#endif

// System.Uri
#include "System_System_UriMethodDeclarations.h"


// System.Void ExitGames.Client.Photon.Chat.AuthenticationValues::.ctor()
extern "C" void AuthenticationValues__ctor_m71 (AuthenticationValues_t7 * __this, const MethodInfo* method)
{
	{
		__this->___AuthType_0 = ((int32_t)255);
		Object__ctor_m85(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ExitGames.Client.Photon.Chat.AuthenticationValues::.ctor(System.String)
extern "C" void AuthenticationValues__ctor_m72 (AuthenticationValues_t7 * __this, String_t* ___userId, const MethodInfo* method)
{
	{
		__this->___AuthType_0 = ((int32_t)255);
		Object__ctor_m85(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___userId;
		AuthenticationValues_set_UserId_m76(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Object ExitGames.Client.Photon.Chat.AuthenticationValues::get_AuthPostData()
extern "C" Object_t * AuthenticationValues_get_AuthPostData_m73 (AuthenticationValues_t7 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U3CAuthPostDataU3Ek__BackingField_3);
		return L_0;
	}
}
// System.Void ExitGames.Client.Photon.Chat.AuthenticationValues::set_AuthPostData(System.Object)
extern "C" void AuthenticationValues_set_AuthPostData_m74 (AuthenticationValues_t7 * __this, Object_t * ___value, const MethodInfo* method)
{
	{
		Object_t * L_0 = ___value;
		__this->___U3CAuthPostDataU3Ek__BackingField_3 = L_0;
		return;
	}
}
// System.String ExitGames.Client.Photon.Chat.AuthenticationValues::get_UserId()
extern "C" String_t* AuthenticationValues_get_UserId_m75 (AuthenticationValues_t7 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___U3CUserIdU3Ek__BackingField_4);
		return L_0;
	}
}
// System.Void ExitGames.Client.Photon.Chat.AuthenticationValues::set_UserId(System.String)
extern "C" void AuthenticationValues_set_UserId_m76 (AuthenticationValues_t7 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___U3CUserIdU3Ek__BackingField_4 = L_0;
		return;
	}
}
// System.Void ExitGames.Client.Photon.Chat.AuthenticationValues::SetAuthPostData(System.String)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void AuthenticationValues_SetAuthPostData_m77 (AuthenticationValues_t7 * __this, String_t* ___stringData, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		s_Il2CppMethodIntialized = true;
	}
	AuthenticationValues_t7 * G_B2_0 = {0};
	AuthenticationValues_t7 * G_B1_0 = {0};
	String_t* G_B3_0 = {0};
	AuthenticationValues_t7 * G_B3_1 = {0};
	{
		String_t* L_0 = ___stringData;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_1 = String_IsNullOrEmpty_m96(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		G_B1_0 = __this;
		if (!L_1)
		{
			G_B2_0 = __this;
			goto IL_0012;
		}
	}
	{
		G_B3_0 = ((String_t*)(NULL));
		G_B3_1 = G_B1_0;
		goto IL_0013;
	}

IL_0012:
	{
		String_t* L_2 = ___stringData;
		G_B3_0 = L_2;
		G_B3_1 = G_B2_0;
	}

IL_0013:
	{
		NullCheck(G_B3_1);
		AuthenticationValues_set_AuthPostData_m74(G_B3_1, G_B3_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ExitGames.Client.Photon.Chat.AuthenticationValues::SetAuthPostData(System.Byte[])
extern "C" void AuthenticationValues_SetAuthPostData_m78 (AuthenticationValues_t7 * __this, ByteU5BU5D_t25* ___byteData, const MethodInfo* method)
{
	{
		ByteU5BU5D_t25* L_0 = ___byteData;
		AuthenticationValues_set_AuthPostData_m74(__this, (Object_t *)(Object_t *)L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ExitGames.Client.Photon.Chat.AuthenticationValues::AddAuthParameter(System.String,System.String)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t21_il2cpp_TypeInfo_var;
extern TypeInfo* Uri_t32_il2cpp_TypeInfo_var;
extern "C" void AuthenticationValues_AddAuthParameter_m79 (AuthenticationValues_t7 * __this, String_t* ___key, String_t* ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		ObjectU5BU5D_t21_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(16);
		Uri_t32_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(21);
		s_Il2CppMethodIntialized = true;
	}
	String_t* V_0 = {0};
	String_t* G_B3_0 = {0};
	{
		String_t* L_0 = (__this->___AuthGetParameters_1);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_1 = String_IsNullOrEmpty_m96(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		G_B3_0 = L_2;
		goto IL_001f;
	}

IL_001a:
	{
		G_B3_0 = (String_t*) &_stringLiteral24;
	}

IL_001f:
	{
		V_0 = G_B3_0;
		ObjectU5BU5D_t21* L_3 = ((ObjectU5BU5D_t21*)SZArrayNew(ObjectU5BU5D_t21_il2cpp_TypeInfo_var, 4));
		String_t* L_4 = (__this->___AuthGetParameters_1);
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 0);
		ArrayElementTypeCheck (L_3, L_4);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_3, 0)) = (Object_t *)L_4;
		ObjectU5BU5D_t21* L_5 = L_3;
		String_t* L_6 = V_0;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, 1);
		ArrayElementTypeCheck (L_5, L_6);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_5, 1)) = (Object_t *)L_6;
		ObjectU5BU5D_t21* L_7 = L_5;
		String_t* L_8 = ___key;
		IL2CPP_RUNTIME_CLASS_INIT(Uri_t32_il2cpp_TypeInfo_var);
		String_t* L_9 = Uri_EscapeDataString_m112(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 2);
		ArrayElementTypeCheck (L_7, L_9);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_7, 2)) = (Object_t *)L_9;
		ObjectU5BU5D_t21* L_10 = L_7;
		String_t* L_11 = ___value;
		String_t* L_12 = Uri_EscapeDataString_m112(NULL /*static, unused*/, L_11, /*hidden argument*/NULL);
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, 3);
		ArrayElementTypeCheck (L_10, L_12);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_10, 3)) = (Object_t *)L_12;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_13 = String_Format_m113(NULL /*static, unused*/, (String_t*) &_stringLiteral25, L_10, /*hidden argument*/NULL);
		__this->___AuthGetParameters_1 = L_13;
		return;
	}
}
// System.String ExitGames.Client.Photon.Chat.AuthenticationValues::ToString()
extern TypeInfo* Boolean_t30_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" String_t* AuthenticationValues_ToString_m80 (AuthenticationValues_t7 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Boolean_t30_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(15);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = AuthenticationValues_get_UserId_m75(__this, /*hidden argument*/NULL);
		String_t* L_1 = (__this->___AuthGetParameters_1);
		String_t* L_2 = (__this->___Token_2);
		bool L_3 = ((((int32_t)((((Object_t*)(String_t*)L_2) == ((Object_t*)(Object_t *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		Object_t * L_4 = Box(Boolean_t30_il2cpp_TypeInfo_var, &L_3);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = String_Format_m89(NULL /*static, unused*/, (String_t*) &_stringLiteral26, L_0, L_1, L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// ExitGames.Client.Photon.Chat.ParameterCode
#include "AssemblyU2DCSharpU2Dfirstpass_ExitGames_Client_Photon_Chat_P.h"
#ifndef _MSC_VER
#else
#endif
// ExitGames.Client.Photon.Chat.ParameterCode
#include "AssemblyU2DCSharpU2Dfirstpass_ExitGames_Client_Photon_Chat_PMethodDeclarations.h"



// System.Void ExitGames.Client.Photon.Chat.ParameterCode::.ctor()
extern "C" void ParameterCode__ctor_m81 (ParameterCode_t16 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m85(__this, /*hidden argument*/NULL);
		return;
	}
}
// ExitGames.Client.Photon.Chat.ErrorCode
#include "AssemblyU2DCSharpU2Dfirstpass_ExitGames_Client_Photon_Chat_E.h"
#ifndef _MSC_VER
#else
#endif
// ExitGames.Client.Photon.Chat.ErrorCode
#include "AssemblyU2DCSharpU2Dfirstpass_ExitGames_Client_Photon_Chat_EMethodDeclarations.h"



// System.Void ExitGames.Client.Photon.Chat.ErrorCode::.ctor()
extern "C" void ErrorCode__ctor_m82 (ErrorCode_t17 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m85(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif
// ExitGames.Client.Photon.Chat.ChatState
#include "AssemblyU2DCSharpU2Dfirstpass_ExitGames_Client_Photon_Chat_C_1MethodDeclarations.h"



// ExitGames.Client.Photon.Chat.ChatUserStatus
#include "AssemblyU2DCSharpU2Dfirstpass_ExitGames_Client_Photon_Chat_C_8.h"
#ifndef _MSC_VER
#else
#endif
// ExitGames.Client.Photon.Chat.ChatUserStatus
#include "AssemblyU2DCSharpU2Dfirstpass_ExitGames_Client_Photon_Chat_C_8MethodDeclarations.h"



#ifdef __clang__
#pragma clang diagnostic pop
#endif
