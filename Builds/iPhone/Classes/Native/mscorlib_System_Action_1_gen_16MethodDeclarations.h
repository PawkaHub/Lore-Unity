#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Action`1<System.Linq.Expressions.Expression>
struct Action_1_t3071;
// System.Object
struct Object_t;
// System.Linq.Expressions.Expression
struct Expression_t609;
// System.IAsyncResult
struct IAsyncResult_t448;
// System.AsyncCallback
struct AsyncCallback_t449;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Action`1<System.Linq.Expressions.Expression>::.ctor(System.Object,System.IntPtr)
// System.Action`1<System.Object>
#include "mscorlib_System_Action_1_gen_22MethodDeclarations.h"
#define Action_1__ctor_m10048(__this, ___object, ___method, method) (( void (*) (Action_1_t3071 *, Object_t *, IntPtr_t, const MethodInfo*))Action_1__ctor_m31792_gshared)(__this, ___object, ___method, method)
// System.Void System.Action`1<System.Linq.Expressions.Expression>::Invoke(T)
#define Action_1_Invoke_m66351(__this, ___obj, method) (( void (*) (Action_1_t3071 *, Expression_t609 *, const MethodInfo*))Action_1_Invoke_m31794_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Action`1<System.Linq.Expressions.Expression>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Action_1_BeginInvoke_m66352(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Action_1_t3071 *, Expression_t609 *, AsyncCallback_t449 *, Object_t *, const MethodInfo*))Action_1_BeginInvoke_m31796_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Void System.Action`1<System.Linq.Expressions.Expression>::EndInvoke(System.IAsyncResult)
#define Action_1_EndInvoke_m66353(__this, ___result, method) (( void (*) (Action_1_t3071 *, Object_t *, const MethodInfo*))Action_1_EndInvoke_m31798_gshared)(__this, ___result, method)
