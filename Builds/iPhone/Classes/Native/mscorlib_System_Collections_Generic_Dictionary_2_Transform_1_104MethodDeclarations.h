#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Byte,ExitGames.Client.Photon.EnetChannel,System.Collections.DictionaryEntry>
struct Transform_1_t6283;
// System.Object
struct Object_t;
// ExitGames.Client.Photon.EnetChannel
struct EnetChannel_t3121;
// System.IAsyncResult
struct IAsyncResult_t448;
// System.AsyncCallback
struct AsyncCallback_t449;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Byte,ExitGames.Client.Photon.EnetChannel,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
// System.Collections.Generic.Dictionary`2/Transform`1<System.Byte,System.Object,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_5MethodDeclarations.h"
#define Transform_1__ctor_m43620(__this, ___object, ___method, method) (( void (*) (Transform_1_t6283 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m23110_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Byte,ExitGames.Client.Photon.EnetChannel,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
#define Transform_1_Invoke_m43621(__this, ___key, ___value, method) (( DictionaryEntry_t660  (*) (Transform_1_t6283 *, uint8_t, EnetChannel_t3121 *, const MethodInfo*))Transform_1_Invoke_m23111_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Byte,ExitGames.Client.Photon.EnetChannel,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
#define Transform_1_BeginInvoke_m43622(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t6283 *, uint8_t, EnetChannel_t3121 *, AsyncCallback_t449 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m23112_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Byte,ExitGames.Client.Photon.EnetChannel,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
#define Transform_1_EndInvoke_m43623(__this, ___result, method) (( DictionaryEntry_t660  (*) (Transform_1_t6283 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m23113_gshared)(__this, ___result, method)
