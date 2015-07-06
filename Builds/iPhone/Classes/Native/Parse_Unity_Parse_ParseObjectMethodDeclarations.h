#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.ParseObject
struct ParseObject_t1552;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,Parse.Internal.IParseFieldOperation>
struct IDictionary_2_t1584;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1544;
// Parse.ParseACL
struct ParseACL_t1547;
// System.Collections.Generic.IDictionary`2<System.String,System.String>
struct IDictionary_2_t1499;
// System.Type
struct Type_t;
// System.Func`1<Parse.ParseObject>
struct Func_1_t1725;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t1555;
// System.Collections.Generic.IEnumerable`1<Parse.ParseObject>
struct IEnumerable_1_t1599;
// System.Collections.Generic.IDictionary`2<System.String,Parse.ParseObject>
struct IDictionary_2_t1726;
// System.Threading.Tasks.Task
struct Task_t723;
// System.Threading.Tasks.Task`1<Parse.ParseObject>
struct Task_1_t1724;
// System.Collections.Generic.IList`1<Parse.ParseObject>
struct IList_1_t1727;
// System.Collections.Generic.ICollection`1<Parse.ParseObject>
struct ICollection_1_t1728;
// Parse.Internal.IParseFieldOperation
struct IParseFieldOperation_t1707;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>
struct IEnumerator_1_t1729;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// Parse.ParseQuery`1<Parse.ParseObject>
struct ParseQuery_1_t1730;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t1395;
// System.ComponentModel.PropertyChangedEventHandler
struct PropertyChangedEventHandler_t1731;
// System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>
struct Task_1_t1717;
// Parse.ParseFile
struct ParseFile_t1574;
// System.Nullable`1<System.DateTime>
#include "mscorlib_System_Nullable_1_gen_0.h"
// System.Threading.CancellationToken
#include "Parse_Unity_System_Threading_CancellationToken.h"
// System.Collections.Generic.KeyValuePair`2<System.String,Parse.Internal.IParseFieldOperation>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_6.h"

