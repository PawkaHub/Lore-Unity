#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<PunTeams/Team,System.Collections.Generic.List`1<PhotonPlayer>,System.Collections.DictionaryEntry>
struct Transform_1_t6579;
// System.Object
struct Object_t;
// System.Collections.Generic.List`1<PhotonPlayer>
struct List_1_t740;
// System.IAsyncResult
struct IAsyncResult_t476;
// System.AsyncCallback
struct AsyncCallback_t477;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// PunTeams/Team
#include "AssemblyU2DCSharp_PunTeams_Team.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<PunTeams/Team,System.Collections.Generic.List`1<PhotonPlayer>,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
// System.Collections.Generic.Dictionary`2/Transform`1<System.Byte,System.Object,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_5MethodDeclarations.h"
#define Transform_1__ctor_m29633(__this, ___object, ___method, method) (( void (*) (Transform_1_t6579 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m24890_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<PunTeams/Team,System.Collections.Generic.List`1<PhotonPlayer>,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
#define Transform_1_Invoke_m29634(__this, ___key, ___value, method) (( DictionaryEntry_t748  (*) (Transform_1_t6579 *, uint8_t, List_1_t740 *, const MethodInfo*))Transform_1_Invoke_m24891_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<PunTeams/Team,System.Collections.Generic.List`1<PhotonPlayer>,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
#define Transform_1_BeginInvoke_m29635(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t6579 *, uint8_t, List_1_t740 *, AsyncCallback_t477 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m24892_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<PunTeams/Team,System.Collections.Generic.List`1<PhotonPlayer>,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
#define Transform_1_EndInvoke_m29636(__this, ___result, method) (( DictionaryEntry_t748  (*) (Transform_1_t6579 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m24893_gshared)(__this, ___result, method)
