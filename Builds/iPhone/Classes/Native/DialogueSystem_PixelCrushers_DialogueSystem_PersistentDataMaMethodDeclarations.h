#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PixelCrushers.DialogueSystem.PersistentDataManager
struct PersistentDataManager_t587;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t619;
// PixelCrushers.DialogueSystem.LuaTableWrapper
struct LuaTableWrapper_t749;
// System.Object
struct Object_t;
// PixelCrushers.DialogueSystem.Conversation
struct Conversation_t793;
// PixelCrushers.DialogueSystem.DatabaseResetOptions
#include "DialogueSystem_PixelCrushers_DialogueSystem_DatabaseResetOpt.h"

// System.Void PixelCrushers.DialogueSystem.PersistentDataManager::.cctor()
extern "C" void PersistentDataManager__cctor_m4590 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.PersistentDataManager::Reset(PixelCrushers.DialogueSystem.DatabaseResetOptions)
extern "C" void PersistentDataManager_Reset_m4591 (Object_t * __this /* static, unused */, int32_t ___databaseResetOptions, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.PersistentDataManager::Reset()
extern "C" void PersistentDataManager_Reset_m4592 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.PersistentDataManager::Record()
extern "C" void PersistentDataManager_Record_m2684 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.PersistentDataManager::Apply()
extern "C" void PersistentDataManager_Apply_m2686 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.PersistentDataManager::LevelWillBeUnloaded()
extern "C" void PersistentDataManager_LevelWillBeUnloaded_m2685 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.PersistentDataManager::ApplySaveData(System.String,PixelCrushers.DialogueSystem.DatabaseResetOptions)
extern "C" void PersistentDataManager_ApplySaveData_m2652 (Object_t * __this /* static, unused */, String_t* ___saveData, int32_t ___databaseResetOptions, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PixelCrushers.DialogueSystem.PersistentDataManager::GetSaveData()
extern "C" String_t* PersistentDataManager_GetSaveData_m2647 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.PersistentDataManager::AppendVariableData(System.Text.StringBuilder)
extern "C" void PersistentDataManager_AppendVariableData_m4593 (Object_t * __this /* static, unused */, StringBuilder_t619 * ___sb, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.PersistentDataManager::AppendItemData(System.Text.StringBuilder)
extern "C" void PersistentDataManager_AppendItemData_m4594 (Object_t * __this /* static, unused */, StringBuilder_t619 * ___sb, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.PersistentDataManager::AppendFields(System.Text.StringBuilder,PixelCrushers.DialogueSystem.LuaTableWrapper)
extern "C" void PersistentDataManager_AppendFields_m4595 (Object_t * __this /* static, unused */, StringBuilder_t619 * ___sb, LuaTableWrapper_t749 * ___fields, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PixelCrushers.DialogueSystem.PersistentDataManager::GetFieldValueString(System.Object)
extern "C" String_t* PersistentDataManager_GetFieldValueString_m4596 (Object_t * __this /* static, unused */, Object_t * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.PersistentDataManager::AppendLocationData(System.Text.StringBuilder)
extern "C" void PersistentDataManager_AppendLocationData_m4597 (Object_t * __this /* static, unused */, StringBuilder_t619 * ___sb, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.PersistentDataManager::AppendActorData(System.Text.StringBuilder)
extern "C" void PersistentDataManager_AppendActorData_m4598 (Object_t * __this /* static, unused */, StringBuilder_t619 * ___sb, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.PersistentDataManager::AppendActorFieldData(System.Text.StringBuilder,PixelCrushers.DialogueSystem.LuaTableWrapper)
extern "C" void PersistentDataManager_AppendActorFieldData_m4599 (Object_t * __this /* static, unused */, StringBuilder_t619 * ___sb, LuaTableWrapper_t749 * ___fields, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.PersistentDataManager::AppendConversationData(System.Text.StringBuilder)
extern "C" void PersistentDataManager_AppendConversationData_m4600 (Object_t * __this /* static, unused */, StringBuilder_t619 * ___sb, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.PersistentDataManager::AppendDialogData(System.Text.StringBuilder,PixelCrushers.DialogueSystem.Conversation)
extern "C" void PersistentDataManager_AppendDialogData_m4601 (Object_t * __this /* static, unused */, StringBuilder_t619 * ___sb, Conversation_t793 * ___conversation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.PersistentDataManager::AppendRelationshipAndStatusTables(System.Text.StringBuilder)
extern "C" void PersistentDataManager_AppendRelationshipAndStatusTables_m4602 (Object_t * __this /* static, unused */, StringBuilder_t619 * ___sb, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.PersistentDataManager::RefreshRelationshipAndStatusTablesFromLua()
extern "C" void PersistentDataManager_RefreshRelationshipAndStatusTablesFromLua_m4603 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