// System.Void Parse.ParseObject::.ctor()
extern "C" void ParseObject__ctor_m7962 (ParseObject_t1552 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::.ctor(System.String)
extern "C" void ParseObject__ctor_m7963 (ParseObject_t1552 * __this, String_t* ___className, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseObject Parse.ParseObject::Create(System.String)
extern "C" ParseObject_t1552 * ParseObject_Create_m7964 (Object_t * __this /* static, unused */, String_t* ___className, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseObject Parse.ParseObject::CreateWithoutData(System.String,System.String)
extern "C" ParseObject_t1552 * ParseObject_CreateWithoutData_m7965 (Object_t * __this /* static, unused */, String_t* ___className, String_t* ___objectId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.ParseObject::GetFieldForPropertyName(System.Type,System.String)
extern "C" String_t* ParseObject_GetFieldForPropertyName_m7966 (Object_t * __this /* static, unused */, Type_t * ___type, String_t* ___propertyName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::SetDefaultValues()
extern "C" void ParseObject_SetDefaultValues_m7967 (ParseObject_t1552 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.ParseObject::GetClassName(System.Type)
extern "C" String_t* ParseObject_GetClassName_m7968 (Object_t * __this /* static, unused */, Type_t * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Func`1<Parse.ParseObject> Parse.ParseObject::GetFactory(System.String)
extern "C" Func_1_t1725 * ParseObject_GetFactory_m7969 (Object_t * __this /* static, unused */, String_t* ___className, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::UnregisterSubclass(System.String)
extern "C" void ParseObject_UnregisterSubclass_m7970 (Object_t * __this /* static, unused */, String_t* ___className, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type Parse.ParseObject::GetType(System.String)
extern "C" Type_t * ParseObject_GetType_m7971 (Object_t * __this /* static, unused */, String_t* ___className, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::Revert()
extern "C" void ParseObject_Revert_m7972 (ParseObject_t1552 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::MergeAfterFetch(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C" void ParseObject_MergeAfterFetch_m7973 (ParseObject_t1552 * __this, Object_t* ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::MergeAfterFailedSave(System.Collections.Generic.IDictionary`2<System.String,Parse.Internal.IParseFieldOperation>)
extern "C" void ParseObject_MergeAfterFailedSave_m7974 (ParseObject_t1552 * __this, Object_t* ___operationsBeforeSave, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::MergeAfterSave(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C" void ParseObject_MergeAfterSave_m7975 (ParseObject_t1552 * __this, Object_t* ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::MergeMagicFields(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C" void ParseObject_MergeMagicFields_m7976 (ParseObject_t1552 * __this, Object_t* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::MergeFromServer(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C" void ParseObject_MergeFromServer_m7977 (ParseObject_t1552 * __this, Object_t* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::MergeFromObject(Parse.ParseObject)
extern "C" void ParseObject_MergeFromObject_m7978 (ParseObject_t1552 * __this, ParseObject_t1552 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseObject::get_HasDirtyChildren()
extern "C" bool ParseObject_get_HasDirtyChildren_m7979 (ParseObject_t1552 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::CheckpointMutableContainer(System.Object)
extern "C" void ParseObject_CheckpointMutableContainer_m7980 (ParseObject_t1552 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::CheckForChangesToMutableContainer(System.String,System.Object)
extern "C" void ParseObject_CheckForChangesToMutableContainer_m7981 (ParseObject_t1552 * __this, String_t* ___key, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::CheckForChangesToMutableContainers()
extern "C" void ParseObject_CheckForChangesToMutableContainers_m7982 (ParseObject_t1552 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<Parse.ParseObject> Parse.ParseObject::FindUnsavedChildren()
extern "C" Object_t* ParseObject_FindUnsavedChildren_m7983 (ParseObject_t1552 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IDictionary`2<System.String,Parse.ParseObject> Parse.ParseObject::CollectFetchedObjects()
extern "C" Object_t* ParseObject_CollectFetchedObjects_m7984 (ParseObject_t1552 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.ParseObject::ToJSONObjectForSaving(System.Collections.Generic.IDictionary`2<System.String,Parse.Internal.IParseFieldOperation>)
extern "C" Object_t* ParseObject_ToJSONObjectForSaving_m7985 (ParseObject_t1552 * __this, Object_t* ___operations, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.ParseObject::ServerDataToJSONObjectForSerialization()
extern "C" Object_t* ParseObject_ServerDataToJSONObjectForSerialization_m7986 (ParseObject_t1552 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IDictionary`2<System.String,Parse.Internal.IParseFieldOperation> Parse.ParseObject::StartSave()
extern "C" Object_t* ParseObject_StartSave_m7987 (ParseObject_t1552 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseObject::SaveAsync(System.Threading.Tasks.Task,System.Threading.CancellationToken)
extern "C" Task_t723 * ParseObject_SaveAsync_m7988 (ParseObject_t1552 * __this, Task_t723 * ___toAwait, CancellationToken_t1496  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseObject::SaveAsync()
extern "C" Task_t723 * ParseObject_SaveAsync_m7989 (ParseObject_t1552 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseObject::SaveAsync(System.Threading.CancellationToken)
extern "C" Task_t723 * ParseObject_SaveAsync_m7990 (ParseObject_t1552 * __this, CancellationToken_t1496  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<Parse.ParseObject> Parse.ParseObject::FetchAsyncInternal(System.Threading.Tasks.Task,System.Threading.CancellationToken)
extern "C" Task_1_t1724 * ParseObject_FetchAsyncInternal_m7991 (ParseObject_t1552 * __this, Task_t723 * ___toAwait, CancellationToken_t1496  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseObject::DeepSaveAsync(System.Object,System.String,System.Threading.CancellationToken)
extern "C" Task_t723 * ParseObject_DeepSaveAsync_m7992 (Object_t * __this /* static, unused */, Object_t * ___obj, String_t* ___sessionToken, CancellationToken_t1496  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<Parse.ParseObject> Parse.ParseObject::FetchAsyncInternal(System.Threading.CancellationToken)
extern "C" Task_1_t1724 * ParseObject_FetchAsyncInternal_m7993 (ParseObject_t1552 * __this, CancellationToken_t1496  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<Parse.ParseObject> Parse.ParseObject::FetchIfNeededAsyncInternal(System.Threading.Tasks.Task,System.Threading.CancellationToken)
extern "C" Task_1_t1724 * ParseObject_FetchIfNeededAsyncInternal_m7994 (ParseObject_t1552 * __this, Task_t723 * ___toAwait, CancellationToken_t1496  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<Parse.ParseObject> Parse.ParseObject::FetchIfNeededAsyncInternal(System.Threading.CancellationToken)
extern "C" Task_1_t1724 * ParseObject_FetchIfNeededAsyncInternal_m7995 (ParseObject_t1552 * __this, CancellationToken_t1496  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseObject::DeleteAsync(System.Threading.Tasks.Task,System.Threading.CancellationToken)
extern "C" Task_t723 * ParseObject_DeleteAsync_m7996 (ParseObject_t1552 * __this, Task_t723 * ___toAwait, CancellationToken_t1496  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseObject::DeleteAsync()
extern "C" Task_t723 * ParseObject_DeleteAsync_m7997 (ParseObject_t1552 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseObject::DeleteAsync(System.Threading.CancellationToken)
extern "C" Task_t723 * ParseObject_DeleteAsync_m7998 (ParseObject_t1552 * __this, CancellationToken_t1496  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::CollectDirtyChildren(System.Object,System.Collections.Generic.IList`1<Parse.ParseObject>,System.Collections.Generic.ICollection`1<Parse.ParseObject>,System.Collections.Generic.ICollection`1<Parse.ParseObject>)
extern "C" void ParseObject_CollectDirtyChildren_m7999 (Object_t * __this /* static, unused */, Object_t * ___node, Object_t* ___dirtyChildren, Object_t* ___seen, Object_t* ___seenNew, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::CollectDirtyChildren(System.Object,System.Collections.Generic.IList`1<Parse.ParseObject>)
extern "C" void ParseObject_CollectDirtyChildren_m8000 (Object_t * __this /* static, unused */, Object_t * ___node, Object_t* ___dirtyChildren, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseObject::CanBeSerializedAsValue(System.Object)
extern "C" bool ParseObject_CanBeSerializedAsValue_m8001 (Object_t * __this /* static, unused */, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseObject::get_CanBeSerialized()
extern "C" bool ParseObject_get_CanBeSerialized_m8002 (ParseObject_t1552 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::Remove(System.String)
extern "C" void ParseObject_Remove_m8003 (ParseObject_t1552 * __this, String_t* ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::ApplyOperations(System.Collections.Generic.IDictionary`2<System.String,Parse.Internal.IParseFieldOperation>,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C" void ParseObject_ApplyOperations_m8004 (ParseObject_t1552 * __this, Object_t* ___operations, Object_t* ___map, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::RebuildEstimatedData()
extern "C" void ParseObject_RebuildEstimatedData_m8005 (ParseObject_t1552 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::PerformOperation(System.String,Parse.Internal.IParseFieldOperation)
extern "C" void ParseObject_PerformOperation_m8006 (ParseObject_t1552 * __this, String_t* ___key, Object_t * ___operation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::OnSettingValue(System.String&,System.Object&)
extern "C" void ParseObject_OnSettingValue_m8007 (ParseObject_t1552 * __this, String_t** ___key, Object_t ** ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Parse.ParseObject::get_Item(System.String)
extern "C" Object_t * ParseObject_get_Item_m8008 (ParseObject_t1552 * __this, String_t* ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::set_Item(System.String,System.Object)
extern "C" void ParseObject_set_Item_m8009 (ParseObject_t1552 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::Set(System.String,System.Object)
extern "C" void ParseObject_Set_m8010 (ParseObject_t1552 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::Increment(System.String)
extern "C" void ParseObject_Increment_m8011 (ParseObject_t1552 * __this, String_t* ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::Increment(System.String,System.Int64)
extern "C" void ParseObject_Increment_m8012 (ParseObject_t1552 * __this, String_t* ___key, int64_t ___amount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::Increment(System.String,System.Double)
extern "C" void ParseObject_Increment_m8013 (ParseObject_t1552 * __this, String_t* ___key, double ___amount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::AddToList(System.String,System.Object)
extern "C" void ParseObject_AddToList_m8014 (ParseObject_t1552 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::AddUniqueToList(System.String,System.Object)
extern "C" void ParseObject_AddUniqueToList_m8015 (ParseObject_t1552 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseObject::ContainsKey(System.String)
extern "C" bool ParseObject_ContainsKey_m8016 (ParseObject_t1552 * __this, String_t* ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseObject::get_IsDataAvailable()
extern "C" bool ParseObject_get_IsDataAvailable_m8017 (ParseObject_t1552 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseObject::CheckIsDataAvailable(System.String)
extern "C" bool ParseObject_CheckIsDataAvailable_m8018 (ParseObject_t1552 * __this, String_t* ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::CheckGetAccess(System.String)
extern "C" void ParseObject_CheckGetAccess_m8019 (ParseObject_t1552 * __this, String_t* ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::CheckKeyIsMutable(System.String)
extern "C" void ParseObject_CheckKeyIsMutable_m8020 (ParseObject_t1552 * __this, String_t* ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseObject::IsKeyMutable(System.String)
extern "C" bool ParseObject_IsKeyMutable_m8021 (ParseObject_t1552 * __this, String_t* ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseObject::HasSameId(Parse.ParseObject)
extern "C" bool ParseObject_HasSameId_m8022 (ParseObject_t1552 * __this, ParseObject_t1552 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IDictionary`2<System.String,Parse.Internal.IParseFieldOperation> Parse.ParseObject::get_CurrentOperations()
extern "C" Object_t* ParseObject_get_CurrentOperations_m8023 (ParseObject_t1552 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.ICollection`1<System.String> Parse.ParseObject::get_Keys()
extern "C" Object_t* ParseObject_get_Keys_m8024 (ParseObject_t1552 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::AddToHashedObjects(System.Object)
extern "C" void ParseObject_AddToHashedObjects_m8025 (ParseObject_t1552 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseACL Parse.ParseObject::get_ACL()
extern "C" ParseACL_t1547 * ParseObject_get_ACL_m8026 (ParseObject_t1552 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::set_ACL(Parse.ParseACL)
extern "C" void ParseObject_set_ACL_m8027 (ParseObject_t1552 * __this, ParseACL_t1547 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseObject::get_IsNew()
extern "C" bool ParseObject_get_IsNew_m8028 (ParseObject_t1552 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::set_IsNew(System.Boolean)
extern "C" void ParseObject_set_IsNew_m8029 (ParseObject_t1552 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<System.DateTime> Parse.ParseObject::get_UpdatedAt()
extern "C" Nullable_1_t1619  ParseObject_get_UpdatedAt_m8030 (ParseObject_t1552 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::set_UpdatedAt(System.Nullable`1<System.DateTime>)
extern "C" void ParseObject_set_UpdatedAt_m8031 (ParseObject_t1552 * __this, Nullable_1_t1619  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<System.DateTime> Parse.ParseObject::get_CreatedAt()
extern "C" Nullable_1_t1619  ParseObject_get_CreatedAt_m8032 (ParseObject_t1552 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::set_CreatedAt(System.Nullable`1<System.DateTime>)
extern "C" void ParseObject_set_CreatedAt_m8033 (ParseObject_t1552 * __this, Nullable_1_t1619  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseObject::get_IsDirty()
extern "C" bool ParseObject_get_IsDirty_m8034 (ParseObject_t1552 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::set_IsDirty(System.Boolean)
extern "C" void ParseObject_set_IsDirty_m8035 (ParseObject_t1552 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseObject::IsKeyDirty(System.String)
extern "C" bool ParseObject_IsKeyDirty_m8036 (ParseObject_t1552 * __this, String_t* ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseObject::CheckIsDirty(System.Boolean)
extern "C" bool ParseObject_CheckIsDirty_m8037 (ParseObject_t1552 * __this, bool ___considerChildren, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.ParseObject::get_ObjectId()
extern "C" String_t* ParseObject_get_ObjectId_m8038 (ParseObject_t1552 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::set_ObjectId(System.String)
extern "C" void ParseObject_set_ObjectId_m8039 (ParseObject_t1552 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::SetObjectIdInternal(System.String)
extern "C" void ParseObject_SetObjectIdInternal_m8040 (ParseObject_t1552 * __this, String_t* ___objectId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.ParseObject::get_ClassName()
extern "C" String_t* ParseObject_get_ClassName_m8041 (ParseObject_t1552 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::set_ClassName(System.String)
extern "C" void ParseObject_set_ClassName_m8042 (ParseObject_t1552 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::Add(System.String,System.Object)
extern "C" void ParseObject_Add_m8043 (ParseObject_t1552 * __this, String_t* ___key, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>> Parse.ParseObject::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<System.String,System.Object>>.GetEnumerator()
extern "C" Object_t* ParseObject_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CSystem_StringU2CSystem_ObjectU3EU3E_GetEnumerator_m8044 (ParseObject_t1552 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Parse.ParseObject::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * ParseObject_System_Collections_IEnumerable_GetEnumerator_m8045 (ParseObject_t1552 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<Parse.ParseObject> Parse.ParseObject::GetQuery(System.String)
extern "C" ParseQuery_1_t1730 * ParseObject_GetQuery_m8046 (Object_t * __this /* static, unused */, String_t* ___className, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IDictionary`2<System.String,System.String> Parse.ParseObject::get_PropertyMappings()
extern "C" Object_t* ParseObject_get_PropertyMappings_m8047 (ParseObject_t1552 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::OnFieldsChanged(System.Collections.Generic.IEnumerable`1<System.String>)
extern "C" void ParseObject_OnFieldsChanged_m8048 (ParseObject_t1552 * __this, Object_t* ___fieldNames, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::OnPropertyChanged(System.String)
extern "C" void ParseObject_OnPropertyChanged_m8049 (ParseObject_t1552 * __this, String_t* ___propertyName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::add_PropertyChanged(System.ComponentModel.PropertyChangedEventHandler)
extern "C" void ParseObject_add_PropertyChanged_m8050 (ParseObject_t1552 * __this, PropertyChangedEventHandler_t1731 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::remove_PropertyChanged(System.ComponentModel.PropertyChangedEventHandler)
extern "C" void ParseObject_remove_PropertyChanged_m8051 (ParseObject_t1552 * __this, PropertyChangedEventHandler_t1731 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.ParseObject::<MergeFromObject>b__5(System.Collections.Generic.KeyValuePair`2<System.String,Parse.Internal.IParseFieldOperation>)
extern "C" String_t* ParseObject_U3CMergeFromObjectU3Eb__5_m8052 (Object_t * __this /* static, unused */, KeyValuePair_2_t1732  ___entry, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.Internal.IParseFieldOperation Parse.ParseObject::<MergeFromObject>b__6(System.Collections.Generic.KeyValuePair`2<System.String,Parse.Internal.IParseFieldOperation>)
extern "C" Object_t * ParseObject_U3CMergeFromObjectU3Eb__6_m8053 (Object_t * __this /* static, unused */, KeyValuePair_2_t1732  ___entry, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseObject::<FindUnsavedChildren>b__9(Parse.ParseObject)
extern "C" bool ParseObject_U3CFindUnsavedChildrenU3Eb__9_m8054 (Object_t * __this /* static, unused */, ParseObject_t1552 * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseObject::<CollectFetchedObjects>b__b(Parse.ParseObject)
extern "C" bool ParseObject_U3CCollectFetchedObjectsU3Eb__b_m8055 (Object_t * __this /* static, unused */, ParseObject_t1552 * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.ParseObject::<CollectFetchedObjects>b__c(Parse.ParseObject)
extern "C" String_t* ParseObject_U3CCollectFetchedObjectsU3Eb__c_m8056 (Object_t * __this /* static, unused */, ParseObject_t1552 * ___pair, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseObject Parse.ParseObject::<CollectFetchedObjects>b__d(Parse.ParseObject)
extern "C" ParseObject_t1552 * ParseObject_U3CCollectFetchedObjectsU3Eb__d_m8057 (Object_t * __this /* static, unused */, ParseObject_t1552 * ___pair, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseObject Parse.ParseObject::<FetchAsyncInternal>b__1b(System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>)
extern "C" ParseObject_t1552 * ParseObject_U3CFetchAsyncInternalU3Eb__1b_m8058 (ParseObject_t1552 * __this, Task_1_t1717 * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseObject::<DeepSaveAsync>b__20(Parse.ParseFile)
extern "C" bool ParseObject_U3CDeepSaveAsyncU3Eb__20_m8059 (Object_t * __this /* static, unused */, ParseFile_t1574 * ___f, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseObject::<DeleteAsync>b__7a(System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>)
extern "C" bool ParseObject_U3CDeleteAsyncU3Eb__7a_m8060 (ParseObject_t1552 * __this, Task_1_t1717 * ____, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseObject::<CanBeSerializedAsValue>b__80(Parse.ParseObject)
extern "C" bool ParseObject_U3CCanBeSerializedAsValueU3Eb__80_m8061 (Object_t * __this /* static, unused */, ParseObject_t1552 * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseObject::.cctor()
extern "C" void ParseObject__cctor_m8062 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseObject::<.cctor>b__8b()
extern "C" bool ParseObject_U3C_cctorU3Eb__8b_m8063 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
