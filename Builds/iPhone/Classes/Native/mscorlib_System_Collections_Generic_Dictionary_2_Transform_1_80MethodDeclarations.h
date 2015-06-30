#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<Language.Lua.Tuple`2<System.Int32,System.String>,Language.Lua.Tuple`3<System.Object,System.Boolean,System.Int32>,System.Collections.DictionaryEntry>
struct Transform_1_t6058;
// System.Object
struct Object_t;
// Language.Lua.Tuple`2<System.Int32,System.String>
struct Tuple_2_t2675;
// Language.Lua.Tuple`3<System.Object,System.Boolean,System.Int32>
struct Tuple_3_t2676;
// System.IAsyncResult
struct IAsyncResult_t448;
// System.AsyncCallback
struct AsyncCallback_t449;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<Language.Lua.Tuple`2<System.Int32,System.String>,Language.Lua.Tuple`3<System.Object,System.Boolean,System.Int32>,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_0MethodDeclarations.h"
#define Transform_1__ctor_m40408(__this, ___object, ___method, method) (( void (*) (Transform_1_t6058 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m22923_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<Language.Lua.Tuple`2<System.Int32,System.String>,Language.Lua.Tuple`3<System.Object,System.Boolean,System.Int32>,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
#define Transform_1_Invoke_m40409(__this, ___key, ___value, method) (( DictionaryEntry_t660  (*) (Transform_1_t6058 *, Tuple_2_t2675 *, Tuple_3_t2676 *, const MethodInfo*))Transform_1_Invoke_m22924_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<Language.Lua.Tuple`2<System.Int32,System.String>,Language.Lua.Tuple`3<System.Object,System.Boolean,System.Int32>,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
#define Transform_1_BeginInvoke_m40410(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t6058 *, Tuple_2_t2675 *, Tuple_3_t2676 *, AsyncCallback_t449 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m22925_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<Language.Lua.Tuple`2<System.Int32,System.String>,Language.Lua.Tuple`3<System.Object,System.Boolean,System.Int32>,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
#define Transform_1_EndInvoke_m40411(__this, ___result, method) (( DictionaryEntry_t660  (*) (Transform_1_t6058 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m22926_gshared)(__this, ___result, method)
