#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Action`1<System.Linq.Expressions.MemberBinding>
struct Action_1_t3304;
// System.Object
struct Object_t;
// System.Linq.Expressions.MemberBinding
struct MemberBinding_t3266;
// System.IAsyncResult
struct IAsyncResult_t476;
// System.AsyncCallback
struct AsyncCallback_t477;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Action`1<System.Linq.Expressions.MemberBinding>::.ctor(System.Object,System.IntPtr)
// System.Action`1<System.Object>
#include "mscorlib_System_Action_1_gen_25MethodDeclarations.h"
#define Action_1__ctor_m10464(__this, ___object, ___method, method) (( void (*) (Action_1_t3304 *, Object_t *, IntPtr_t, const MethodInfo*))Action_1__ctor_m28570_gshared)(__this, ___object, ___method, method)
// System.Void System.Action`1<System.Linq.Expressions.MemberBinding>::Invoke(T)
#define Action_1_Invoke_m67197(__this, ___obj, method) (( void (*) (Action_1_t3304 *, MemberBinding_t3266 *, const MethodInfo*))Action_1_Invoke_m28572_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Action`1<System.Linq.Expressions.MemberBinding>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Action_1_BeginInvoke_m67198(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Action_1_t3304 *, MemberBinding_t3266 *, AsyncCallback_t477 *, Object_t *, const MethodInfo*))Action_1_BeginInvoke_m28574_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Void System.Action`1<System.Linq.Expressions.MemberBinding>::EndInvoke(System.IAsyncResult)
#define Action_1_EndInvoke_m67199(__this, ___result, method) (( void (*) (Action_1_t3304 *, Object_t *, const MethodInfo*))Action_1_EndInvoke_m28576_gshared)(__this, ___result, method)
