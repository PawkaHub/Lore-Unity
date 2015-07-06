#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.ParsePush
struct ParsePush_t1626;
// Parse.ParseQuery`1<Parse.ParseInstallation>
struct ParseQuery_1_t1624;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t1395;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t1555;
// System.String
struct String_t;
// System.Threading.Tasks.Task
struct Task_t723;
// System.EventHandler`1<Parse.ParsePushNotificationEventArgs>
struct EventHandler_1_t1734;
// System.Nullable`1<System.DateTime>
#include "mscorlib_System_Nullable_1_gen_0.h"
// System.Nullable`1<System.TimeSpan>
#include "mscorlib_System_Nullable_1_gen_1.h"
// System.Threading.CancellationToken
#include "Parse_Unity_System_Threading_CancellationToken.h"

// System.Void Parse.ParsePush::.ctor()
extern "C" void ParsePush__ctor_m8107 (ParsePush_t1626 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<Parse.ParseInstallation> Parse.ParsePush::get_Query()
extern "C" ParseQuery_1_t1624 * ParsePush_get_Query_m8108 (ParsePush_t1626 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParsePush::set_Query(Parse.ParseQuery`1<Parse.ParseInstallation>)
extern "C" void ParsePush_set_Query_m8109 (ParsePush_t1626 * __this, ParseQuery_1_t1624 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<System.String> Parse.ParsePush::get_Channels()
extern "C" Object_t* ParsePush_get_Channels_m8110 (ParsePush_t1626 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParsePush::set_Channels(System.Collections.Generic.IEnumerable`1<System.String>)
extern "C" void ParsePush_set_Channels_m8111 (ParsePush_t1626 * __this, Object_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<System.DateTime> Parse.ParsePush::get_Expiration()
extern "C" Nullable_1_t1619  ParsePush_get_Expiration_m8112 (ParsePush_t1626 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParsePush::set_Expiration(System.Nullable`1<System.DateTime>)
extern "C" void ParsePush_set_Expiration_m8113 (ParsePush_t1626 * __this, Nullable_1_t1619  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<System.TimeSpan> Parse.ParsePush::get_ExpirationInterval()
extern "C" Nullable_1_t1627  ParsePush_get_ExpirationInterval_m8114 (ParsePush_t1626 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParsePush::set_ExpirationInterval(System.Nullable`1<System.TimeSpan>)
extern "C" void ParsePush_set_ExpirationInterval_m8115 (ParsePush_t1626 * __this, Nullable_1_t1627  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.ParsePush::get_Data()
extern "C" Object_t* ParsePush_get_Data_m8116 (ParsePush_t1626 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParsePush::set_Data(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C" void ParsePush_set_Data_m8117 (ParsePush_t1626 * __this, Object_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.ParsePush::get_Alert()
extern "C" String_t* ParsePush_get_Alert_m8118 (ParsePush_t1626 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParsePush::set_Alert(System.String)
extern "C" void ParsePush_set_Alert_m8119 (ParsePush_t1626 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.ParsePush::Encode()
extern "C" Object_t* ParsePush_Encode_m8120 (ParsePush_t1626 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParsePush::SendAsync()
extern "C" Task_t723 * ParsePush_SendAsync_m8121 (ParsePush_t1626 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParsePush::SendAsync(System.Threading.CancellationToken)
extern "C" Task_t723 * ParsePush_SendAsync_m8122 (ParsePush_t1626 * __this, CancellationToken_t1496  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParsePush::SendAlertAsync(System.String)
extern "C" Task_t723 * ParsePush_SendAlertAsync_m8123 (Object_t * __this /* static, unused */, String_t* ___alert, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParsePush::SendAlertAsync(System.String,System.String)
extern "C" Task_t723 * ParsePush_SendAlertAsync_m8124 (Object_t * __this /* static, unused */, String_t* ___alert, String_t* ___channel, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParsePush::SendAlertAsync(System.String,System.Collections.Generic.IEnumerable`1<System.String>)
extern "C" Task_t723 * ParsePush_SendAlertAsync_m8125 (Object_t * __this /* static, unused */, String_t* ___alert, Object_t* ___channels, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParsePush::SendAlertAsync(System.String,Parse.ParseQuery`1<Parse.ParseInstallation>)
extern "C" Task_t723 * ParsePush_SendAlertAsync_m8126 (Object_t * __this /* static, unused */, String_t* ___alert, ParseQuery_1_t1624 * ___query, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParsePush::SendDataAsync(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C" Task_t723 * ParsePush_SendDataAsync_m8127 (Object_t * __this /* static, unused */, Object_t* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParsePush::SendDataAsync(System.Collections.Generic.IDictionary`2<System.String,System.Object>,System.String)
extern "C" Task_t723 * ParsePush_SendDataAsync_m8128 (Object_t * __this /* static, unused */, Object_t* ___data, String_t* ___channel, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParsePush::SendDataAsync(System.Collections.Generic.IDictionary`2<System.String,System.Object>,System.Collections.Generic.IEnumerable`1<System.String>)
extern "C" Task_t723 * ParsePush_SendDataAsync_m8129 (Object_t * __this /* static, unused */, Object_t* ___data, Object_t* ___channels, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParsePush::SendDataAsync(System.Collections.Generic.IDictionary`2<System.String,System.Object>,Parse.ParseQuery`1<Parse.ParseInstallation>)
extern "C" Task_t723 * ParsePush_SendDataAsync_m8130 (Object_t * __this /* static, unused */, Object_t* ___data, ParseQuery_1_t1624 * ___query, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParsePush::add_ParsePushNotificationReceived(System.EventHandler`1<Parse.ParsePushNotificationEventArgs>)
extern "C" void ParsePush_add_ParsePushNotificationReceived_m8131 (Object_t * __this /* static, unused */, EventHandler_1_t1734 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParsePush::remove_ParsePushNotificationReceived(System.EventHandler`1<Parse.ParsePushNotificationEventArgs>)
extern "C" void ParsePush_remove_ParsePushNotificationReceived_m8132 (Object_t * __this /* static, unused */, EventHandler_1_t1734 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParsePush::SubscribeAsync(System.String)
extern "C" Task_t723 * ParsePush_SubscribeAsync_m8133 (Object_t * __this /* static, unused */, String_t* ___channel, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParsePush::SubscribeAsync(System.String,System.Threading.CancellationToken)
extern "C" Task_t723 * ParsePush_SubscribeAsync_m8134 (Object_t * __this /* static, unused */, String_t* ___channel, CancellationToken_t1496  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParsePush::SubscribeAsync(System.Collections.Generic.IEnumerable`1<System.String>)
extern "C" Task_t723 * ParsePush_SubscribeAsync_m8135 (Object_t * __this /* static, unused */, Object_t* ___channels, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParsePush::SubscribeAsync(System.Collections.Generic.IEnumerable`1<System.String>,System.Threading.CancellationToken)
extern "C" Task_t723 * ParsePush_SubscribeAsync_m8136 (Object_t * __this /* static, unused */, Object_t* ___channels, CancellationToken_t1496  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParsePush::UnsubscribeAsync(System.String)
extern "C" Task_t723 * ParsePush_UnsubscribeAsync_m8137 (Object_t * __this /* static, unused */, String_t* ___channel, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParsePush::UnsubscribeAsync(System.String,System.Threading.CancellationToken)
extern "C" Task_t723 * ParsePush_UnsubscribeAsync_m8138 (Object_t * __this /* static, unused */, String_t* ___channel, CancellationToken_t1496  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParsePush::UnsubscribeAsync(System.Collections.Generic.IEnumerable`1<System.String>)
extern "C" Task_t723 * ParsePush_UnsubscribeAsync_m8139 (Object_t * __this /* static, unused */, Object_t* ___channels, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParsePush::UnsubscribeAsync(System.Collections.Generic.IEnumerable`1<System.String>,System.Threading.CancellationToken)
extern "C" Task_t723 * ParsePush_UnsubscribeAsync_m8140 (Object_t * __this /* static, unused */, Object_t* ___channels, CancellationToken_t1496  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParsePush::.cctor()
extern "C" void ParsePush__cctor_m8141 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
