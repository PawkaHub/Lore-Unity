#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PixelCrushers.DialogueSystem.DialogueLua
struct DialogueLua_t648;
// PixelCrushers.DialogueSystem.DialogueDatabase
struct DialogueDatabase_t202;
// System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.DialogueDatabase>
struct List_1_t1134;
// System.String
struct String_t;
// PixelCrushers.DialogueSystem.DialogueEntry
struct DialogueEntry_t1102;
// System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Variable>
struct List_1_t1140;
// System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Conversation>
struct List_1_t1141;
// System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Field>
struct List_1_t1111;
// PixelCrushers.DialogueSystem.Field
struct Field_t1147;
// Language.Lua.LuaTable
struct LuaTable_t1077;
// Language.Lua.LuaNumber
struct LuaNumber_t1398;
// System.Object
struct Object_t;
// PixelCrushers.DialogueSystem.FieldType
#include "DialogueSystem_PixelCrushers_DialogueSystem_FieldType.h"
// PixelCrushers.DialogueSystem.Lua/Result
#include "DialogueSystem_PixelCrushers_DialogueSystem_Lua_Result.h"

// System.Void PixelCrushers.DialogueSystem.DialogueLua::.cctor()
extern "C" void DialogueLua__cctor_m5847 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueLua::InitializeChatMapperVariables()
extern "C" void DialogueLua_InitializeChatMapperVariables_m5848 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueLua::AddChatMapperVariables(PixelCrushers.DialogueSystem.DialogueDatabase,System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.DialogueDatabase>)
extern "C" void DialogueLua_AddChatMapperVariables_m5849 (Object_t * __this /* static, unused */, DialogueDatabase_t202 * ___database, List_1_t1134 * ___loadedDatabases, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueLua::RemoveChatMapperVariables(PixelCrushers.DialogueSystem.DialogueDatabase,System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.DialogueDatabase>)
extern "C" void DialogueLua_RemoveChatMapperVariables_m5850 (Object_t * __this /* static, unused */, DialogueDatabase_t202 * ___database, List_1_t1134 * ___loadedDatabases, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueLua::SetParticipants(System.String,System.String)
extern "C" void DialogueLua_SetParticipants_m5851 (Object_t * __this /* static, unused */, String_t* ___actorName, String_t* ___conversantName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueLua::MarkDialogueEntryDisplayed(PixelCrushers.DialogueSystem.DialogueEntry)
extern "C" void DialogueLua_MarkDialogueEntryDisplayed_m5852 (Object_t * __this /* static, unused */, DialogueEntry_t1102 * ___dialogueEntry, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueLua::MarkDialogueEntryOffered(PixelCrushers.DialogueSystem.DialogueEntry)
extern "C" void DialogueLua_MarkDialogueEntryOffered_m5853 (Object_t * __this /* static, unused */, DialogueEntry_t1102 * ___dialogueEntry, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueLua::MarkDialogueEntry(PixelCrushers.DialogueSystem.DialogueEntry,System.String)
extern "C" void DialogueLua_MarkDialogueEntry_m5854 (Object_t * __this /* static, unused */, DialogueEntry_t1102 * ___dialogueEntry, String_t* ___status, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueLua::AddToVariableTable(System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Variable>,System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.DialogueDatabase>)
extern "C" void DialogueLua_AddToVariableTable_m5855 (Object_t * __this /* static, unused */, List_1_t1140 * ___variables, List_1_t1134 * ___loadedDatabases, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueLua::AddToConversationTable(System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Conversation>,System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.DialogueDatabase>)
extern "C" void DialogueLua_AddToConversationTable_m5856 (Object_t * __this /* static, unused */, List_1_t1141 * ___conversations, List_1_t1134 * ___loadedDatabases, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueLua::SetFields(System.String,System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Field>,System.String)
extern "C" void DialogueLua_SetFields_m5857 (Object_t * __this /* static, unused */, String_t* ___record, List_1_t1111 * ___fields, String_t* ___extraField, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PixelCrushers.DialogueSystem.DialogueLua::FieldValueAsString(PixelCrushers.DialogueSystem.Field)
extern "C" String_t* DialogueLua_FieldValueAsString_m5858 (Object_t * __this /* static, unused */, Field_t1147 * ___field, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PixelCrushers.DialogueSystem.DialogueLua::ValueAsString(PixelCrushers.DialogueSystem.FieldType,System.String)
extern "C" String_t* DialogueLua_ValueAsString_m5859 (Object_t * __this /* static, unused */, int32_t ___fieldType, String_t* ___fieldValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueLua::RegisterDialogueSystemFunctions()
extern "C" void DialogueLua_RegisterDialogueSystemFunctions_m5860 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PixelCrushers.DialogueSystem.DialogueLua::RandomElement(System.String)
extern "C" String_t* DialogueLua_RandomElement_m5861 (Object_t * __this /* static, unused */, String_t* ___list, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueLua::RegisterChatMapperFunctions()
extern "C" void DialogueLua_RegisterChatMapperFunctions_m5862 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PixelCrushers.DialogueSystem.DialogueLua::GetStatusKey(Language.Lua.LuaTable,Language.Lua.LuaTable)
extern "C" String_t* DialogueLua_GetStatusKey_m5863 (Object_t * __this /* static, unused */, LuaTable_t1077 * ___asset1, LuaTable_t1077 * ___asset2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PixelCrushers.DialogueSystem.DialogueLua::GetRelationshipKey(Language.Lua.LuaTable,Language.Lua.LuaTable,System.String)
extern "C" String_t* DialogueLua_GetRelationshipKey_m5864 (Object_t * __this /* static, unused */, LuaTable_t1077 * ___actor1, LuaTable_t1077 * ___actor2, String_t* ___relationshipType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PixelCrushers.DialogueSystem.DialogueLua::SanitizeForStatusTable(System.String)
extern "C" String_t* DialogueLua_SanitizeForStatusTable_m5865 (Object_t * __this /* static, unused */, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single PixelCrushers.DialogueSystem.DialogueLua::GetLuaFloat(Language.Lua.LuaNumber)
extern "C" float DialogueLua_GetLuaFloat_m5866 (Object_t * __this /* static, unused */, LuaNumber_t1398 * ___luaNumber, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PixelCrushers.DialogueSystem.DialogueLua::GetStatus(Language.Lua.LuaTable,Language.Lua.LuaTable)
extern "C" String_t* DialogueLua_GetStatus_m5867 (Object_t * __this /* static, unused */, LuaTable_t1077 * ___asset1, LuaTable_t1077 * ___asset2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueLua::SetStatus(Language.Lua.LuaTable,Language.Lua.LuaTable,System.String)
extern "C" void DialogueLua_SetStatus_m5868 (Object_t * __this /* static, unused */, LuaTable_t1077 * ___asset1, LuaTable_t1077 * ___asset2, String_t* ___statusValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single PixelCrushers.DialogueSystem.DialogueLua::GetRelationship(Language.Lua.LuaTable,Language.Lua.LuaTable,System.String)
extern "C" float DialogueLua_GetRelationship_m5869 (Object_t * __this /* static, unused */, LuaTable_t1077 * ___actor1, LuaTable_t1077 * ___actor2, String_t* ___relationshipType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueLua::SetRelationship(Language.Lua.LuaTable,Language.Lua.LuaTable,System.String,System.Single)
extern "C" void DialogueLua_SetRelationship_m5870 (Object_t * __this /* static, unused */, LuaTable_t1077 * ___actor1, LuaTable_t1077 * ___actor2, String_t* ___relationshipType, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueLua::IncRelationship(Language.Lua.LuaTable,Language.Lua.LuaTable,System.String,System.Single)
extern "C" void DialogueLua_IncRelationship_m5871 (Object_t * __this /* static, unused */, LuaTable_t1077 * ___actor1, LuaTable_t1077 * ___actor2, String_t* ___relationshipType, float ___incrementAmount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueLua::DecRelationship(Language.Lua.LuaTable,Language.Lua.LuaTable,System.String,System.Single)
extern "C" void DialogueLua_DecRelationship_m5872 (Object_t * __this /* static, unused */, LuaTable_t1077 * ___actor1, LuaTable_t1077 * ___actor2, String_t* ___relationshipType, float ___decrementAmount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PixelCrushers.DialogueSystem.DialogueLua::GetStatusTableAsLua()
extern "C" String_t* DialogueLua_GetStatusTableAsLua_m5873 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PixelCrushers.DialogueSystem.DialogueLua::GetRelationshipTableAsLua()
extern "C" String_t* DialogueLua_GetRelationshipTableAsLua_m5874 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueLua::RefreshStatusTableFromLua()
extern "C" void DialogueLua_RefreshStatusTableFromLua_m5875 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueLua::RefreshRelationshipTableFromLua()
extern "C" void DialogueLua_RefreshRelationshipTableFromLua_m5876 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PixelCrushers.DialogueSystem.DialogueLua::DoubleQuotesToSingle(System.String)
extern "C" String_t* DialogueLua_DoubleQuotesToSingle_m5877 (Object_t * __this /* static, unused */, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PixelCrushers.DialogueSystem.DialogueLua::SpacesToUnderscores(System.String)
extern "C" String_t* DialogueLua_SpacesToUnderscores_m5878 (Object_t * __this /* static, unused */, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PixelCrushers.DialogueSystem.DialogueLua::StringToTableIndex(System.String)
extern "C" String_t* DialogueLua_StringToTableIndex_m5879 (Object_t * __this /* static, unused */, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PixelCrushers.DialogueSystem.DialogueLua::StringToLocalizedTableIndex(System.String)
extern "C" String_t* DialogueLua_StringToLocalizedTableIndex_m5880 (Object_t * __this /* static, unused */, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.DialogueLua::DoesTableElementExist(System.String,System.String)
extern "C" bool DialogueLua_DoesTableElementExist_m5881 (Object_t * __this /* static, unused */, String_t* ___table, String_t* ___element, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.Lua/Result PixelCrushers.DialogueSystem.DialogueLua::GetTableField(System.String,System.String,System.String)
extern "C" Result_t583  DialogueLua_GetTableField_m5882 (Object_t * __this /* static, unused */, String_t* ___table, String_t* ___element, String_t* ___field, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueLua::SetTableField(System.String,System.String,System.String,System.Object)
extern "C" void DialogueLua_SetTableField_m5883 (Object_t * __this /* static, unused */, String_t* ___table, String_t* ___element, String_t* ___field, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.Lua/Result PixelCrushers.DialogueSystem.DialogueLua::GetActorField(System.String,System.String)
extern "C" Result_t583  DialogueLua_GetActorField_m5884 (Object_t * __this /* static, unused */, String_t* ___actor, String_t* ___field, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueLua::SetActorField(System.String,System.String,System.Object)
extern "C" void DialogueLua_SetActorField_m5885 (Object_t * __this /* static, unused */, String_t* ___actor, String_t* ___field, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.Lua/Result PixelCrushers.DialogueSystem.DialogueLua::GetItemField(System.String,System.String)
extern "C" Result_t583  DialogueLua_GetItemField_m5886 (Object_t * __this /* static, unused */, String_t* ___item, String_t* ___field, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueLua::SetItemField(System.String,System.String,System.Object)
extern "C" void DialogueLua_SetItemField_m5887 (Object_t * __this /* static, unused */, String_t* ___item, String_t* ___field, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.Lua/Result PixelCrushers.DialogueSystem.DialogueLua::GetQuestField(System.String,System.String)
extern "C" Result_t583  DialogueLua_GetQuestField_m2920 (Object_t * __this /* static, unused */, String_t* ___quest, String_t* ___field, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueLua::SetQuestField(System.String,System.String,System.Object)
extern "C" void DialogueLua_SetQuestField_m5888 (Object_t * __this /* static, unused */, String_t* ___quest, String_t* ___field, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.Lua/Result PixelCrushers.DialogueSystem.DialogueLua::GetLocationField(System.String,System.String)
extern "C" Result_t583  DialogueLua_GetLocationField_m5889 (Object_t * __this /* static, unused */, String_t* ___location, String_t* ___field, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueLua::SetLocationField(System.String,System.String,System.Object)
extern "C" void DialogueLua_SetLocationField_m5890 (Object_t * __this /* static, unused */, String_t* ___location, String_t* ___field, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.DialogueLua::DoesVariableExist(System.String)
extern "C" bool DialogueLua_DoesVariableExist_m5891 (Object_t * __this /* static, unused */, String_t* ___variable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.Lua/Result PixelCrushers.DialogueSystem.DialogueLua::GetVariable(System.String)
extern "C" Result_t583  DialogueLua_GetVariable_m2952 (Object_t * __this /* static, unused */, String_t* ___variable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueLua::SetVariable(System.String,System.Object)
extern "C" void DialogueLua_SetVariable_m2954 (Object_t * __this /* static, unused */, String_t* ___variable, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.Lua/Result PixelCrushers.DialogueSystem.DialogueLua::GetLocalizedTableField(System.String,System.String,System.String)
extern "C" Result_t583  DialogueLua_GetLocalizedTableField_m5892 (Object_t * __this /* static, unused */, String_t* ___table, String_t* ___element, String_t* ___field, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueLua::SetLocalizedTableField(System.String,System.String,System.String,System.Object)
extern "C" void DialogueLua_SetLocalizedTableField_m5893 (Object_t * __this /* static, unused */, String_t* ___table, String_t* ___element, String_t* ___field, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.Lua/Result PixelCrushers.DialogueSystem.DialogueLua::GetLocalizedActorField(System.String,System.String)
extern "C" Result_t583  DialogueLua_GetLocalizedActorField_m5894 (Object_t * __this /* static, unused */, String_t* ___actor, String_t* ___field, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueLua::SetLocalizedActorField(System.String,System.String,System.Object)
extern "C" void DialogueLua_SetLocalizedActorField_m5895 (Object_t * __this /* static, unused */, String_t* ___actor, String_t* ___field, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.Lua/Result PixelCrushers.DialogueSystem.DialogueLua::GetLocalizedItemField(System.String,System.String)
extern "C" Result_t583  DialogueLua_GetLocalizedItemField_m5896 (Object_t * __this /* static, unused */, String_t* ___item, String_t* ___field, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueLua::SetLocalizedItemField(System.String,System.String,System.Object)
extern "C" void DialogueLua_SetLocalizedItemField_m5897 (Object_t * __this /* static, unused */, String_t* ___item, String_t* ___field, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.Lua/Result PixelCrushers.DialogueSystem.DialogueLua::GetLocalizedQuestField(System.String,System.String)
extern "C" Result_t583  DialogueLua_GetLocalizedQuestField_m5898 (Object_t * __this /* static, unused */, String_t* ___quest, String_t* ___field, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueLua::SetLocalizedQuestField(System.String,System.String,System.Object)
extern "C" void DialogueLua_SetLocalizedQuestField_m5899 (Object_t * __this /* static, unused */, String_t* ___quest, String_t* ___field, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.Lua/Result PixelCrushers.DialogueSystem.DialogueLua::GetLocalizedLocationField(System.String,System.String)
extern "C" Result_t583  DialogueLua_GetLocalizedLocationField_m5900 (Object_t * __this /* static, unused */, String_t* ___location, String_t* ___field, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueLua::SetLocalizedLocationField(System.String,System.String,System.Object)
extern "C" void DialogueLua_SetLocalizedLocationField_m5901 (Object_t * __this /* static, unused */, String_t* ___location, String_t* ___field, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
