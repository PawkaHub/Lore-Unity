#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Action`1<System.Linq.Expressions.Expression>
struct Action_1_t3309;
// System.Object
struct Object_t;
// System.Linq.Expressions.Expression
struct Expression_t630;
// System.IAsyncResult
struct IAsyncResult_t476;
// System.AsyncCallback
struct AsyncCallback_t477;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Action`1<System.Linq.Expressions.Expression>::.ctor(System.Object,System.IntPtr)
// System.Action`1<System.Object>
#include "mscorlib_System_Action_1_gen_25MethodDeclarations.h"
#define Action_1__ctor_m10468(__this, ___object, ___method, method) (( void (*) (Action_1_t3309 *, Object_t *, IntPtr_t, const MethodInfo*))Action_1__ctor_m28570_gshared)(__this, ___object, ___method, method)
// System.Void System.Action`1<System.Linq.Expressions.Expression>::Invoke(T)
#define Action_1_Invoke_m67266(__this, ___obj, method) (( void (*) (Action_1_t3309 *, Expression_t630 *, const MethodInfo*))Action_1_Invoke_m28572_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Action`1<System.Linq.Expressions.Expression>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Action_1_BeginInvoke_m67267(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Action_1_t3309 *, Expression_t630 *, AsyncCallback_t477 *, Object_t *, const MethodInfo*))Action_1_BeginInvoke_m28574_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Void System.Action`1<System.Linq.Expressions.Expression>::EndInvoke(System.IAsyncResult)
#define Action_1_EndInvoke_m67268(__this, ___result, method) (( void (*) (Action_1_t3309 *, Object_t *, const MethodInfo*))Action_1_EndInvoke_m28576_gshared)(__this, ___result, method)
