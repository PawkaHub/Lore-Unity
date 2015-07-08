#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.ParseUser
struct ParseUser_t803;
// System.String
struct String_t;
// Parse.ParseQuery`1<Parse.ParseUser>
struct ParseQuery_1_t806;
// System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>>
struct IDictionary_2_t1986;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t1810;
// System.Threading.Tasks.Task
struct Task_t344;
// System.Threading.Tasks.Task`1<Parse.ParseUser>
struct Task_1_t639;
// System.Threading.Tasks.Task`1<Parse.ParseObject>
struct Task_1_t1970;
// Parse.Internal.IParseAuthenticationProvider
struct IParseAuthenticationProvider_t1987;
// Parse.ParseObject
struct ParseObject_t596;
// System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>
struct Task_1_t1965;
// System.Threading.CancellationToken
#include "Parse_Unity_System_Threading_CancellationToken.h"

// System.Void Parse.ParseUser::.ctor()
extern "C" void ParseUser__ctor_m3742 (ParseUser_t803 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseUser::get_IsAuthenticated()
extern "C" bool ParseUser_get_IsAuthenticated_m8650 (ParseUser_t803 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseUser::Remove(System.String)
extern "C" void ParseUser_Remove_m8651 (ParseUser_t803 * __this, String_t* ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseUser::IsKeyMutable(System.String)
extern "C" bool ParseUser_IsKeyMutable_m8652 (ParseUser_t803 * __this, String_t* ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseUser::MergeMagicFields(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C" void ParseUser_MergeMagicFields_m8653 (ParseUser_t803 * __this, Object_t* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseUser::MergeAfterSave(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C" void ParseUser_MergeAfterSave_m8654 (ParseUser_t803 * __this, Object_t* ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseUser::MergeAfterFetch(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C" void ParseUser_MergeAfterFetch_m8655 (ParseUser_t803 * __this, Object_t* ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.ParseUser::get_SessionToken()
extern "C" String_t* ParseUser_get_SessionToken_m8656 (ParseUser_t803 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseUser::SetSessionTokenAsync(System.String)
extern "C" Task_t344 * ParseUser_SetSessionTokenAsync_m8657 (ParseUser_t803 * __this, String_t* ___newSessionToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseUser::SetSessionTokenAsync(System.String,System.Threading.CancellationToken)
extern "C" Task_t344 * ParseUser_SetSessionTokenAsync_m8658 (ParseUser_t803 * __this, String_t* ___newSessionToken, CancellationToken_t1753  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.ParseUser::get_Username()
extern "C" String_t* ParseUser_get_Username_m8659 (ParseUser_t803 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseUser::set_Username(System.String)
extern "C" void ParseUser_set_Username_m3743 (ParseUser_t803 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.ParseUser::get_Password()
extern "C" String_t* ParseUser_get_Password_m8660 (ParseUser_t803 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseUser::set_Password(System.String)
extern "C" void ParseUser_set_Password_m3744 (ParseUser_t803 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.ParseUser::get_Email()
extern "C" String_t* ParseUser_get_Email_m8661 (ParseUser_t803 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseUser::set_Email(System.String)
extern "C" void ParseUser_set_Email_m3745 (ParseUser_t803 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseUser::SignUpAsync(System.Threading.Tasks.Task,System.Threading.CancellationToken)
extern "C" Task_t344 * ParseUser_SignUpAsync_m8662 (ParseUser_t803 * __this, Task_t344 * ___toAwait, CancellationToken_t1753  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseUser::SignUpAsync()
extern "C" Task_t344 * ParseUser_SignUpAsync_m3746 (ParseUser_t803 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseUser::SignUpAsync(System.Threading.CancellationToken)
extern "C" Task_t344 * ParseUser_SignUpAsync_m8663 (ParseUser_t803 * __this, CancellationToken_t1753  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<Parse.ParseUser> Parse.ParseUser::LogInAsync(System.String,System.String)
extern "C" Task_1_t639 * ParseUser_LogInAsync_m3753 (Object_t * __this /* static, unused */, String_t* ___username, String_t* ___password, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<Parse.ParseUser> Parse.ParseUser::LogInAsync(System.String,System.String,System.Threading.CancellationToken)
extern "C" Task_1_t639 * ParseUser_LogInAsync_m8664 (Object_t * __this /* static, unused */, String_t* ___username, String_t* ___password, CancellationToken_t1753  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<Parse.ParseUser> Parse.ParseUser::BecomeAsync(System.String)
extern "C" Task_1_t639 * ParseUser_BecomeAsync_m8665 (Object_t * __this /* static, unused */, String_t* ___sessionToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<Parse.ParseUser> Parse.ParseUser::BecomeAsync(System.String,System.Threading.CancellationToken)
extern "C" Task_1_t639 * ParseUser_BecomeAsync_m8666 (Object_t * __this /* static, unused */, String_t* ___sessionToken, CancellationToken_t1753  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseUser::SaveAsync(System.Threading.Tasks.Task,System.Threading.CancellationToken)
extern "C" Task_t344 * ParseUser_SaveAsync_m8667 (ParseUser_t803 * __this, Task_t344 * ___toAwait, CancellationToken_t1753  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<Parse.ParseObject> Parse.ParseUser::FetchAsyncInternal(System.Threading.Tasks.Task,System.Threading.CancellationToken)
extern "C" Task_1_t1970 * ParseUser_FetchAsyncInternal_m8668 (ParseUser_t803 * __this, Task_t344 * ___toAwait, CancellationToken_t1753  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseUser::LogOut()
extern "C" void ParseUser_LogOut_m3754 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseUser::LogOutAsync()
extern "C" Task_t344 * ParseUser_LogOutAsync_m8669 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseUser::LogOutAsync(System.Threading.CancellationToken)
extern "C" Task_t344 * ParseUser_LogOutAsync_m8670 (Object_t * __this /* static, unused */, CancellationToken_t1753  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.ParseUser::get_CurrentSessionToken()
extern "C" String_t* ParseUser_get_CurrentSessionToken_m8671 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseUser Parse.ParseUser::get_CurrentUser()
extern "C" ParseUser_t803 * ParseUser_get_CurrentUser_m8672 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<Parse.ParseUser> Parse.ParseUser::GetCurrentUserAsync()
extern "C" Task_1_t639 * ParseUser_GetCurrentUserAsync_m8673 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<Parse.ParseUser> Parse.ParseUser::GetCurrentUserAsync(System.Threading.CancellationToken)
extern "C" Task_1_t639 * ParseUser_GetCurrentUserAsync_m8674 (Object_t * __this /* static, unused */, CancellationToken_t1753  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseUser::SaveCurrentUser(Parse.ParseUser)
extern "C" void ParseUser_SaveCurrentUser_m8675 (Object_t * __this /* static, unused */, ParseUser_t803 * ___user, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseUser::SaveCurrentUserAsync(Parse.ParseUser)
extern "C" Task_t344 * ParseUser_SaveCurrentUserAsync_m8676 (Object_t * __this /* static, unused */, ParseUser_t803 * ___user, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseUser::SaveCurrentUserAsync(Parse.ParseUser,System.Threading.CancellationToken)
extern "C" Task_t344 * ParseUser_SaveCurrentUserAsync_m8677 (Object_t * __this /* static, unused */, ParseUser_t803 * ___user, CancellationToken_t1753  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseUser::ClearInMemoryUser()
extern "C" void ParseUser_ClearInMemoryUser_m8678 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseUser::get_IsCurrentUser()
extern "C" bool ParseUser_get_IsCurrentUser_m8679 (ParseUser_t803 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<Parse.ParseUser> Parse.ParseUser::get_Query()
extern "C" ParseQuery_1_t806 * ParseUser_get_Query_m3747 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseUser::EnableRevocableSessionAsync()
extern "C" Task_t344 * ParseUser_EnableRevocableSessionAsync_m8680 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseUser::EnableRevocableSessionAsync(System.Threading.CancellationToken)
extern "C" Task_t344 * ParseUser_EnableRevocableSessionAsync_m8681 (Object_t * __this /* static, unused */, CancellationToken_t1753  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseUser::DisableRevocableSession()
extern "C" void ParseUser_DisableRevocableSession_m8682 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseUser::get_IsRevocableSessionEnabled()
extern "C" bool ParseUser_get_IsRevocableSessionEnabled_m8683 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseUser::IsRevocableSessionToken(System.String)
extern "C" bool ParseUser_IsRevocableSessionToken_m8684 (Object_t * __this /* static, unused */, String_t* ___sessionToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseUser::UpgradeToRevocableSessionAsync()
extern "C" Task_t344 * ParseUser_UpgradeToRevocableSessionAsync_m8685 (ParseUser_t803 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseUser::UpgradeToRevocableSessionAsync(System.Threading.CancellationToken)
extern "C" Task_t344 * ParseUser_UpgradeToRevocableSessionAsync_m8686 (ParseUser_t803 * __this, CancellationToken_t1753  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseUser::UpgradeToRevocableSessionAsync(System.Threading.Tasks.Task,System.Threading.CancellationToken)
extern "C" Task_t344 * ParseUser_UpgradeToRevocableSessionAsync_m8687 (ParseUser_t803 * __this, Task_t344 * ___toAwait, CancellationToken_t1753  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseUser::RequestPasswordResetAsync(System.String)
extern "C" Task_t344 * ParseUser_RequestPasswordResetAsync_m3755 (Object_t * __this /* static, unused */, String_t* ___email, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseUser::RequestPasswordResetAsync(System.String,System.Threading.CancellationToken)
extern "C" Task_t344 * ParseUser_RequestPasswordResetAsync_m8688 (Object_t * __this /* static, unused */, String_t* ___email, CancellationToken_t1753  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>> Parse.ParseUser::get_AuthData()
extern "C" Object_t* ParseUser_get_AuthData_m8689 (ParseUser_t803 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseUser::set_AuthData(System.Collections.Generic.IDictionary`2<System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>>)
extern "C" void ParseUser_set_AuthData_m8690 (ParseUser_t803 * __this, Object_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.Internal.IParseAuthenticationProvider Parse.ParseUser::GetProvider(System.String)
extern "C" Object_t * ParseUser_GetProvider_m8691 (Object_t * __this /* static, unused */, String_t* ___providerName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseUser::CleanupAuthData()
extern "C" void ParseUser_CleanupAuthData_m8692 (ParseUser_t803 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseUser::SynchronizeAllAuthData()
extern "C" void ParseUser_SynchronizeAllAuthData_m8693 (ParseUser_t803 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseUser::SynchronizeAuthData(Parse.Internal.IParseAuthenticationProvider)
extern "C" void ParseUser_SynchronizeAuthData_m8694 (ParseUser_t803 * __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseUser::LinkWithAsync(System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>,System.Threading.CancellationToken)
extern "C" Task_t344 * ParseUser_LinkWithAsync_m8695 (ParseUser_t803 * __this, String_t* ___authType, Object_t* ___data, CancellationToken_t1753  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseUser::LinkWithAsync(System.String,System.Threading.CancellationToken)
extern "C" Task_t344 * ParseUser_LinkWithAsync_m8696 (ParseUser_t803 * __this, String_t* ___authType, CancellationToken_t1753  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseUser::UnlinkFromAsync(System.String,System.Threading.CancellationToken)
extern "C" Task_t344 * ParseUser_UnlinkFromAsync_m8697 (ParseUser_t803 * __this, String_t* ___authType, CancellationToken_t1753  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseUser::IsLinked(System.String)
extern "C" bool ParseUser_IsLinked_m8698 (ParseUser_t803 * __this, String_t* ___authType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseUser::LogOutWithProviders()
extern "C" void ParseUser_LogOutWithProviders_m8699 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<Parse.ParseUser> Parse.ParseUser::LogInWithAsync(System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>,System.Threading.CancellationToken)
extern "C" Task_1_t639 * ParseUser_LogInWithAsync_m8700 (Object_t * __this /* static, unused */, String_t* ___authType, Object_t* ___data, CancellationToken_t1753  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<Parse.ParseUser> Parse.ParseUser::LogInWithAsync(System.String,System.Threading.CancellationToken)
extern "C" Task_1_t639 * ParseUser_LogInWithAsync_m8701 (Object_t * __this /* static, unused */, String_t* ___authType, CancellationToken_t1753  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseUser::RegisterProvider(Parse.Internal.IParseAuthenticationProvider)
extern "C" void ParseUser_RegisterProvider_m8702 (Object_t * __this /* static, unused */, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseUser::<SignUpAsync>b__0(System.Threading.Tasks.Task)
extern "C" void ParseUser_U3CSignUpAsyncU3Eb__0_m8703 (ParseUser_t803 * __this, Task_t344 * ____, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseUser::<SaveAsync>b__c(System.Threading.Tasks.Task)
extern "C" void ParseUser_U3CSaveAsyncU3Eb__c_m8704 (ParseUser_t803 * __this, Task_t344 * ____, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseObject Parse.ParseUser::<FetchAsyncInternal>b__e(System.Threading.Tasks.Task`1<Parse.ParseObject>)
extern "C" ParseObject_t596 * ParseUser_U3CFetchAsyncInternalU3Eb__e_m8705 (ParseUser_t803 * __this, Task_1_t1970 * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseUser Parse.ParseUser::<GetCurrentUserAsync>b__12()
extern "C" ParseUser_t803 * ParseUser_U3CGetCurrentUserAsyncU3Eb__12_m8706 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task Parse.ParseUser::<UpgradeToRevocableSessionAsync>b__1e(System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>)
extern "C" Task_t344 * ParseUser_U3CUpgradeToRevocableSessionAsyncU3Eb__1e_m8707 (ParseUser_t803 * __this, Task_1_t1965 * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseUser::.cctor()
extern "C" void ParseUser__cctor_m8708 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
