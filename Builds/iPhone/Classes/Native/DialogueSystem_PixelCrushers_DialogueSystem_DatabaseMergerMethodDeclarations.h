#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PixelCrushers.DialogueSystem.DatabaseMerger
struct DatabaseMerger_t1180;
// PixelCrushers.DialogueSystem.DialogueDatabase
struct DialogueDatabase_t202;
// PixelCrushers.DialogueSystem.DatabaseMerger/NewIDs
struct NewIDs_t1175;
// System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Field>
struct List_1_t1111;
// PixelCrushers.DialogueSystem.DatabaseMerger/ConflictingIDRule
#include "DialogueSystem_PixelCrushers_DialogueSystem_DatabaseMerger_C.h"

// System.Void PixelCrushers.DialogueSystem.DatabaseMerger::Merge(PixelCrushers.DialogueSystem.DialogueDatabase,PixelCrushers.DialogueSystem.DialogueDatabase,PixelCrushers.DialogueSystem.DatabaseMerger/ConflictingIDRule,System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.Boolean)
extern "C" void DatabaseMerger_Merge_m5781 (Object_t * __this /* static, unused */, DialogueDatabase_t202 * ___destination, DialogueDatabase_t202 * ___source, int32_t ___conflictingIDRule, bool ___mergeProperties, bool ___mergeActors, bool ___mergeItems, bool ___mergeLocations, bool ___mergeVariables, bool ___mergeConversations, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DatabaseMerger::Merge(PixelCrushers.DialogueSystem.DialogueDatabase,PixelCrushers.DialogueSystem.DialogueDatabase,PixelCrushers.DialogueSystem.DatabaseMerger/ConflictingIDRule)
extern "C" void DatabaseMerger_Merge_m5782 (Object_t * __this /* static, unused */, DialogueDatabase_t202 * ___destination, DialogueDatabase_t202 * ___source, int32_t ___conflictingIDRule, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DatabaseMerger::MergeDatabaseProperties(PixelCrushers.DialogueSystem.DialogueDatabase,PixelCrushers.DialogueSystem.DialogueDatabase)
extern "C" void DatabaseMerger_MergeDatabaseProperties_m5783 (Object_t * __this /* static, unused */, DialogueDatabase_t202 * ___destination, DialogueDatabase_t202 * ___source, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DatabaseMerger::MergeAllowConflictingIDs(PixelCrushers.DialogueSystem.DialogueDatabase,PixelCrushers.DialogueSystem.DialogueDatabase,System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.Boolean)
extern "C" void DatabaseMerger_MergeAllowConflictingIDs_m5784 (Object_t * __this /* static, unused */, DialogueDatabase_t202 * ___destination, DialogueDatabase_t202 * ___source, bool ___mergeProperties, bool ___mergeActors, bool ___mergeItems, bool ___mergeLocations, bool ___mergeVariables, bool ___mergeConversations, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DatabaseMerger::MergeActorsAllowConflictingIDs(PixelCrushers.DialogueSystem.DialogueDatabase,PixelCrushers.DialogueSystem.DialogueDatabase)
extern "C" void DatabaseMerger_MergeActorsAllowConflictingIDs_m5785 (Object_t * __this /* static, unused */, DialogueDatabase_t202 * ___destination, DialogueDatabase_t202 * ___source, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DatabaseMerger::MergeItemsAllowConflictingIDs(PixelCrushers.DialogueSystem.DialogueDatabase,PixelCrushers.DialogueSystem.DialogueDatabase)
extern "C" void DatabaseMerger_MergeItemsAllowConflictingIDs_m5786 (Object_t * __this /* static, unused */, DialogueDatabase_t202 * ___destination, DialogueDatabase_t202 * ___source, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DatabaseMerger::MergeLocationsAllowConflictingIDs(PixelCrushers.DialogueSystem.DialogueDatabase,PixelCrushers.DialogueSystem.DialogueDatabase)
extern "C" void DatabaseMerger_MergeLocationsAllowConflictingIDs_m5787 (Object_t * __this /* static, unused */, DialogueDatabase_t202 * ___destination, DialogueDatabase_t202 * ___source, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DatabaseMerger::MergeVariablesAllowConflictingIDs(PixelCrushers.DialogueSystem.DialogueDatabase,PixelCrushers.DialogueSystem.DialogueDatabase)
extern "C" void DatabaseMerger_MergeVariablesAllowConflictingIDs_m5788 (Object_t * __this /* static, unused */, DialogueDatabase_t202 * ___destination, DialogueDatabase_t202 * ___source, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DatabaseMerger::MergeConversationsAllowConflictingIDs(PixelCrushers.DialogueSystem.DialogueDatabase,PixelCrushers.DialogueSystem.DialogueDatabase)
extern "C" void DatabaseMerger_MergeConversationsAllowConflictingIDs_m5789 (Object_t * __this /* static, unused */, DialogueDatabase_t202 * ___destination, DialogueDatabase_t202 * ___source, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DatabaseMerger::MergeAssignUniqueIDs(PixelCrushers.DialogueSystem.DialogueDatabase,PixelCrushers.DialogueSystem.DialogueDatabase,System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.Boolean)
extern "C" void DatabaseMerger_MergeAssignUniqueIDs_m5790 (Object_t * __this /* static, unused */, DialogueDatabase_t202 * ___destination, DialogueDatabase_t202 * ___source, bool ___mergeProperties, bool ___mergeActors, bool ___mergeItems, bool ___mergeLocations, bool ___mergeVariables, bool ___mergeConversations, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DatabaseMerger::GetNewActorIDs(PixelCrushers.DialogueSystem.DialogueDatabase,PixelCrushers.DialogueSystem.DialogueDatabase,PixelCrushers.DialogueSystem.DatabaseMerger/NewIDs)
extern "C" void DatabaseMerger_GetNewActorIDs_m5791 (Object_t * __this /* static, unused */, DialogueDatabase_t202 * ___destination, DialogueDatabase_t202 * ___source, NewIDs_t1175 * ___newIDs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DatabaseMerger::GetNewItemIDs(PixelCrushers.DialogueSystem.DialogueDatabase,PixelCrushers.DialogueSystem.DialogueDatabase,PixelCrushers.DialogueSystem.DatabaseMerger/NewIDs)
extern "C" void DatabaseMerger_GetNewItemIDs_m5792 (Object_t * __this /* static, unused */, DialogueDatabase_t202 * ___destination, DialogueDatabase_t202 * ___source, NewIDs_t1175 * ___newIDs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DatabaseMerger::GetNewLocationIDs(PixelCrushers.DialogueSystem.DialogueDatabase,PixelCrushers.DialogueSystem.DialogueDatabase,PixelCrushers.DialogueSystem.DatabaseMerger/NewIDs)
extern "C" void DatabaseMerger_GetNewLocationIDs_m5793 (Object_t * __this /* static, unused */, DialogueDatabase_t202 * ___destination, DialogueDatabase_t202 * ___source, NewIDs_t1175 * ___newIDs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DatabaseMerger::GetNewVariableIDs(PixelCrushers.DialogueSystem.DialogueDatabase,PixelCrushers.DialogueSystem.DialogueDatabase,PixelCrushers.DialogueSystem.DatabaseMerger/NewIDs)
extern "C" void DatabaseMerger_GetNewVariableIDs_m5794 (Object_t * __this /* static, unused */, DialogueDatabase_t202 * ___destination, DialogueDatabase_t202 * ___source, NewIDs_t1175 * ___newIDs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DatabaseMerger::GetNewConversationIDs(PixelCrushers.DialogueSystem.DialogueDatabase,PixelCrushers.DialogueSystem.DialogueDatabase,PixelCrushers.DialogueSystem.DatabaseMerger/NewIDs)
extern "C" void DatabaseMerger_GetNewConversationIDs_m5795 (Object_t * __this /* static, unused */, DialogueDatabase_t202 * ___destination, DialogueDatabase_t202 * ___source, NewIDs_t1175 * ___newIDs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DatabaseMerger::ConvertFieldIDs(System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Field>,PixelCrushers.DialogueSystem.DatabaseMerger/NewIDs)
extern "C" void DatabaseMerger_ConvertFieldIDs_m5796 (Object_t * __this /* static, unused */, List_1_t1111 * ___fields, NewIDs_t1175 * ___newIDs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DatabaseMerger::MergeActors(PixelCrushers.DialogueSystem.DialogueDatabase,PixelCrushers.DialogueSystem.DialogueDatabase,PixelCrushers.DialogueSystem.DatabaseMerger/NewIDs)
extern "C" void DatabaseMerger_MergeActors_m5797 (Object_t * __this /* static, unused */, DialogueDatabase_t202 * ___destination, DialogueDatabase_t202 * ___source, NewIDs_t1175 * ___newIDs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DatabaseMerger::MergeItems(PixelCrushers.DialogueSystem.DialogueDatabase,PixelCrushers.DialogueSystem.DialogueDatabase,PixelCrushers.DialogueSystem.DatabaseMerger/NewIDs)
extern "C" void DatabaseMerger_MergeItems_m5798 (Object_t * __this /* static, unused */, DialogueDatabase_t202 * ___destination, DialogueDatabase_t202 * ___source, NewIDs_t1175 * ___newIDs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DatabaseMerger::MergeLocations(PixelCrushers.DialogueSystem.DialogueDatabase,PixelCrushers.DialogueSystem.DialogueDatabase,PixelCrushers.DialogueSystem.DatabaseMerger/NewIDs)
extern "C" void DatabaseMerger_MergeLocations_m5799 (Object_t * __this /* static, unused */, DialogueDatabase_t202 * ___destination, DialogueDatabase_t202 * ___source, NewIDs_t1175 * ___newIDs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DatabaseMerger::MergeVariables(PixelCrushers.DialogueSystem.DialogueDatabase,PixelCrushers.DialogueSystem.DialogueDatabase,PixelCrushers.DialogueSystem.DatabaseMerger/NewIDs)
extern "C" void DatabaseMerger_MergeVariables_m5800 (Object_t * __this /* static, unused */, DialogueDatabase_t202 * ___destination, DialogueDatabase_t202 * ___source, NewIDs_t1175 * ___newIDs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DatabaseMerger::MergeConversations(PixelCrushers.DialogueSystem.DialogueDatabase,PixelCrushers.DialogueSystem.DialogueDatabase,PixelCrushers.DialogueSystem.DatabaseMerger/NewIDs)
extern "C" void DatabaseMerger_MergeConversations_m5801 (Object_t * __this /* static, unused */, DialogueDatabase_t202 * ___destination, DialogueDatabase_t202 * ___source, NewIDs_t1175 * ___newIDs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
