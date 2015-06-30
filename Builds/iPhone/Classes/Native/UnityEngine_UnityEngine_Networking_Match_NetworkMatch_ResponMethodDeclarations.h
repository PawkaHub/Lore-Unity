#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.CreateMatchResponse>
struct ResponseDelegate_1_t2931;
// System.Object
struct Object_t;
// UnityEngine.Networking.Match.CreateMatchResponse
struct CreateMatchResponse_t2823;
// System.IAsyncResult
struct IAsyncResult_t448;
// System.AsyncCallback
struct AsyncCallback_t449;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.CreateMatchResponse>::.ctor(System.Object,System.IntPtr)
// UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<System.Object>
#include "UnityEngine_UnityEngine_Networking_Match_NetworkMatch_Respon_3MethodDeclarations.h"
#define ResponseDelegate_1__ctor_m42290(__this, ___object, ___method, method) (( void (*) (ResponseDelegate_1_t2931 *, Object_t *, IntPtr_t, const MethodInfo*))ResponseDelegate_1__ctor_m42291_gshared)(__this, ___object, ___method, method)
// System.Void UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.CreateMatchResponse>::Invoke(T)
#define ResponseDelegate_1_Invoke_m42292(__this, ___response, method) (( void (*) (ResponseDelegate_1_t2931 *, CreateMatchResponse_t2823 *, const MethodInfo*))ResponseDelegate_1_Invoke_m42293_gshared)(__this, ___response, method)
// System.IAsyncResult UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.CreateMatchResponse>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define ResponseDelegate_1_BeginInvoke_m42294(__this, ___response, ___callback, ___object, method) (( Object_t * (*) (ResponseDelegate_1_t2931 *, CreateMatchResponse_t2823 *, AsyncCallback_t449 *, Object_t *, const MethodInfo*))ResponseDelegate_1_BeginInvoke_m42295_gshared)(__this, ___response, ___callback, ___object, method)
// System.Void UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.CreateMatchResponse>::EndInvoke(System.IAsyncResult)
#define ResponseDelegate_1_EndInvoke_m42296(__this, ___result, method) (( void (*) (ResponseDelegate_1_t2931 *, Object_t *, const MethodInfo*))ResponseDelegate_1_EndInvoke_m42297_gshared)(__this, ___result, method)
