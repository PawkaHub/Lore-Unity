#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// ExitGames.Client.Photon.DictionaryEntryEnumerator
struct DictionaryEntryEnumerator_t3116;
// System.Object
struct Object_t;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t3115;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void ExitGames.Client.Photon.DictionaryEntryEnumerator::.ctor(System.Collections.IDictionaryEnumerator)
extern "C" void DictionaryEntryEnumerator__ctor_m14001 (DictionaryEntryEnumerator_t3116 * __this, Object_t * ___original, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.DictionaryEntryEnumerator::MoveNext()
extern "C" bool DictionaryEntryEnumerator_MoveNext_m14002 (DictionaryEntryEnumerator_t3116 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object ExitGames.Client.Photon.DictionaryEntryEnumerator::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * DictionaryEntryEnumerator_System_Collections_IEnumerator_get_Current_m14003 (DictionaryEntryEnumerator_t3116 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.DictionaryEntry ExitGames.Client.Photon.DictionaryEntryEnumerator::get_Current()
extern "C" DictionaryEntry_t660  DictionaryEntryEnumerator_get_Current_m14004 (DictionaryEntryEnumerator_t3116 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.DictionaryEntryEnumerator::Dispose()
extern "C" void DictionaryEntryEnumerator_Dispose_m14005 (DictionaryEntryEnumerator_t3116 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
