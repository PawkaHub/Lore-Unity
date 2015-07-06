#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData
struct GcUserProfileData_t4603;
// UnityEngine.SocialPlatforms.Impl.UserProfile
struct UserProfile_t4615;
// UnityEngine.SocialPlatforms.Impl.UserProfile[]
struct UserProfileU5BU5D_t4451;

// UnityEngine.SocialPlatforms.Impl.UserProfile UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData::ToUserProfile()
extern "C" UserProfile_t4615 * GcUserProfileData_ToUserProfile_m17361 (GcUserProfileData_t4603 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData::AddToArray(UnityEngine.SocialPlatforms.Impl.UserProfile[]&,System.Int32)
extern "C" void GcUserProfileData_AddToArray_m17362 (GcUserProfileData_t4603 * __this, UserProfileU5BU5D_t4451** ___array, int32_t ___number, const MethodInfo* method) IL2CPP_METHOD_ATTR;
