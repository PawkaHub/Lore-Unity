#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Predicate_1_t7173;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t476;
// System.AsyncCallback
struct AsyncCallback_t477;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_13.h"

// System.Void System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m39257_gshared (Predicate_1_t7173 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m39257(__this, ___object, ___method, method) (( void (*) (Predicate_1_t7173 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m39257_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m39258_gshared (Predicate_1_t7173 * __this, KeyValuePair_2_t2037  ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m39258(__this, ___obj, method) (( bool (*) (Predicate_1_t7173 *, KeyValuePair_2_t2037 , const MethodInfo*))Predicate_1_Invoke_m39258_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m39259_gshared (Predicate_1_t7173 * __this, KeyValuePair_2_t2037  ___obj, AsyncCallback_t477 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m39259(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t7173 *, KeyValuePair_2_t2037 , AsyncCallback_t477 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m39259_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m39260_gshared (Predicate_1_t7173 * __this, Object_t * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m39260(__this, ___result, method) (( bool (*) (Predicate_1_t7173 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m39260_gshared)(__this, ___result, method)
