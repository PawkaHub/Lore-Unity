#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Action`1<System.Linq.Expressions.ParameterExpression>
struct Action_1_t3239;
// System.Object
struct Object_t;
// System.Linq.Expressions.ParameterExpression
struct ParameterExpression_t3208;
// System.IAsyncResult
struct IAsyncResult_t448;
// System.AsyncCallback
struct AsyncCallback_t449;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Action`1<System.Linq.Expressions.ParameterExpression>::.ctor(System.Object,System.IntPtr)
// System.Action`1<System.Object>
#include "mscorlib_System_Action_1_gen_20MethodDeclarations.h"
#define Action_1__ctor_m14680(__this, ___object, ___method, method) (( void (*) (Action_1_t3239 *, Object_t *, IntPtr_t, const MethodInfo*))Action_1__ctor_m32374_gshared)(__this, ___object, ___method, method)
// System.Void System.Action`1<System.Linq.Expressions.ParameterExpression>::Invoke(T)
#define Action_1_Invoke_m44165(__this, ___obj, method) (( void (*) (Action_1_t3239 *, ParameterExpression_t3208 *, const MethodInfo*))Action_1_Invoke_m32375_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Action`1<System.Linq.Expressions.ParameterExpression>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Action_1_BeginInvoke_m44166(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Action_1_t3239 *, ParameterExpression_t3208 *, AsyncCallback_t449 *, Object_t *, const MethodInfo*))Action_1_BeginInvoke_m32376_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Void System.Action`1<System.Linq.Expressions.ParameterExpression>::EndInvoke(System.IAsyncResult)
#define Action_1_EndInvoke_m44167(__this, ___result, method) (( void (*) (Action_1_t3239 *, Object_t *, const MethodInfo*))Action_1_EndInvoke_m32377_gshared)(__this, ___result, method)
