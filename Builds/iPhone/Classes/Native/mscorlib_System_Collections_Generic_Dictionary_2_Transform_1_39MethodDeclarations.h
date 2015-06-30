#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,PixelCrushers.DialogueSystem.CharacterInfo,System.Collections.DictionaryEntry>
struct Transform_1_t5434;
// System.Object
struct Object_t;
// PixelCrushers.DialogueSystem.CharacterInfo
struct CharacterInfo_t607;
// System.IAsyncResult
struct IAsyncResult_t448;
// System.AsyncCallback
struct AsyncCallback_t449;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,PixelCrushers.DialogueSystem.CharacterInfo,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_15MethodDeclarations.h"
#define Transform_1__ctor_m31405(__this, ___object, ___method, method) (( void (*) (Transform_1_t5434 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m26940_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,PixelCrushers.DialogueSystem.CharacterInfo,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
#define Transform_1_Invoke_m31406(__this, ___key, ___value, method) (( DictionaryEntry_t660  (*) (Transform_1_t5434 *, int32_t, CharacterInfo_t607 *, const MethodInfo*))Transform_1_Invoke_m26941_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,PixelCrushers.DialogueSystem.CharacterInfo,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
#define Transform_1_BeginInvoke_m31407(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t5434 *, int32_t, CharacterInfo_t607 *, AsyncCallback_t449 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m26942_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,PixelCrushers.DialogueSystem.CharacterInfo,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
#define Transform_1_EndInvoke_m31408(__this, ___result, method) (( DictionaryEntry_t660  (*) (Transform_1_t5434 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m26943_gshared)(__this, ___result, method)
