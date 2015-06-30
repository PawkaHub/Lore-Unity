#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PixelCrushers.DialogueSystem.DialogueLua
struct DialogueLua_t628;
// PixelCrushers.DialogueSystem.DialogueDatabase
struct DialogueDatabase_t202;
// System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.DialogueDatabase>
struct List_1_t809;
// System.String
struct String_t;
// PixelCrushers.DialogueSystem.DialogueEntry
struct DialogueEntry_t777;
// System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Variable>
struct List_1_t815;
// System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Conversation>
struct List_1_t816;
// System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Field>
struct List_1_t786;
// PixelCrushers.DialogueSystem.Field
struct Field_t822;
// Language.Lua.LuaTable
struct LuaTable_t750;
// Language.Lua.LuaNumber
struct LuaNumber_t1075;
// System.Object
struct Object_t;
// PixelCrushers.DialogueSystem.FieldType
#include "DialogueSystem_PixelCrushers_DialogueSystem_FieldType.h"
// PixelCrushers.DialogueSystem.Lua/Result
#include "DialogueSystem_PixelCrushers_DialogueSystem_Lua_Result.h"

// System.Void PixelCrushers.DialogueSystem.DialogueLua::.cctor()
extern "C" void DialogueLua__cctor_m4002 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueLua::InitializeChatMapperVariables()
extern "C" void DialogueLua_InitializeChatMapperVariables_m4003 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueLua::AddChatMapperVariables(PixelCrushers.DialogueSystem.DialogueDatabase,System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.DialogueDatabase>)
extern "C" void DialogueLua_AddChatMapperVariables_m4004 (Object_t * __this /* static, unused */, DialogueDatabase_t202 * ___database, List_1_t809 * ___loadedDatabases, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueLua::RemoveChatMapperVariables(PixelCrushers.DialogueSystem.DialogueDatabase,System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.DialogueDatabase>)
extern "C" void DialogueLua_RemoveChatMapperVariables_m4005 (Object_t * __this /* static, unused */, DialogueDatabase_t202 * ___database, List_1_t809 * ___loadedDatabases, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueLua::SetParticipants(System.String,System.String)
extern "C" void DialogueLua_SetParticipants_m4006 (Object_t * __this /* static, unused */, String_t* ___actorName, String_t* ___conversantName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueLua::MarkDialogueEntryDisplayed(PixelCrushers.DialogueSystem.DialogueEntry)
extern "C" void DialogueLua_MarkDialogueEntryDisplayed_m4007 (Object_t * __this /* static, unused */, DialogueEntry_t777 * ___dialogueEntry, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueLua::MarkDialogueEntryOffered(PixelCrushers.DialogueSystem.DialogueEntry)
extern "C" void DialogueLua_MarkDialogueEntryOffered_m4008 (Object_t * __this /* static, unused */, DialogueEntry_t777 * ___dialogueEntry, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueLua::MarkDialogueEntry(PixelCrushers.DialogueSystem.DialogueEntry,System.String)
extern "C" void DialogueLua_MarkDialogueEntry_m4009 (Object_t * __this /* static, unused */, DialogueEntry_t777 * ___dialogueEntry, String_t* ___status, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueLua::AddToVariableTable(System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Variable>,System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.DialogueDatabase>)
extern "C" void DialogueLua_AddToVariableTable_m4010 (Object_t * __this /* static, unused */, List_1_t815 * ___variables, List_1_t809 * ___loadedDatabases, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueLua::AddToConversationTable(System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Conversation>,System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.DialogueDatabase>)
extern "C" void DialogueLua_AddToConversationTable_m4011 (Object_t * __this /* static, unused */, List_1_t816 * ___conversations, List_1_t809 * ___loadedDatabases, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueLua::SetFields(System.String,System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Field>,System.String)
extern "C" void DialogueLua_SetFields_m4012 (Object_t * __this /* static, unused */, String_t* ___record, List_1_t786 * ___fields, String_t* ___extraField, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PixelCrushers.DialogueSystem.DialogueLua::FieldValueAsString(PixelCrushers.DialogueSystem.Field)
extern "C" String_t* DialogueLua_FieldValueAsString_m4013 (Object_t * __this /* static, unused */, Field_t822 * ___field, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PixelCrushers.DialogueSystem.DialogueLua::ValueAsString(PixelCrushers.DialogueSystem.FieldType,System.String)
extern "C" String_t* DialogueLua_ValueAsString_m4014 (Object_t * __this /* static, unused */, int32_t ___fieldType, String_t* ___fieldValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueLua::RegisterDialogueSystemFunctions()
extern "C" void DialogueLua_RegisterDialogueSystemFunctions_m4015 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PixelCrushers.DialogueSystem.DialogueLua::RandomElement(System.String)
extern "C" String_t* DialogueLua_RandomElement_m4016 (Object_t * __this /* static, unused */, String_t* ___list, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueLua::RegisterChatMapperFunctions()
extern "C" void DialogueLua_RegisterChatMapperFunctions_m4017 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PixelCrushers.DialogueSystem.DialogueLua::GetStatusKey(Language.Lua.LuaTable,Language.Lua.LuaTable)
extern "C" String_t* DialogueLua_GetStatusKey_m4018 (Object_t * __this /* static, unused */, LuaTable_t750 * ___asset1, LuaTable_t750 * ___asset2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PixelCrushers.DialogueSystem.DialogueLua::GetRelationshipKey(Language.Lua.LuaTable,Language.Lua.LuaTable,System.String)
extern "C" String_t* DialogueLua_GetRelationshipKey_m4019 (Object_t * __this /* static, unused */, LuaTable_t750 * ___actor1, LuaTable_t750 * ___actor2, String_t* ___relationshipType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PixelCrushers.DialogueSystem.DialogueLua::SanitizeForStatusTable(System.String)
extern "C" String_t* DialogueLua_SanitizeForStatusTable_m4020 (Object_t * __this /* static, unused */, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single PixelCrushers.DialogueSystem.DialogueLua::GetLuaFloat(Language.Lua.LuaNumber)
extern "C" float DialogueLua_GetLuaFloat_m4021 (Object_t * __this /* static, unused */, LuaNumber_t1075 * ___luaNumber, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PixelCrushers.DialogueSystem.DialogueLua::GetStatus(Language.Lua.LuaTable,Language.Lua.LuaTable)
extern "C" String_t* DialogueLua_GetStatus_m4022 (Object_t * __this /* static, unused */, LuaTable_t750 * ___asset1, LuaTable_t750 * ___asset2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueLua::SetStatus(Language.Lua.LuaTable,Language.Lua.LuaTable,System.String)
extern "C" void DialogueLua_SetStatus_m4023 (Object_t * __this /* static, unused */, LuaTable_t750 * ___asset1, LuaTable_t750 * ___asset2, String_t* ___statusValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single PixelCrushers.DialogueSystem.DialogueLua::GetRelationship(Language.Lua.LuaTable,Language.Lua.LuaTable,System.String)
extern "C" float DialogueLua_GetRelationship_m4024 (Object_t * __this /* static, unused */, LuaTable_t750 * ___actor1, LuaTable_t750 * ___actor2, String_t* ___relationshipType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueLua::SetRelationship(Language.Lua.LuaTable,Language.Lua.LuaTable,System.String,System.Single)
extern "C" void DialogueLua_SetRelationship_m4025 (Object_t * __this /* static, unused */, LuaTable_t750 * ___actor1, LuaTable_t750 * ___actor2, String_t* ___relationshipType, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueLua::IncRelationship(Language.Lua.LuaTable,Language.Lua.LuaTable,System.String,System.Single)
extern "C" void DialogueLua_IncRelationship_m4026 (Object_t * __this /* static, unused */, LuaTable_t750 * ___actor1, LuaTable_t750 * ___actor2, String_t* ___relationshipType, float ___incrementAmount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueLua::DecRelationship(Language.Lua.LuaTable,Language.Lua.LuaTable,System.String,System.Single)
extern "C" void DialogueLua_DecRelationship_m4027 (Object_t * __this /* static, unused */, LuaTable_t750 * ___actor1, LuaTable_t750 * ___actor2, String_t* ___relationshipType, float ___decrementAmount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PixelCrushers.DialogueSystem.DialogueLua::GetStatusTableAsLua()
extern "C" String_t* DialogueLua_GetStatusTableAsLua_m4028 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PixelCrushers.DialogueSystem.DialogueLua::GetRelationshipTableAsLua()
extern "C" String_t* DialogueLua_GetRelationshipTableAsLua_m4029 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueLua::RefreshStatusTableFromLua()
extern "C" void DialogueLua_RefreshStatusTableFromLua_m4030 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueLua::RefreshRelationshipTableFromLua()
extern "C" void DialogueLua_RefreshRelationshipTableFromLua_m4031 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PixelCrushers.DialogueSystem.DialogueLua::DoubleQuotesToSingle(System.String)
extern "C" String_t* DialogueLua_DoubleQuotesToSingle_m4032 (Object_t * __this /* static, unused */, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PixelCrushers.DialogueSystem.DialogueLua::SpacesToUnderscores(System.String)
extern "C" String_t* DialogueLua_SpacesToUnderscores_m4033 (Object_t * __this /* static, unused */, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PixelCrushers.DialogueSystem.DialogueLua::StringToTableIndex(System.String)
extern "C" String_t* DialogueLua_StringToTableIndex_m4034 (Object_t * __this /* static, unused */, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PixelCrushers.DialogueSystem.DialogueLua::StringToLocalizedTableIndex(System.String)
extern "C" String_t* DialogueLua_StringToLocalizedTableIndex_m4035 (Object_t * __this /* static, unused */, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.DialogueLua::DoesTableElementExist(System.String,System.String)
extern "C" bool DialogueLua_DoesTableElementExist_m4036 (Object_t * __this /* static, unused */, String_t* ___table, String_t* ___element, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.Lua/Result PixelCrushers.DialogueSystem.DialogueLua::GetTableField(System.String,System.String,System.String)
extern "C" Result_t627  DialogueLua_GetTableField_m4037 (Object_t * __this /* static, unused */, String_t* ___table, String_t* ___element, String_t* ___field, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueLua::SetTableField(System.String,System.String,System.String,System.Object)
extern "C" void DialogueLua_SetTableField_m4038 (Object_t * __this /* static, unused */, String_t* ___table, String_t* ___element, String_t* ___field, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.Lua/Result PixelCrushers.DialogueSystem.DialogueLua::GetActorField(System.String,System.String)
extern "C" Result_t627  DialogueLua_GetActorField_m4039 (Object_t * __this /* static, unused */, String_t* ___actor, String_t* ___field, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueLua::SetActorField(System.String,System.String,System.Object)
extern "C" void DialogueLua_SetActorField_m4040 (Object_t * __this /* static, unused */, String_t* ___actor, String_t* ___field, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.Lua/Result PixelCrushers.DialogueSystem.DialogueLua::GetItemField(System.String,System.String)
extern "C" Result_t627  DialogueLua_GetItemField_m4041 (Object_t * __this /* static, unused */, String_t* ___item, String_t* ___field, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueLua::SetItemField(System.String,System.String,System.Object)
extern "C" void DialogueLua_SetItemField_m4042 (Object_t * __this /* static, unused */, String_t* ___item, String_t* ___field, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.Lua/Result PixelCrushers.DialogueSystem.DialogueLua::GetQuestField(System.String,System.String)
extern "C" Result_t627  DialogueLua_GetQuestField_m2833 (Object_t * __this /* static, unused */, String_t* ___quest, String_t* ___field, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueLua::SetQuestField(System.String,System.String,System.Object)
extern "C" void DialogueLua_SetQuestField_m4043 (Object_t * __this /* static, unused */, String_t* ___quest, String_t* ___field, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.Lua/Result PixelCrushers.DialogueSystem.DialogueLua::GetLocationField(System.String,System.String)
extern "C" Result_t627  DialogueLua_GetLocationField_m4044 (Object_t * __this /* static, unused */, String_t* ___location, String_t* ___field, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueLua::SetLocationField(System.String,System.String,System.Object)
extern "C" void DialogueLua_SetLocationField_m4045 (Object_t * __this /* static, unused */, String_t* ___location, String_t* ___field, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.DialogueLua::DoesVariableExist(System.String)
extern "C" bool DialogueLua_DoesVariableExist_m4046 (Object_t * __this /* static, unused */, String_t* ___variable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.Lua/Result PixelCrushers.DialogueSystem.DialogueLua::GetVariable(System.String)
extern "C" Result_t627  DialogueLua_GetVariable_m2865 (Object_t * __this /* static, unused */, String_t* ___variable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueLua::SetVariable(System.String,System.Object)
extern "C" void DialogueLua_SetVariable_m2867 (Object_t * __this /* static, unused */, String_t* ___variable, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.Lua/Result PixelCrushers.DialogueSystem.DialogueLua::GetLocalizedTableField(System.String,System.String,System.String)
extern "C" Result_t627  DialogueLua_GetLocalizedTableField_m4047 (Object_t * __this /* static, unused */, String_t* ___table, String_t* ___element, String_t* ___field, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueLua::SetLocalizedTableField(System.String,System.String,System.String,System.Object)
extern "C" void DialogueLua_SetLocalizedTableField_m4048 (Object_t * __this /* static, unused */, String_t* ___table, String_t* ___element, String_t* ___field, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.Lua/Result PixelCrushers.DialogueSystem.DialogueLua::GetLocalizedActorField(System.String,System.String)
extern "C" Result_t627  DialogueLua_GetLocalizedActorField_m4049 (Object_t * __this /* static, unused */, String_t* ___actor, String_t* ___field, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueLua::SetLocalizedActorField(System.String,System.String,System.Object)
extern "C" void DialogueLua_SetLocalizedActorField_m4050 (Object_t * __this /* static, unused */, String_t* ___actor, String_t* ___field, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.Lua/Result PixelCrushers.DialogueSystem.DialogueLua::GetLocalizedItemField(System.String,System.String)
extern "C" Result_t627  DialogueLua_GetLocalizedItemField_m4051 (Object_t * __this /* static, unused */, String_t* ___item, String_t* ___field, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueLua::SetLocalizedItemField(System.String,System.String,System.Object)
extern "C" void DialogueLua_SetLocalizedItemField_m4052 (Object_t * __this /* static, unused */, String_t* ___item, String_t* ___field, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.Lua/Result PixelCrushers.DialogueSystem.DialogueLua::GetLocalizedQuestField(System.String,System.String)
extern "C" Result_t627  DialogueLua_GetLocalizedQuestField_m4053 (Object_t * __this /* static, unused */, String_t* ___quest, String_t* ___field, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueLua::SetLocalizedQuestField(System.String,System.String,System.Object)
extern "C" void DialogueLua_SetLocalizedQuestField_m4054 (Object_t * __this /* static, unused */, String_t* ___quest, String_t* ___field, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.Lua/Result PixelCrushers.DialogueSystem.DialogueLua::GetLocalizedLocationField(System.String,System.String)
extern "C" Result_t627  DialogueLua_GetLocalizedLocationField_m4055 (Object_t * __this /* static, unused */, String_t* ___location, String_t* ___field, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueLua::SetLocalizedLocationField(System.String,System.String,System.Object)
extern "C" void DialogueLua_SetLocalizedLocationField_m4056 (Object_t * __this /* static, unused */, String_t* ___location, String_t* ___field, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
