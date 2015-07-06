#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>
struct Predicate_1_t8214;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t448;
// System.AsyncCallback
struct AsyncCallback_t449;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_65.h"

// System.Void System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m55006_gshared (Predicate_1_t8214 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m55006(__this, ___object, ___method, method) (( void (*) (Predicate_1_t8214 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m55006_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m55007_gshared (Predicate_1_t8214 * __this, KeyValuePair_2_t7983  ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m55007(__this, ___obj, method) (( bool (*) (Predicate_1_t8214 *, KeyValuePair_2_t7983 , const MethodInfo*))Predicate_1_Invoke_m55007_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m55008_gshared (Predicate_1_t8214 * __this, KeyValuePair_2_t7983  ___obj, AsyncCallback_t449 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m55008(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t8214 *, KeyValuePair_2_t7983 , AsyncCallback_t449 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m55008_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int16>>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m55009_gshared (Predicate_1_t8214 * __this, Object_t * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m55009(__this, ___result, method) (( bool (*) (Predicate_1_t8214 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m55009_gshared)(__this, ___result, method)
