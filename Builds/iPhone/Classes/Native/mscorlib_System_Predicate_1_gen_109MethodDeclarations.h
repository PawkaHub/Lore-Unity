#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<ExitGames.Client.Photon.NCommand>
struct Predicate_1_t6289;
// System.Object
struct Object_t;
// ExitGames.Client.Photon.NCommand
struct NCommand_t3129;
// System.IAsyncResult
struct IAsyncResult_t448;
// System.AsyncCallback
struct AsyncCallback_t449;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Predicate`1<ExitGames.Client.Photon.NCommand>::.ctor(System.Object,System.IntPtr)
// System.Predicate`1<System.Object>
#include "mscorlib_System_Predicate_1_gen_17MethodDeclarations.h"
#define Predicate_1__ctor_m43758(__this, ___object, ___method, method) (( void (*) (Predicate_1_t6289 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m22656_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<ExitGames.Client.Photon.NCommand>::Invoke(T)
#define Predicate_1_Invoke_m43759(__this, ___obj, method) (( bool (*) (Predicate_1_t6289 *, NCommand_t3129 *, const MethodInfo*))Predicate_1_Invoke_m22657_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<ExitGames.Client.Photon.NCommand>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Predicate_1_BeginInvoke_m43760(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t6289 *, NCommand_t3129 *, AsyncCallback_t449 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m22658_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<ExitGames.Client.Photon.NCommand>::EndInvoke(System.IAsyncResult)
#define Predicate_1_EndInvoke_m43761(__this, ___result, method) (( bool (*) (Predicate_1_t6289 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m22659_gshared)(__this, ___result, method)
