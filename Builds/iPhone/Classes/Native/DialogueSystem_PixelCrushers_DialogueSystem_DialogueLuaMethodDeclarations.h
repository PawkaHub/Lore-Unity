#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PixelCrushers.DialogueSystem.DialogueLua
struct DialogueLua_t704;
// PixelCrushers.DialogueSystem.DialogueDatabase
struct DialogueDatabase_t202;
// System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.DialogueDatabase>
struct List_1_t1393;
// System.String
struct String_t;
// PixelCrushers.DialogueSystem.DialogueEntry
struct DialogueEntry_t1361;
// System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Variable>
struct List_1_t1399;
// System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Conversation>
struct List_1_t1400;
// System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Field>
struct List_1_t1370;
// PixelCrushers.DialogueSystem.Field
struct Field_t1406;
// Language.Lua.LuaTable
struct LuaTable_t1336;
// Language.Lua.LuaNumber
struct LuaNumber_t1657;
// System.Object
struct Object_t;
// PixelCrushers.DialogueSystem.FieldType
#include "DialogueSystem_PixelCrushers_DialogueSystem_FieldType.h"
// PixelCrushers.DialogueSystem.Lua/Result
#include "DialogueSystem_PixelCrushers_DialogueSystem_Lua_Result.h"

// System.Void PixelCrushers.DialogueSystem.DialogueLua::.cctor()
extern "C" void DialogueLua__cctor_m6299 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueLua::InitializeChatMapperVariables()
extern "C" void DialogueLua_InitializeChatMapperVariables_m6300 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueLua::AddChatMapperVariables(PixelCrushers.DialogueSystem.DialogueDatabase,System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.DialogueDatabase>)
extern "C" void DialogueLua_AddChatMapperVariables_m6301 (Object_t * __this /* static, unused */, DialogueDatabase_t202 * ___database, List_1_t1393 * ___loadedDatabases, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueLua::RemoveChatMapperVariables(PixelCrushers.DialogueSystem.DialogueDatabase,System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.DialogueDatabase>)
extern "C" void DialogueLua_RemoveChatMapperVariables_m6302 (Object_t * __this /* static, unused */, DialogueDatabase_t202 * ___database, List_1_t1393 * ___loadedDatabases, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueLua::SetParticipants(System.String,System.String)
extern "C" void DialogueLua_SetParticipants_m6303 (Object_t * __this /* static, unused */, String_t* ___actorName, String_t* ___conversantName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueLua::MarkDialogueEntryDisplayed(PixelCrushers.DialogueSystem.DialogueEntry)
extern "C" void DialogueLua_MarkDialogueEntryDisplayed_m6304 (Object_t * __this /* static, unused */, DialogueEntry_t1361 * ___dialogueEntry, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueLua::MarkDialogueEntryOffered(PixelCrushers.DialogueSystem.DialogueEntry)
extern "C" void DialogueLua_MarkDialogueEntryOffered_m6305 (Object_t * __this /* static, unused */, DialogueEntry_t1361 * ___dialogueEntry, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueLua::MarkDialogueEntry(PixelCrushers.DialogueSystem.DialogueEntry,System.String)
extern "C" void DialogueLua_MarkDialogueEntry_m6306 (Object_t * __this /* static, unused */, DialogueEntry_t1361 * ___dialogueEntry, String_t* ___status, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueLua::AddToVariableTable(System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Variable>,System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.DialogueDatabase>)
extern "C" void DialogueLua_AddToVariableTable_m6307 (Object_t * __this /* static, unused */, List_1_t1399 * ___variables, List_1_t1393 * ___loadedDatabases, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueLua::AddToConversationTable(System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Conversation>,System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.DialogueDatabase>)
extern "C" void DialogueLua_AddToConversationTable_m6308 (Object_t * __this /* static, unused */, List_1_t1400 * ___conversations, List_1_t1393 * ___loadedDatabases, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueLua::SetFields(System.String,System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Field>,System.String)
extern "C" void DialogueLua_SetFields_m6309 (Object_t * __this /* static, unused */, String_t* ___record, List_1_t1370 * ___fields, String_t* ___extraField, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PixelCrushers.DialogueSystem.DialogueLua::FieldValueAsString(PixelCrushers.DialogueSystem.Field)
extern "C" String_t* DialogueLua_FieldValueAsString_m6310 (Object_t * __this /* static, unused */, Field_t1406 * ___field, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PixelCrushers.DialogueSystem.DialogueLua::ValueAsString(PixelCrushers.DialogueSystem.FieldType,System.String)
extern "C" String_t* DialogueLua_ValueAsString_m6311 (Object_t * __this /* static, unused */, int32_t ___fieldType, String_t* ___fieldValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueLua::RegisterDialogueSystemFunctions()
extern "C" void DialogueLua_RegisterDialogueSystemFunctions_m6312 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PixelCrushers.DialogueSystem.DialogueLua::RandomElement(System.String)
extern "C" String_t* DialogueLua_RandomElement_m6313 (Object_t * __this /* static, unused */, String_t* ___list, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueLua::RegisterChatMapperFunctions()
extern "C" void DialogueLua_RegisterChatMapperFunctions_m6314 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PixelCrushers.DialogueSystem.DialogueLua::GetStatusKey(Language.Lua.LuaTable,Language.Lua.LuaTable)
extern "C" String_t* DialogueLua_GetStatusKey_m6315 (Object_t * __this /* static, unused */, LuaTable_t1336 * ___asset1, LuaTable_t1336 * ___asset2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PixelCrushers.DialogueSystem.DialogueLua::GetRelationshipKey(Language.Lua.LuaTable,Language.Lua.LuaTable,System.String)
extern "C" String_t* DialogueLua_GetRelationshipKey_m6316 (Object_t * __this /* static, unused */, LuaTable_t1336 * ___actor1, LuaTable_t1336 * ___actor2, String_t* ___relationshipType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PixelCrushers.DialogueSystem.DialogueLua::SanitizeForStatusTable(System.String)
extern "C" String_t* DialogueLua_SanitizeForStatusTable_m6317 (Object_t * __this /* static, unused */, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single PixelCrushers.DialogueSystem.DialogueLua::GetLuaFloat(Language.Lua.LuaNumber)
extern "C" float DialogueLua_GetLuaFloat_m6318 (Object_t * __this /* static, unused */, LuaNumber_t1657 * ___luaNumber, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PixelCrushers.DialogueSystem.DialogueLua::GetStatus(Language.Lua.LuaTable,Language.Lua.LuaTable)
extern "C" String_t* DialogueLua_GetStatus_m6319 (Object_t * __this /* static, unused */, LuaTable_t1336 * ___asset1, LuaTable_t1336 * ___asset2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueLua::SetStatus(Language.Lua.LuaTable,Language.Lua.LuaTable,System.String)
extern "C" void DialogueLua_SetStatus_m6320 (Object_t * __this /* static, unused */, LuaTable_t1336 * ___asset1, LuaTable_t1336 * ___asset2, String_t* ___statusValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single PixelCrushers.DialogueSystem.DialogueLua::GetRelationship(Language.Lua.LuaTable,Language.Lua.LuaTable,System.String)
extern "C" float DialogueLua_GetRelationship_m6321 (Object_t * __this /* static, unused */, LuaTable_t1336 * ___actor1, LuaTable_t1336 * ___actor2, String_t* ___relationshipType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueLua::SetRelationship(Language.Lua.LuaTable,Language.Lua.LuaTable,System.String,System.Single)
extern "C" void DialogueLua_SetRelationship_m6322 (Object_t * __this /* static, unused */, LuaTable_t1336 * ___actor1, LuaTable_t1336 * ___actor2, String_t* ___relationshipType, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueLua::IncRelationship(Language.Lua.LuaTable,Language.Lua.LuaTable,System.String,System.Single)
extern "C" void DialogueLua_IncRelationship_m6323 (Object_t * __this /* static, unused */, LuaTable_t1336 * ___actor1, LuaTable_t1336 * ___actor2, String_t* ___relationshipType, float ___incrementAmount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueLua::DecRelationship(Language.Lua.LuaTable,Language.Lua.LuaTable,System.String,System.Single)
extern "C" void DialogueLua_DecRelationship_m6324 (Object_t * __this /* static, unused */, LuaTable_t1336 * ___actor1, LuaTable_t1336 * ___actor2, String_t* ___relationshipType, float ___decrementAmount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PixelCrushers.DialogueSystem.DialogueLua::GetStatusTableAsLua()
extern "C" String_t* DialogueLua_GetStatusTableAsLua_m6325 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PixelCrushers.DialogueSystem.DialogueLua::GetRelationshipTableAsLua()
extern "C" String_t* DialogueLua_GetRelationshipTableAsLua_m6326 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueLua::RefreshStatusTableFromLua()
extern "C" void DialogueLua_RefreshStatusTableFromLua_m6327 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueLua::RefreshRelationshipTableFromLua()
extern "C" void DialogueLua_RefreshRelationshipTableFromLua_m6328 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PixelCrushers.DialogueSystem.DialogueLua::DoubleQuotesToSingle(System.String)
extern "C" String_t* DialogueLua_DoubleQuotesToSingle_m3763 (Object_t * __this /* static, unused */, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PixelCrushers.DialogueSystem.DialogueLua::SpacesToUnderscores(System.String)
extern "C" String_t* DialogueLua_SpacesToUnderscores_m6329 (Object_t * __this /* static, unused */, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PixelCrushers.DialogueSystem.DialogueLua::StringToTableIndex(System.String)
extern "C" String_t* DialogueLua_StringToTableIndex_m6330 (Object_t * __this /* static, unused */, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PixelCrushers.DialogueSystem.DialogueLua::StringToLocalizedTableIndex(System.String)
extern "C" String_t* DialogueLua_StringToLocalizedTableIndex_m6331 (Object_t * __this /* static, unused */, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.DialogueLua::DoesTableElementExist(System.String,System.String)
extern "C" bool DialogueLua_DoesTableElementExist_m6332 (Object_t * __this /* static, unused */, String_t* ___table, String_t* ___element, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.Lua/Result PixelCrushers.DialogueSystem.DialogueLua::GetTableField(System.String,System.String,System.String)
extern "C" Result_t641  DialogueLua_GetTableField_m6333 (Object_t * __this /* static, unused */, String_t* ___table, String_t* ___element, String_t* ___field, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueLua::SetTableField(System.String,System.String,System.String,System.Object)
extern "C" void DialogueLua_SetTableField_m6334 (Object_t * __this /* static, unused */, String_t* ___table, String_t* ___element, String_t* ___field, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.Lua/Result PixelCrushers.DialogueSystem.DialogueLua::GetActorField(System.String,System.String)
extern "C" Result_t641  DialogueLua_GetActorField_m6335 (Object_t * __this /* static, unused */, String_t* ___actor, String_t* ___field, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueLua::SetActorField(System.String,System.String,System.Object)
extern "C" void DialogueLua_SetActorField_m6336 (Object_t * __this /* static, unused */, String_t* ___actor, String_t* ___field, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.Lua/Result PixelCrushers.DialogueSystem.DialogueLua::GetItemField(System.String,System.String)
extern "C" Result_t641  DialogueLua_GetItemField_m6337 (Object_t * __this /* static, unused */, String_t* ___item, String_t* ___field, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueLua::SetItemField(System.String,System.String,System.Object)
extern "C" void DialogueLua_SetItemField_m6338 (Object_t * __this /* static, unused */, String_t* ___item, String_t* ___field, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.Lua/Result PixelCrushers.DialogueSystem.DialogueLua::GetQuestField(System.String,System.String)
extern "C" Result_t641  DialogueLua_GetQuestField_m3092 (Object_t * __this /* static, unused */, String_t* ___quest, String_t* ___field, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueLua::SetQuestField(System.String,System.String,System.Object)
extern "C" void DialogueLua_SetQuestField_m6339 (Object_t * __this /* static, unused */, String_t* ___quest, String_t* ___field, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.Lua/Result PixelCrushers.DialogueSystem.DialogueLua::GetLocationField(System.String,System.String)
extern "C" Result_t641  DialogueLua_GetLocationField_m6340 (Object_t * __this /* static, unused */, String_t* ___location, String_t* ___field, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueLua::SetLocationField(System.String,System.String,System.Object)
extern "C" void DialogueLua_SetLocationField_m6341 (Object_t * __this /* static, unused */, String_t* ___location, String_t* ___field, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.DialogueLua::DoesVariableExist(System.String)
extern "C" bool DialogueLua_DoesVariableExist_m6342 (Object_t * __this /* static, unused */, String_t* ___variable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.Lua/Result PixelCrushers.DialogueSystem.DialogueLua::GetVariable(System.String)
extern "C" Result_t641  DialogueLua_GetVariable_m3124 (Object_t * __this /* static, unused */, String_t* ___variable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueLua::SetVariable(System.String,System.Object)
extern "C" void DialogueLua_SetVariable_m3126 (Object_t * __this /* static, unused */, String_t* ___variable, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.Lua/Result PixelCrushers.DialogueSystem.DialogueLua::GetLocalizedTableField(System.String,System.String,System.String)
extern "C" Result_t641  DialogueLua_GetLocalizedTableField_m6343 (Object_t * __this /* static, unused */, String_t* ___table, String_t* ___element, String_t* ___field, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueLua::SetLocalizedTableField(System.String,System.String,System.String,System.Object)
extern "C" void DialogueLua_SetLocalizedTableField_m6344 (Object_t * __this /* static, unused */, String_t* ___table, String_t* ___element, String_t* ___field, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.Lua/Result PixelCrushers.DialogueSystem.DialogueLua::GetLocalizedActorField(System.String,System.String)
extern "C" Result_t641  DialogueLua_GetLocalizedActorField_m6345 (Object_t * __this /* static, unused */, String_t* ___actor, String_t* ___field, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueLua::SetLocalizedActorField(System.String,System.String,System.Object)
extern "C" void DialogueLua_SetLocalizedActorField_m6346 (Object_t * __this /* static, unused */, String_t* ___actor, String_t* ___field, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.Lua/Result PixelCrushers.DialogueSystem.DialogueLua::GetLocalizedItemField(System.String,System.String)
extern "C" Result_t641  DialogueLua_GetLocalizedItemField_m6347 (Object_t * __this /* static, unused */, String_t* ___item, String_t* ___field, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueLua::SetLocalizedItemField(System.String,System.String,System.Object)
extern "C" void DialogueLua_SetLocalizedItemField_m6348 (Object_t * __this /* static, unused */, String_t* ___item, String_t* ___field, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.Lua/Result PixelCrushers.DialogueSystem.DialogueLua::GetLocalizedQuestField(System.String,System.String)
extern "C" Result_t641  DialogueLua_GetLocalizedQuestField_m6349 (Object_t * __this /* static, unused */, String_t* ___quest, String_t* ___field, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueLua::SetLocalizedQuestField(System.String,System.String,System.Object)
extern "C" void DialogueLua_SetLocalizedQuestField_m6350 (Object_t * __this /* static, unused */, String_t* ___quest, String_t* ___field, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.Lua/Result PixelCrushers.DialogueSystem.DialogueLua::GetLocalizedLocationField(System.String,System.String)
extern "C" Result_t641  DialogueLua_GetLocalizedLocationField_m6351 (Object_t * __this /* static, unused */, String_t* ___location, String_t* ___field, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueLua::SetLocalizedLocationField(System.String,System.String,System.Object)
extern "C" void DialogueLua_SetLocalizedLocationField_m6352 (Object_t * __this /* static, unused */, String_t* ___location, String_t* ___field, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
