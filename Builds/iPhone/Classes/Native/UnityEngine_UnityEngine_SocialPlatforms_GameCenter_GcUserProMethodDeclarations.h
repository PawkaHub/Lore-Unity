#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData
struct GcUserProfileData_t4841;
// UnityEngine.SocialPlatforms.Impl.UserProfile
struct UserProfile_t4853;
// UnityEngine.SocialPlatforms.Impl.UserProfile[]
struct UserProfileU5BU5D_t4689;

// UnityEngine.SocialPlatforms.Impl.UserProfile UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData::ToUserProfile()
extern "C" UserProfile_t4853 * GcUserProfileData_ToUserProfile_m17779 (GcUserProfileData_t4841 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData::AddToArray(UnityEngine.SocialPlatforms.Impl.UserProfile[]&,System.Int32)
extern "C" void GcUserProfileData_AddToArray_m17780 (GcUserProfileData_t4841 * __this, UserProfileU5BU5D_t4689** ___array, int32_t ___number, const MethodInfo* method) IL2CPP_METHOD_ATTR;
