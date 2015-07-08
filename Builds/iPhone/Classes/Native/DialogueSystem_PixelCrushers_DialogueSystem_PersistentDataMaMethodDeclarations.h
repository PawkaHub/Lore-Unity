#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PixelCrushers.DialogueSystem.PersistentDataManager
struct PersistentDataManager_t666;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t696;
// PixelCrushers.DialogueSystem.LuaTableWrapper
struct LuaTableWrapper_t1335;
// System.Object
struct Object_t;
// PixelCrushers.DialogueSystem.Conversation
struct Conversation_t1377;
// PixelCrushers.DialogueSystem.DatabaseResetOptions
#include "DialogueSystem_PixelCrushers_DialogueSystem_DatabaseResetOpt.h"

// System.Void PixelCrushers.DialogueSystem.PersistentDataManager::.cctor()
extern "C" void PersistentDataManager__cctor_m6884 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.PersistentDataManager::Reset(PixelCrushers.DialogueSystem.DatabaseResetOptions)
extern "C" void PersistentDataManager_Reset_m6885 (Object_t * __this /* static, unused */, int32_t ___databaseResetOptions, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.PersistentDataManager::Reset()
extern "C" void PersistentDataManager_Reset_m6886 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.PersistentDataManager::Record()
extern "C" void PersistentDataManager_Record_m2943 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.PersistentDataManager::Apply()
extern "C" void PersistentDataManager_Apply_m2945 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.PersistentDataManager::LevelWillBeUnloaded()
extern "C" void PersistentDataManager_LevelWillBeUnloaded_m2944 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.PersistentDataManager::ApplySaveData(System.String,PixelCrushers.DialogueSystem.DatabaseResetOptions)
extern "C" void PersistentDataManager_ApplySaveData_m2911 (Object_t * __this /* static, unused */, String_t* ___saveData, int32_t ___databaseResetOptions, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PixelCrushers.DialogueSystem.PersistentDataManager::GetSaveData()
extern "C" String_t* PersistentDataManager_GetSaveData_m2906 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.PersistentDataManager::AppendVariableData(System.Text.StringBuilder)
extern "C" void PersistentDataManager_AppendVariableData_m6887 (Object_t * __this /* static, unused */, StringBuilder_t696 * ___sb, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.PersistentDataManager::AppendItemData(System.Text.StringBuilder)
extern "C" void PersistentDataManager_AppendItemData_m6888 (Object_t * __this /* static, unused */, StringBuilder_t696 * ___sb, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.PersistentDataManager::AppendFields(System.Text.StringBuilder,PixelCrushers.DialogueSystem.LuaTableWrapper)
extern "C" void PersistentDataManager_AppendFields_m6889 (Object_t * __this /* static, unused */, StringBuilder_t696 * ___sb, LuaTableWrapper_t1335 * ___fields, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PixelCrushers.DialogueSystem.PersistentDataManager::GetFieldValueString(System.Object)
extern "C" String_t* PersistentDataManager_GetFieldValueString_m6890 (Object_t * __this /* static, unused */, Object_t * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.PersistentDataManager::AppendLocationData(System.Text.StringBuilder)
extern "C" void PersistentDataManager_AppendLocationData_m6891 (Object_t * __this /* static, unused */, StringBuilder_t696 * ___sb, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.PersistentDataManager::AppendActorData(System.Text.StringBuilder)
extern "C" void PersistentDataManager_AppendActorData_m6892 (Object_t * __this /* static, unused */, StringBuilder_t696 * ___sb, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.PersistentDataManager::AppendActorFieldData(System.Text.StringBuilder,PixelCrushers.DialogueSystem.LuaTableWrapper)
extern "C" void PersistentDataManager_AppendActorFieldData_m6893 (Object_t * __this /* static, unused */, StringBuilder_t696 * ___sb, LuaTableWrapper_t1335 * ___fields, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.PersistentDataManager::AppendConversationData(System.Text.StringBuilder)
extern "C" void PersistentDataManager_AppendConversationData_m6894 (Object_t * __this /* static, unused */, StringBuilder_t696 * ___sb, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.PersistentDataManager::AppendDialogData(System.Text.StringBuilder,PixelCrushers.DialogueSystem.Conversation)
extern "C" void PersistentDataManager_AppendDialogData_m6895 (Object_t * __this /* static, unused */, StringBuilder_t696 * ___sb, Conversation_t1377 * ___conversation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.PersistentDataManager::AppendRelationshipAndStatusTables(System.Text.StringBuilder)
extern "C" void PersistentDataManager_AppendRelationshipAndStatusTables_m6896 (Object_t * __this /* static, unused */, StringBuilder_t696 * ___sb, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.PersistentDataManager::RefreshRelationshipAndStatusTablesFromLua()
extern "C" void PersistentDataManager_RefreshRelationshipAndStatusTablesFromLua_m6897 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
