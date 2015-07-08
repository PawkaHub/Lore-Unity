#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.ParseACL
struct ParseACL_t1803;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t1810;
// Parse.ParseUser
struct ParseUser_t803;
// System.String
struct String_t;
// Parse.ParseRole
struct ParseRole_t1882;
// Parse.ParseACL/AccessKind
#include "Parse_Unity_Parse_ParseACL_AccessKind.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_5.h"

// System.Void Parse.ParseACL::.ctor(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C" void ParseACL__ctor_m8205 (ParseACL_t1803 * __this, Object_t* ___jsonObject, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseACL::.ctor()
extern "C" void ParseACL__ctor_m8206 (ParseACL_t1803 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseACL::.ctor(Parse.ParseUser)
extern "C" void ParseACL__ctor_m8207 (ParseACL_t1803 * __this, ParseUser_t803 * ___owner, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.ParseACL::ToJSON()
extern "C" Object_t* ParseACL_ToJSON_m8208 (ParseACL_t1803 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseACL::SetAccess(Parse.ParseACL/AccessKind,System.String,System.Boolean)
extern "C" void ParseACL_SetAccess_m8209 (ParseACL_t1803 * __this, int32_t ___kind, String_t* ___userId, bool ___allowed, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseACL::GetAccess(Parse.ParseACL/AccessKind,System.String)
extern "C" bool ParseACL_GetAccess_m8210 (ParseACL_t1803 * __this, int32_t ___kind, String_t* ___userId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseACL::get_PublicReadAccess()
extern "C" bool ParseACL_get_PublicReadAccess_m8211 (ParseACL_t1803 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseACL::set_PublicReadAccess(System.Boolean)
extern "C" void ParseACL_set_PublicReadAccess_m8212 (ParseACL_t1803 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseACL::get_PublicWriteAccess()
extern "C" bool ParseACL_get_PublicWriteAccess_m8213 (ParseACL_t1803 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseACL::set_PublicWriteAccess(System.Boolean)
extern "C" void ParseACL_set_PublicWriteAccess_m8214 (ParseACL_t1803 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseACL::SetReadAccess(System.String,System.Boolean)
extern "C" void ParseACL_SetReadAccess_m8215 (ParseACL_t1803 * __this, String_t* ___userId, bool ___allowed, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseACL::SetReadAccess(Parse.ParseUser,System.Boolean)
extern "C" void ParseACL_SetReadAccess_m8216 (ParseACL_t1803 * __this, ParseUser_t803 * ___user, bool ___allowed, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseACL::SetWriteAccess(System.String,System.Boolean)
extern "C" void ParseACL_SetWriteAccess_m8217 (ParseACL_t1803 * __this, String_t* ___userId, bool ___allowed, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseACL::SetWriteAccess(Parse.ParseUser,System.Boolean)
extern "C" void ParseACL_SetWriteAccess_m8218 (ParseACL_t1803 * __this, ParseUser_t803 * ___user, bool ___allowed, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseACL::GetReadAccess(System.String)
extern "C" bool ParseACL_GetReadAccess_m8219 (ParseACL_t1803 * __this, String_t* ___userId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseACL::GetReadAccess(Parse.ParseUser)
extern "C" bool ParseACL_GetReadAccess_m8220 (ParseACL_t1803 * __this, ParseUser_t803 * ___user, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseACL::GetWriteAccess(System.String)
extern "C" bool ParseACL_GetWriteAccess_m8221 (ParseACL_t1803 * __this, String_t* ___userId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseACL::GetWriteAccess(Parse.ParseUser)
extern "C" bool ParseACL_GetWriteAccess_m8222 (ParseACL_t1803 * __this, ParseUser_t803 * ___user, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseACL::SetRoleReadAccess(System.String,System.Boolean)
extern "C" void ParseACL_SetRoleReadAccess_m8223 (ParseACL_t1803 * __this, String_t* ___roleName, bool ___allowed, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseACL::SetRoleReadAccess(Parse.ParseRole,System.Boolean)
extern "C" void ParseACL_SetRoleReadAccess_m8224 (ParseACL_t1803 * __this, ParseRole_t1882 * ___role, bool ___allowed, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseACL::GetRoleReadAccess(System.String)
extern "C" bool ParseACL_GetRoleReadAccess_m8225 (ParseACL_t1803 * __this, String_t* ___roleName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseACL::GetRoleReadAccess(Parse.ParseRole)
extern "C" bool ParseACL_GetRoleReadAccess_m8226 (ParseACL_t1803 * __this, ParseRole_t1882 * ___role, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseACL::SetRoleWriteAccess(System.String,System.Boolean)
extern "C" void ParseACL_SetRoleWriteAccess_m8227 (ParseACL_t1803 * __this, String_t* ___roleName, bool ___allowed, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseACL::SetRoleWriteAccess(Parse.ParseRole,System.Boolean)
extern "C" void ParseACL_SetRoleWriteAccess_m8228 (ParseACL_t1803 * __this, ParseRole_t1882 * ___role, bool ___allowed, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseACL::GetRoleWriteAccess(System.String)
extern "C" bool ParseACL_GetRoleWriteAccess_m8229 (ParseACL_t1803 * __this, String_t* ___roleName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseACL::GetRoleWriteAccess(Parse.ParseRole)
extern "C" bool ParseACL_GetRoleWriteAccess_m8230 (ParseACL_t1803 * __this, ParseRole_t1882 * ___role, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseACL::<.ctor>b__0(System.Collections.Generic.KeyValuePair`2<System.String,System.Object>)
extern "C" bool ParseACL_U3C_ctorU3Eb__0_m8231 (Object_t * __this /* static, unused */, KeyValuePair_2_t1962  ___pair, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.ParseACL::<.ctor>b__1(System.Collections.Generic.KeyValuePair`2<System.String,System.Object>)
extern "C" String_t* ParseACL_U3C_ctorU3Eb__1_m8232 (Object_t * __this /* static, unused */, KeyValuePair_2_t1962  ___pair, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseACL::<.ctor>b__2(System.Collections.Generic.KeyValuePair`2<System.String,System.Object>)
extern "C" bool ParseACL_U3C_ctorU3Eb__2_m8233 (Object_t * __this /* static, unused */, KeyValuePair_2_t1962  ___pair, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.ParseACL::<.ctor>b__3(System.Collections.Generic.KeyValuePair`2<System.String,System.Object>)
extern "C" String_t* ParseACL_U3C_ctorU3Eb__3_m8234 (Object_t * __this /* static, unused */, KeyValuePair_2_t1962  ___pair, const MethodInfo* method) IL2CPP_METHOD_ATTR;
