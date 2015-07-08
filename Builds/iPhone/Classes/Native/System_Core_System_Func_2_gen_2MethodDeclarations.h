#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<UnityEngine.UI.Toggle,System.Boolean>
struct Func_2_t1193;
// System.Object
struct Object_t;
// UnityEngine.UI.Toggle
struct Toggle_t1190;
// System.IAsyncResult
struct IAsyncResult_t476;
// System.AsyncCallback
struct AsyncCallback_t477;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<UnityEngine.UI.Toggle,System.Boolean>::.ctor(System.Object,System.IntPtr)
// System.Func`2<System.Object,System.Byte>
#include "System_Core_System_Func_2_gen_65MethodDeclarations.h"
#define Func_2__ctor_m5467(__this, ___object, ___method, method) (( void (*) (Func_2_t1193 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m29155_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<UnityEngine.UI.Toggle,System.Boolean>::Invoke(T)
#define Func_2_Invoke_m34405(__this, ___arg1, method) (( bool (*) (Func_2_t1193 *, Toggle_t1190 *, const MethodInfo*))Func_2_Invoke_m29157_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<UnityEngine.UI.Toggle,System.Boolean>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Func_2_BeginInvoke_m34406(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t1193 *, Toggle_t1190 *, AsyncCallback_t477 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m29159_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<UnityEngine.UI.Toggle,System.Boolean>::EndInvoke(System.IAsyncResult)
#define Func_2_EndInvoke_m34407(__this, ___result, method) (( bool (*) (Func_2_t1193 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m29161_gshared)(__this, ___result, method)
