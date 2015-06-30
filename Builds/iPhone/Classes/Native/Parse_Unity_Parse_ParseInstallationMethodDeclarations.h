#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.ParseInstallation
struct ParseInstallation_t1480;
// System.String
struct String_t;
// System.Version
struct Version_t1549;
// System.Collections.Generic.IList`1<System.String>
struct IList_1_t1561;
// System.Threading.Tasks.Task
struct Task_t1418;
// System.Byte[]
struct ByteU5BU5D_t25;
// System.Guid
#include "mscorlib_System_Guid.h"
// System.Threading.CancellationToken
#include "Parse_Unity_System_Threading_CancellationToken.h"

// System.Void Parse.ParseInstallation::.ctor()
extern "C" void ParseInstallation__ctor_m7082 (ParseInstallation_t1480 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseInstallation Parse.ParseInstallation::get_CurrentInstallation()
extern "C" ParseInstallation_t1480 * ParseInstallation_get_CurrentInstallation_m7083 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseInstallation::SaveCurrentInstallation()
extern "C" void ParseInstallation_SaveCurrentInstallation_m7084 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseInstallation::ClearInMemoryInstallation()
extern "C" void ParseInstallation_ClearInMemoryInstallation_m7085 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Guid Parse.ParseInstallation::get_InstallationId()
extern "C" Guid_t1562  ParseInstallation_get_InstallationId_m7086 (ParseInstallation_t1480 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Guid Parse.ParseInstallation::getInstallationId()
extern "C" Guid_t1562  ParseInstallation_getInstallationId_m7087 (ParseInstallation_t1480 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.ParseInstallation::get_DeviceType()
extern "C" String_t* ParseInstallation_get_DeviceType_m7088 (ParseInstallation_t1480 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.ParseInstallation::get_AppName()
extern "C" String_t* ParseInstallation_get_AppName_m7089 (ParseInstallation_t1480 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.ParseInstallation::get_AppVersion()
extern "C" String_t* ParseInstallation_get_AppVersion_m7090 (ParseInstallation_t1480 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.ParseInstallation::get_AppIdentifier()
extern "C" String_t* ParseInstallation_get_AppIdentifier_m7091 (ParseInstallation_t1480 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.ParseInstallation::get_TimeZone()
extern "C" String_t* ParseInstallation_get_TimeZone_m7092 (ParseInstallation_t1480 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Version Parse.ParseInstallation::get_ParseVersion()
extern "C" Version_t1549 * ParseInstallation_get_ParseVersion_m7093 (ParseInstallation_t1480 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Version Parse.ParseInstallation::getParseVersion()
extern "C" Version_t1549 * ParseInstallation_getParseVersion_m7094 (ParseInstallation_t1480 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.String> Parse.ParseInstallation::get_Channels()
extern "C" Object_t* ParseInstallation_get_Channels_m7095 (ParseInstallation_t1480 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseInstallation::IsKeyMutable(System.String)
extern "C" bool ParseInstallation_IsKeyMutable_m7096 (ParseInstallation_t1480 * __this, String_t* ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseInstallation::SetAutomaticValues()
extern "C" void ParseInstallation_SetAutomaticValues_m7097 (ParseInstallation_t1480 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseInstallation::SaveAsync(System.Threading.Tasks.Task,System.Threading.CancellationToken)
extern "C" Task_t1418 * ParseInstallation_SaveAsync_m7098 (ParseInstallation_t1480 * __this, Task_t1418 * ___toAwait, CancellationToken_t1398  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.ParseInstallation::getDeviceType()
extern "C" String_t* ParseInstallation_getDeviceType_m7099 (ParseInstallation_t1480 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.ParseInstallation::getAppName()
extern "C" String_t* ParseInstallation_getAppName_m7100 (ParseInstallation_t1480 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.ParseInstallation::getAppIdentifier()
extern "C" String_t* ParseInstallation_getAppIdentifier_m7101 (ParseInstallation_t1480 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.ParseInstallation::getAppVersion()
extern "C" String_t* ParseInstallation_getAppVersion_m7102 (ParseInstallation_t1480 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.ParseInstallation::getTimeZone()
extern "C" String_t* ParseInstallation_getTimeZone_m7103 (ParseInstallation_t1480 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.ParseInstallation::get_DeviceToken()
extern "C" String_t* ParseInstallation_get_DeviceToken_m7104 (ParseInstallation_t1480 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseInstallation::set_DeviceToken(System.String)
extern "C" void ParseInstallation_set_DeviceToken_m7105 (ParseInstallation_t1480 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseInstallation::SetDeviceTokenFromData(System.Byte[])
extern "C" void ParseInstallation_SetDeviceTokenFromData_m7106 (ParseInstallation_t1480 * __this, ByteU5BU5D_t25* ___deviceToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Parse.ParseInstallation::get_Badge()
extern "C" int32_t ParseInstallation_get_Badge_m7107 (ParseInstallation_t1480 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseInstallation::SetPlatformAutomaticValue()
extern "C" void ParseInstallation_SetPlatformAutomaticValue_m7108 (ParseInstallation_t1480 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseInstallation::<>n__FabricatedMethod94(System.Threading.Tasks.Task,System.Threading.CancellationToken)
extern "C" Task_t1418 * ParseInstallation_U3CU3En__FabricatedMethod94_m7109 (ParseInstallation_t1480 * __this, Task_t1418 * p0, CancellationToken_t1398  p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseInstallation::<SaveAsync>b__8d(System.Threading.Tasks.Task&)
extern "C" void ParseInstallation_U3CSaveAsyncU3Eb__8d_m7110 (Object_t * __this /* static, unused */, Task_t1418 ** ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseInstallation::<SaveAsync>b__8f(System.Threading.Tasks.Task)
extern "C" void ParseInstallation_U3CSaveAsyncU3Eb__8f_m7111 (Object_t * __this /* static, unused */, Task_t1418 * ____, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseInstallation::.cctor()
extern "C" void ParseInstallation__cctor_m7112 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
