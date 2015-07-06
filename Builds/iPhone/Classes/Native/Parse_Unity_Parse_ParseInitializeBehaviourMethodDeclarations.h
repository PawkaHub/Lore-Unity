#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.ParseInitializeBehaviour
struct ParseInitializeBehaviour_t1581;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t25;

// System.Void Parse.ParseInitializeBehaviour::Awake()
extern "C" void ParseInitializeBehaviour_Awake_m7917 (ParseInitializeBehaviour_t1581 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseInitializeBehaviour::Initialize()
extern "C" void ParseInitializeBehaviour_Initialize_m7918 (ParseInitializeBehaviour_t1581 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseInitializeBehaviour::OnPushNotificationReceived(System.String)
extern "C" void ParseInitializeBehaviour_OnPushNotificationReceived_m7919 (ParseInitializeBehaviour_t1581 * __this, String_t* ___pushPayloadString, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseInitializeBehaviour::OnGcmRegistrationReceived(System.String)
extern "C" void ParseInitializeBehaviour_OnGcmRegistrationReceived_m7920 (ParseInitializeBehaviour_t1581 * __this, String_t* ___registrationId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseInitializeBehaviour::.ctor()
extern "C" void ParseInitializeBehaviour__ctor_m7921 (ParseInitializeBehaviour_t1581 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseInitializeBehaviour::<Awake>b__0(System.Byte[])
extern "C" void ParseInitializeBehaviour_U3CAwakeU3Eb__0_m7922 (Object_t * __this /* static, unused */, ByteU5BU5D_t25* ___deviceToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseInitializeBehaviour::.cctor()
extern "C" void ParseInitializeBehaviour__cctor_m7923 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
