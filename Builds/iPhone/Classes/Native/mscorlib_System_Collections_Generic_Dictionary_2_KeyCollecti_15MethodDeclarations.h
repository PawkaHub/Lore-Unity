#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/KeyCollection<ExitGames.Client.Photon.ConnectionProtocol,System.Int32>
struct KeyCollection_t4946;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<ExitGames.Client.Photon.ConnectionProtocol,System.Int32>
struct Dictionary_2_t13;
// System.Collections.Generic.IEnumerator`1<ExitGames.Client.Photon.ConnectionProtocol>
struct IEnumerator_1_t6438;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// ExitGames.Client.Photon.ConnectionProtocol[]
struct ConnectionProtocolU5BU5D_t4926;
// ExitGames.Client.Photon.ConnectionProtocol
#include "Photon3Unity3D_ExitGames_Client_Photon_ConnectionProtocol.h"
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<ExitGames.Client.Photon.ConnectionProtocol,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_83.h"

// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<ExitGames.Client.Photon.ConnectionProtocol,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Byte,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_13MethodDeclarations.h"
#define KeyCollection__ctor_m23345(__this, ___dictionary, method) (( void (*) (KeyCollection_t4946 *, Dictionary_2_t13 *, const MethodInfo*))KeyCollection__ctor_m23252_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<ExitGames.Client.Photon.ConnectionProtocol,System.Int32>::System.Collections.Generic.ICollection<TKey>.Add(TKey)
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m23346(__this, ___item, method) (( void (*) (KeyCollection_t4946 *, uint8_t, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m23253_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<ExitGames.Client.Photon.ConnectionProtocol,System.Int32>::System.Collections.Generic.ICollection<TKey>.Clear()
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m23347(__this, method) (( void (*) (KeyCollection_t4946 *, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m23254_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<ExitGames.Client.Photon.ConnectionProtocol,System.Int32>::System.Collections.Generic.ICollection<TKey>.Contains(TKey)
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m23348(__this, ___item, method) (( bool (*) (KeyCollection_t4946 *, uint8_t, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m23255_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<ExitGames.Client.Photon.ConnectionProtocol,System.Int32>::System.Collections.Generic.ICollection<TKey>.Remove(TKey)
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m23349(__this, ___item, method) (( bool (*) (KeyCollection_t4946 *, uint8_t, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m23256_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<TKey> System.Collections.Generic.Dictionary`2/KeyCollection<ExitGames.Client.Photon.ConnectionProtocol,System.Int32>::System.Collections.Generic.IEnumerable<TKey>.GetEnumerator()
#define KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m23350(__this, method) (( Object_t* (*) (KeyCollection_t4946 *, const MethodInfo*))KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m23257_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<ExitGames.Client.Photon.ConnectionProtocol,System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define KeyCollection_System_Collections_ICollection_CopyTo_m23351(__this, ___array, ___index, method) (( void (*) (KeyCollection_t4946 *, Array_t *, int32_t, const MethodInfo*))KeyCollection_System_Collections_ICollection_CopyTo_m23258_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/KeyCollection<ExitGames.Client.Photon.ConnectionProtocol,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
#define KeyCollection_System_Collections_IEnumerable_GetEnumerator_m23352(__this, method) (( Object_t * (*) (KeyCollection_t4946 *, const MethodInfo*))KeyCollection_System_Collections_IEnumerable_GetEnumerator_m23259_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<ExitGames.Client.Photon.ConnectionProtocol,System.Int32>::System.Collections.Generic.ICollection<TKey>.get_IsReadOnly()
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m23353(__this, method) (( bool (*) (KeyCollection_t4946 *, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m23260_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<ExitGames.Client.Photon.ConnectionProtocol,System.Int32>::System.Collections.ICollection.get_IsSynchronized()
#define KeyCollection_System_Collections_ICollection_get_IsSynchronized_m23354(__this, method) (( bool (*) (KeyCollection_t4946 *, const MethodInfo*))KeyCollection_System_Collections_ICollection_get_IsSynchronized_m23261_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/KeyCollection<ExitGames.Client.Photon.ConnectionProtocol,System.Int32>::System.Collections.ICollection.get_SyncRoot()
#define KeyCollection_System_Collections_ICollection_get_SyncRoot_m23355(__this, method) (( Object_t * (*) (KeyCollection_t4946 *, const MethodInfo*))KeyCollection_System_Collections_ICollection_get_SyncRoot_m23262_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<ExitGames.Client.Photon.ConnectionProtocol,System.Int32>::CopyTo(TKey[],System.Int32)
#define KeyCollection_CopyTo_m23356(__this, ___array, ___index, method) (( void (*) (KeyCollection_t4946 *, ConnectionProtocolU5BU5D_t4926*, int32_t, const MethodInfo*))KeyCollection_CopyTo_m23263_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection<ExitGames.Client.Photon.ConnectionProtocol,System.Int32>::GetEnumerator()
#define KeyCollection_GetEnumerator_m23357(__this, method) (( Enumerator_t6439  (*) (KeyCollection_t4946 *, const MethodInfo*))KeyCollection_GetEnumerator_m23264_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection<ExitGames.Client.Photon.ConnectionProtocol,System.Int32>::get_Count()
#define KeyCollection_get_Count_m23358(__this, method) (( int32_t (*) (KeyCollection_t4946 *, const MethodInfo*))KeyCollection_get_Count_m23265_gshared)(__this, method)
