#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.ParseSession
struct ParseSession_t1885;
// System.String
struct String_t;
// Parse.ParseQuery`1<Parse.ParseSession>
struct ParseQuery_1_t1985;
// System.Threading.Tasks.Task`1<Parse.ParseSession>
struct Task_1_t1984;
// System.Threading.CancellationToken
#include "Parse_Unity_System_Threading_CancellationToken.h"

// System.Boolean Parse.ParseSession::IsKeyMutable(System.String)
extern "C" bool ParseSession_IsKeyMutable_m8617 (ParseSession_t1885 * __this, String_t* ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.ParseSession::get_SessionToken()
extern "C" String_t* ParseSession_get_SessionToken_m8618 (ParseSession_t1885 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseQuery`1<Parse.ParseSession> Parse.ParseSession::get_Query()
extern "C" ParseQuery_1_t1985 * ParseSession_get_Query_m8619 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<Parse.ParseSession> Parse.ParseSession::GetCurrentSessionAsync()
extern "C" Task_1_t1984 * ParseSession_GetCurrentSessionAsync_m8620 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<Parse.ParseSession> Parse.ParseSession::GetCurrentSessionAsync(System.Threading.CancellationToken)
extern "C" Task_1_t1984 * ParseSession_GetCurrentSessionAsync_m8621 (Object_t * __this /* static, unused */, CancellationToken_t1753  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseSession::.ctor()
extern "C" void ParseSession__ctor_m8622 (ParseSession_t1885 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseSession::.cctor()
extern "C" void ParseSession__cctor_m8623 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
