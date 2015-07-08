#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PixelCrushers.DialogueSystem.DatabaseMerger
struct DatabaseMerger_t1439;
// PixelCrushers.DialogueSystem.DialogueDatabase
struct DialogueDatabase_t202;
// PixelCrushers.DialogueSystem.DatabaseMerger/NewIDs
struct NewIDs_t1434;
// System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Field>
struct List_1_t1370;
// PixelCrushers.DialogueSystem.DatabaseMerger/ConflictingIDRule
#include "DialogueSystem_PixelCrushers_DialogueSystem_DatabaseMerger_C.h"

// System.Void PixelCrushers.DialogueSystem.DatabaseMerger::Merge(PixelCrushers.DialogueSystem.DialogueDatabase,PixelCrushers.DialogueSystem.DialogueDatabase,PixelCrushers.DialogueSystem.DatabaseMerger/ConflictingIDRule,System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.Boolean)
extern "C" void DatabaseMerger_Merge_m6233 (Object_t * __this /* static, unused */, DialogueDatabase_t202 * ___destination, DialogueDatabase_t202 * ___source, int32_t ___conflictingIDRule, bool ___mergeProperties, bool ___mergeActors, bool ___mergeItems, bool ___mergeLocations, bool ___mergeVariables, bool ___mergeConversations, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DatabaseMerger::Merge(PixelCrushers.DialogueSystem.DialogueDatabase,PixelCrushers.DialogueSystem.DialogueDatabase,PixelCrushers.DialogueSystem.DatabaseMerger/ConflictingIDRule)
extern "C" void DatabaseMerger_Merge_m6234 (Object_t * __this /* static, unused */, DialogueDatabase_t202 * ___destination, DialogueDatabase_t202 * ___source, int32_t ___conflictingIDRule, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DatabaseMerger::MergeDatabaseProperties(PixelCrushers.DialogueSystem.DialogueDatabase,PixelCrushers.DialogueSystem.DialogueDatabase)
extern "C" void DatabaseMerger_MergeDatabaseProperties_m6235 (Object_t * __this /* static, unused */, DialogueDatabase_t202 * ___destination, DialogueDatabase_t202 * ___source, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DatabaseMerger::MergeAllowConflictingIDs(PixelCrushers.DialogueSystem.DialogueDatabase,PixelCrushers.DialogueSystem.DialogueDatabase,System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.Boolean)
extern "C" void DatabaseMerger_MergeAllowConflictingIDs_m6236 (Object_t * __this /* static, unused */, DialogueDatabase_t202 * ___destination, DialogueDatabase_t202 * ___source, bool ___mergeProperties, bool ___mergeActors, bool ___mergeItems, bool ___mergeLocations, bool ___mergeVariables, bool ___mergeConversations, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DatabaseMerger::MergeActorsAllowConflictingIDs(PixelCrushers.DialogueSystem.DialogueDatabase,PixelCrushers.DialogueSystem.DialogueDatabase)
extern "C" void DatabaseMerger_MergeActorsAllowConflictingIDs_m6237 (Object_t * __this /* static, unused */, DialogueDatabase_t202 * ___destination, DialogueDatabase_t202 * ___source, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DatabaseMerger::MergeItemsAllowConflictingIDs(PixelCrushers.DialogueSystem.DialogueDatabase,PixelCrushers.DialogueSystem.DialogueDatabase)
extern "C" void DatabaseMerger_MergeItemsAllowConflictingIDs_m6238 (Object_t * __this /* static, unused */, DialogueDatabase_t202 * ___destination, DialogueDatabase_t202 * ___source, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DatabaseMerger::MergeLocationsAllowConflictingIDs(PixelCrushers.DialogueSystem.DialogueDatabase,PixelCrushers.DialogueSystem.DialogueDatabase)
extern "C" void DatabaseMerger_MergeLocationsAllowConflictingIDs_m6239 (Object_t * __this /* static, unused */, DialogueDatabase_t202 * ___destination, DialogueDatabase_t202 * ___source, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DatabaseMerger::MergeVariablesAllowConflictingIDs(PixelCrushers.DialogueSystem.DialogueDatabase,PixelCrushers.DialogueSystem.DialogueDatabase)
extern "C" void DatabaseMerger_MergeVariablesAllowConflictingIDs_m6240 (Object_t * __this /* static, unused */, DialogueDatabase_t202 * ___destination, DialogueDatabase_t202 * ___source, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DatabaseMerger::MergeConversationsAllowConflictingIDs(PixelCrushers.DialogueSystem.DialogueDatabase,PixelCrushers.DialogueSystem.DialogueDatabase)
extern "C" void DatabaseMerger_MergeConversationsAllowConflictingIDs_m6241 (Object_t * __this /* static, unused */, DialogueDatabase_t202 * ___destination, DialogueDatabase_t202 * ___source, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DatabaseMerger::MergeAssignUniqueIDs(PixelCrushers.DialogueSystem.DialogueDatabase,PixelCrushers.DialogueSystem.DialogueDatabase,System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.Boolean)
extern "C" void DatabaseMerger_MergeAssignUniqueIDs_m6242 (Object_t * __this /* static, unused */, DialogueDatabase_t202 * ___destination, DialogueDatabase_t202 * ___source, bool ___mergeProperties, bool ___mergeActors, bool ___mergeItems, bool ___mergeLocations, bool ___mergeVariables, bool ___mergeConversations, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DatabaseMerger::GetNewActorIDs(PixelCrushers.DialogueSystem.DialogueDatabase,PixelCrushers.DialogueSystem.DialogueDatabase,PixelCrushers.DialogueSystem.DatabaseMerger/NewIDs)
extern "C" void DatabaseMerger_GetNewActorIDs_m6243 (Object_t * __this /* static, unused */, DialogueDatabase_t202 * ___destination, DialogueDatabase_t202 * ___source, NewIDs_t1434 * ___newIDs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DatabaseMerger::GetNewItemIDs(PixelCrushers.DialogueSystem.DialogueDatabase,PixelCrushers.DialogueSystem.DialogueDatabase,PixelCrushers.DialogueSystem.DatabaseMerger/NewIDs)
extern "C" void DatabaseMerger_GetNewItemIDs_m6244 (Object_t * __this /* static, unused */, DialogueDatabase_t202 * ___destination, DialogueDatabase_t202 * ___source, NewIDs_t1434 * ___newIDs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DatabaseMerger::GetNewLocationIDs(PixelCrushers.DialogueSystem.DialogueDatabase,PixelCrushers.DialogueSystem.DialogueDatabase,PixelCrushers.DialogueSystem.DatabaseMerger/NewIDs)
extern "C" void DatabaseMerger_GetNewLocationIDs_m6245 (Object_t * __this /* static, unused */, DialogueDatabase_t202 * ___destination, DialogueDatabase_t202 * ___source, NewIDs_t1434 * ___newIDs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DatabaseMerger::GetNewVariableIDs(PixelCrushers.DialogueSystem.DialogueDatabase,PixelCrushers.DialogueSystem.DialogueDatabase,PixelCrushers.DialogueSystem.DatabaseMerger/NewIDs)
extern "C" void DatabaseMerger_GetNewVariableIDs_m6246 (Object_t * __this /* static, unused */, DialogueDatabase_t202 * ___destination, DialogueDatabase_t202 * ___source, NewIDs_t1434 * ___newIDs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DatabaseMerger::GetNewConversationIDs(PixelCrushers.DialogueSystem.DialogueDatabase,PixelCrushers.DialogueSystem.DialogueDatabase,PixelCrushers.DialogueSystem.DatabaseMerger/NewIDs)
extern "C" void DatabaseMerger_GetNewConversationIDs_m6247 (Object_t * __this /* static, unused */, DialogueDatabase_t202 * ___destination, DialogueDatabase_t202 * ___source, NewIDs_t1434 * ___newIDs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DatabaseMerger::ConvertFieldIDs(System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Field>,PixelCrushers.DialogueSystem.DatabaseMerger/NewIDs)
extern "C" void DatabaseMerger_ConvertFieldIDs_m6248 (Object_t * __this /* static, unused */, List_1_t1370 * ___fields, NewIDs_t1434 * ___newIDs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DatabaseMerger::MergeActors(PixelCrushers.DialogueSystem.DialogueDatabase,PixelCrushers.DialogueSystem.DialogueDatabase,PixelCrushers.DialogueSystem.DatabaseMerger/NewIDs)
extern "C" void DatabaseMerger_MergeActors_m6249 (Object_t * __this /* static, unused */, DialogueDatabase_t202 * ___destination, DialogueDatabase_t202 * ___source, NewIDs_t1434 * ___newIDs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DatabaseMerger::MergeItems(PixelCrushers.DialogueSystem.DialogueDatabase,PixelCrushers.DialogueSystem.DialogueDatabase,PixelCrushers.DialogueSystem.DatabaseMerger/NewIDs)
extern "C" void DatabaseMerger_MergeItems_m6250 (Object_t * __this /* static, unused */, DialogueDatabase_t202 * ___destination, DialogueDatabase_t202 * ___source, NewIDs_t1434 * ___newIDs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DatabaseMerger::MergeLocations(PixelCrushers.DialogueSystem.DialogueDatabase,PixelCrushers.DialogueSystem.DialogueDatabase,PixelCrushers.DialogueSystem.DatabaseMerger/NewIDs)
extern "C" void DatabaseMerger_MergeLocations_m6251 (Object_t * __this /* static, unused */, DialogueDatabase_t202 * ___destination, DialogueDatabase_t202 * ___source, NewIDs_t1434 * ___newIDs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DatabaseMerger::MergeVariables(PixelCrushers.DialogueSystem.DialogueDatabase,PixelCrushers.DialogueSystem.DialogueDatabase,PixelCrushers.DialogueSystem.DatabaseMerger/NewIDs)
extern "C" void DatabaseMerger_MergeVariables_m6252 (Object_t * __this /* static, unused */, DialogueDatabase_t202 * ___destination, DialogueDatabase_t202 * ___source, NewIDs_t1434 * ___newIDs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DatabaseMerger::MergeConversations(PixelCrushers.DialogueSystem.DialogueDatabase,PixelCrushers.DialogueSystem.DialogueDatabase,PixelCrushers.DialogueSystem.DatabaseMerger/NewIDs)
extern "C" void DatabaseMerger_MergeConversations_m6253 (Object_t * __this /* static, unused */, DialogueDatabase_t202 * ___destination, DialogueDatabase_t202 * ___source, NewIDs_t1434 * ___newIDs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
