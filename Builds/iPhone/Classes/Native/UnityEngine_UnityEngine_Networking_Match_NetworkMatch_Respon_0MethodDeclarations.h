#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.JoinMatchResponse>
struct ResponseDelegate_1_t4904;
// System.Object
struct Object_t;
// UnityEngine.Networking.Match.JoinMatchResponse
struct JoinMatchResponse_t4798;
// System.IAsyncResult
struct IAsyncResult_t476;
// System.AsyncCallback
struct AsyncCallback_t477;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.JoinMatchResponse>::.ctor(System.Object,System.IntPtr)
// UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<System.Object>
#include "UnityEngine_UnityEngine_Networking_Match_NetworkMatch_Respon_3MethodDeclarations.h"
#define ResponseDelegate_1__ctor_m71349(__this, ___object, ___method, method) (( void (*) (ResponseDelegate_1_t4904 *, Object_t *, IntPtr_t, const MethodInfo*))ResponseDelegate_1__ctor_m71336_gshared)(__this, ___object, ___method, method)
// System.Void UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.JoinMatchResponse>::Invoke(T)
#define ResponseDelegate_1_Invoke_m71350(__this, ___response, method) (( void (*) (ResponseDelegate_1_t4904 *, JoinMatchResponse_t4798 *, const MethodInfo*))ResponseDelegate_1_Invoke_m71338_gshared)(__this, ___response, method)
// System.IAsyncResult UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.JoinMatchResponse>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define ResponseDelegate_1_BeginInvoke_m71351(__this, ___response, ___callback, ___object, method) (( Object_t * (*) (ResponseDelegate_1_t4904 *, JoinMatchResponse_t4798 *, AsyncCallback_t477 *, Object_t *, const MethodInfo*))ResponseDelegate_1_BeginInvoke_m71340_gshared)(__this, ___response, ___callback, ___object, method)
// System.Void UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.JoinMatchResponse>::EndInvoke(System.IAsyncResult)
#define ResponseDelegate_1_EndInvoke_m71352(__this, ___result, method) (( void (*) (ResponseDelegate_1_t4904 *, Object_t *, const MethodInfo*))ResponseDelegate_1_EndInvoke_m71342_gshared)(__this, ___result, method)
