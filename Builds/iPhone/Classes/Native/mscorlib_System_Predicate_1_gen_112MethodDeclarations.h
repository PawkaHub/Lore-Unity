#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>
struct Predicate_1_t8634;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t476;
// System.AsyncCallback
struct AsyncCallback_t477;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_24.h"

// System.Void System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::.ctor(System.Object,System.IntPtr)
// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>
#include "mscorlib_System_Predicate_1_gen_111MethodDeclarations.h"
#define Predicate_1__ctor_m57597(__this, ___object, ___method, method) (( void (*) (Predicate_1_t8634 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m57491_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::Invoke(T)
#define Predicate_1_Invoke_m57598(__this, ___obj, method) (( bool (*) (Predicate_1_t8634 *, KeyValuePair_2_t6653 , const MethodInfo*))Predicate_1_Invoke_m57492_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Predicate_1_BeginInvoke_m57599(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t8634 *, KeyValuePair_2_t6653 , AsyncCallback_t477 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m57493_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::EndInvoke(System.IAsyncResult)
#define Predicate_1_EndInvoke_m57600(__this, ___result, method) (( bool (*) (Predicate_1_t8634 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m57494_gshared)(__this, ___result, method)
