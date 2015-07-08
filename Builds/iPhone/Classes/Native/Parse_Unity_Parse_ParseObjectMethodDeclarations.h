#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.ParseObject
struct ParseObject_t596;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,Parse.Internal.IParseFieldOperation>
struct IDictionary_2_t1835;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1800;
// Parse.ParseACL
struct ParseACL_t1803;
// System.Collections.Generic.IDictionary`2<System.String,System.String>
struct IDictionary_2_t1756;
// System.Type
struct Type_t;
// System.Func`1<Parse.ParseObject>
struct Func_1_t1971;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t1810;
// System.Collections.Generic.IEnumerable`1<Parse.ParseObject>
struct IEnumerable_1_t1850;
// System.Collections.Generic.IDictionary`2<System.String,Parse.ParseObject>
struct IDictionary_2_t1972;
// System.Threading.Tasks.Task
struct Task_t344;
// System.Threading.Tasks.Task`1<Parse.ParseObject>
struct Task_1_t1970;
// System.Collections.Generic.IList`1<Parse.ParseObject>
struct IList_1_t1973;
// System.Collections.Generic.ICollection`1<Parse.ParseObject>
struct ICollection_1_t1974;
// Parse.Internal.IParseFieldOperation
struct IParseFieldOperation_t1955;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>
struct IEnumerator_1_t1975;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// Parse.ParseQuery`1<Parse.ParseObject>
struct ParseQuery_1_t1976;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t1654;
// System.ComponentModel.PropertyChangedEventHandler
struct PropertyChangedEventHandler_t1977;
// System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>
struct Task_1_t1965;
// Parse.ParseFile
struct ParseFile_t1827;
// System.Nullable`1<System.DateTime>
#include "mscorlib_System_Nullable_1_gen_0.h"
// System.Threading.CancellationToken
#include "Parse_Unity_System_Threading_CancellationToken.h"
// System.Collections.Generic.KeyValuePair`2<System.String,Parse.Internal.IParseFieldOperation>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_6.h"

