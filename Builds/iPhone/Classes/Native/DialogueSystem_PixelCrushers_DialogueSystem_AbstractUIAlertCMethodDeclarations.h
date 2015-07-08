#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PixelCrushers.DialogueSystem.AbstractUIAlertControls
struct AbstractUIAlertControls_t221;
// System.String
struct String_t;

// System.Void PixelCrushers.DialogueSystem.AbstractUIAlertControls::.ctor()
extern "C" void AbstractUIAlertControls__ctor_m2966 (AbstractUIAlertControls_t221 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.AbstractUIAlertControls::get_IsVisible()
// System.Void PixelCrushers.DialogueSystem.AbstractUIAlertControls::SetMessage(System.String,System.Single)
// System.Boolean PixelCrushers.DialogueSystem.AbstractUIAlertControls::get_IsDone()
extern "C" bool AbstractUIAlertControls_get_IsDone_m6726 (AbstractUIAlertControls_t221 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.AbstractUIAlertControls::ShowMessage(System.String,System.Single)
extern "C" void AbstractUIAlertControls_ShowMessage_m6727 (AbstractUIAlertControls_t221 * __this, String_t* ___message, float ___duration, const MethodInfo* method) IL2CPP_METHOD_ATTR;
