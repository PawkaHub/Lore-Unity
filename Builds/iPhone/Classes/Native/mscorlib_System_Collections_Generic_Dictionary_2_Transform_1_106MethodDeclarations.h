#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Byte,ExitGames.Client.Photon.CustomType,System.Collections.DictionaryEntry>
struct Transform_1_t6298;
// System.Object
struct Object_t;
// ExitGames.Client.Photon.CustomType
struct CustomType_t3150;
// System.IAsyncResult
struct IAsyncResult_t448;
// System.AsyncCallback
struct AsyncCallback_t449;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Byte,ExitGames.Client.Photon.CustomType,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
// System.Collections.Generic.Dictionary`2/Transform`1<System.Byte,System.Object,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_5MethodDeclarations.h"
#define Transform_1__ctor_m43943(__this, ___object, ___method, method) (( void (*) (Transform_1_t6298 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m23110_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Byte,ExitGames.Client.Photon.CustomType,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
#define Transform_1_Invoke_m43944(__this, ___key, ___value, method) (( DictionaryEntry_t660  (*) (Transform_1_t6298 *, uint8_t, CustomType_t3150 *, const MethodInfo*))Transform_1_Invoke_m23111_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Byte,ExitGames.Client.Photon.CustomType,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
#define Transform_1_BeginInvoke_m43945(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t6298 *, uint8_t, CustomType_t3150 *, AsyncCallback_t449 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m23112_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Byte,ExitGames.Client.Photon.CustomType,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
#define Transform_1_EndInvoke_m43946(__this, ___result, method) (( DictionaryEntry_t660  (*) (Transform_1_t6298 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m23113_gshared)(__this, ___result, method)
