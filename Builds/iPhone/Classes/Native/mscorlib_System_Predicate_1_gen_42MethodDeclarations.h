#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<FriendInfo>
struct Predicate_1_t6226;
// System.Object
struct Object_t;
// FriendInfo
struct FriendInfo_t402;
// System.IAsyncResult
struct IAsyncResult_t448;
// System.AsyncCallback
struct AsyncCallback_t449;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Predicate`1<FriendInfo>::.ctor(System.Object,System.IntPtr)
// System.Predicate`1<System.Object>
#include "mscorlib_System_Predicate_1_gen_17MethodDeclarations.h"
#define Predicate_1__ctor_m27802(__this, ___object, ___method, method) (( void (*) (Predicate_1_t6226 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m23999_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<FriendInfo>::Invoke(T)
#define Predicate_1_Invoke_m27803(__this, ___obj, method) (( bool (*) (Predicate_1_t6226 *, FriendInfo_t402 *, const MethodInfo*))Predicate_1_Invoke_m24000_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<FriendInfo>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Predicate_1_BeginInvoke_m27804(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t6226 *, FriendInfo_t402 *, AsyncCallback_t449 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m24001_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<FriendInfo>::EndInvoke(System.IAsyncResult)
#define Predicate_1_EndInvoke_m27805(__this, ___result, method) (( bool (*) (Predicate_1_t6226 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m24002_gshared)(__this, ___result, method)
