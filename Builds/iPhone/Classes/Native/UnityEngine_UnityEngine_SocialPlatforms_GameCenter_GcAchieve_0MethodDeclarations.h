#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.SocialPlatforms.GameCenter.GcAchievementData
struct GcAchievementData_t4843;
struct GcAchievementData_t4843_marshaled;
// UnityEngine.SocialPlatforms.Impl.Achievement
struct Achievement_t4854;

// UnityEngine.SocialPlatforms.Impl.Achievement UnityEngine.SocialPlatforms.GameCenter.GcAchievementData::ToAchievement()
extern "C" Achievement_t4854 * GcAchievementData_ToAchievement_m17782 (GcAchievementData_t4843 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void GcAchievementData_t4843_marshal(const GcAchievementData_t4843& unmarshaled, GcAchievementData_t4843_marshaled& marshaled);
void GcAchievementData_t4843_marshal_back(const GcAchievementData_t4843_marshaled& marshaled, GcAchievementData_t4843& unmarshaled);
void GcAchievementData_t4843_marshal_cleanup(GcAchievementData_t4843_marshaled& marshaled);
