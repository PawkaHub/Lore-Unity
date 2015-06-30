#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// WorkerMenu
struct WorkerMenu_t376;
// System.String
struct String_t;
// System.Object[]
struct ObjectU5BU5D_t21;
// System.Object
struct Object_t;

// System.Void WorkerMenu::.ctor()
extern "C" void WorkerMenu__ctor_m1464 (WorkerMenu_t376 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WorkerMenu::.cctor()
extern "C" void WorkerMenu__cctor_m1465 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String WorkerMenu::get_ErrorDialog()
extern "C" String_t* WorkerMenu_get_ErrorDialog_m1466 (WorkerMenu_t376 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WorkerMenu::set_ErrorDialog(System.String)
extern "C" void WorkerMenu_set_ErrorDialog_m1467 (WorkerMenu_t376 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WorkerMenu::Awake()
extern "C" void WorkerMenu_Awake_m1468 (WorkerMenu_t376 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WorkerMenu::OnGUI()
extern "C" void WorkerMenu_OnGUI_m1469 (WorkerMenu_t376 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WorkerMenu::OnJoinedRoom()
extern "C" void WorkerMenu_OnJoinedRoom_m1470 (WorkerMenu_t376 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WorkerMenu::OnPhotonCreateRoomFailed()
extern "C" void WorkerMenu_OnPhotonCreateRoomFailed_m1471 (WorkerMenu_t376 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WorkerMenu::OnPhotonJoinRoomFailed(System.Object[])
extern "C" void WorkerMenu_OnPhotonJoinRoomFailed_m1472 (WorkerMenu_t376 * __this, ObjectU5BU5D_t21* ___cause, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WorkerMenu::OnPhotonRandomJoinFailed()
extern "C" void WorkerMenu_OnPhotonRandomJoinFailed_m1473 (WorkerMenu_t376 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WorkerMenu::OnCreatedRoom()
extern "C" void WorkerMenu_OnCreatedRoom_m1474 (WorkerMenu_t376 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WorkerMenu::OnDisconnectedFromPhoton()
extern "C" void WorkerMenu_OnDisconnectedFromPhoton_m1475 (WorkerMenu_t376 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void WorkerMenu::OnFailedToConnectToPhoton(System.Object)
extern "C" void WorkerMenu_OnFailedToConnectToPhoton_m1476 (WorkerMenu_t376 * __this, Object_t * ___parameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