// System.Void Parse.ParseObject::.ctor()
extern "C" void ParseObject__ctor_m8409 (ParseObject_t596 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::.ctor(System.String)
extern "C" void ParseObject__ctor_m8410 (ParseObject_t596 * __this, String_t* ___className, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseObject Parse.ParseObject::Create(System.String)
extern "C" ParseObject_t596 * ParseObject_Create_m8411 (Object_t * __this /* static, unused */, String_t* ___className, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseObject Parse.ParseObject::CreateWithoutData(System.String,System.String)
extern "C" ParseObject_t596 * ParseObject_CreateWithoutData_m8412 (Object_t * __this /* static, unused */, String_t* ___className, String_t* ___objectId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.ParseObject::GetFieldForPropertyName(System.Type,System.String)
extern "C" String_t* ParseObject_GetFieldForPropertyName_m8413 (Object_t * __this /* static, unused */, Type_t * ___type, String_t* ___propertyName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::SetDefaultValues()
extern "C" void ParseObject_SetDefaultValues_m8414 (ParseObject_t596 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.ParseObject::GetClassName(System.Type)
extern "C" String_t* ParseObject_GetClassName_m8415 (Object_t * __this /* static, unused */, Type_t * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Func`1<Parse.ParseObject> Parse.ParseObject::GetFactory(System.String)
extern "C" Func_1_t1971 * ParseObject_GetFactory_m8416 (Object_t * __this /* static, unused */, String_t* ___className, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::UnregisterSubclass(System.String)
extern "C" void ParseObject_UnregisterSubclass_m8417 (Object_t * __this /* static, unused */, String_t* ___className, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type Parse.ParseObject::GetType(System.String)
extern "C" Type_t * ParseObject_GetType_m8418 (Object_t * __this /* static, unused */, String_t* ___className, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::Revert()
extern "C" void ParseObject_Revert_m8419 (ParseObject_t596 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::MergeAfterFetch(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C" void ParseObject_MergeAfterFetch_m8420 (ParseObject_t596 * __this, Object_t* ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::MergeAfterFailedSave(System.Collections.Generic.IDictionary`2<System.String,Parse.Internal.IParseFieldOperation>)
extern "C" void ParseObject_MergeAfterFailedSave_m8421 (ParseObject_t596 * __this, Object_t* ___operationsBeforeSave, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::MergeAfterSave(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C" void ParseObject_MergeAfterSave_m8422 (ParseObject_t596 * __this, Object_t* ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::MergeMagicFields(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C" void ParseObject_MergeMagicFields_m8423 (ParseObject_t596 * __this, Object_t* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::MergeFromServer(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C" void ParseObject_MergeFromServer_m8424 (ParseObject_t596 * __this, Object_t* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::MergeFromObject(Parse.ParseObject)
extern "C" void ParseObject_MergeFromObject_m8425 (ParseObject_t596 * __this, ParseObject_t596 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseObject::get_HasDirtyChildren()
extern "C" bool ParseObject_get_HasDirtyChildren_m8426 (ParseObject_t596 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::CheckpointMutableContainer(System.Object)
extern "C" void ParseObject_CheckpointMutableContainer_m8427 (ParseObject_t596 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::CheckForChangesToMutableContainer(System.String,System.Object)
extern "C" void ParseObject_CheckForChangesToMutableContainer_m8428 (ParseObject_t596 * __this, String_t* ___key, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::CheckForChangesToMutableContainers()
extern "C" void ParseObject_CheckForChangesToMutableContainers_m8429 (ParseObject_t596 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<Parse.ParseObject> Parse.ParseObject::FindUnsavedChildren()
extern "C" Object_t* ParseObject_FindUnsavedChildren_m8430 (ParseObject_t596 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IDictionary`2<System.String,Parse.ParseObject> Parse.ParseObject::CollectFetchedObjects()
extern "C" Object_t* ParseObject_CollectFetchedObjects_m8431 (ParseObject_t596 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.ParseObject::ToJSONObjectForSaving(System.Collections.Generic.IDictionary`2<System.String,Parse.Internal.IParseFieldOperation>)
extern "C" Object_t* ParseObject_ToJSONObjectForSaving_m8432 (ParseObject_t596 * __this, Object_t* ___operations, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.ParseObject::ServerDataToJSONObjectForSerialization()
extern "C" Object_t* ParseObject_ServerDataToJSONObjectForSerialization_m8433 (ParseObject_t596 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IDictionary`2<System.String,Parse.Internal.IParseFieldOperation> Parse.ParseObject::StartSave()
extern "C" Object_t* ParseObject_StartSave_m8434 (ParseObject_t596 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseObject::SaveAsync(System.Threading.Tasks.Task,System.Threading.CancellationToken)
extern "C" Task_t344 * ParseObject_SaveAsync_m8435 (ParseObject_t596 * __this, Task_t344 * ___toAwait, CancellationToken_t1753  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseObject::SaveAsync()
extern "C" Task_t344 * ParseObject_SaveAsync_m8436 (ParseObject_t596 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseObject::SaveAsync(System.Threading.CancellationToken)
extern "C" Task_t344 * ParseObject_SaveAsync_m8437 (ParseObject_t596 * __this, CancellationToken_t1753  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<Parse.ParseObject> Parse.ParseObject::FetchAsyncInternal(System.Threading.Tasks.Task,System.Threading.CancellationToken)
extern "C" Task_1_t1970 * ParseObject_FetchAsyncInternal_m8438 (ParseObject_t596 * __this, Task_t344 * ___toAwait, CancellationToken_t1753  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseObject::DeepSaveAsync(System.Object,System.String,System.Threading.CancellationToken)
extern "C" Task_t344 * ParseObject_DeepSaveAsync_m8439 (Object_t * __this /* static, unused */, Object_t * ___obj, String_t* ___sessionToken, CancellationToken_t1753  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<Parse.ParseObject> Parse.ParseObject::FetchAsyncInternal(System.Threading.CancellationToken)
extern "C" Task_1_t1970 * ParseObject_FetchAsyncInternal_m8440 (ParseObject_t596 * __this, CancellationToken_t1753  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<Parse.ParseObject> Parse.ParseObject::FetchIfNeededAsyncInternal(System.Threading.Tasks.Task,System.Threading.CancellationToken)
extern "C" Task_1_t1970 * ParseObject_FetchIfNeededAsyncInternal_m8441 (ParseObject_t596 * __this, Task_t344 * ___toAwait, CancellationToken_t1753  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<Parse.ParseObject> Parse.ParseObject::FetchIfNeededAsyncInternal(System.Threading.CancellationToken)
extern "C" Task_1_t1970 * ParseObject_FetchIfNeededAsyncInternal_m8442 (ParseObject_t596 * __this, CancellationToken_t1753  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseObject::DeleteAsync(System.Threading.Tasks.Task,System.Threading.CancellationToken)
extern "C" Task_t344 * ParseObject_DeleteAsync_m8443 (ParseObject_t596 * __this, Task_t344 * ___toAwait, CancellationToken_t1753  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseObject::DeleteAsync()
extern "C" Task_t344 * ParseObject_DeleteAsync_m8444 (ParseObject_t596 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseObject::DeleteAsync(System.Threading.CancellationToken)
extern "C" Task_t344 * ParseObject_DeleteAsync_m8445 (ParseObject_t596 * __this, CancellationToken_t1753  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::CollectDirtyChildren(System.Object,System.Collections.Generic.IList`1<Parse.ParseObject>,System.Collections.Generic.ICollection`1<Parse.ParseObject>,System.Collections.Generic.ICollection`1<Parse.ParseObject>)
extern "C" void ParseObject_CollectDirtyChildren_m8446 (Object_t * __this /* static, unused */, Object_t * ___node, Object_t* ___dirtyChildren, Object_t* ___seen, Object_t* ___seenNew, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::CollectDirtyChildren(System.Object,System.Collections.Generic.IList`1<Parse.ParseObject>)
extern "C" void ParseObject_CollectDirtyChildren_m8447 (Object_t * __this /* static, unused */, Object_t * ___node, Object_t* ___dirtyChildren, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseObject::CanBeSerializedAsValue(System.Object)
extern "C" bool ParseObject_CanBeSerializedAsValue_m8448 (Object_t * __this /* static, unused */, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseObject::get_CanBeSerialized()
extern "C" bool ParseObject_get_CanBeSerialized_m8449 (ParseObject_t596 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::Remove(System.String)
extern "C" void ParseObject_Remove_m8450 (ParseObject_t596 * __this, String_t* ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::ApplyOperations(System.Collections.Generic.IDictionary`2<System.String,Parse.Internal.IParseFieldOperation>,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C" void ParseObject_ApplyOperations_m8451 (ParseObject_t596 * __this, Object_t* ___operations, Object_t* ___map, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::RebuildEstimatedData()
extern "C" void ParseObject_RebuildEstimatedData_m8452 (ParseObject_t596 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::PerformOperation(System.String,Parse.Internal.IParseFieldOperation)
extern "C" void ParseObject_PerformOperation_m8453 (ParseObject_t596 * __this, String_t* ___key, Object_t * ___operation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::OnSettingValue(System.String&,System.Object&)
extern "C" void ParseObject_OnSettingValue_m8454 (ParseObject_t596 * __this, String_t** ___key, Object_t ** ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Parse.ParseObject::get_Item(System.String)
extern "C" Object_t * ParseObject_get_Item_m8455 (ParseObject_t596 * __this, String_t* ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::set_Item(System.String,System.Object)
extern "C" void ParseObject_set_Item_m8456 (ParseObject_t596 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::Set(System.String,System.Object)
extern "C" void ParseObject_Set_m8457 (ParseObject_t596 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::Increment(System.String)
extern "C" void ParseObject_Increment_m8458 (ParseObject_t596 * __this, String_t* ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::Increment(System.String,System.Int64)
extern "C" void ParseObject_Increment_m8459 (ParseObject_t596 * __this, String_t* ___key, int64_t ___amount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::Increment(System.String,System.Double)
extern "C" void ParseObject_Increment_m8460 (ParseObject_t596 * __this, String_t* ___key, double ___amount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::AddToList(System.String,System.Object)
extern "C" void ParseObject_AddToList_m8461 (ParseObject_t596 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::AddUniqueToList(System.String,System.Object)
extern "C" void ParseObject_AddUniqueToList_m8462 (ParseObject_t596 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseObject::ContainsKey(System.String)
extern "C" bool ParseObject_ContainsKey_m8463 (ParseObject_t596 * __this, String_t* ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseObject::get_IsDataAvailable()
extern "C" bool ParseObject_get_IsDataAvailable_m8464 (ParseObject_t596 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseObject::CheckIsDataAvailable(System.String)
extern "C" bool ParseObject_CheckIsDataAvailable_m8465 (ParseObject_t596 * __this, String_t* ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::CheckGetAccess(System.String)
extern "C" void ParseObject_CheckGetAccess_m8466 (ParseObject_t596 * __this, String_t* ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::CheckKeyIsMutable(System.String)
extern "C" void ParseObject_CheckKeyIsMutable_m8467 (ParseObject_t596 * __this, String_t* ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseObject::IsKeyMutable(System.String)
extern "C" bool ParseObject_IsKeyMutable_m8468 (ParseObject_t596 * __this, String_t* ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseObject::HasSameId(Parse.ParseObject)
extern "C" bool ParseObject_HasSameId_m8469 (ParseObject_t596 * __this, ParseObject_t596 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IDictionary`2<System.String,Parse.Internal.IParseFieldOperation> Parse.ParseObject::get_CurrentOperations()
extern "C" Object_t* ParseObject_get_CurrentOperations_m8470 (ParseObject_t596 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.ICollection`1<System.String> Parse.ParseObject::get_Keys()
extern "C" Object_t* ParseObject_get_Keys_m8471 (ParseObject_t596 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::AddToHashedObjects(System.Object)
extern "C" void ParseObject_AddToHashedObjects_m8472 (ParseObject_t596 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseACL Parse.ParseObject::get_ACL()
extern "C" ParseACL_t1803 * ParseObject_get_ACL_m8473 (ParseObject_t596 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::set_ACL(Parse.ParseACL)
extern "C" void ParseObject_set_ACL_m8474 (ParseObject_t596 * __this, ParseACL_t1803 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseObject::get_IsNew()
extern "C" bool ParseObject_get_IsNew_m8475 (ParseObject_t596 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::set_IsNew(System.Boolean)
extern "C" void ParseObject_set_IsNew_m8476 (ParseObject_t596 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<System.DateTime> Parse.ParseObject::get_UpdatedAt()
extern "C" Nullable_1_t1870  ParseObject_get_UpdatedAt_m8477 (ParseObject_t596 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::set_UpdatedAt(System.Nullable`1<System.DateTime>)
extern "C" void ParseObject_set_UpdatedAt_m8478 (ParseObject_t596 * __this, Nullable_1_t1870  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<System.DateTime> Parse.ParseObject::get_CreatedAt()
extern "C" Nullable_1_t1870  ParseObject_get_CreatedAt_m8479 (ParseObject_t596 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::set_CreatedAt(System.Nullable`1<System.DateTime>)
extern "C" void ParseObject_set_CreatedAt_m8480 (ParseObject_t596 * __this, Nullable_1_t1870  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseObject::get_IsDirty()
extern "C" bool ParseObject_get_IsDirty_m8481 (ParseObject_t596 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::set_IsDirty(System.Boolean)
extern "C" void ParseObject_set_IsDirty_m8482 (ParseObject_t596 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseObject::IsKeyDirty(System.String)
extern "C" bool ParseObject_IsKeyDirty_m8483 (ParseObject_t596 * __this, String_t* ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseObject::CheckIsDirty(System.Boolean)
extern "C" bool ParseObject_CheckIsDirty_m8484 (ParseObject_t596 * __this, bool ___considerChildren, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.ParseObject::get_ObjectId()
extern "C" String_t* ParseObject_get_ObjectId_m8485 (ParseObject_t596 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::set_ObjectId(System.String)
extern "C" void ParseObject_set_ObjectId_m8486 (ParseObject_t596 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::SetObjectIdInternal(System.String)
extern "C" void ParseObject_SetObjectIdInternal_m8487 (ParseObject_t596 * __this, String_t* ___objectId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.ParseObject::get_ClassName()
extern "C" String_t* ParseObject_get_ClassName_m8488 (ParseObject_t596 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::set_ClassName(System.String)
extern "C" void ParseObject_set_ClassName_m8489 (ParseObject_t596 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::Add(System.String,System.Object)
extern "C" void ParseObject_Add_m8490 (ParseObject_t596 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>> Parse.ParseObject::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<System.String,System.Object>>.GetEnumerator()
extern "C" Object_t* ParseObject_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CSystem_StringU2CSystem_ObjectU3EU3E_GetEnumerator_m8491 (ParseObject_t596 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Parse.ParseObject::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * ParseObject_System_Collections_IEnumerable_GetEnumerator_m8492 (ParseObject_t596 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<Parse.ParseObject> Parse.ParseObject::GetQuery(System.String)
extern "C" ParseQuery_1_t1976 * ParseObject_GetQuery_m8493 (Object_t * __this /* static, unused */, String_t* ___className, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IDictionary`2<System.String,System.String> Parse.ParseObject::get_PropertyMappings()
extern "C" Object_t* ParseObject_get_PropertyMappings_m8494 (ParseObject_t596 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::OnFieldsChanged(System.Collections.Generic.IEnumerable`1<System.String>)
extern "C" void ParseObject_OnFieldsChanged_m8495 (ParseObject_t596 * __this, Object_t* ___fieldNames, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::OnPropertyChanged(System.String)
extern "C" void ParseObject_OnPropertyChanged_m8496 (ParseObject_t596 * __this, String_t* ___propertyName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::add_PropertyChanged(System.ComponentModel.PropertyChangedEventHandler)
extern "C" void ParseObject_add_PropertyChanged_m8497 (ParseObject_t596 * __this, PropertyChangedEventHandler_t1977 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::remove_PropertyChanged(System.ComponentModel.PropertyChangedEventHandler)
extern "C" void ParseObject_remove_PropertyChanged_m8498 (ParseObject_t596 * __this, PropertyChangedEventHandler_t1977 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.ParseObject::<MergeFromObject>b__5(System.Collections.Generic.KeyValuePair`2<System.String,Parse.Internal.IParseFieldOperation>)
extern "C" String_t* ParseObject_U3CMergeFromObjectU3Eb__5_m8499 (Object_t * __this /* static, unused */, KeyValuePair_2_t1978  ___entry, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.Internal.IParseFieldOperation Parse.ParseObject::<MergeFromObject>b__6(System.Collections.Generic.KeyValuePair`2<System.String,Parse.Internal.IParseFieldOperation>)
extern "C" Object_t * ParseObject_U3CMergeFromObjectU3Eb__6_m8500 (Object_t * __this /* static, unused */, KeyValuePair_2_t1978  ___entry, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseObject::<FindUnsavedChildren>b__9(Parse.ParseObject)
extern "C" bool ParseObject_U3CFindUnsavedChildrenU3Eb__9_m8501 (Object_t * __this /* static, unused */, ParseObject_t596 * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseObject::<CollectFetchedObjects>b__b(Parse.ParseObject)
extern "C" bool ParseObject_U3CCollectFetchedObjectsU3Eb__b_m8502 (Object_t * __this /* static, unused */, ParseObject_t596 * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.ParseObject::<CollectFetchedObjects>b__c(Parse.ParseObject)
extern "C" String_t* ParseObject_U3CCollectFetchedObjectsU3Eb__c_m8503 (Object_t * __this /* static, unused */, ParseObject_t596 * ___pair, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseObject Parse.ParseObject::<CollectFetchedObjects>b__d(Parse.ParseObject)
extern "C" ParseObject_t596 * ParseObject_U3CCollectFetchedObjectsU3Eb__d_m8504 (Object_t * __this /* static, unused */, ParseObject_t596 * ___pair, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseObject Parse.ParseObject::<FetchAsyncInternal>b__1b(System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>)
extern "C" ParseObject_t596 * ParseObject_U3CFetchAsyncInternalU3Eb__1b_m8505 (ParseObject_t596 * __this, Task_1_t1965 * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseObject::<DeepSaveAsync>b__20(Parse.ParseFile)
extern "C" bool ParseObject_U3CDeepSaveAsyncU3Eb__20_m8506 (Object_t * __this /* static, unused */, ParseFile_t1827 * ___f, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseObject::<DeleteAsync>b__7a(System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>)
extern "C" bool ParseObject_U3CDeleteAsyncU3Eb__7a_m8507 (ParseObject_t596 * __this, Task_1_t1965 * ____, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseObject::<CanBeSerializedAsValue>b__80(Parse.ParseObject)
extern "C" bool ParseObject_U3CCanBeSerializedAsValueU3Eb__80_m8508 (Object_t * __this /* static, unused */, ParseObject_t596 * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::.cctor()
extern "C" void ParseObject__cctor_m8509 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseObject::<.cctor>b__8b()
extern "C" bool ParseObject_U3C_cctorU3Eb__8b_m8510 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
