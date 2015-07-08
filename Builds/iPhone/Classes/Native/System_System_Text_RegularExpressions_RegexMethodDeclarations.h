#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.RegularExpressions.Regex
struct Regex_t789;
// System.Int32[]
struct Int32U5BU5D_t119;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3296;
// System.String[]
struct StringU5BU5D_t20;
// System.Text.RegularExpressions.IMachineFactory
struct IMachineFactory_t4379;
// System.Text.RegularExpressions.Match
struct Match_t1658;
// System.Text.RegularExpressions.MatchCollection
struct MatchCollection_t4375;
// System.Text.RegularExpressions.MatchEvaluator
struct MatchEvaluator_t1451;
// System.Text.RegularExpressions.IMachine
struct IMachine_t4374;
// System.Collections.IDictionary
struct IDictionary_t634;
// System.Text.RegularExpressions.RegexOptions
#include "System_System_Text_RegularExpressions_RegexOptions.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Text.RegularExpressions.Regex::.ctor()
extern "C" void Regex__ctor_m14834 (Regex_t789 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Regex::.ctor(System.String)
extern "C" void Regex__ctor_m7635 (Regex_t789 * __this, String_t* ___pattern, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Regex::.ctor(System.String,System.Text.RegularExpressions.RegexOptions)
extern "C" void Regex__ctor_m8945 (Regex_t789 * __this, String_t* ___pattern, int32_t ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Regex::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Regex__ctor_m14835 (Regex_t789 * __this, SerializationInfo_t3296 * ___info, StreamingContext_t3297  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Regex::.cctor()
extern "C" void Regex__cctor_m14836 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Regex::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Regex_System_Runtime_Serialization_ISerializable_GetObjectData_m14837 (Regex_t789 * __this, SerializationInfo_t3296 * ___info, StreamingContext_t3297  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Regex::IsMatch(System.String,System.String)
extern "C" bool Regex_IsMatch_m3615 (Object_t * __this /* static, unused */, String_t* ___input, String_t* ___pattern, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Regex::IsMatch(System.String,System.String,System.Text.RegularExpressions.RegexOptions)
extern "C" bool Regex_IsMatch_m14838 (Object_t * __this /* static, unused */, String_t* ___input, String_t* ___pattern, int32_t ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.RegularExpressions.Regex::Replace(System.String,System.String,System.String)
extern "C" String_t* Regex_Replace_m14839 (Object_t * __this /* static, unused */, String_t* ___input, String_t* ___pattern, String_t* ___replacement, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.RegularExpressions.Regex::Replace(System.String,System.String,System.String,System.Text.RegularExpressions.RegexOptions)
extern "C" String_t* Regex_Replace_m14840 (Object_t * __this /* static, unused */, String_t* ___input, String_t* ___pattern, String_t* ___replacement, int32_t ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.Text.RegularExpressions.Regex::Split(System.String,System.String)
extern "C" StringU5BU5D_t20* Regex_Split_m7738 (Object_t * __this /* static, unused */, String_t* ___input, String_t* ___pattern, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.Text.RegularExpressions.Regex::Split(System.String,System.String,System.Text.RegularExpressions.RegexOptions)
extern "C" StringU5BU5D_t20* Regex_Split_m14841 (Object_t * __this /* static, unused */, String_t* ___input, String_t* ___pattern, int32_t ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Regex::validate_options(System.Text.RegularExpressions.RegexOptions)
extern "C" void Regex_validate_options_m14842 (Object_t * __this /* static, unused */, int32_t ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Regex::Init()
extern "C" void Regex_Init_m14843 (Regex_t789 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Regex::InitNewRegex()
extern "C" void Regex_InitNewRegex_m14844 (Regex_t789 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.IMachineFactory System.Text.RegularExpressions.Regex::CreateMachineFactory(System.String,System.Text.RegularExpressions.RegexOptions)
extern "C" Object_t * Regex_CreateMachineFactory_m14845 (Object_t * __this /* static, unused */, String_t* ___pattern, int32_t ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.RegexOptions System.Text.RegularExpressions.Regex::get_Options()
extern "C" int32_t Regex_get_Options_m14846 (Regex_t789 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Regex::get_RightToLeft()
extern "C" bool Regex_get_RightToLeft_m14847 (Regex_t789 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.Regex::GroupNumberFromName(System.String)
extern "C" int32_t Regex_GroupNumberFromName_m14848 (Regex_t789 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.Regex::GetGroupIndex(System.Int32)
extern "C" int32_t Regex_GetGroupIndex_m14849 (Regex_t789 * __this, int32_t ___number, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.Regex::default_startat(System.String)
extern "C" int32_t Regex_default_startat_m14850 (Regex_t789 * __this, String_t* ___input, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Regex::IsMatch(System.String)
extern "C" bool Regex_IsMatch_m9267 (Regex_t789 * __this, String_t* ___input, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Regex::IsMatch(System.String,System.Int32)
extern "C" bool Regex_IsMatch_m14851 (Regex_t789 * __this, String_t* ___input, int32_t ___startat, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Match System.Text.RegularExpressions.Regex::Match(System.String,System.Int32)
extern "C" Match_t1658 * Regex_Match_m8937 (Regex_t789 * __this, String_t* ___input, int32_t ___startat, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.MatchCollection System.Text.RegularExpressions.Regex::Matches(System.String)
extern "C" MatchCollection_t4375 * Regex_Matches_m14852 (Regex_t789 * __this, String_t* ___input, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.MatchCollection System.Text.RegularExpressions.Regex::Matches(System.String,System.Int32)
extern "C" MatchCollection_t4375 * Regex_Matches_m14853 (Regex_t789 * __this, String_t* ___input, int32_t ___startat, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.RegularExpressions.Regex::Replace(System.String,System.Text.RegularExpressions.MatchEvaluator)
extern "C" String_t* Regex_Replace_m7725 (Regex_t789 * __this, String_t* ___input, MatchEvaluator_t1451 * ___evaluator, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.RegularExpressions.Regex::Replace(System.String,System.Text.RegularExpressions.MatchEvaluator,System.Int32,System.Int32)
extern "C" String_t* Regex_Replace_m14854 (Regex_t789 * __this, String_t* ___input, MatchEvaluator_t1451 * ___evaluator, int32_t ___count, int32_t ___startat, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.RegularExpressions.Regex::Replace(System.String,System.String)
extern "C" String_t* Regex_Replace_m7636 (Regex_t789 * __this, String_t* ___input, String_t* ___replacement, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.RegularExpressions.Regex::Replace(System.String,System.String,System.Int32,System.Int32)
extern "C" String_t* Regex_Replace_m14855 (Regex_t789 * __this, String_t* ___input, String_t* ___replacement, int32_t ___count, int32_t ___startat, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.Text.RegularExpressions.Regex::Split(System.String)
extern "C" StringU5BU5D_t20* Regex_Split_m14856 (Regex_t789 * __this, String_t* ___input, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.Text.RegularExpressions.Regex::Split(System.String,System.Int32,System.Int32)
extern "C" StringU5BU5D_t20* Regex_Split_m14857 (Regex_t789 * __this, String_t* ___input, int32_t ___count, int32_t ___startat, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.RegularExpressions.Regex::ToString()
extern "C" String_t* Regex_ToString_m14858 (Regex_t789 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.Regex::get_GroupCount()
extern "C" int32_t Regex_get_GroupCount_m14859 (Regex_t789 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.RegularExpressions.Regex::get_Gap()
extern "C" int32_t Regex_get_Gap_m14860 (Regex_t789 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.IMachine System.Text.RegularExpressions.Regex::CreateMachine()
extern "C" Object_t * Regex_CreateMachine_m14861 (Regex_t789 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.Text.RegularExpressions.Regex::GetGroupNamesArray(System.Int32,System.Collections.IDictionary)
extern "C" StringU5BU5D_t20* Regex_GetGroupNamesArray_m14862 (Object_t * __this /* static, unused */, int32_t ___groupCount, Object_t * ___mapping, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] System.Text.RegularExpressions.Regex::get_GroupNumbers()
extern "C" Int32U5BU5D_t119* Regex_get_GroupNumbers_m14863 (Regex_t789 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
