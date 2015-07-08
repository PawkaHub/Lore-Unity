#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.ParseInstallation
struct ParseInstallation_t1871;
// Parse.ParseQuery`1<Parse.ParseInstallation>
struct ParseQuery_1_t1875;
// System.String
struct String_t;
// System.Version
struct Version_t1963;
// System.Collections.Generic.IList`1<System.String>
struct IList_1_t1787;
// System.Threading.Tasks.Task
struct Task_t344;
// System.Byte[]
struct ByteU5BU5D_t25;
// System.Guid
#include "mscorlib_System_Guid.h"
// System.Threading.CancellationToken
#include "Parse_Unity_System_Threading_CancellationToken.h"

// System.Void Parse.ParseInstallation::.ctor()
extern "C" void ParseInstallation__ctor_m8513 (ParseInstallation_t1871 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseInstallation Parse.ParseInstallation::get_CurrentInstallation()
extern "C" ParseInstallation_t1871 * ParseInstallation_get_CurrentInstallation_m8514 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseInstallation::SaveCurrentInstallation()
extern "C" void ParseInstallation_SaveCurrentInstallation_m8515 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseInstallation::ClearInMemoryInstallation()
extern "C" void ParseInstallation_ClearInMemoryInstallation_m8516 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<Parse.ParseInstallation> Parse.ParseInstallation::get_Query()
extern "C" ParseQuery_1_t1875 * ParseInstallation_get_Query_m8517 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Guid Parse.ParseInstallation::get_InstallationId()
extern "C" Guid_t1979  ParseInstallation_get_InstallationId_m8518 (ParseInstallation_t1871 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseInstallation::set_InstallationId(System.Guid)
extern "C" void ParseInstallation_set_InstallationId_m8519 (ParseInstallation_t1871 * __this, Guid_t1979  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Guid Parse.ParseInstallation::getInstallationId()
extern "C" Guid_t1979  ParseInstallation_getInstallationId_m8520 (ParseInstallation_t1871 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.ParseInstallation::get_DeviceType()
extern "C" String_t* ParseInstallation_get_DeviceType_m8521 (ParseInstallation_t1871 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseInstallation::set_DeviceType(System.String)
extern "C" void ParseInstallation_set_DeviceType_m8522 (ParseInstallation_t1871 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.ParseInstallation::get_AppName()
extern "C" String_t* ParseInstallation_get_AppName_m8523 (ParseInstallation_t1871 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseInstallation::set_AppName(System.String)
extern "C" void ParseInstallation_set_AppName_m8524 (ParseInstallation_t1871 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.ParseInstallation::get_AppVersion()
extern "C" String_t* ParseInstallation_get_AppVersion_m8525 (ParseInstallation_t1871 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseInstallation::set_AppVersion(System.String)
extern "C" void ParseInstallation_set_AppVersion_m8526 (ParseInstallation_t1871 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.ParseInstallation::get_AppIdentifier()
extern "C" String_t* ParseInstallation_get_AppIdentifier_m8527 (ParseInstallation_t1871 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseInstallation::set_AppIdentifier(System.String)
extern "C" void ParseInstallation_set_AppIdentifier_m8528 (ParseInstallation_t1871 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.ParseInstallation::get_TimeZone()
extern "C" String_t* ParseInstallation_get_TimeZone_m8529 (ParseInstallation_t1871 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseInstallation::set_TimeZone(System.String)
extern "C" void ParseInstallation_set_TimeZone_m8530 (ParseInstallation_t1871 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Version Parse.ParseInstallation::get_ParseVersion()
extern "C" Version_t1963 * ParseInstallation_get_ParseVersion_m8531 (ParseInstallation_t1871 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseInstallation::set_ParseVersion(System.Version)
extern "C" void ParseInstallation_set_ParseVersion_m8532 (ParseInstallation_t1871 * __this, Version_t1963 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Version Parse.ParseInstallation::getParseVersion()
extern "C" Version_t1963 * ParseInstallation_getParseVersion_m8533 (ParseInstallation_t1871 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.String> Parse.ParseInstallation::get_Channels()
extern "C" Object_t* ParseInstallation_get_Channels_m8534 (ParseInstallation_t1871 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseInstallation::set_Channels(System.Collections.Generic.IList`1<System.String>)
extern "C" void ParseInstallation_set_Channels_m8535 (ParseInstallation_t1871 * __this, Object_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseInstallation::IsKeyMutable(System.String)
extern "C" bool ParseInstallation_IsKeyMutable_m8536 (ParseInstallation_t1871 * __this, String_t* ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseInstallation::SetAutomaticValues()
extern "C" void ParseInstallation_SetAutomaticValues_m8537 (ParseInstallation_t1871 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseInstallation::SaveAsync(System.Threading.Tasks.Task,System.Threading.CancellationToken)
extern "C" Task_t344 * ParseInstallation_SaveAsync_m8538 (ParseInstallation_t1871 * __this, Task_t344 * ___toAwait, CancellationToken_t1753  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.ParseInstallation::getDeviceType()
extern "C" String_t* ParseInstallation_getDeviceType_m8539 (ParseInstallation_t1871 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.ParseInstallation::getAppName()
extern "C" String_t* ParseInstallation_getAppName_m8540 (ParseInstallation_t1871 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.ParseInstallation::getAppIdentifier()
extern "C" String_t* ParseInstallation_getAppIdentifier_m8541 (ParseInstallation_t1871 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.ParseInstallation::getAppVersion()
extern "C" String_t* ParseInstallation_getAppVersion_m8542 (ParseInstallation_t1871 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.ParseInstallation::getTimeZone()
extern "C" String_t* ParseInstallation_getTimeZone_m8543 (ParseInstallation_t1871 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.ParseInstallation::get_DeviceToken()
extern "C" String_t* ParseInstallation_get_DeviceToken_m8544 (ParseInstallation_t1871 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseInstallation::set_DeviceToken(System.String)
extern "C" void ParseInstallation_set_DeviceToken_m8545 (ParseInstallation_t1871 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseInstallation::SetDeviceTokenFromData(System.Byte[])
extern "C" void ParseInstallation_SetDeviceTokenFromData_m8546 (ParseInstallation_t1871 * __this, ByteU5BU5D_t25* ___deviceToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Parse.ParseInstallation::get_Badge()
extern "C" int32_t ParseInstallation_get_Badge_m8547 (ParseInstallation_t1871 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseInstallation::set_Badge(System.Int32)
extern "C" void ParseInstallation_set_Badge_m8548 (ParseInstallation_t1871 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseInstallation::SetPlatformAutomaticValue()
extern "C" void ParseInstallation_SetPlatformAutomaticValue_m8549 (ParseInstallation_t1871 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseInstallation::<>n__FabricatedMethod94(System.Threading.Tasks.Task,System.Threading.CancellationToken)
extern "C" Task_t344 * ParseInstallation_U3CU3En__FabricatedMethod94_m8550 (ParseInstallation_t1871 * __this, Task_t344 * p0, CancellationToken_t1753  p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseInstallation::<SaveAsync>b__8d(System.Threading.Tasks.Task&)
extern "C" void ParseInstallation_U3CSaveAsyncU3Eb__8d_m8551 (Object_t * __this /* static, unused */, Task_t344 ** ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseInstallation::<SaveAsync>b__8f(System.Threading.Tasks.Task)
extern "C" void ParseInstallation_U3CSaveAsyncU3Eb__8f_m8552 (Object_t * __this /* static, unused */, Task_t344 * ____, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseInstallation::.cctor()
extern "C" void ParseInstallation__cctor_m8553 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
