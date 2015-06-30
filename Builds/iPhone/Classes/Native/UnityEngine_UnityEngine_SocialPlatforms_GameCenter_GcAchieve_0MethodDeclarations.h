#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.SocialPlatforms.GameCenter.GcAchievementData
struct GcAchievementData_t2870;
struct GcAchievementData_t2870_marshaled;
// UnityEngine.SocialPlatforms.Impl.Achievement
struct Achievement_t2881;

// UnityEngine.SocialPlatforms.Impl.Achievement UnityEngine.SocialPlatforms.GameCenter.GcAchievementData::ToAchievement()
extern "C" Achievement_t2881 * GcAchievementData_ToAchievement_m13485 (GcAchievementData_t2870 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void GcAchievementData_t2870_marshal(const GcAchievementData_t2870& unmarshaled, GcAchievementData_t2870_marshaled& marshaled);
void GcAchievementData_t2870_marshal_back(const GcAchievementData_t2870_marshaled& marshaled, GcAchievementData_t2870& unmarshaled);
void GcAchievementData_t2870_marshal_cleanup(GcAchievementData_t2870_marshaled& marshaled);
