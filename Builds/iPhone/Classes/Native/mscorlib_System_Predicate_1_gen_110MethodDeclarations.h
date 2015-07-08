#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>
struct Predicate_1_t8569;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t476;
// System.AsyncCallback
struct AsyncCallback_t477;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_68.h"

// System.Void System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::.ctor(System.Object,System.IntPtr)
// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>>
#include "mscorlib_System_Predicate_1_gen_109MethodDeclarations.h"
#define Predicate_1__ctor_m56812(__this, ___object, ___method, method) (( void (*) (Predicate_1_t8569 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m56706_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::Invoke(T)
#define Predicate_1_Invoke_m56813(__this, ___obj, method) (( bool (*) (Predicate_1_t8569 *, KeyValuePair_2_t8278 , const MethodInfo*))Predicate_1_Invoke_m56707_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Predicate_1_BeginInvoke_m56814(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t8569 *, KeyValuePair_2_t8278 , AsyncCallback_t477 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m56708_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.String,System.UInt16>>::EndInvoke(System.IAsyncResult)
#define Predicate_1_EndInvoke_m56815(__this, ___result, method) (( bool (*) (Predicate_1_t8569 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m56709_gshared)(__this, ___result, method)
