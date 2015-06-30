#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<System.Char>
struct Predicate_1_t6036;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t448;
// System.AsyncCallback
struct AsyncCallback_t449;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Predicate`1<System.Char>::.ctor(System.Object,System.IntPtr)
// System.Predicate`1<System.UInt16>
#include "mscorlib_System_Predicate_1_gen_95MethodDeclarations.h"
#define Predicate_1__ctor_m40071(__this, ___object, ___method, method) (( void (*) (Predicate_1_t6036 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m40025_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<System.Char>::Invoke(T)
#define Predicate_1_Invoke_m40072(__this, ___obj, method) (( bool (*) (Predicate_1_t6036 *, uint16_t, const MethodInfo*))Predicate_1_Invoke_m40026_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<System.Char>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Predicate_1_BeginInvoke_m40073(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t6036 *, uint16_t, AsyncCallback_t449 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m40027_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<System.Char>::EndInvoke(System.IAsyncResult)
#define Predicate_1_EndInvoke_m40074(__this, ___result, method) (( bool (*) (Predicate_1_t6036 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m40028_gshared)(__this, ___result, method)
