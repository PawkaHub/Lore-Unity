#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PixelCrushers.DialogueSystem.ExtraDatabases
struct ExtraDatabases_t289;
// UnityEngine.Transform
struct Transform_t54;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// PixelCrushers.DialogueSystem.DialogueDatabase
struct DialogueDatabase_t202;
// System.String
struct String_t;
// UnityEngine.Collider
struct Collider_t194;
// UnityEngine.Collider2D
struct Collider2D_t195;

// System.Void PixelCrushers.DialogueSystem.ExtraDatabases::.ctor()
extern "C" void ExtraDatabases__ctor_m1120 (ExtraDatabases_t289 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.ExtraDatabases::TryAddDatabases(UnityEngine.Transform,System.Boolean)
extern "C" void ExtraDatabases_TryAddDatabases_m1121 (ExtraDatabases_t289 * __this, Transform_t54 * ___interactor, bool ___immediate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.ExtraDatabases::AddDatabases(System.Boolean)
extern "C" void ExtraDatabases_AddDatabases_m1122 (ExtraDatabases_t289 * __this, bool ___immediate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.ExtraDatabases::AddDatabasesImmediate()
extern "C" void ExtraDatabases_AddDatabasesImmediate_m1123 (ExtraDatabases_t289 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator PixelCrushers.DialogueSystem.ExtraDatabases::AddDatabasesCoroutine()
extern "C" Object_t * ExtraDatabases_AddDatabasesCoroutine_m1124 (ExtraDatabases_t289 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.ExtraDatabases::AddDatabase(PixelCrushers.DialogueSystem.DialogueDatabase)
extern "C" void ExtraDatabases_AddDatabase_m1125 (ExtraDatabases_t289 * __this, DialogueDatabase_t202 * ___database, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.ExtraDatabases::TryRemoveDatabases(UnityEngine.Transform,System.Boolean)
extern "C" void ExtraDatabases_TryRemoveDatabases_m1126 (ExtraDatabases_t289 * __this, Transform_t54 * ___interactor, bool ___immediate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.ExtraDatabases::RemoveDatabases(System.Boolean)
extern "C" void ExtraDatabases_RemoveDatabases_m1127 (ExtraDatabases_t289 * __this, bool ___immediate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.ExtraDatabases::RemoveDatabasesImmediate()
extern "C" void ExtraDatabases_RemoveDatabasesImmediate_m1128 (ExtraDatabases_t289 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator PixelCrushers.DialogueSystem.ExtraDatabases::RemoveDatabasesCoroutine()
extern "C" Object_t * ExtraDatabases_RemoveDatabasesCoroutine_m1129 (ExtraDatabases_t289 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.ExtraDatabases::RemoveDatabase(PixelCrushers.DialogueSystem.DialogueDatabase)
extern "C" void ExtraDatabases_RemoveDatabase_m1130 (ExtraDatabases_t289 * __this, DialogueDatabase_t202 * ___database, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator PixelCrushers.DialogueSystem.ExtraDatabases::Start()
extern "C" Object_t * ExtraDatabases_Start_m1131 (ExtraDatabases_t289 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.ExtraDatabases::OnEnable()
extern "C" void ExtraDatabases_OnEnable_m1132 (ExtraDatabases_t289 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.ExtraDatabases::OnDisable()
extern "C" void ExtraDatabases_OnDisable_m1133 (ExtraDatabases_t289 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.ExtraDatabases::OnDestroy()
extern "C" void ExtraDatabases_OnDestroy_m1134 (ExtraDatabases_t289 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.ExtraDatabases::OnUse(UnityEngine.Transform)
extern "C" void ExtraDatabases_OnUse_m1135 (ExtraDatabases_t289 * __this, Transform_t54 * ___actor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.ExtraDatabases::OnUse(System.String)
extern "C" void ExtraDatabases_OnUse_m1136 (ExtraDatabases_t289 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.ExtraDatabases::OnUse()
extern "C" void ExtraDatabases_OnUse_m1137 (ExtraDatabases_t289 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.ExtraDatabases::OnTriggerEnter(UnityEngine.Collider)
extern "C" void ExtraDatabases_OnTriggerEnter_m1138 (ExtraDatabases_t289 * __this, Collider_t194 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.ExtraDatabases::OnTriggerEnter2D(UnityEngine.Collider2D)
extern "C" void ExtraDatabases_OnTriggerEnter2D_m1139 (ExtraDatabases_t289 * __this, Collider2D_t195 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.ExtraDatabases::OnTriggerExit(UnityEngine.Collider)
extern "C" void ExtraDatabases_OnTriggerExit_m1140 (ExtraDatabases_t289 * __this, Collider_t194 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.ExtraDatabases::OnTriggerExit2D(UnityEngine.Collider2D)
extern "C" void ExtraDatabases_OnTriggerExit2D_m1141 (ExtraDatabases_t289 * __this, Collider2D_t195 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
